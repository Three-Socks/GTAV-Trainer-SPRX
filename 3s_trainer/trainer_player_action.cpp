#include "main.h"

void trainer_player_variation_action()
{
	switch(menu_get_current_item())
	{
		case 0:
		set_ped_default_component_variation( player_ped_id() );
		break;
		
		case 1:
		Hash player_model = get_entity_model(player_ped_id());

		if (player_model != get_hash_key("player_zero") && player_model != get_hash_key("player_one") && player_model != get_hash_key("player_two") && player_model != get_hash_key("mp_f_freemode_01") && player_model != get_hash_key("mp_m_freemode_01") )
			set_ped_random_component_variation( player_ped_id(), 0 );
		break;
		
	}
}

void trainer_player_prop_action()
{
	unsigned int player_prop;
	unsigned int prop_index;
	unsigned int prop_txd;
	if ( menu_get_current_item() == 2 || menu_get_current_item() == 3 )
	{
		player_prop = 1;
		prop_index = menu_get_number( 2 ) - 1;
		prop_txd = menu_get_number( 3 ) - 1;
	}
	else
	{
		player_prop = 0;
		prop_index = menu_get_number( 0 ) - 1;
		prop_txd = menu_get_number( 1 ) - 1;
	}

	if ( (menu_get_current_item() == 0 && menu_get_number( 0 ) == 0) || (menu_get_current_item() == 2 && menu_get_number( 2 ) == 0) )
		clear_ped_prop( player_ped_id(), player_prop );
	else
		set_ped_prop_index( player_ped_id(), player_prop, prop_index, prop_txd, network_is_game_in_progress() );

}

void trainer_player_wanted_action()
{
	switch( menu_get_current_item() )
	{
		case 0:
		clear_player_wanted_level( player_id() );
		break;
		
		case 1:
		set_max_wanted_level( menu_get_current_number() );
		break;
		
		case 2:
		set_player_wanted_level( player_id(), menu_get_current_number(), 0 );
		set_player_wanted_level_now( player_id(), 0 );
		break;
		
		case 3:
		set_wanted_level_multiplier( menu_get_current_float() );
		break;
		
		case 4:
		if ( trainer_never_wanted )
		{
			trainer_never_wanted = 0;
			set_max_wanted_level( 5 );
		}
		else
			trainer_never_wanted = 1;

		menu_toggle_current_bool();
		break;
	}
}

void trainer_player_health_action()
{
	switch( menu_get_current_item() )
	{
		case 0:
		set_entity_health( player_ped_id(), get_entity_max_health( player_ped_id() ) );
		break;
		
		case 1:
		add_armour_to_ped( player_ped_id(), get_player_max_armour( player_id() ) - get_ped_armour( player_ped_id() ) );
		break;
		
		case 2:
		if ( trainer_invincible )
		{
			set_player_invincible( player_id(), 0 );
			set_entity_proofs( player_ped_id(), 0, 0, 0, 0, 0, 0, 0, 0 );
			menu_set_current_bool( 0 );
			trainer_invincible = 0;
		}
		else
		{
			set_player_invincible( player_id(), 1 );
			set_entity_proofs( player_ped_id(), 1, 1, 1, 1, 1, 1, 1, 1 );
			menu_set_current_bool( 1 );
			trainer_invincible = 1;
		}
		break;
	}
}

void trainer_player_weapons_action()
{
	switch( menu_get_current_item() )
	{
		case 0:
		trainer_give_all_weapons( player_ped_id() );
		break;
		
		case 1:
		remove_all_ped_weapons( player_ped_id(), 1 );
		break;
		
		case 2:
		set_ped_infinite_ammo( player_ped_id(), !menu_get_current_bool(), 0 );
		menu_toggle_current_bool();
		trainer_infinite_ammo = !trainer_infinite_ammo;
		break;
		
		case 3:
		set_ped_infinite_ammo_clip( player_ped_id(), !menu_get_current_bool() );
		menu_toggle_current_bool();
		trainer_infinite_clip = !trainer_infinite_clip;
		break;
		
		case 4:
		trainer_explosive_ammo = !trainer_explosive_ammo;
		menu_toggle_current_bool();
		break;
		
		case 6:
		trainer_fire_ammo = !trainer_fire_ammo;
		menu_toggle_current_bool();
		break;
		
		case 7:
		trainer_explosive_melee = !trainer_explosive_melee;
		menu_toggle_current_bool();
		break;
		
	}
}

