#include "main.h"

void trainer_player_level_1()
{
	menu_set_title("BLIP_PLAYER");

	menu_addItem("Change Model");
	menu_addItem("FACE_APP");
	menu_addItem("PIM_TACCE");
	menu_addItem("LOB_CAT_9");
	menu_addItem("WT_HEALTH");
	menu_addItem("PM_WEAPONS");
	menu_addItem("PS_SPEC_AB");
	menu_addItem("CELL_16");
}

void trainer_player_level_2()
{
	switch(menu_get_last_selected(1))
	{
		case 0:
		menu_set_title("Change Model");
		
		menu_addItem("Placeholder");
		break;

		case 1:
		menu_set_title("FACE_APP");

		menu_addItem_callback("FMMC_COL_DEF", &trainer_player_variation_action);
		menu_addItem_callback("PM_SPAWN_R",  &trainer_player_variation_action);
		menu_addItem("Head");
		menu_addItem("FACE_BRD");
		menu_addItem("FACE_HAIR");
		menu_addItem("Torso");
		menu_addItem("Legs");
		menu_addItem("Hands");
		menu_addItem("Feet");
		menu_addItem("Teeth");
		menu_addItem("PIM_TACCE");
		menu_addItem("Task");
		menu_addItem("Decl");
		menu_addItem("Jbib");
		break;
		
		case 2:
		menu_set_title("PIM_TACCE");

		menu_addItem_callback( "Head", &trainer_player_prop_action);
		menu_addItem_number( get_ped_prop_index( player_ped_id(), 0 ) + 1, 100);

		menu_addItem_callback( "Head Texture", &trainer_player_prop_action);
		if ( get_ped_prop_texture_index( player_ped_id(), 0 ) == -1 )
			menu_addItem_number( get_ped_prop_texture_index( player_ped_id(), 0 ) + 2, 100 );
		else
			menu_addItem_number( get_ped_prop_texture_index( player_ped_id(), 0 ) + 1, 100 );

		menu_addItem_callback( "Face", &trainer_player_prop_action);
		menu_addItem_number( get_ped_prop_index( player_ped_id(), 1 ) + 1, 100 );

		menu_addItem_callback( "Face Texture", &trainer_player_prop_action);
		if ( get_ped_prop_texture_index( player_ped_id(), 1 ) == -1 )
			menu_addItem_number( get_ped_prop_texture_index( player_ped_id(), 1 ) + 2, 100 );
		else
			menu_addItem_number( get_ped_prop_texture_index( player_ped_id(), 1 ) + 1, 100 );
		break;

		case 3:
		menu_set_title("LOB_CAT_9");

		menu_addItem_callback( "GC_MENU26", &trainer_player_wanted_action );
		menu_addItem_callback( "Max Wanted Level", &trainer_player_wanted_action );
		menu_addItem_number( get_max_wanted_level(), 5 );

		menu_addItem_callback( "GC_MENU24", &trainer_player_wanted_action );
		menu_addItem_number( get_player_wanted_level( player_id() ), 5 );

		menu_addItem_callback( "Wanted Level Multiplier", &trainer_player_wanted_action );
		menu_addItem_float( 0.0f );

		menu_addItem_callback( "Never Wanted", &trainer_player_wanted_action );
		menu_addItem_bool( trainer_never_wanted );
		break;
		
		case 4:
		menu_set_title("WT_HEALTH");

		menu_addItem_callback( "HLTH_REGEN2", &trainer_player_health_action );

		if ( get_current_language() == 0 )
			menu_addItem_callback( "Full Body Armor", &trainer_player_health_action );
		else
			menu_addItem_callback( "WT_BA", &trainer_player_health_action );

		menu_addItem_callback( "Invincible", &trainer_player_health_action );

		menu_addItem_bool( trainer_invincible );
		break;
		
		case 5:
		menu_set_title("PM_WEAPONS");

		menu_addItem_callback( "Give all Weapons", &trainer_player_weapons_action );
		menu_addItem_callback( "Remove All Weapons", &trainer_player_weapons_action );

		menu_addItem_callback( "Infinite Ammo", &trainer_player_weapons_action );
		menu_addItem_bool( trainer_infinite_ammo );

		menu_addItem_callback( "Infinite Clip", &trainer_player_weapons_action );
		menu_addItem_bool( trainer_infinite_clip );

		menu_addItem_callback( "Explosive Ammo", &trainer_player_weapons_action );
		menu_addItem_bool( trainer_explosive_ammo );

		menu_addItem( "Override Ammo Explosion" );

		menu_addItem_callback( "Fire Ammo", &trainer_player_weapons_action );
		menu_addItem_bool( trainer_fire_ammo );

		menu_addItem_callback( "Explosive Melee", &trainer_player_weapons_action );
		menu_addItem_bool( trainer_explosive_melee );

		menu_addItem( "Original Weapons" );
		menu_addItem( "DLC Weapons" );
		break;
		
		case 6:
		menu_set_title("PS_SPEC_AB");

		menu_addItem_callback( "PS_SPEC_AB", &trainer_player_special_action );
		menu_addItem_bool( is_special_ability_enabled( player_id() ) );

		menu_addItem_callback( "Recharge", &trainer_player_special_action );

		menu_addItem_callback( "Infinite Special", &trainer_player_special_action );
		menu_addItem_bool( trainer_infinite_special );
		break;
		
		case 7:
		menu_set_title("CELL_16");

		menu_addItem_callback( "Run Speed", &trainer_player_settings_action );
		menu_addItem_float( 1.0f );

		menu_addItem_callback( "Swim Speed", &trainer_player_settings_action );
		menu_addItem_float( 1.0f );

		menu_addItem_callback( "Noise", &trainer_player_settings_action );
		menu_addItem_float( 1.0f );

		menu_addItem_callback( "Super Jump", &trainer_player_settings_action );
		menu_addItem_bool( trainer_superjump );

		menu_addItem_callback( "Visible", &trainer_player_settings_action );
		menu_addItem_bool( is_entity_visible( player_ped_id() ) );

		menu_addItem_callback( "Clone", &trainer_player_settings_action );
		menu_addItem_callback( "Clone With All Weapons", &trainer_player_settings_action );
		menu_addItem_callback( "Clone Into Group", &trainer_player_settings_action );
		menu_addItem_callback( "Clone Into Group Invincible", &trainer_player_settings_action );
		menu_addItem_callback( "Clean Player", &trainer_player_settings_action );
		break;
	}
}

