#include "main.h"

Vehicle trainer_get_vehicle()
{
	if ( is_ped_in_any_vehicle( player_ped_id(), 0 ) )
	{
		trainer_current_vehicle = get_vehicle_ped_is_in( player_ped_id(), 0 );
		return 1;
	}
	return 0;
}

void trainer_error_vehicle( int menu_level_back )
{
	if ( menu_level_back >= 1 )
		menu_error_back( menu_level_back );

	_0x574EE85C( "CMOD_FTRIG_VEH" );
	_add_text_component_string( "NULL" );
	_0x08F7AF78( 0, 1 );
}

void trainer_vehicle_spawn_action()
{
	Hash vehicle_hash = menu_get_current_extra();
	menu_set_continue_action(1);

	switch( menu_get_sub_action_mode() )
	{
		case 0:
		if ( !is_model_valid( vehicle_hash ) )
		{
			menu_error( "Model not valid.", 0 );
			menu_set_continue_action(0);
			return;
		}
		if ( !is_model_in_cdimage( vehicle_hash ) )
		{
			menu_error( "Model does not exist.", 0 );
			menu_set_continue_action(0);
			return;
		}
		if ( !is_model_a_vehicle( vehicle_hash ) )
		{
			menu_error( "Model not a valid vehicle.", 0 );
			menu_set_continue_action(0);
			return;
		}
		printf("vehicle_spawn action 0");
		menu_set_action_mode(1);
		return;
		
		case 1:
		printf("vehicle_spawn action 1");
		request_model( vehicle_hash );
		if ( has_model_loaded( vehicle_hash ) )
		{
			printf("vehicle_spawn action 1 loaded");
			menu_set_action_mode(2);
		}
		return;
		
		case 2:
		printf("vehicle_spawn action 2");
		menu_set_continue_action(0);
		trainer_spawn_veh( vehicle_hash );
		menu_set_action_mode(0);
		return;
		
	}
	return;
}

void trainer_spawn_veh( Hash vehicle_hash )
{
	Vector3 spawn_vehicle_coords;
	float spawn_vehicle_heading;
	float vehicle_speed;
	bool spawn_into;
	Vehicle vehicle_current;
	vehicle_speed = 0.0f;
	spawn_into = 0;
	if ( has_model_loaded( vehicle_hash ) )
	{
		if ( does_entity_exist( trainer_spawn_vehicle ) )
		{
			if ( ! (is_entity_dead( trainer_spawn_vehicle ) ) )
			{
				if ( is_ped_in_vehicle( player_ped_id(), trainer_spawn_vehicle, 0 ) )
				{
					spawn_vehicle_coords = get_entity_coords( trainer_spawn_vehicle, 1 );
					spawn_vehicle_heading = get_entity_heading( trainer_spawn_vehicle );
					set_entity_coords( player_ped_id(), spawn_vehicle_coords.x, spawn_vehicle_coords.y, spawn_vehicle_coords.z + 4.0f, 1, 0, 0, 1 );
				}
			}
			delete_vehicle( &trainer_spawn_vehicle );
		}
		if ( is_control_pressed( 2, 179 ) || menu_get_last_selected(2) == 19 )
		{
			spawn_into = 1;
			spawn_vehicle_heading = get_entity_heading( player_ped_id() ) + 90.0f;

			if ( menu_get_last_selected(2) == 19 )
			{
				spawn_vehicle_coords = get_offset_from_entity_in_world_coords( player_ped_id(), -4.0f, 8.5f, 1.0f );
			}
			else if ( is_this_model_a_plane( vehicle_hash ) )
			{
				spawn_vehicle_coords = get_offset_from_entity_in_world_coords( player_ped_id(), -4.0f, 8.5f, 1.0f );
			}
			else if ( is_this_model_a_heli( vehicle_hash ) )
			{
				spawn_vehicle_coords = get_offset_from_entity_in_world_coords( player_ped_id(), 0.0f, 6.0f, 2.0f );
			}
			else
			{
				spawn_vehicle_coords = get_offset_from_entity_in_world_coords( player_ped_id(), 0.0f, 3.5f, 1.0f );
			}
			//clear_area_of_vehicles( &spawn_vehicle_coords{3}, 2.5f, 0, 0, 0, 0, 0 );
		}
		else
		{
			spawn_vehicle_heading = get_entity_heading( player_ped_id() );
			spawn_vehicle_coords = get_entity_coords( player_ped_id(), 1 );
			if ( is_ped_in_any_vehicle( player_ped_id(), 0 ) )
			{
				vehicle_current = get_vehicle_ped_is_in( player_ped_id(), 0 );
				vehicle_speed = get_entity_speed( vehicle_current );
				spawn_vehicle_heading = get_entity_heading( vehicle_current );
				spawn_vehicle_coords = get_entity_coords( vehicle_current, 1 );
				clear_ped_tasks_immediately( player_ped_id() );
				set_entity_as_mission_entity( vehicle_current, 0, 1 );
				delete_vehicle( &vehicle_current );
			}
		}
		trainer_spawn_vehicle = create_vehicle( vehicle_hash, spawn_vehicle_coords.x, spawn_vehicle_coords.y, spawn_vehicle_coords.z, spawn_vehicle_heading, 0, 0 );
		set_vehicle_on_ground_properly( trainer_spawn_vehicle );
		if ( !spawn_into )
		{
			set_ped_into_vehicle( player_ped_id(), trainer_spawn_vehicle, -1 );
		}
		set_vehicle_engine_on( trainer_spawn_vehicle, 1, 1 );
		set_heli_blades_full_speed( trainer_spawn_vehicle );
		if ( vehicle_speed != 0.0f )
		{
			set_vehicle_forward_speed( trainer_spawn_vehicle, vehicle_speed );
		}
		set_model_as_no_longer_needed( vehicle_hash );
		set_vehicle_as_no_longer_needed( &trainer_spawn_vehicle );
	}
	return;
}

