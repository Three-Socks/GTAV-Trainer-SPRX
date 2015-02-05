#include "main.h"

var32 menu_get_current_item()
{
	Var32 var_0;
	Var32 var_1;
	return Static_4;
}

var32 menu_get_count()
{
	Var32 var_0;
	Var32 var_1;
	return Static_5;
}

var32 menu_get_open_state()
{
	Var32 var_0;
	Var32 var_1;
	if ( ! (is_pause_menu_active() ) )
	{
		return Static_6;
	}
	return 0;
}

void menu_set_open_state( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	Static_6 = param_0;
	return;
}

var32 menu_get_action_mode()
{
	Var32 var_0;
	Var32 var_1;
	return Static_7;
}

void menu_set_action_mode( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	Static_7 = param_0;
	return;
}

var32 menu_get_sub_action_mode()
{
	Var32 var_0;
	Var32 var_1;
	return Static_26;
}

void menu_set_sub_action_mode( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	Static_26 = param_0;
	return;
}

var32 menu_get_continue_action()
{
	Var32 var_0;
	Var32 var_1;
	return Static_31;
}

void menu_set_continue_action( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	Static_31 = param_0;
	return;
}

var32 menu_get_current_level()
{
	Var32 var_0;
	Var32 var_1;
	return Static_9;
}

var32 menu_get_last_selected( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	return Static_61[param_0];
}

var32 menu_get_stored_data( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	return Static_379[param_0];
}

void menu_set_stored_data( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_379[menu_get_count()] = param_0;
	}
	return;
}

void menu_set_title( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_10 = param_0;
	}
	return;
}

void menu_set_bool_strings( Var32 param_0, Var32 param_1 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	Static_430 = param_0;
	Static_431 = param_1;
	return;
}

void menu_set_float_dp( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	Static_432 = param_0;
	return;
}

void menu_set_font( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	Static_433 = param_0;
	return;
}

void menu_set_menu_align( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	Static_434 = param_0;
	return;
}

void menu_set_sfx( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	Static_435 = param_0;
	return;
}

void menu_addItem( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_5 = menu_get_count() + 1;
		Static_72[menu_get_count()] = param_0;
	}
	return;
}

void menu_addItem_add_number( Var32 param_0, Var32 param_1 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_5 = menu_get_count() + 1;
		Static_123[menu_get_count()] = 8;
		Static_72[menu_get_count()] = param_0;
		Static_276[menu_get_count()] = param_1;
	}
	return;
}

void menu_addItem_gxt_add_number( Var32 param_0, Var32 param_1 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_5 = menu_get_count() + 1;
		Static_123[menu_get_count()] = 9;
		Static_72[menu_get_count()] = param_0;
		Static_276[menu_get_count()] = param_1;
	}
	return;
}

void menu_addItem_gxt_add_number2( Var32 param_0, Var32 param_1 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_5 = menu_get_count() + 1;
		Static_123[menu_get_count()] = 10;
		Static_72[menu_get_count()] = param_0;
		Static_276[menu_get_count()] = param_1;
	}
	return;
}

void menu_addItem_gxt_number( Var32 param_0, Var32 param_1 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_5 = menu_get_count() + 1;
		Static_123[menu_get_count()] = 11;
		Static_72[menu_get_count()] = param_0;
		Static_276[menu_get_count()] = param_1;
	}
	return;
}

void menu_addItem_number( Var32 param_0, Var32 param_1, Var32 param_2 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_123[menu_get_count()] = 1;
		Static_276[menu_get_count()] = param_0;
		Static_327[menu_get_count()] = param_1;
		Static_174[menu_get_count()] = param_2;
	}
	return;
}

void menu_addItem_number_format( Var32 param_0, Var32 param_1, Var32 param_2 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_123[menu_get_count()] = 13;
		Static_276[menu_get_count()] = param_0;
		Static_327[menu_get_count()] = param_1;
		Static_174[menu_get_count()] = param_2;
	}
	return;
}

void menu_add_number( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_276[menu_get_count()] = param_0;
	}
	return;
}

void menu_set_number( Var32 param_0, Var32 param_1 )
{
	Var32 var_0;
	Var32 var_1;
	Static_276[param_0] = param_1;
	return;
}

var32 menu_get_current_number()
{
	Var32 var_0;
	Var32 var_1;
	return Static_276[menu_get_current_item()];
}

var32 menu_get_number( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	return Static_276[param_0];
}

void menu_addItem_float( Var32 param_0, Var32 param_1, Var32 param_2 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_123[menu_get_count()] = 2;
		Static_276[menu_get_count()] = param_0;
		Static_327[menu_get_count()] = param_1;
		Static_174[menu_get_count()] = param_2;
	}
	return;
}

void menu_add_data_2( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_327[menu_get_count()] = param_0;
	}
	return;
}

var32 menu_get_current_data_2()
{
	Var32 var_0;
	Var32 var_1;
	return Static_327[menu_get_current_item()];
}

void menu_addItem_bool( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_123[menu_get_count()] = 3;
		Static_174[menu_get_count()] = param_0;
	}
	return;
}

void menu_set_current_bool( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	Static_174[menu_get_current_item()] = param_0;
	return;
}

void menu_set_bool( Var32 param_0, Var32 param_1 )
{
	Var32 var_0;
	Var32 var_1;
	Static_174[param_0] = param_1;
	return;
}

void menu_toggle_bool( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	Static_174[param_0] = !menu_get_current_bool();
	return;
}

void menu_toggle_current_bool()
{
	Var32 var_0;
	Var32 var_1;
	Static_174[menu_get_current_item()] = !menu_get_current_bool();
	return;
}

var32 menu_get_current_bool()
{
	Var32 var_0;
	Var32 var_1;
	return Static_174[menu_get_current_item()];
}

var32 menu_get_bool( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	return Static_174[param_0];
}

void menu_addItem_gxt_veh_hash( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_5 = menu_get_count() + 1;
		Static_174[menu_get_count()] = param_0;
		Static_123[menu_get_count()] = 5;
	}
	return;
}