void trainer_player_level_3()
{
	switch(menu_get_last_selected(1))
	{
		case 1:
		trainer_player_variation_level_3( true );
		return;
		
		case 5:
		trainer_player_weapon_level_3();
		return;
		
	}
}

void trainer_player_variation_level_3( bool set_variation_current )
{
	unsigned int variation_current;
	unsigned int variation_count;
	unsigned int variation_txd_count;

	menu_set_title("FACE_APP");
	menu_set_catch_button_id( 2 );
	variation_current = menu_get_last_selected(2) - 2;
	variation_count = get_number_of_ped_drawable_variations( player_ped_id(), variation_current ) - 1;

	if ( set_variation_current )
		variation_txd_count = get_number_of_ped_texture_variations( player_ped_id(), variation_current, get_ped_drawable_variation( player_ped_id(), variation_current ) ) - 1;
	else
		variation_txd_count = get_number_of_ped_texture_variations( player_ped_id(), variation_current, menu_get_number( 0 ) ) - 1;

	if ( variation_count > 0 || variation_txd_count > 0 )
	{
		menu_addItem_callback( "Model Variation", &trainer_player_variation_set_action );

		if ( set_variation_current )
			menu_addItem_number( get_ped_drawable_variation( player_ped_id(), variation_current ), variation_count );
		else
			menu_addItem_number( menu_get_number( 0 ), variation_count );
	}

	if ( variation_txd_count > 0 )
	{
		menu_addItem_callback( "Texture Variation", &trainer_player_variation_set_action );
		if ( set_variation_current )
			menu_addItem_number( get_ped_texture_variation( player_ped_id(), variation_current ), variation_txd_count );
		else
			menu_addItem_number( 0, variation_txd_count );
	}

	if ( variation_count < 1 && variation_txd_count < 1 )
		menu_error_gxt( "FMMC_NONE", 1 );
}