void trainer_vehicle_repair_action()
{
	if ( trainer_get_vehicle() )
	{
		set_vehicle_fixed( trainer_current_vehicle );
		set_entity_health( trainer_current_vehicle, 1000 );
		set_vehicle_engine_health( trainer_current_vehicle, 1000.0f );
		set_vehicle_petrol_tank_health( trainer_current_vehicle, 1000.0f );
		set_vehicle_dirt_level( trainer_current_vehicle, 0.0f );
		remove_decals_from_vehicle( trainer_current_vehicle );
		_0x58D9775F( trainer_current_vehicle );
	}
	else
		trainer_error_vehicle( 0 );
}

void trainer_vehicle_max()
{
	if ( !trainer_get_vehicle() )
	{
		trainer_error_vehicle( 1 );
		return;
	}
	int vehicle_mod;
	set_vehicle_mod_kit( trainer_current_vehicle, 0 );
	vehicle_mod = 0;
	while ( vehicle_mod <= 27 )
	{
		if ( 21 == vehicle_mod || 17 == vehicle_mod || 19 == vehicle_mod || 18 == vehicle_mod || 20 == vehicle_mod || 22 == vehicle_mod )
		{
			if ( 17 != vehicle_mod && 19 != vehicle_mod && 20 != vehicle_mod && 21 != vehicle_mod )
			{
				toggle_vehicle_mod( trainer_current_vehicle, vehicle_mod, 1 );
			}
		}
		else if ( vehicle_mod == 25 )
			set_vehicle_tyres_can_burst( trainer_current_vehicle, 0 );
		else if ( vehicle_mod == 26 )
		{
			remove_vehicle_mod( trainer_current_vehicle, 23 );
			set_vehicle_mod( trainer_current_vehicle, 23, get_vehicle_mod( trainer_current_vehicle, 23 ), 1 );
			remove_vehicle_mod( trainer_current_vehicle, 24 );
			set_vehicle_mod( trainer_current_vehicle, 24, get_vehicle_mod( trainer_current_vehicle, 24 ), 1 );
		}
		else if ( vehicle_mod == 27 )
			set_vehicle_window_tint( trainer_current_vehicle, 5 );
		else if ( get_num_vehicle_mods( trainer_current_vehicle, vehicle_mod ) > 0 )
		{
			remove_vehicle_mod( trainer_current_vehicle, vehicle_mod );
			set_vehicle_mod( trainer_current_vehicle, vehicle_mod, get_num_vehicle_mods( trainer_current_vehicle, vehicle_mod ) - 1, 0 );
		}
		vehicle_mod++;
	}
	menu_clean();
	menu_set();
	last_selected[menu_get_current_level()] = menu_get_current_item();
	menu_set_last_selected();

}