void menu_addItem_keyboard( Var32 param_0, Var32 param_1, Var32 param_2 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_5 = menu_get_count() + 1;
		Static_72[menu_get_count()] = param_0;
		Static_123[menu_get_count()] = 6;
		Static_276[menu_get_count()] = param_1;
		Static_29 = param_2;
	}
	return;
}

void menu_addItem_number_keyboard( Var32 param_0, Var32 param_1, Var32 param_2, Var32 param_3 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	Var32 var_3;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_123[menu_get_count()] = 7;
		Static_276[menu_get_count()] = param_0;
		Static_327[menu_get_count()] = param_1;
		Static_174[menu_get_count()] = param_2;
		Static_29 = param_3;
	}
	return;
}

void menu_addItem_number_format_keyboard( Var32 param_0, Var32 param_1, Var32 param_2, Var32 param_3 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	Var32 var_3;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_123[menu_get_count()] = 14;
		Static_276[menu_get_count()] = param_0;
		Static_327[menu_get_count()] = param_1;
		Static_174[menu_get_count()] = param_2;
		Static_29 = param_3;
	}
	return;
}

void menu_addItem_float_keyboard( Var32 param_0, Var32 param_1, Var32 param_2, Var32 param_3 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	Var32 var_3;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_123[menu_get_count()] = 12;
		Static_276[menu_get_count()] = param_0;
		Static_327[menu_get_count()] = param_1;
		Static_174[menu_get_count()] = param_2;
		Static_29 = param_3;
	}
	return;
}

var32 menu_get_current_keyboard()
{
	Var32 var_0;
	Var32 var_1;
	return Static_276[menu_get_current_item()];
}

var32 menu_get_current_extra()
{
	Var32 var_0;
	Var32 var_1;
	return Static_174[menu_get_current_item()];
}

void menu_add_extra( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_174[menu_get_count()] = param_0;
	}
	return;
}

var32 menu_get_extra( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	return Static_174[param_0];
}

void menu_addItem_action( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_5 = menu_get_count() + 1;
		Static_72[menu_get_count()] = param_0;
		Static_225[menu_get_count()] = 1;
	}
	return;
}

void menu_add_action()
{
	Var32 var_0;
	Var32 var_1;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_225[menu_get_count()] = 1;
	}
	return;
}

void menu_addItem_frontend( Var32 param_0, Var32 param_1 )
{
	Var32 var_0;
	Var32 var_1;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_46++;
		Static_47[Static_46] = param_0;
		Static_54[Static_46] = param_1;
	}
	return;
}

void menu_set_catch_button_id( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	if ( ! (menu_get_action_mode() ) )
	{
		Static_30 = param_0;
	}
	return;
}

var32 menu_get_catch_button_id()
{
	Var32 var_0;
	Var32 var_1;
	return Static_30;
}

void menu_draw_frontend_hook()
{
	Var32 var_0;
	Var32 var_1;
	var_1 = Static_46;
	if ( ( ( (Static_123[menu_get_current_item()] == 6 || Static_123[menu_get_current_item()] == 7) || Static_123[menu_get_current_item()] == 12) || Static_123[menu_get_current_item()] == 14) )
	{
		var_1++;
		menu_add_frontend( var_1, 32, "Edit With Keyboard" );
		if ( (Static_123[menu_get_current_item()] == 2 || Static_123[menu_get_current_item()] == 12) )
		{
			var_1++;
			menu_add_frontend( var_1, 36, "Increment Faster (Hold)" );
			var_1++;
			menu_add_frontend( var_1, 34, "Increment Slower (Hold)" );
		}
	}
	return;
}

void menu_add_frontend( Var32 param_0, Var32 param_1, Var32 param_2 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	unk_0x215ABBE8( Static_12, "SET_DATA_SLOT" );
	unk_0x716777CB( param_0 );
	unk_0x716777CB( param_1 );
	if ( does_text_label_exist( param_2 ) )
	{
		clear_player_has_2_characters_enable( param_2 );
	}
	else
	{
		clear_player_has_2_characters_enable( "STRING" );
		unk_0x27A244D8( param_2 );
	}
	add_text_component_integer( -1 );
	unk_0x386CE0B8();
	unk_0x02DBF2D7();
	return;
}

void menu_setup()
{
	if ( Static_434 == 0 )
	{
		Static_3 = 0.0546875f;
	}
	else
	{
		Static_3 = 0.7546875f;
	}
	Static_4 = 0;
	Static_5 = -1;
	menu_set_action_mode( 0 );
	Static_8 = 0;
	Static_9 = 0;
	menu_set_title( "" );
	Static_11 = 0;
	Static_15 = 2;
	Static_17 = 1;
	Static_20 = 0.0527f;
	Static_21 = Static_20;
	Static_22 = 0.03472f;
	Static_23 = 14;
	Static_24 = Static_23;
	Static_25 = 7;
	Static_45 = 0;
	Static_46 = -1;
	menu_set_bool_strings( "PIM_DHIGH0", "PIM_DHIGH1" );
	menu_set_float_dp( 4 );
	menu_set_font( 0 );
	menu_set_sfx( 1 );
	return;
}