void trainer_give_all_weapons( Ped player_ped )
{
	give_weapon_to_ped( player_ped, -1569615261, -1, 0, 0 );
	give_weapon_to_ped( player_ped, -1716189206, -1, 0, 0 );
	give_weapon_to_ped( player_ped, 1737195953, -1, 0, 0 );
	give_weapon_to_ped( player_ped, 1317494643, -1, 0, 0 );
	give_weapon_to_ped( player_ped, -1786099057, -1, 0, 0 );
	give_weapon_to_ped( player_ped, 1141786504, -1, 0, 0 );
	give_weapon_to_ped( player_ped, -2067956739, -1, 0, 0 );
	give_weapon_to_ped( player_ped, 453432689, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 1593441988, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 584646201, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -1716589765, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 324215364, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 736523883, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -270015777, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -1074790547, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -2084633992, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -1357824103, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -1660422300, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 2144741730, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 487013001, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 2017895192, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -494615257, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -1654528753, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 911657153, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 100416529, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 205991906, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -1568386805, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -1312131151, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 1752584910, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 1119849093, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -1813897027, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 741814745, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -37975472, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -1600701090, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 615608432, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 101631238, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 883325847, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -72657034, 1, 0, 0 );
	give_weapon_to_ped( player_ped, 600439132, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 1233104067, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -102323637, -1, 0, 0 );
	give_weapon_to_ped( player_ped, -1076751822, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 1627465347, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -771403250, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -1063057011, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 2132975508, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 137902532, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -1834847097, -1, 0, 0 );
	give_weapon_to_ped( player_ped, 2138347493, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -1466123874, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 984333226, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -952879014, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 1672152130, 500, 0, 0 );
	give_weapon_to_ped( player_ped, -1420407917, 500, 0, 0 );
	give_weapon_to_ped( player_ped, 126349499, 500, 0, 0 );
}

void trainer_player_special_action()
{
	switch( menu_get_current_item() )
	{
		case 0:
		enable_special_ability( player_id(), !is_special_ability_enabled( player_id() ) );
		menu_toggle_current_bool();
		break;
		
		case 1:
		special_ability_fill_meter( player_id(), 1 );
		break;
		
		case 2:
		trainer_infinite_special = !trainer_infinite_special;
		menu_toggle_current_bool();
		break;
		
	}
}

void trainer_player_settings_action()
{
	switch( menu_get_current_item() )
	{
		case 0:
		_set_move_speed_multiplier( player_id(), 1.0f );
		_set_move_speed_multiplier( player_id(), menu_get_current_float() );
		break;
		
		case 1:
		_set_swim_speed_multiplier( player_id(), 1.0f );
		_set_swim_speed_multiplier( player_id(), menu_get_current_float() );
		break;
		
		case 2:
		set_player_noise_multiplier( player_id(), menu_get_current_float() );
		break;
		
		case 3:
		trainer_superjump = !trainer_superjump;
		menu_toggle_current_bool();
		break;
		
		case 4:
		set_entity_visible( player_ped_id(), !is_entity_visible( player_ped_id() ) );
		menu_toggle_current_bool();
		break;
		
		case 5:
		trainer_ped_clone( player_ped_id(), 0, 0, 0 );
		break;
		
		case 6:
		trainer_ped_clone( player_ped_id(), 1, 0, 0 );
		break;
		
		case 7:
		trainer_ped_clone( player_ped_id(), 1, 1, 0 );
		break;
		
		case 8:
		trainer_ped_clone( player_ped_id(), 1, 1, 1 );
		break;
		
		case 9:
		reset_ped_visible_damage( player_ped_id() );
		clear_ped_blood_damage( player_ped_id() );
		break;
		
	}
}

