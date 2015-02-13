#include "main.h"

void trainer_vehicle_level_1()
{
	menu_set_title("VED_BLIPN");
	menu_addItem( "Spawn" );
	menu_addItem( "Customize" );
	menu_addItem( "Extras" );
	menu_addItem( "CMOD_MOD_COL" );
	menu_addItem( "Modify" );
	menu_addItem( "Multipliers" );

	if ( get_current_language() == 0 )
		menu_addItem_callback( "Repair", &trainer_vehicle_repair_action );
	else
		menu_addItem_callback( "CMOD_MOD_MNT", &trainer_vehicle_repair_action );
}

void trainer_vehicle_level_2()
{
	int menu_index;
	char* mod_menu_items[28];
	int vehicle_col_count;
	int vehicle_livery_count;

	if ( menu_get_last_selected(1) != 0 )
	{
		if ( ! (trainer_get_vehicle() ) )
		{
			trainer_error_vehicle( 1 );
			return;
		}
	}

	switch( menu_get_last_selected(1) )
	{
		case 0:
		menu_addItem_gxt_veh_hash( 1032823388 );
		menu_addItem_gxt_veh_hash( -1461482751 );
		if ( is_model_in_cdimage( 767087018 ) )
		{
			menu_addItem_gxt_veh_hash( 767087018 );
		}
		menu_addItem_gxt_veh_hash( -1041692462 );
		menu_addItem_gxt_veh_hash( -304802106 );
		menu_addItem_gxt_veh_hash( 736902334 );
		menu_addItem_gxt_veh_hash( 2072687711 );
		menu_addItem_gxt_veh_hash( -1045541610 );
		menu_addItem_gxt_veh_hash( 108773431 );
		menu_addItem_gxt_veh_hash( -566387422 );
		menu_addItem_gxt_veh_hash( -1995326987 );
		menu_addItem_gxt_veh_hash( -1089039904 );
		menu_addItem_gxt_veh_hash( 499169875 );
		menu_addItem_gxt_veh_hash( 2016857647 );
		if ( is_model_in_cdimage( -1297672541 ) )
		{
			menu_addItem_gxt_veh_hash( -1297672541 );
		}
		if ( is_model_in_cdimage( -142942670 ) )
		{
			menu_addItem_gxt_veh_hash( -142942670 );
		}
		menu_addItem_gxt_veh_hash( 544021352 );
		menu_addItem_gxt_veh_hash( -377465520 );
		menu_addItem_gxt_veh_hash( -1934452204 );
		menu_addItem_gxt_veh_hash( 1737773231 );
		menu_addItem_gxt_veh_hash( -746882698 );
		menu_addItem_gxt_veh_hash( 970598228 );
		menu_addItem_gxt_veh_hash( 384071873 );
		menu_add_callback_all(&trainer_vehicle_spawn_action);
		break;
		
		case 1:
		menu_set_title("Customize");
		menu_clean_stored_data();

		menu_addItem_callback( "Max", &trainer_vehicle_max );
		menu_addItem_callback( "Min", &trainer_vehicle_min );
		menu_set_catch_button_id( 1 );
		set_vehicle_mod_kit( trainer_current_vehicle, 0 );

		mod_menu_items[0] = "CMOD_MOD_SPO";
		mod_menu_items[1] = "CMOD_BUM_1";
		mod_menu_items[2] = "CMOD_BUM_4";
		mod_menu_items[3] = "CMOD_MOD_SKI";
		mod_menu_items[4] = "CMOD_MOD_MUF";
		mod_menu_items[5] = "CMOD_MOD_CHA";
		mod_menu_items[6] = "CMOD_MOD_GRL";
		mod_menu_items[7] = "CMOD_MOD_HOD";
		mod_menu_items[8] = "CMOD_MOD_FEN";
		mod_menu_items[9] = "CMOD_MOD_FEN";
		mod_menu_items[10] = "CMOD_MOD_ROF";
		mod_menu_items[11] = "CMOD_MOD_ENG";
		mod_menu_items[12] = "CMOD_MOD_BRA";
		mod_menu_items[13] = "CMOD_MOD_TRN";
		mod_menu_items[14] = "CMOD_MOD_HRN";
		mod_menu_items[15] = "CMOD_MOD_SUS";
		mod_menu_items[16] = "CMOD_MOD_ARM";
		mod_menu_items[17] = "Unknown 1";
		mod_menu_items[18] = "CMOD_MOD_TUR";
		mod_menu_items[19] = "Unknown 2";
		mod_menu_items[20] = "Tire Smoke";
		mod_menu_items[21] = "Unknown 4";
		mod_menu_items[22] = "CMOD_MOD_LGT";
		if ( is_this_model_a_bike( get_entity_model( trainer_current_vehicle ) ) )
		{
			mod_menu_items[23] = "CMOD_WHE0_0";
			mod_menu_items[24] = "CMOD_WHE0_1";
		}
		else
		{
			mod_menu_items[23] = "CMOD_MOD_WHEM";
			mod_menu_items[24] = "CMOD_WHE0_1";
		}
		mod_menu_items[25] = "CMOD_TYR_2";
		mod_menu_items[26] = "CMOD_TYR_1";
		mod_menu_items[27] = "CMOD_GLD2_2";

		menu_index = 0;
		while ( menu_index <= 27 )
		{
			if ( ( ( ( ( (21 == menu_index || 17 == menu_index) || 19 == menu_index) || 18 == menu_index) || 20 == menu_index) || 22 == menu_index) )
			{
				if ( ( ( (17 != menu_index && 19 != menu_index) && 20 != menu_index) && 21 != menu_index) )
				{
					menu_addItem_callback( mod_menu_items[menu_index], &trainer_vehicle_customize_action );
					menu_addItem_bool( is_toggle_mod_on( trainer_current_vehicle, menu_index ) );
					menu_add_number( menu_index );
					menu_set_stored_data(menu_index);
				}
			}
			else if ( 25 == menu_index )
			{
				menu_addItem_callback( mod_menu_items[menu_index], &trainer_vehicle_customize_action );
				menu_addItem_bool( !get_vehicle_tyres_can_burst( trainer_current_vehicle ) );
				menu_set_stored_data(menu_index);
			}
			else if ( 26 == menu_index )
			{
				menu_addItem_callback( mod_menu_items[menu_index], &trainer_vehicle_customize_action );
				menu_addItem_bool( get_vehicle_mod_variation( trainer_current_vehicle, 23 ) );
				menu_set_stored_data(menu_index);
			}
			else if ( 27 == menu_index )
			{
				menu_addItem_callback( mod_menu_items[menu_index], &trainer_vehicle_customize_action );

				if ( get_vehicle_window_tint( trainer_current_vehicle ) == -1 )
					menu_addItem_number( get_vehicle_window_tint( trainer_current_vehicle ) + 1, get_num_vehicle_window_tints() );
				else
					menu_addItem_number( get_vehicle_window_tint( trainer_current_vehicle ), get_num_vehicle_window_tints() );
		
				menu_set_stored_data(menu_index);
			}
			else if ( get_num_vehicle_mods( trainer_current_vehicle, menu_index ) > 0 )
			{
				if ( menu_index <= 10 )
					menu_addItem( get_mod_slot_name( trainer_current_vehicle, menu_index ) );
				else
					menu_addItem_callback( mod_menu_items[menu_index], &trainer_vehicle_customize_action );

				if ( menu_index == 23 || menu_index == 24 )
					menu_addItem_number( get_vehicle_wheel_type( trainer_current_vehicle ), 7 );

				menu_set_stored_data(menu_index);
			}
			menu_index++;
		}
		break;
		
		case 2:
		menu_set_title("Extras");
		mod_menu_items[0] = "Extra 1";
		mod_menu_items[1] = "Extra 2";
		mod_menu_items[2] = "Extra 3";
		mod_menu_items[3] = "Extra 4";
		mod_menu_items[4] = "Extra 5";
		mod_menu_items[5] = "Extra 6";
		mod_menu_items[6] = "Extra 7";
		mod_menu_items[7] = "Extra 8";
		mod_menu_items[8] = "Extra 9";
		menu_index = 0;
		while ( menu_index <= 8 )
		{
			if ( does_extra_exist( trainer_current_vehicle, menu_index + 1 ) )
			{
				menu_addItem_callback( mod_menu_items[menu_index], &trainer_vehicle_extra_action );
				menu_add_number( menu_index + 1 );
				menu_addItem_bool( is_vehicle_extra_turned_on( trainer_current_vehicle, menu_index + 1 ) );
			}
			menu_index++;
		}

		if ( menu_get_count() < 0 )
			menu_error( "Vehicle has no extras.", 1 );
		break;
		
		case 3:
		menu_set_title("CMOD_MOD_COL");
		menu_addItem( "CMOD_COL0_0" );
		menu_addItem( "CMOD_COL0_1" );
		menu_addItem( "CMOD_COL1_6" );
		menu_addItem( "CMOD_MOD_WCL" );
		menu_addItem( "Tire Smoke" );

		vehicle_col_count = get_number_of_vehicle_model_colours( get_entity_model( trainer_current_vehicle ) );

		menu_addItem_callback( "CELL_840", &trainer_vehicle_colour_action );

		if ( get_vehicle_colour_combination( trainer_current_vehicle ) == -1 )
			menu_addItem_number( get_vehicle_colour_combination( trainer_current_vehicle ) + 2, vehicle_col_count );
		else
			menu_addItem_number( get_vehicle_colour_combination( trainer_current_vehicle ) + 1, vehicle_col_count );

		vehicle_livery_count = get_vehicle_livery_count( trainer_current_vehicle );
		if ( vehicle_livery_count > 0 )
		{
			menu_addItem_callback( "CMOD_COL0_4", &trainer_vehicle_colour_action );
			menu_addItem_number( get_vehicle_livery( trainer_current_vehicle ) + 1, vehicle_livery_count );
		}
		break;
		
		case 4:
		menu_set_title("Modify");
		menu_addItem( "Doors" );
		menu_addItem( "CMOD_MOD_LGT" );
		menu_addItem( "CMOD_MOD_PLA" );
		menu_addItem( "Engine Sound" );
		menu_addItem( "CELL_16" );
		break;
		
		case 5:
		menu_set_title("Multipliers");
		menu_addItem_callback( "Acceleration", &trainer_vehicle_multipliers_action );
		menu_addItem_number_keyboard( trainer_speed, 100, 3 );

		menu_addItem_callback( "Brakes", &trainer_vehicle_multipliers_action );
		menu_addItem_number_keyboard( trainer_brake, 100, 3 );

		menu_addItem_callback( "Handling", &trainer_vehicle_multipliers_action );
		menu_addItem_number_keyboard( trainer_handling, 100, 3 );

		menu_addItem_callback( "Disable on Wheels Check", &trainer_vehicle_multipliers_action );
		menu_addItem_bool( trainer_wheel_check );

		menu_addItem_callback( "Apply All", &trainer_vehicle_multipliers_action );
		menu_addItem_callback( "Reset All", &trainer_vehicle_multipliers_action );
		break;
		
	}
}