void menu_modify_game_state()
{
	if ( ! (Global_13242.Imm[6183] ) )
	{
		menu_modify_game_state_globals();
	}
	Global_13242.Imm[4621] = get_game_timer();
	hide_help_text_this_frame();
	set_cinematic_button_active( 0 );
	set_ped_using_action_mode( player_ped_id(), 1, -1, 0 );
	disable_control_action( 0, 0 );
	disable_control_action( 0, 90 );
	disable_control_action( 0, 73 );
	set_input_exclusive( 2, 176 );
	set_input_exclusive( 2, 174 );
	set_input_exclusive( 2, 175 );
	disable_control_action( 0, 46 );
	set_input_exclusive( 2, 161 );
	set_input_exclusive( 2, 162 );
	disable_control_action( 2, 174 );
	disable_control_action( 2, 175 );
	disable_control_action( 2, 163 );
	disable_control_action( 2, 164 );
	disable_control_action( 2, 161 );
	disable_control_action( 2, 162 );
	hide_hud_component_this_frame( 10 );
	hide_hud_component_this_frame( 6 );
	hide_hud_component_this_frame( 7 );
	hide_hud_component_this_frame( 9 );
	hide_hud_component_this_frame( 8 );
	set_input_exclusive( 2, 163 );
	set_input_exclusive( 2, 164 );
	disable_control_action( 0, 20 );
	disable_control_action( 0, 59 );
	disable_control_action( 0, 85 );
	disable_control_action( 0, 86 );
	disable_control_action( 0, 87 );
	disable_control_action( 0, 88 );
	disable_control_action( 0, 89 );
	disable_control_action( 0, 37 );
	disable_control_action( 0, 136 );
	disable_control_action( 0, 137 );
	disable_control_action( 0, 138 );
	disable_control_action( 0, 139 );
	disable_control_action( 0, 140 );
	disable_control_action( 0, 141 );
	disable_control_action( 0, 142 );
	disable_control_action( 0, 143 );
	disable_control_action( 0, 144 );
	disable_control_action( 0, 14 );
	disable_control_action( 0, 15 );
	disable_control_action( 0, 50 );
	disable_control_action( 0, 51 );
	disable_control_action( 0, 120 );
	disable_control_action( 0, 121 );
	disable_control_action( 0, 123 );
	disable_control_action( 0, 45 );
	disable_control_action( 0, 67 );
	disable_control_action( 0, 76 );
	disable_control_action( 0, 42 );
	disable_control_action( 0, 43 );
	disable_control_action( 0, 52 );
	disable_control_action( 0, 73 );
	disable_control_action( 0, 22 );
	disable_control_action( 0, 90 );
	disable_control_action( 0, 103 );
	disable_control_action( 0, 146 );
	disable_control_action( 0, 145 );
	disable_control_action( 0, 147 );
	disable_control_action( 0, 148 );
	disable_control_action( 0, 19 );
	return;
}

void menu_modify_game_state_globals()
{
	if ( ! (1 == Global_10433.Imm[1] ) )
	{
		if ( menu_get_mobile_globals( 0 ) )
		{
			func_menu_set_mobile_globals_297( 0 );
		}
		set_bit( &Global_1687, 2 );
	}
	return;
}

void func_menu_set_mobile_globals_297( Var32 param_0 )
{
	Var32 var_0;
	if ( Global_10588 )
	{
		menu_set_mobile_position_299( 0, 0 );
	}
	if ( (10 == Global_10433.Imm[1] || 9 == Global_10433.Imm[1]) )
	{
		set_bit( &Global_1687, 16 );
	}
	if ( is_mobile_phone_call_ongoing() )
	{
		stop_scripted_conversation( 0 );
	}
	Global_11728 = 5;
	if ( 1 == param_0 )
	{
		set_bit( &Global_1686, 30 );
	}
	else
	{
		clear_bit( &Global_1686, 30 );
	}
	if ( ! (menu_set_mobile_globals_2_305() ) )
	{
		Global_10433.Imm[1] = 3;
	}
	return;
}

var32 menu_set_mobile_globals_2_305()
{
	if ( (1 == Global_10433.Imm[1] || 0 == Global_10433.Imm[1]) )
	{
		return 1;
	}
	return 0;
}

void menu_set_mobile_position_299( Var32 param_0, Var32 param_1 )
{
	Var32 var_0;
	Var32 var_1;
	if ( param_0 )
	{
		if ( menu_get_mobile_globals( 0 ) )
		{
			Global_10588 = 1;
			if ( param_1 )
			{
				get_mobile_phone_position( &Global_10370 );
			}
			Global_10361 = { &Global_10379[Global_10378 * 3]{3} } {3};
			set_mobile_phone_position( &Global_10361{3} );
		}
	}
	else if ( 1 == Global_10588 )
	{
		Global_10588 = 0;
		Global_10361 = { &Global_10386[Global_10378 * 3]{3} } {3};
		if ( param_1 )
		{
			set_mobile_phone_position( &Global_10370{3} );
		}
		else
		{
			set_mobile_phone_position( &Global_10361{3} );
		}
	}
	return;
}