void trainer_player_weapon_level_3()
{
	menu_set_title("PM_WEAPONS");

	switch( menu_get_last_selected(2) )
	{
		case 5:
		trainer_explode_types();
		menu_add_callback_all(&trainer_player_weapons_explosion_action);
		break;
		
		case 8:
		menu_clean_stored_data();
		
		menu_addItem( "WT_UNARMED" );
		menu_add_number( -1569615261 );
		menu_add_extra( -1 );
		menu_addItem( "Animal" );
		menu_add_number( -100946242 );
		menu_add_extra( 1 );
		menu_set_stored_data( 1 );
		menu_addItem( "Cougar" );
		menu_add_number( 148160082 );
		menu_add_extra( 1 );
		menu_set_stored_data( 1 );
		menu_addItem( "WT_KNIFE" );
		menu_add_number( -1716189206 );
		menu_add_extra( -1 );
		menu_addItem( "WT_NGTSTK" );
		menu_add_number( 1737195953 );
		menu_add_extra( -1 );
		menu_addItem( "WT_HAMMER" );
		menu_add_number( 1317494643 );
		menu_add_extra( -1 );
		menu_addItem( "WT_BAT" );
		menu_add_number( -1786099057 );
		menu_add_extra( -1 );
		menu_addItem( "WT_GOLFCLUB" );
		menu_add_number( 1141786504 );
		menu_add_extra( -1 );
		menu_addItem( "WT_CROWBAR" );
		menu_add_number( -2067956739 );
		menu_add_extra( -1 );
		menu_addItem( "WT_PIST" );
		menu_add_number( 453432689 );
		menu_add_extra( 900 );
		menu_addItem( "WT_PIST_CBT" );
		menu_add_number( 1593441988 );
		menu_add_extra( 900 );
		menu_addItem( "WT_PIST_AP" );
		menu_add_number( 584646201 );
		menu_add_extra( 900 );
		menu_addItem( "WT_PIST_50" );
		menu_add_number( -1716589765 );
		menu_add_extra( 900 );
		menu_addItem( "WT_SMG_MCR" );
		menu_add_number( 324215364 );
		menu_add_extra( 900 );
		menu_addItem( "WT_SMG" );
		menu_add_number( 736523883 );
		menu_add_extra( 900 );
		menu_addItem( "WT_SMG_ASL" );
		menu_add_number( -270015777 );
		menu_add_extra( 900 );
		menu_addItem( "WT_RIFLE_ASL" );
		menu_add_number( -1074790547 );
		menu_add_extra( 900 );
		menu_addItem( "WT_RIFLE_CBN" );
		menu_add_number( -2084633992 );
		menu_add_extra( 900 );
		menu_addItem( "WT_RIFLE_ADV" );
		menu_add_number( -1357824103 );
		menu_add_extra( 900 );
		menu_addItem( "WT_MG" );
		menu_add_number( -1660422300 );
		menu_add_extra( 900 );
		menu_addItem( "WT_MG_CBT" );
		menu_add_number( 2144741730 );
		menu_add_extra( 900 );
		menu_addItem( "WT_SG_PMP" );
		menu_add_number( 487013001 );
		menu_add_extra( 900 );
		menu_addItem( "WT_SG_SOF" );
		menu_add_number( 2017895192 );
		menu_add_extra( 900 );
		menu_addItem( "WT_SG_ASL" );
		menu_add_number( -494615257 );
		menu_add_extra( 900 );
		menu_addItem( "WT_SG_BLP" );
		menu_add_number( -1654528753 );
		menu_add_extra( 900 );
		menu_addItem( "WT_STUN" );
		menu_add_number( 911657153 );
		menu_add_extra( 900 );
		menu_addItem( "WT_SNIP_RIF" );
		menu_add_number( 100416529 );
		menu_add_extra( 900 );
		menu_addItem( "WT_SNIP_HVY" );
		menu_add_number( 205991906 );
		menu_add_extra( 900 );
		menu_addItem( "WT_SNIP_RMT" );
		menu_add_number( 856002082 );
		menu_add_extra( 900 );
		menu_addItem( "WT_GL" );
		menu_add_number( -1568386805 );
		menu_add_extra( 900 );
		menu_addItem( "WT_GL_SMOKE" );
		menu_add_number( 1305664598 );
		menu_add_extra( 900 );
		menu_addItem( "WT_RPG" );
		menu_add_number( -1312131151 );
		menu_add_extra( 900 );
		menu_addItem( "Passenger rocket" );
		menu_add_number( 375527679 );
		menu_add_extra( 900 );
		menu_addItem( "Airstrike rocket" );
		menu_add_number( 324506233 );
		menu_add_extra( 900 );
		menu_addItem( "WT_RPG" );
		menu_add_number( 1752584910 );
		menu_add_extra( 900 );
		menu_addItem( "WT_MINIGUN" );
		menu_add_number( 1119849093 );
		menu_add_extra( 900 );
		menu_addItem( "WT_GNADE" );
		menu_add_number( -1813897027 );
		menu_add_extra( 900 );
		menu_addItem( "WT_GNADE_STK" );
		menu_add_number( 741814745 );
		menu_add_extra( 900 );
		menu_addItem( "WT_GNADE_SMK" );
		menu_add_number( -37975472 );
		menu_add_extra( 900 );
		menu_addItem( "WT_BZGAS" );
		menu_add_number( -1600701090 );
		menu_add_extra( 900 );
		menu_addItem( "WT_MOLOTOV" );
		menu_add_number( 615608432 );
		menu_add_extra( 900 );
		menu_addItem( "WT_FIRE" );
		menu_add_number( 101631238 );
		menu_add_extra( 900 );
		menu_addItem( "WT_PETROL" );
		menu_add_number( 883325847 );
		menu_add_extra( 900 );
		menu_addItem( "Digiscanner" );
		menu_add_number( -38085395 );
		menu_add_extra( 1 );
		menu_set_stored_data( 1 );
		menu_addItem( "WT_NV" );
		menu_add_number( -1491061156 );
		menu_add_extra( 1 );
		menu_set_stored_data( 1 );
		menu_addItem( "WT_PARA" );
		menu_add_number( -72657034 );
		menu_add_extra( 1 );
		menu_addItem( "Briefcase" );
		menu_add_number( -2000187721 );
		menu_add_extra( 1 );
		menu_set_stored_data( 1 );
		menu_addItem( "Briefcase 02" );
		menu_add_number( 28811031 );
		menu_add_extra( 1 );
		menu_set_stored_data( 1 );
		menu_addItem( "WT_BALL" );
		menu_add_number( 600439132 );
		menu_add_extra( 900 );
		menu_addItem( "WT_FLARE" );
		menu_add_number( 1233104067 );
		menu_add_extra( 900 );
		menu_add_callback_all(&trainer_player_weapons_give_action);
		break;
		
		case 9:
		menu_clean_stored_data();
		
		menu_addItem( "WT_BOTTLE" );
		menu_add_number( -102323637 );
		menu_add_extra( -1 );
		menu_addItem( "WT_SNSPISTOL" );
		menu_add_number( -1076751822 );
		menu_add_extra( 900 );
		menu_addItem( "WT_GUSNBRG" );
		menu_add_number( 1627465347 );
		menu_add_extra( 900 );
		menu_addItem( "WT_HVYPISTOL" );
		menu_add_number( -771403250 );
		menu_add_extra( 900 );
		menu_addItem( "WT_SPCARBINE" );
		menu_add_number( -1063057011 );
		menu_add_extra( 900 );
		menu_addItem( "WT_BULLRIFLE" );
		menu_add_number( 2132975508 );
		menu_add_extra( 900 );
		menu_addItem( "WT_VPISTOL" );
		menu_add_number( 137902532 );
		menu_add_extra( 900 );
		menu_addItem( "WT_DAGGER" );
		menu_add_number( -1834847097 );
		menu_add_extra( -1 );
		menu_addItem( "WT_FIREWRK" );
		menu_add_number( 2138347493 );
		menu_add_extra( 900 );
		menu_addItem( "WT_MUSKET" );
		menu_add_number( -1466123874 );
		menu_add_extra( 900 );
		menu_addItem( "WT_HVYSHGN" );
		menu_add_number( 984333226 );
		menu_add_extra( 900 );
		menu_addItem( "WT_MKRIFLE" );
		menu_add_number( -952879014 );
		menu_add_extra( 900 );
		menu_addItem( "WT_HOMLNCH" );
		menu_add_number( 1672152130 );
		menu_add_extra( 900 );
		menu_addItem( "WT_PRXMINE" );
		menu_add_number( -1420407917 );
		menu_add_extra( 900 );
		menu_addItem( "WT_SNWBALL" );
		menu_add_number( 126349499 );
		menu_add_extra( 900 );
		menu_add_callback_all(&trainer_player_weapons_give_action);
		break;
		
	}
}