void trainer_ped_clone( Ped player_ped, bool clone_all_weapons, bool clone_group, bool clone_group_invincible )
{
	Ped cloned_ped;

	cloned_ped = clone_ped( player_ped, 1, 1, 1 );
	add_armour_to_ped( cloned_ped, 100 );

	if ( clone_all_weapons )
	{
		give_delayed_weapon_to_ped( cloned_ped, -1063057011, 25000, 1 );
		set_current_ped_weapon( cloned_ped, -1063057011, 1 );
	}

	if ( clone_group )
	{
		trainer_ped_group = get_player_group( player_id() );

		if ( !does_group_exist( trainer_ped_group ) )
		{
			trainer_ped_group = create_group( 0 );
			set_ped_as_group_leader( player_ped_id(), trainer_ped_group );
		}

		if ( !network_has_control_of_network_id( ped_to_net( cloned_ped ) ) )
		{
			menu_msg( "No Control" );
		}

		set_ped_as_group_member( cloned_ped, trainer_ped_group );
		set_group_formation( trainer_ped_group, 1 );
		set_group_formation_spacing( trainer_ped_group, 1.0f, -1082130432, -1082130432 );
		set_group_separation_range( trainer_ped_group, 100.0f );
		set_ped_never_leaves_group( cloned_ped, 1 );
	}

	if ( trainer_ped_group_rel_hash != 0 )
	{
		add_relationship_group( "rgFM_PlayerTeam0", &trainer_ped_group_rel_hash );
		add_relationship_group( "rgFM_AiHatePlyrLikeAllAi", &trainer_ped_group_rel_hash2 );
		trainer_set_relationships( &trainer_ped_group_rel_hash );
	}
	set_ped_relationship_group_hash( player_ped_id(), trainer_ped_group_rel_hash );
	set_relationship_between_groups( 5, trainer_ped_group_rel_hash2, trainer_ped_group_rel_hash );
	set_relationship_between_groups( 5, trainer_ped_group_rel_hash, trainer_ped_group_rel_hash2 );
	set_ped_combat_attributes( cloned_ped, 8, 0 );
	_0x9C8F830D( cloned_ped, 17 );
	set_ped_combat_attributes( cloned_ped, 3, 0 );
	set_ped_combat_movement( cloned_ped, 2 );
	set_ped_combat_attributes( cloned_ped, 28, 1 );
	set_ped_combat_attributes( cloned_ped, 50, 1 );
	set_ped_combat_attributes( cloned_ped, 64, 0 );
	set_ped_combat_attributes( cloned_ped, 66, 0 );
	set_blocking_of_non_temporary_events( cloned_ped, 0 );
	set_ped_combat_attributes( cloned_ped, 1, 1 );
	set_ped_combat_attributes( cloned_ped, 53, 1 );
	set_ped_combat_attributes( cloned_ped, 2, 1 );
	set_ped_combat_attributes( cloned_ped, 57, 0 );
	set_ped_can_be_knocked_off_vehicle( cloned_ped, 3 );
	set_ped_flee_attributes( cloned_ped, 2, 1 );
	set_ped_flee_attributes( cloned_ped, 1024, 1 );
	set_ped_flee_attributes( cloned_ped, 32768, 0 );
	set_ped_flee_attributes( cloned_ped, 16384, 0 );
	set_ped_config_flag( cloned_ped, 251, 1 );
	set_ped_config_flag( cloned_ped, 132, 1 );
	set_entity_health( cloned_ped, 100 );
	set_ped_shoot_rate( cloned_ped, 60 );
	set_ped_combat_ability( cloned_ped, 2 );
	set_ped_accuracy( cloned_ped, 100 );
	set_ped_firing_pattern( cloned_ped, -957453492 );
	set_ped_dies_when_injured( cloned_ped, 0 );
	set_ped_keep_task( cloned_ped, 1 );
	set_ped_to_inform_respected_friends( cloned_ped, 299.0f, 40 );
	set_ped_combat_range( cloned_ped, 2 );
	set_ped_seeing_range( cloned_ped, 299.0f );
	task_combat_hated_targets_around_ped( cloned_ped, 299.0f, 0 );

	if ( clone_group_invincible )
		set_entity_invincible( cloned_ped, 1 );
	else
		set_entity_invincible( cloned_ped, 0 );
}

void trainer_set_relationships( Hash *group_hash )
{
	set_relationship_between_groups( 1, -1865950624, *group_hash );
	set_relationship_between_groups( 1, *group_hash, -1865950624 );
	set_relationship_between_groups( 1, 296331235, *group_hash );
	set_relationship_between_groups( 1, *group_hash, 296331235 );
	set_relationship_between_groups( 1, 1166638144, *group_hash );
	set_relationship_between_groups( 1, *group_hash, 1166638144 );
	set_relationship_between_groups( 1, 2037579709, *group_hash );
	set_relationship_between_groups( 1, *group_hash, 2037579709 );
	set_relationship_between_groups( 1, 2017343592, *group_hash );
	set_relationship_between_groups( 1, *group_hash, 2017343592 );
	set_relationship_between_groups( 1, -1821475077, *group_hash );
	set_relationship_between_groups( 1, *group_hash, -1821475077 );
	set_relationship_between_groups( 1, 1782292358, *group_hash );
	set_relationship_between_groups( 1, *group_hash, 1782292358 );
	set_relationship_between_groups( 1, -1033021910, *group_hash );
	set_relationship_between_groups( 1, *group_hash, -1033021910 );
	set_relationship_between_groups( 1, -1285976420, *group_hash );
	set_relationship_between_groups( 1, *group_hash, -1285976420 );
}

void trainer_player_weapons_give_action()
{
	if ( menu_get_current_stored_data() != 0 )
		give_weapon_to_ped( player_ped_id(), menu_get_current_number(), menu_get_current_extra(), 1, 1 );
	else
		give_delayed_weapon_to_ped( player_ped_id(), menu_get_current_number(), menu_get_current_extra(), 0 );
}

void trainer_player_weapons_explosion_action()
{
	trainer_explosive_ammo = 1;
	trainer_explosive_ammo_override = menu_get_current_number();
}

void trainer_player_variation_set_action()
{
	unsigned int variation_selected = menu_get_last_selected(2) - 2;
	set_ped_component_variation( player_ped_id(), variation_selected, menu_get_number(0), menu_get_number(1), 0 );
}