var32 menu_get_mobile_globals( Var32 param_0 )
{
	Var32 var_0;
	if ( 1 == param_0 )
	{
		if ( Global_10433.Imm[1] > 3 )
		{
			if ( is_bit_set( Global_1686, 14 ) )
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if ( unk_0x029D3841( -754107665 ) > 0 )
	{
		return 1;
	}
	if ( Global_10433.Imm[1] > 3 )
	{
		return 1;
	}
	return 0;
}

void menu_reverse_game_state()
{
	set_ped_using_action_mode( player_ped_id(), 0, -1, 0 );
	set_cinematic_button_active( 1 );
	return;
}

void menu_shutdown()
{
	menu_reverse_game_state();
	Static_13 = 0;
	set_scaleform_movie_as_no_longer_needed( &Static_12 );
	Static_27 = 0;
	set_streamed_texture_dict_as_no_longer_needed( "CommonMenu" );
	project_close();
	return;
}

void menu_catch_button_press()
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	Var32 var_3;
	Var32 var_4;
	Var32 var_5;
	Var32 var_6;
	var_1 = menu_get_count();
	var_4 = var_1 - Static_25;
	if ( menu_down_pressed( 1 ) )
	{
		menu_play_sound( "NAV_UP_DOWN" );
		if ( menu_get_current_item() < var_1 )
		{
			Static_4 = menu_get_current_item() + 1;
			if ( var_1 > Static_24 )
			{
				if ( menu_get_current_item() < var_4 + 1 )
				{
					if ( menu_get_current_item() > Static_25 )
					{
						Static_20 -= Static_22;
						Static_23++;
					}
				}
			}
		}
		else
		{
			Static_20 = Static_21;
			Static_23 = Static_24;
			Static_4 = 0;
		}
	}
	else if ( menu_up_pressed( 1 ) )
	{
		menu_play_sound( "NAV_UP_DOWN" );
		if ( menu_get_current_item() > 0 )
		{
			Static_4 = menu_get_current_item() - 1;
			if ( var_1 > Static_24 )
			{
				if ( menu_get_current_item() < var_4 )
				{
					if ( menu_get_current_item() > Static_25 - 1 )
					{
						Static_20 += Static_22;
						Static_23--;
					}
				}
			}
		}
		else if ( menu_get_count() > Static_24 )
		{
			var_5 = Static_25;
			while ( var_5 <= menu_get_count() )
			{
				if ( var_5 < var_4 )
				{
					Static_20 -= Static_22;
					Static_23++;
					var_5++;
				}
			}
			Static_4 = var_1;
		}
		else
		{
			Static_4 = var_1;
		}
	}
	else if ( menu_left_pressed( 1 ) )
	{
		if ( ( ( (Static_123[menu_get_current_item()] == 1 || Static_123[menu_get_current_item()] == 7) || Static_123[menu_get_current_item()] == 13) || Static_123[menu_get_current_item()] == 14) )
		{
			if ( Static_276[menu_get_current_item()] != Static_327[menu_get_current_item()] )
			{
				Static_276[menu_get_current_item()]--;
			}
			else
			{
				Static_276[menu_get_current_item()] = Static_174[menu_get_current_item()];
			}
			menu_play_sound( "NAV_LEFT_RIGHT" );
		}
		else
		{
			if ( (Static_123[menu_get_current_item()] == 2 || Static_123[menu_get_current_item()] == 12) )
			{
				if ( (IntToFloat( Static_327[menu_get_current_item()] ) <=f IntToFloat( Static_276[menu_get_current_item()] ) || IntToFloat( Static_327[menu_get_current_item()] ) <f 0.0f) )
				{
					var_6 = 0.010f;
					if ( is_control_pressed( 2, 178 ) )
					{
						var_6 = 0.001f;
					}
					if ( is_control_pressed( 2, 179 ) )
					{
						var_6 = 0.100f;
					}
					Static_276[menu_get_current_item()] -= var_6;
				}
				else
				{
					Static_276[menu_get_current_item()] = Static_174[menu_get_current_item()];
				}
				menu_play_sound( "NAV_LEFT_RIGHT" );
			}
		}
	}
	else if ( menu_right_pressed( 1 ) )
	{
		if ( ( ( (Static_123[menu_get_current_item()] == 1 || Static_123[menu_get_current_item()] == 7) || Static_123[menu_get_current_item()] == 13) || Static_123[menu_get_current_item()] == 14) )
		{
			if ( Static_174[menu_get_current_item()] != Static_276[menu_get_current_item()] )
			{
				Static_276[menu_get_current_item()]++;
			}
			else
			{
				Static_276[menu_get_current_item()] = Static_327[menu_get_current_item()];
			}
			menu_play_sound( "NAV_LEFT_RIGHT" );
		}
		else
		{
			if ( (Static_123[menu_get_current_item()] == 2 || Static_123[menu_get_current_item()] == 12) )
			{
				if ( IntToFloat( Static_276[menu_get_current_item()] ) <=f IntToFloat( Static_174[menu_get_current_item()] - 0.010f ) )
				{
					var_6 = 0.010f;
					if ( is_control_pressed( 2, 178 ) )
					{
						var_6 = 0.001f;
					}
					if ( is_control_pressed( 2, 179 ) )
					{
						var_6 = 0.100f;
					}
					Static_276[menu_get_current_item()] += var_6;
				}
				else
				{
					Static_276[menu_get_current_item()] = Static_327[menu_get_current_item()];
				}
				menu_play_sound( "NAV_LEFT_RIGHT" );
			}
		}
	}
	if ( Static_14 )
	{
		Static_15 = 2;
		Static_14 = 0;
	}
	return;
}

void menu_set_last_selected()
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	if ( menu_get_last_selected( menu_get_current_level() ) <= menu_get_count() )
	{
		Static_4 = menu_get_last_selected( menu_get_current_level() );
	}
	else
	{
		Static_4 = menu_get_count();
	}
	Static_61[menu_get_current_level()] = 0;
	if ( menu_get_count() > Static_24 )
	{
		if ( menu_get_current_item() > Static_25 )
		{
			var_1 = Static_25 + 1;
			var_2 = menu_get_count() - Static_25;
			while ( var_1 <= menu_get_current_item() )
			{
				if ( !( var_1 < var_2 + 1 ) )
				{
					break;
				}
				Static_20 -= Static_22;
				Static_23++;
				var_1++;
			}
		}
	}
	return;
}

void menu_catch_select_button_press()
{
	Var32 var_0;
	Var32 var_1;
	if ( is_disabled_control_just_pressed( 2, 174 ) )
	{
		if ( Static_17 < 2 )
		{
			menu_play_sound( "SELECT" );
			if ( Static_225[menu_get_current_item()] != 1 )
			{
				Static_11 = 0;
				Static_61[menu_get_current_level()] = menu_get_current_item();
				Static_4 = 0;
				menu_clean();
				Static_9 = menu_get_current_level() + 1;
			}
			else
			{
				menu_set_action_mode( 1 );
			}
		}
	}
	else if ( is_disabled_control_just_released( 2, 175 ) )
	{
		if ( menu_get_current_level() != 0 )
		{
			menu_play_sound( "BACK" );
			Static_11 = 0;
			Static_9 = menu_get_current_level() - 1;
			menu_clean();
		}
		else
		{
			menu_play_sound( "CANCEL" );
			menu_set_action_mode( 2 );
		}
	}
	else if ( is_disabled_control_just_pressed( 2, 176 ) )
	{
		menu_set_action_mode( 3 );
	}
	return;
}

var32 menu_add_int_to_string( Var32 param_0, Var32 param_1 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	Var32 var_3;
	Var32 var_4;
	Var32 var_5;
	Var32 var_6;
	Var32 var_7;
	Var32 var_8;
	Var32 var_9;
	Var32 var_10;
	Var32 var_11;
	Var32 var_12;
	Var32 var_13;
	StringCopyTo( &var_0, "", 16 );
	StringCopyTo( &var_0, param_1, 16 );
	StringAddInt( &var_0, param_0, 16 );
	return menu_return_var( &var_0 );
}