void trainer_explode_types()
{
	menu_set_title("Explosion Type");

	menu_addItem( "Grenade" );
	menu_add_number( 0 );
	menu_addItem( "Grenade Launcher" );
	menu_add_number( 1 );
	menu_addItem( "Sticky Bomb" );
	menu_add_number( 2 );
	menu_addItem( "Molotov" );
	menu_add_number( 3 );
	menu_addItem( "Rocket" );
	menu_add_number( 4 );
	menu_addItem( "Tank Shell" );
	menu_add_number( 5 );
	menu_addItem( "Hi-Octane" );
	menu_add_number( 6 );
	menu_addItem( "Car" );
	menu_add_number( 7 );
	menu_addItem( "Plane" );
	menu_add_number( 8 );
	menu_addItem( "Petrol Pump" );
	menu_add_number( 9 );
	menu_addItem( "Bike" );
	menu_add_number( 10 );
	menu_addItem( "Directed Steam" );
	menu_add_number( 11 );
	menu_addItem( "Directed Flame" );
	menu_add_number( 12 );
	menu_addItem( "Directed Water Hydrant" );
	menu_add_number( 13 );
	menu_addItem( "Directed Gas Canister" );
	menu_add_number( 14 );
	menu_addItem( "Boat" );
	menu_add_number( 15 );
	menu_addItem( "Ship Destroy" );
	menu_add_number( 16 );
	menu_addItem( "Truck" );
	menu_add_number( 17 );
	menu_addItem( "Bullet" );
	menu_add_number( 18 );
	menu_addItem( "Smoke Grenade Launcher" );
	menu_add_number( 19 );
	menu_addItem( "Smoke Grenade" );
	menu_add_number( 20 );
	menu_addItem( "BZ Gas" );
	menu_add_number( 21 );
	menu_addItem( "Flare" );
	menu_add_number( 22 );
	menu_addItem( "Gas Canister" );
	menu_add_number( 23 );
	menu_addItem( "Extinguisher" );
	menu_add_number( 24 );
	menu_addItem( "Programmable AR" );
	menu_add_number( 25 );
	menu_addItem( "Train" );
	menu_add_number( 26 );
	menu_addItem( "Barrel" );
	menu_add_number( 27 );
	menu_addItem( "Propane" );
	menu_add_number( 28 );
	menu_addItem( "Blimp" );
	menu_add_number( 29 );
	menu_addItem( "Directed Flame Explode" );
	menu_add_number( 30 );
	menu_addItem( "Tanker" );
	menu_add_number( 31 );
	menu_addItem( "Plane Rocket" );
	menu_add_number( 32 );
	menu_addItem( "Vehicle Bullet" );
	menu_add_number( 33 );
	menu_addItem( "Gas Tank" );
	menu_add_number( 34 );
	menu_addItem( "Gas" );
	menu_add_number( 35 );
	menu_addItem( "Firework" );
	menu_add_number( 36 );
	menu_addItem( "Snowball" );
	menu_add_number( 37 );
	menu_addItem( "Proximity Mine" );
	menu_add_number( 38 );
}