void trainer_vehicle_min()
{
	if ( !trainer_get_vehicle() )
	{
		trainer_error_vehicle( 1 );
		return;
	}
	int vehicle_mod;
	set_vehicle_mod_kit( trainer_current_vehicle, 0 );
	vehicle_mod = 0;
	while ( vehicle_mod <= 27 )
	{
		if ( 21 == vehicle_mod || 17 == vehicle_mod || 19 == vehicle_mod || 18 == vehicle_mod || 20 == vehicle_mod || 22 == vehicle_mod )
		{
			if ( 17 != vehicle_mod && 19 != vehicle_mod && 20 != vehicle_mod && 21 != vehicle_mod )
				toggle_vehicle_mod( trainer_current_vehicle, vehicle_mod, 0 );
		}
		else if ( vehicle_mod == 25 )
			set_vehicle_tyres_can_burst( trainer_current_vehicle, 1 );
		else if ( vehicle_mod == 26 )
		{
			remove_vehicle_mod( trainer_current_vehicle, 23 );
			remove_vehicle_mod( trainer_current_vehicle, 24 );
		}
		else if ( vehicle_mod == 27 )
			set_vehicle_window_tint( trainer_current_vehicle, 0 );
		else if ( get_num_vehicle_mods( trainer_current_vehicle, vehicle_mod ) > 0 )
			remove_vehicle_mod( trainer_current_vehicle, vehicle_mod );

		vehicle_mod++;
	}
	menu_clean();
	menu_set();
	last_selected[menu_get_current_level()] = menu_get_current_item();
	menu_set_last_selected();
}

void trainer_vehicle_customize_action()
{
	int vehicle_wheel_l;
	int vehicle_wheel_r;

	if ( !trainer_get_vehicle() )
	{
		trainer_error_vehicle( 1 );
		return;
	}
	if ( menu_get_current_stored_data() == 25 )
	{
		if ( get_vehicle_tyres_can_burst( trainer_current_vehicle ) )
		{
			set_vehicle_tyres_can_burst( trainer_current_vehicle, 0 );
			menu_set_current_bool( 1 );
		}
		else
		{
			set_vehicle_tyres_can_burst( trainer_current_vehicle, 1 );
			menu_set_current_bool( 0 );
		}
	}
	else if ( menu_get_current_stored_data() == 26 )
	{
		vehicle_wheel_l = get_vehicle_mod( trainer_current_vehicle, 23 );
		vehicle_wheel_r = get_vehicle_mod( trainer_current_vehicle, 24 );
		remove_vehicle_mod( trainer_current_vehicle, 23 );
		set_vehicle_mod( trainer_current_vehicle, 23, vehicle_wheel_l, !menu_get_current_bool() );
		remove_vehicle_mod( trainer_current_vehicle, 24 );
		set_vehicle_mod( trainer_current_vehicle, 24, vehicle_wheel_r, !menu_get_current_bool() );
		menu_toggle_current_bool();
	}
	else if ( menu_get_current_stored_data() == 27 )
		set_vehicle_window_tint( trainer_current_vehicle, menu_get_current_number() );
	else
	{
		toggle_vehicle_mod( trainer_current_vehicle, menu_get_current_number(), !is_toggle_mod_on( trainer_current_vehicle, menu_get_current_number() ) );
		menu_set_current_bool( is_toggle_mod_on( trainer_current_vehicle, menu_get_current_number() ) );
	}
}

void trainer_vehicle_extra_action()
{
	if ( !trainer_get_vehicle() )
	{
		trainer_error_vehicle( 1 );
		return;
	}

	if ( is_vehicle_extra_turned_on( trainer_current_vehicle, menu_get_current_number() ) )
	{
		set_vehicle_extra( trainer_current_vehicle, menu_get_current_number(), 1 );
		menu_set_current_bool( 0 );
	}
	else
	{
		set_vehicle_extra( trainer_current_vehicle, menu_get_current_number(), 0 );
		menu_set_current_bool( 1 );
	}
}

void trainer_vehicle_colour_action()
{
	switch( menu_get_current_item() )
	{
		case 5:
		clear_vehicle_custom_primary_colour( trainer_current_vehicle );
		clear_vehicle_custom_secondary_colour( trainer_current_vehicle );
		set_vehicle_colour_combination( trainer_current_vehicle, menu_get_current_number() - 1 );
		break;
		
		case 6:
		set_vehicle_livery( trainer_current_vehicle, menu_get_current_number() - 1 );
		break;
	}
}

void trainer_vehicle_multipliers_action()
{
	switch( menu_get_current_item() )
	{
		case 0:
		trainer_speed = menu_get_current_number();
		return;
		
		case 1:
		trainer_brake = menu_get_current_number();
		return;
		
		case 2:
		trainer_handling = menu_get_current_number();
		return;
		
		case 3:
		trainer_wheel_check = !trainer_wheel_check;
		menu_toggle_current_bool();
		return;
		
		case 4:
		trainer_speed = menu_get_number( 0 );
		trainer_brake = menu_get_number( 1 );
		trainer_handling = menu_get_number( 2 );
		return;
		
		case 5:
		trainer_speed = 0;
		trainer_brake = 0;
		trainer_handling = 0;
		menu_set_number( 0, 0 );
		menu_set_number( 1, 0 );
		menu_set_number( 2, 0 );
		return;
	}
}