var32 menu_add_int_to_string2( Var32 param_0, Var32 param_1 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	Var32 var_3;
	Var32 var_4;
	Var32 var_5;
	Var32 var_6;
	Var32 var_7;
	Var32 var_8;
	Var32 var_9;
	Var32 var_10;
	Var32 var_11;
	Var32 var_12;
	Var32 var_13;
	StringCopyTo( &var_0, param_1, 16 );
	if ( param_0 < 10 )
	{
		StringConCat( &var_0, "0", 16 );
	}
	StringAddInt( &var_0, param_0, 16 );
	return menu_return_var( &var_0 );
}

var32 menu_return_var( Var32 param_0 )
{
	Var32 var_0;
	return param_0;
}

void menu_play_sound( Var32 param_0 )
{
	Var32 var_0;
	if ( Static_435 )
	{
		play_sound_frontend( -1, param_0, "HUD_FRONTEND_DEFAULT_SOUNDSET" );
	}
	return;
}

var32 menu_keyboard( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	Var32 var_3;
	Var32 var_4;
	Var32 var_5;
	Var32 var_6;
	Var32 var_7;
	Var32 var_8;
	Var32 var_9;
	Var32 var_10;
	Var32 var_11;
	Var32 var_12;
	Var32 var_13;
	Var32 var_14;
	Var32 var_15;
	Var32 var_16;
	Var32 var_17;
	Var32 var_18;
	Var32 var_19;
	Var32 var_20;
	Var32 var_21;
	Var32 var_22;
	Var32 var_23;
	Var32 var_24;
	Var32 var_25;
	Var32 var_26;
	Var32 var_27;
	Var32 var_28;
	Var32 var_29;
	Var32 var_30;
	Var32 var_31;
	Var32 var_32;
	Var32 var_33;
	menu_set_action_mode( 3 );
	Switch( menu_get_sub_action_mode() )
	{
		case 0:
		var_1 = param_0;
		var_2 = "";
		if ( is_xbox360_version() )
		{
			var_2 = var_1;
		}
		menu_set_sub_action_mode( 1 );
		if ( Static_29 == 0 )
		{
			Static_29 = 3;
		}
		if ( Static_123[menu_get_current_item()] == 6 )
		{
			StringCopyTo( &var_3, menu_get_current_keyboard(), 16 );
			if ( ! (is_string_null_or_empty( &var_3 ) ) )
			{
				display_onscreen_keyboard( 0, var_1, var_2, &var_3, "", "", "", Static_29 + 1 );
				break;
			}
		}
		display_onscreen_keyboard( 0, var_1, var_2, "", "", "", "", Static_29 + 1 );
		break;
		
		case 1:
		Static_28 = update_onscreen_keyboard();
		Switch( Static_28 )
		{
			case 0:
			return 0;
			
			case 3:
			menu_set_action_mode( 0 );
			menu_set_sub_action_mode( 0 );
			Static_28 = 0;
			return 0;
			
			case 2:
			menu_set_action_mode( 0 );
			menu_set_sub_action_mode( 0 );
			Static_28 = 0;
			return 0;
			
			case 1:
			menu_set_action_mode( 0 );
			menu_set_sub_action_mode( 0 );
			Static_28 = 0;
			return 1;
			
		}
		break;
		
	}
	return 0;
}

void menu_msg( Var32 param_0 )
{
	Var32 var_0;
	Var32 var_1;
	unk_0x574EE85C( "STRING" );
	unk_0x27A244D8( param_0 );
	unk_0x08F7AF78( 0, 1 );
	return;
}

void menu_error( Var32 param_0, Var32 param_1 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	if ( param_1 >= 1 )
	{
		menu_error_back( param_1 );
	}
	unk_0x574EE85C( "STRING" );
	unk_0x27A244D8( param_0 );
	unk_0x08F7AF78( 0, 1 );
	return;
}

void menu_error_gxt( Var32 param_0, Var32 param_1 )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	if ( param_1 >= 1 )
	{
		menu_error_back( param_1 );
	}
	unk_0x574EE85C( param_0 );
	unk_0x08F7AF78( 0, 1 );
	return;
}

void menu_error_2_strings( char* string_val, char* string_val2, int menu_level_back )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	Var32 var_3;
	if ( menu_level_back >= 1 )
	{
		menu_error_back( menu_level_back );
	}
	unk_0x574EE85C( "TWOSTRINGS" );
	unk_0x27A244D8( string_val );
	unk_0x27A244D8( string_val2 );
	unk_0x08F7AF78( 0, 1 );
	return;
}

void menu_error_2_strings_gxt( char* string_val, char* gxt, int menu_level_back )
{
	Var32 var_0;
	Var32 var_1;
	Var32 var_2;
	Var32 var_3;
	if ( menu_level_back >= 1 )
	{
		menu_error_back( menu_level_back );
	}
	unk_0x574EE85C( "TWOSTRINGS" );
	unk_0x27A244D8( string_val );
	unk_0xDCE05406( gxt );
	unk_0x08F7AF78( 0, 1 );
	return;
}

void menu_error_back( int menu_level_back )
{
	Static_11 = 0;
	Static_45 = 0;
	menu_clean();
	Static_9 = menu_get_current_level() - menu_level_back;
	Static_4 = menu_get_last_selected( menu_get_current_level() );
	menu_set();
	menu_set_frontend();
}

void menu_frontend_clean()
{
	Static_45 = 0;
	Static_46 = -1;
}

void menu_clean()
{
	uint clean_index;
	uint clean_menu_count;
	clean_index = 0;
	clean_menu_count = menu_get_count() + 1;
	while ( clean_index < var_2 )
	{
		Static_72[clean_index] = "";
		Static_123[clean_index] = 0;
		Static_174[clean_index] = 0;
		Static_225[clean_index] = 0;
		Static_276[clean_index] = 0;
		Static_327[clean_index] = 0;
		clean_index++;
	}
	Static_20 = Static_21;
	Static_23 = Static_24;
	Static_5 = -1;
	menu_set_action_mode( 0 );
	menu_set_sub_action_mode( 0 );
	Static_28 = 0;
	Static_29 = 0;
	Static_30 = 0;
	menu_frontend_clean();
}

void menu_draw_window()
{
	uint win_r;
	uint win_g;
	uint win_b;
	uint win_a;
	uint win_menu_count;
	float win_size;
	unk_0x228A2598( 76, 84 );
	unk_0x76C641E4( -0.05f, -0.05f, 0.0f, 0.0f );
	win_r = 0;
	win_g = 0;
	win_b = 0;
	win_a = 186;
	//get_hud_colour( 140, &var_0, &var_1, &var_2, &var_3 );
	if ( menu_get_count() > Static_24 )
	{
		win_menu_count = Static_24 + 1;
	}
	else
	{
		win_menu_count = menu_get_count() + 1;
	}
	win_size = Static_22 * IntToFloat( win_menu_count );
	menu_draw_rect( Static_3 - 0.0046875f, 0.084722f, 0.225f, win_size, win_r, win_g, win_b, win_a );
	menu_draw_rect( Static_3 - 0.0046875f, 0.04999922f, 0.225f, Static_22, 0, 0, 0, 204 );
	if ( menu_get_count() > Static_24 )
	{
		menu_draw_rect( Static_3 - 0.0046875f, win_size + Static_22 + 0.04999922f, 0.225f, Static_22, 0, 0, 0, 204 );
	}
}

void menu_draw_rect(float rect_x, float rect_y, float rect_size_x, float rect_size_y, int rect_r, int rect_g, int rect_b, int rect_a)
{
	draw_rect(rect_x + rect_size_x * 0.5f, rect_y + rect_size_y * 0.5f, rect_size_x, rect_size_y, rect_r, rect_g, rect_b, rect_a);
}

void menu_do_hold_pressed( uint button_id )
{
	if ( is_disabled_control_pressed( 2, button_id ) )
	{
		Static_18 = button_id;
		if ( Static_16 > 8 )
		{
			Static_17++;
			Static_16 = 0;
		}
		Static_16++;
		Static_15++;
		Static_15 *= Static_17;
	}
	else if ( Static_18 == button_id )
	{
		Static_17 = 1;
		Static_16 = 0;
	}
}

bool menu_is_hold_pressed( uint button_id )
{
	if ( Static_15 > 5 )
	{
		if ( is_disabled_control_pressed( 2, button_id ) )
		{
			return 1;
		}
	}
	return 0;
}

bool menu_up_pressed( bool do_hold )
{
	if ( (is_disabled_control_just_pressed( 2, 162 ) || menu_is_hold_pressed( 162 )) )
	{
		Static_14 = 1;
		return 1;
	}
	if ( do_hold )
	{
		menu_do_hold_pressed( 162 );
	}
	return 0;
}

bool menu_down_pressed( bool do_hold )
{
	if ( (is_disabled_control_just_pressed( 2, 161 ) || menu_is_hold_pressed( 161 )) )
	{
		Static_14 = 1;
		return 1;
	}
	if ( do_hold )
	{
		menu_do_hold_pressed( 161 );
	}
	return 0;
}

bool menu_left_pressed( bool do_hold )
{
	if ( (is_disabled_control_just_pressed( 2, 163 ) || menu_is_hold_pressed( 163 )) )
	{
		Static_14 = 1;
		return 1;
	}
	if ( do_hold )
	{
		menu_do_hold_pressed( 163 );
	}
	return 0;
}

bool menu_right_pressed( bool do_hold )
{
	if ( (is_disabled_control_just_pressed( 2, 164 ) || menu_is_hold_pressed( 164 )) )
	{
		Static_14 = 1;
		return 1;
	}
	if ( do_hold )
	{
		menu_do_hold_pressed( 164 );
	}
	return 0;
}

void menu_load_sprite()
{
	if ( ! (Static_27 ) )
	{
		request_streamed_texture_dict( "CommonMenu", 0 );
		if ( has_streamed_texture_dict_loaded( "CommonMenu" ) )
		{
			Static_27 = 1;
		}
	}
}

void menu_set_frontend()
{
	if ( ! (Static_45 ) )
	{
		Static_45 = 1;
		menu_addItem_frontend( 30, "ITEM_SELECT" );
		if ( menu_get_current_level() != 0 )
		{
			menu_addItem_frontend( 31, "ITEM_BACK" );
		}
		else
		{
			menu_addItem_frontend( 31, "ITEM_EXIT" );
		}
	}
}

void menu_draw_frontend()
{
	int var_0;
	int var_1;
	int var_2;
	if ( has_scaleform_movie_loaded( Static_12 ) )
	{
		if ( Static_13 )
		{
			unk_0x215ABBE8( Static_12, "CLEAR_ALL" );
			unk_0x02DBF2D7();
			unk_0x215ABBE8( Static_12, "SET_MAX_WIDTH" );
			unk_0x9A01FFDA( 100f );
			unk_0x02DBF2D7();
			var_1 = 0;
			var_2 = Static_46 + 1;
			while ( var_1 < var_2 )
			{
				unk_0x215ABBE8( Static_12, "SET_DATA_SLOT" );
				unk_0x716777CB( var_1 );
				unk_0x716777CB( Static_47[var_1] );
				if ( does_text_label_exist( Static_54[var_1] ) )
				{
					clear_player_has_2_characters_enable( Static_54[var_1] );
				}
				else
				{
					clear_player_has_2_characters_enable( "STRING" );
					unk_0x27A244D8( Static_54[var_1] );
				}
				add_text_component_integer( -1 );
				unk_0x386CE0B8();
				unk_0x02DBF2D7();
				var_1++;
			}
			menu_draw_frontend_hook();
			unk_0x215ABBE8( Static_12, "SET_BACKGROUND_COLOUR" );
			unk_0x716777CB( 0 );
			unk_0x716777CB( 0 );
			unk_0x716777CB( 0 );
			unk_0x716777CB( 80 );
			unk_0x02DBF2D7();
			unk_0x215ABBE8( Static_12, "DRAW_INSTRUCTIONAL_BUTTONS" );
			unk_0x716777CB( 0 );
			unk_0x02DBF2D7();
			unk_0x228A2598( 76, 66 );
			unk_0x76C641E4( 0.0f, 0.0f, 0.0f, 0.0f );
			unk_0x3FE33BD6();
			unk_0x7B48E696( Static_12, 255, 255, 255, 255 );
		}
	}
	else
	{
		Static_12 = request_scaleform_movie( "instructional_buttons" );
		Static_13 = 1;
	}
}

void menu_draw_number_add( int item_id, float cur_menu_y )
{
	char* string_add;

	string_add = menu_add_int_to_string( Static_276[item_id], Static_72[item_id] );
	_set_text_entry( "STRING" );
	unk_0x27A244D8( string_add );
	_draw_text( Static_3, cur_menu_y );
	return;
}

void menu_draw_gxt_number_add( int item_id, float cur_menu_y )
{
	char* string_add;

	string_add = menu_add_int_to_string( Static_276[item_id], Static_72[item_id] );
	_set_text_entry( string_add );
	_draw_text( Static_3, cur_menu_y );
}

void menu_draw_gxt_number2_add( int item_id, float cur_menu_y )
{
	char* string_add;

	string_add = menu_add_int_to_string2( Static_276[item_id], Static_72[item_id] );
	_set_text_entry( string_add );
	_draw_text( Static_3, cur_menu_y );
}

void menu_draw()
{
	uint var_1;
	float var_2;
	float var_3;
	float var_4;
	float var_5;
	float var_6;
	uint var_7;
	char* var_8;
	char* var_9;
	uint var_10;
	uint var_11;
	uint var_12;
	uint var_13;
	uint var_14;
	uint var_15;
	uint var_16;
	uint var_17;
	uint var_18;
	uint var_19;
	uint var_20;
	uint var_21;
	uint var_22;
	uint var_23;
	uint var_24;
	uint var_25;
	float var_26;
	Vector3 var_27;
	int var_31;
	float var_32;
	var_1 = 0;
	var_2 = Static_20;
	var_3 = var_2;
	var_4 = 0.05f;
	var_5 = var_4;
	var_6 = Static_22;
	var_7 = menu_get_count() + 1;
	var_8 = Static_430;
	var_9 = Static_431;
	var_10 = 240;
	var_11 = 240;
	var_12 = 240;
	var_19 = 255;
	//get_hud_colour( 1, &var_10, &var_11, &var_12, &var_19 );
	var_20 = 1280;
	var_21 = 720;
	//get_screen_resolution( &var_20, &var_21 );
	var_13 = 0;
	var_14 = 0;
	var_15 = 0;
	set_up_draw( Static_433, 0.0f, 0.35f, var_10, var_11, var_12, 1.0f, 0, 0 );
	draw_string( Static_10, Static_3, 0.05416665f );
	if ( menu_get_count() > Static_24 )
	{
		set_up_draw( Static_433, 0.0f, 0.35f, var_10, var_11, var_12, Static_3 + 0.215625f, 1, 0 );
		draw_item_count( menu_get_current_item() + 1, menu_get_count() + 1, 0.0f, 0.05416665f );
	}
	while ( var_1 < var_7 )
	{
		var_3 += var_6;
		if ( var_1 <= Static_23 )
		{
			if ( var_3 > Static_21 + 0.0100f )
			{
				var_16 = var_10;
				var_17 = var_11;
				var_18 = var_12;
				var_5 += var_6;
				if ( menu_get_current_item() == var_1 )
				{
					menu_draw_rect( Static_3 - 0.0046875f, var_5, 0.225f, var_6, 240, 240, 240, 255 );
					var_16 = var_13;
					var_17 = var_14;
					var_18 = var_15;
				}
				if ( Static_123[var_1] == 5 )
				{
					set_up_draw( Static_433, 0.0f, 0.35f, var_16, var_17, var_18, 1.0f, 0, 0 );
					draw_string_gxt( get_display_name_from_vehicle_model( Static_174[var_1] ), Static_3, var_3 );
				}
				else if ( Static_123[var_1] == 6 )
				{
					set_up_draw( Static_433, 0.0f, 0.35f, var_16, var_17, var_18, 1.0f, 0, 0 );
					draw_string( Static_72[var_1], Static_3, var_3 );
					set_up_draw( Static_433, 0.0f, 0.35f, var_16, var_17, var_18, Static_3 + 0.203125f, 1, 0 );
					draw_string( Static_276[var_1], 0.0f, var_3 );
				}
				else if ( Static_123[var_1] == 8 )
				{
					set_up_draw( Static_433, 0.0f, 0.35f, var_16, var_17, var_18, 1.0f, 0, 0 );
					menu_draw_number_add( var_1, var_3 );
				}
				else if ( Static_123[var_1] == 9 )
				{
					set_up_draw( Static_433, 0.0f, 0.35f, var_16, var_17, var_18, 1.0f, 0, 0 );
					menu_draw_gxt_number_add( var_1, var_3 );
				}
				else if ( Static_123[var_1] == 10 )
				{
					set_up_draw( Static_433, 0.0f, 0.35f, var_16, var_17, var_18, 1.0f, 0, 0 );
					menu_draw_gxt_number2_add( var_1, var_3 );
				}
				else if ( Static_123[var_1] == 11 )
				{
					set_up_draw( Static_433, 0.0f, 0.35f, var_16, var_17, var_18, 1.0f, 0, 0 );
					draw_number_gxt( Static_72[var_1], Static_276[var_1], Static_3, var_3 );
				}
				else
				{
					set_up_draw( Static_433, 0.0f, 0.35f, var_16, var_17, var_18, 1.0f, 0, 0 );
					draw_string( Static_72[var_1], Static_3, var_3 );
				}
				if ( ( ( ( ( (Static_123[var_1] == 1 || Static_123[var_1] == 2) || Static_123[var_1] == 7) || Static_123[var_1] == 12) || Static_123[var_1] == 13) || Static_123[var_1] == 14) )
				{
					set_up_draw( Static_433, 0.0f, 0.35f, var_16, var_17, var_18, Static_3 + 0.203125f, 1, 0 );
					if ( (Static_123[var_1] == 2 || Static_123[var_1] == 12) )
					{
						unk_0x51E7A037( "NUMBER" );
						add_text_component_float( Static_276[var_1], Static_432 );
						var_26 = unk_0xD12A643A( 1 ) + 0.00859375f;
						set_up_draw( Static_433, 0.0f, 0.35f, var_16, var_17, var_18, Static_3 + 0.203125f, 1, 0 );
						draw_float( Static_276[var_1], 0.0f, var_3 );
					}
					else
					{
						if ( (Static_123[var_1] == 13 || Static_123[var_1] == 14) )
						{
							unk_0x51E7A037( "ESDOLLA" );
							unk_0x12929BDF( Static_276[var_1], 1 );
							var_26 = unk_0xD12A643A( 1 ) + 0.00859375f;
							set_up_draw( Static_433, 0.0f, 0.35f, var_16, var_17, var_18, Static_3 + 0.203125f, 1, 0 );
							draw_number_format( Static_276[var_1], 0.0f, var_3 );
						}
						else
						{
							unk_0x51E7A037( "NUMBER" );
							add_text_component_integer( Static_276[var_1] );
							var_26 = unk_0xD12A643A( 1 ) + 0.00859375f;
							set_up_draw( Static_433, 0.0f, 0.35f, var_16, var_17, var_18, Static_3 + 0.203125f, 1, 0 );
							draw_number( Static_276[var_1], 0.0f, var_3 );
						}
					}
					if ( Static_27 )
					{
						if ( menu_get_current_item() == var_1 )
						{
							var_22 = 0;
							var_23 = 0;
							var_24 = 0;
							var_25 = 255;
							//get_hud_colour( 2, &var_22, &var_23, &var_24, &var_25 );
							var_27 = get_texture_resolution( "CommonMenu", "arrowleft" );
							draw_sprite( "CommonMenu", "arrowleft", Static_3 - 0.0046875f - var_26 + 0.425f * 0.5f, var_3 - 0.00277776f + Static_22 * 0.5f, var_27 / IntToFloat( var_20 ), var_27.Imm[1] / IntToFloat( var_21 ), 0.0f, var_22, var_23, var_24, var_25 );
							var_27 = get_texture_resolution( "CommonMenu", "arrowright" );
							draw_sprite( "CommonMenu", "arrowright", Static_3 - 0.0046875f + 0.425f * 0.5f, var_3 - 0.00277776f + Static_22 * 0.5f, var_27 / IntToFloat( var_20 ), var_27.Imm[1] / IntToFloat( var_21 ), 0.0f, var_22, var_23, var_24, var_25 );
						}
					}
				}
				else if ( Static_123[var_1] == 3 )
				{
					set_up_draw( Static_433, 0.0f, 0.35f, var_16, var_17, var_18, Static_3 + 0.203125f, 1, 0 );
					if ( ! (Static_174[var_1] ) )
					{
						draw_string( var_8, 0.0f, var_3 );
					}
					else
					{
						draw_string( var_9, 0.0f, var_3 );
					}
				}
			}
		}
		var_1++;
	}
	if ( Static_27 )
	{
		if ( menu_get_count() > Static_24 )
		{
			var_22 = 240;
			var_23 = 240;
			var_24 = 240;
			var_25 = 255;
			//get_hud_colour( 1, &var_22, &var_23, &var_24, &var_25 );
			var_31 = Static_24 + 2;
			var_32 = Static_22 * IntToFloat( var_31 );
			var_27 = { get_texture_resolution( "CommonMenu", "shop_arrows_upANDdown" ){3} } {3};
			draw_sprite( "CommonMenu", "shop_arrows_upANDdown", Static_3 - 0.0046875f + 0.225f * 0.5f, var_32 + 0.04999922f + Static_22 * 0.5f, var_27 / IntToFloat( var_20 ), var_27.Imm[1] / IntToFloat( var_21 ), 0.0f, var_22, var_23, var_24, var_25 );
		}
	}
}

void draw_item_count( int num_val, int num_val2, float x, float y )
{
	_set_text_entry( "CM_ITEM_COUNT" );
	add_text_component_integer( num_val );
	add_text_component_integer( num_val2 );
	_draw_text( x, y );
}

void draw_number( int num_val, float x, float y )
{
	_set_text_entry( "NUMBER" );
	add_text_component_integer( num_val );
	_draw_text( x, y );
}

void draw_number_format( int num_val, float x, float y )
{
	_set_text_entry( "ESDOLLA" );
	unk_0x12929BDF( num_val, 1 );
	_draw_text( x, y );
}

void draw_float( float float_val,  float x, float y )
{
	_set_text_entry( "NUMBER" );
	add_text_component_float( float_val, Static_432 );
	_draw_text( x, y );
}

void draw_string( char* string_val, float x, float y )
{
	if ( does_text_label_exist( string_val ) )
	{
		_set_text_entry( string_val );
	}
	else
	{
		_set_text_entry( "STRING" );
		unk_0x27A244D8( string_val );
	}
	_draw_text( x, y );
}

void draw_string_gxt( char* gxt, float x, float y )
{
	_set_text_entry( gxt );
	_draw_text( x, y );
}

void draw_number_gxt( char* gxt, char* string_val, float x, float y )
{
	_set_text_entry( gxt );
	add_text_component_integer( string_val );
	_draw_text( x, y );
}

void set_up_draw( uint font, float scale1, float scale2, uint r, uint g, uint b, float wrap, bool right, bool centre )
{
	set_text_font( font );
	set_text_scale( scale1, scale2 );
	set_text_colour( r, g, b, 255 );
	set_text_wrap( 0.0f, wrap );
	set_text_right_justify( right );
	set_text_centre( centre );
	set_text_dropshadow( 0, 0, 0, 0, 0 );
	set_text_edge( 0, 0, 0, 0, 0 );
}