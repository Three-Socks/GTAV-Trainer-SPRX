#include "main.h"

int menu_get_current_item()
{
	return menu_item_highlighted;
}

int menu_get_count()
{
	return menu_count;
}

bool menu_get_open_state()
{
	if ( !is_pause_menu_active() )
	{
		return menu_hidden;
	}
	return 0;
}

void menu_set_open_state( bool state )
{
	menu_hidden = state;
}

int menu_get_action_mode()
{
	return menu_action_mode;
}

void menu_set_action_mode( int action_mode )
{
	menu_action_mode = action_mode;
}

int menu_get_sub_action_mode()
{
	return menu_sub_action_mode;
}

void menu_set_sub_action_mode( int sub_action_mode )
{
	menu_sub_action_mode = sub_action_mode;
}

bool menu_get_continue_action()
{
	return menu_continue_action;
}

void menu_set_continue_action( bool state )
{
	menu_continue_action = state;
}

int menu_get_current_level()
{
	return menu_level;
}

int menu_get_last_selected( int menu_level )
{
	return last_selected[menu_level];
}

int menu_get_current_stored_data()
{
	return menu_stored_data[menu_get_current_item()];
}

int menu_get_stored_data( int menu_item )
{
	return menu_stored_data[menu_item];
}

void menu_set_stored_data( int store_data )
{
	if (!menu_get_action_mode())
		menu_stored_data[menu_get_count()] = store_data;
}

void menu_clean_stored_data()
{
	if (!menu_get_action_mode())
	{
		int clean_stored_index;
		int clean_stored_count;
		clean_stored_index = 0;
		clean_stored_count = menu_get_count() + 1;
		while ( clean_stored_index < clean_stored_count )
		{
			menu_stored_data[clean_stored_index] = 0;
			clean_stored_index++;
		}
	}
}

void menu_set_title( char* menu_title )
{
	if ( ! (menu_get_action_mode() ) )
	{
		menu_header = menu_title;
	}
}

void menu_set_bool_strings(char* bool_string_off, char* bool_string_on )
{
	custom_bool_string_off = bool_string_off;
	custom_bool_string_on = bool_string_on;
}

void menu_set_float_dp( int float_dp )
{
	custom_float_dp = float_dp;
}

void menu_set_font( int font )
{
	custom_font = font;
}

void menu_set_menu_align( bool align )
{
	menu_align = align;
}

void menu_set_sfx( bool state )
{
	menu_sfx = state;
}

void menu_addItem(char* menu_item_string )
{
	if ( !menu_get_action_mode() )
	{
		menu_count = menu_get_count() + 1;
		menu_items_name[menu_get_count()] = menu_item_string;
	}
}

void menu_addItem_add_number( char* menu_item_string, int num_val )
{
	if ( ! (menu_get_action_mode() ) )
	{
		menu_count = menu_get_count() + 1;
		menu_items_type[menu_get_count()] = 8;
		menu_items_name[menu_get_count()] = menu_item_string;
		menu_items_int[menu_get_count()] = num_val;
	}
}

void menu_addItem_gxt_add_number( char* gxt, int num_val )
{
	if ( ! (menu_get_action_mode() ) )
	{
		menu_count = menu_get_count() + 1;
		menu_items_type[menu_get_count()] = 9;
		menu_items_name[menu_get_count()] = gxt;
		menu_items_int[menu_get_count()] = num_val;
	}
}

void menu_addItem_gxt_add_number2( char* gxt, int num_val )
{
	if ( ! (menu_get_action_mode() ) )
	{
		menu_count = menu_get_count() + 1;
		menu_items_type[menu_get_count()] = 10;
		menu_items_name[menu_get_count()] = gxt;
		menu_items_int[menu_get_count()] = num_val;
	}
}

void menu_addItem_gxt_number( char* gxt, int num_val )
{
	if ( ! (menu_get_action_mode() ) )
	{
		menu_count = menu_get_count() + 1;
		menu_items_type[menu_get_count()] = 11;
		menu_items_name[menu_get_count()] = gxt;
		menu_items_int[menu_get_count()] = num_val;
	}
}

void menu_addItem_number(int num_val, int max)
{
	if (!menu_get_action_mode())
	{
		menu_items_type[menu_get_count()] = 1;
		menu_items_int[menu_get_count()] = num_val;
		menu_items_extra_int[menu_get_count()] = max;
	}
}

void menu_addItem_number_format( int num_val, int max )
{
	if ( ! (menu_get_action_mode() ) )
	{
		menu_items_type[menu_get_count()] = 13;
		menu_items_int[menu_get_count()] = num_val;
		menu_items_extra_int[menu_get_count()] = max;
	}
}

void menu_add_string(char* string_val)
{
	if (!menu_get_action_mode())
		menu_items_extra_string[menu_get_count()] = string_val;
}

void menu_set_string(int menu_item, char* string_val)
{
	menu_items_extra_string[menu_item] = string_val;
}

char* menu_get_current_string()
{
	return menu_items_extra_string[menu_get_current_item()];
}

char* menu_get_string( int menu_item )
{
	return menu_items_extra_string[menu_item];
}

void menu_add_number( int num_val )
{
	if ( ! (menu_get_action_mode() ) )
	{
		menu_items_int[menu_get_count()] = num_val;
	}
}

void menu_set_number( int menu_item, int num_val )
{
	menu_items_int[menu_item] = num_val;
}

int menu_get_current_number()
{
	return menu_items_int[menu_get_current_item()];
}

int menu_get_number( int menu_item )
{
	return menu_items_int[menu_item];
}

void menu_addItem_float( float float_val)
{
	if ( ! (menu_get_action_mode() ) )
	{
		menu_items_type[menu_get_count()] = 2;
		menu_items_float[menu_get_count()] = float_val;
	}
}

float menu_get_current_float()
{
	return menu_items_float[menu_get_current_item()];
}

void menu_add_data_2( int data_2 )
{
	if ( ! (menu_get_action_mode() ) )
	{
		menu_items_float[menu_get_count()] = data_2;
	}
}

int menu_get_current_data_2()
{
	return menu_items_float[menu_get_current_item()];
}

void menu_addItem_bool( bool state )
{
	if ( ! (menu_get_action_mode() ) )
	{
		menu_items_type[menu_get_count()] = 3;
		menu_items_extra_int[menu_get_count()] = state;
	}
}

void menu_set_current_bool( bool state )
{
	menu_items_extra_int[menu_get_current_item()] = state;
}

void menu_set_bool( int menu_item, bool state )
{
	menu_items_extra_int[menu_item] = state;
}

void menu_toggle_bool( int menu_item )
{
	menu_items_extra_int[menu_item] = !menu_get_current_bool();
	return;
}

void menu_toggle_current_bool()
{
	menu_items_extra_int[menu_get_current_item()] = !menu_get_current_bool();
	return;
}

bool menu_get_current_bool()
{
	return menu_items_extra_int[menu_get_current_item()];
}

bool menu_get_bool( int menu_item )
{
	return menu_items_extra_int[menu_item];
}

void menu_addItem_gxt_veh_hash( int hash )
{
	if ( ! (menu_get_action_mode() ) )
	{
		menu_count = menu_get_count() + 1;
		menu_items_extra_int[menu_get_count()] = hash;
		menu_items_type[menu_get_count()] = 5;
	}
}

void menu_addItem_keyboard(char* string_val, int keyboard_len)
{
	if (!menu_get_action_mode())
	{
		menu_items_type[menu_get_count()] = 6;
		menu_items_extra_string[menu_get_count()] = string_val;
		menu_keyboard_custom_length = keyboard_len;
	}
}

void menu_addItem_number_keyboard(int int_val, int max, int keyboard_len)
{
	if (!menu_get_action_mode())
	{
		menu_items_type[menu_get_count()] = 7;
		menu_items_int[menu_get_count()] = int_val;
		menu_items_extra_int[menu_get_count()] = max;
		menu_keyboard_custom_length = keyboard_len;
	}
}

void menu_addItem_number_format_keyboard(float float_val, int keyboard_len)
{
	if (!menu_get_action_mode())
	{
		menu_items_type[menu_get_count()] = 14;
		menu_items_float[menu_get_count()] = float_val;
		menu_keyboard_custom_length = keyboard_len;
	}
}

void menu_addItem_float_keyboard(float float_val, int keyboard_len)
{
	if (!menu_get_action_mode())
	{
		menu_items_type[menu_get_count()] = 12;
		menu_items_float[menu_get_count()] = float_val;
		menu_keyboard_custom_length = keyboard_len;
	}
}

char* menu_get_current_keyboard()
{
	return menu_items_extra_string[menu_get_current_item()];
}

int menu_get_current_extra()
{
	return menu_items_extra_int[menu_get_current_item()];
}

void menu_add_extra( int extra_val )
{
	if (!menu_get_action_mode())
		menu_items_extra_int[menu_get_count()] = extra_val;
}

int menu_get_extra( int menu_item )
{
	return menu_items_extra_int[menu_item];
}

void menu_addItem_callback(char* menu_item_string, CallbackType action_func)
{
	if (!menu_get_action_mode())
	{
		menu_count = menu_get_count() + 1;
		menu_items_name[menu_get_count()] = menu_item_string;
		menu_items_action[menu_get_count()] = action_func;
	}
}

void menu_add_callback_all(CallbackType action_func)
{
	if (!menu_get_action_mode())
	{
		int callback_all_index;
		int callback_all_count;
		callback_all_index = 0;
		callback_all_count = menu_get_count() + 1;
		while ( callback_all_index < callback_all_count )
		{
			menu_items_action[callback_all_index] = action_func;
			callback_all_index++;
		}
	}
}

void menu_addItem_frontend( int button_id, char* string_val )
{
	if ( ! (menu_get_action_mode() ) )
	{
		frontend_count++;
		frontend_items_button[frontend_count] = button_id;
		frontend_items_name[frontend_count] = string_val;
	}
}

void menu_set_catch_button_id( int catch_id )
{
	if ( ! (menu_get_action_mode() ) )
	{
		menu_catch_button_id = catch_id;
	}
}

int menu_get_catch_button_id()
{
	return menu_catch_button_id;
}

void menu_draw_frontend_hook()
{
	int i = frontend_count;
	if ( menu_items_type[menu_get_current_item()] == 6 || menu_items_type[menu_get_current_item()] == 7 || menu_items_type[menu_get_current_item()] == 12 || menu_items_type[menu_get_current_item()] == 14 )
	{
		i++;
		menu_add_frontend( i, 32, "Edit With Keyboard" );
		if ( menu_items_type[menu_get_current_item()] == 2 || menu_items_type[menu_get_current_item()] == 12 )
		{
			i++;
			menu_add_frontend( i, 36, "Increment Faster (Hold)" );
			i++;
			menu_add_frontend( i, 34, "Increment Slower (Hold)" );
		}
	}
}

void menu_add_frontend( int frontend_id, int button_id, char* string_val )
{
	_0x215ABBE8( instructional_buttons, "SET_DATA_SLOT" );
	_0x716777CB( frontend_id );
	_0x716777CB( button_id );
	if ( does_text_label_exist( string_val ) )
	{
		_0x3AC9CB55( string_val );
	}
	else
	{
		_0x3AC9CB55( "STRING" );
		_add_text_component_string( string_val );
	}
	add_text_component_integer( -1 );
	_0x386CE0B8();
	_0x02DBF2D7();
}

void menu_setup()
{
	if ( menu_align == 0 )
	{
		menu_x = 0.0546875f;
	}
	else
	{
		menu_x = 0.7546875f;
	}
	menu_item_highlighted = 0;
	menu_count = -1;
	menu_set_action_mode( 0 );
	menu_load_hold_pressed = 0;
	menu_level = 0;
	menu_set_title( "" );
	menu_items_set = false;
	press_counter = 2;
	press_counter_timesby = 1;
	menu_start_y = 0.0527f;
	menu_consts_start_y = menu_start_y;
	menu_spacing = 0.03472f;
	menu_max = 14;
	menu_consts_max = menu_max;
	menu_start_scrolling = 7;
	frontend_items_set = 0;
	frontend_count = -1;
	menu_set_bool_strings( "PIM_DHIGH0", "PIM_DHIGH1" );
	menu_set_float_dp( 4 );
	menu_set_font( 0 );
	menu_set_sfx( 1 );
}

void menu_modify_game_state()
{
	/*if ( ! (Global_13242.Imm[6183] ) )
	{
		menu_modify_game_state_globals();
	}
	Global_13242.Imm[4621] = get_game_timer();*/
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
}

/*void menu_modify_game_state_globals()
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
}

bool menu_get_mobile_globals( bool get_mobile_globals )
{
	if ( 1 == get_mobile_globals )
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
	if ( _0x029D3841( -754107665 ) > 0 )
	{
		return 1;
	}
	if ( Global_10433.Imm[1] > 3 )
	{
		return 1;
	}
	return 0;
}*/

void menu_action()
{
	char* keyboard_string;
	int keyboard_int;

	if (menu_get_action_mode() == 1)
	{
		menu_items_action[menu_get_current_item()]();
		if (menu_get_continue_action())
		{
			menu_set_action_mode(1);
			menu_set_continue_action(0);
		}
		else
		{
			menu_set_action_mode(0);
		}
	}
	else if (menu_get_action_mode() == 2)
	{
		menu_set_action_mode(0);
		menu_shutdown();
	}
	else if (menu_get_action_mode() == 3)
	{
		menu_set_action_mode(0);
		if (menu_items_type[menu_get_current_item()] == 6)
		{
			if (menu_keyboard("HTX_ENTER"))
			{
				if (!is_string_null_or_empty(get_onscreen_keyboard_result()))
				{
					if (get_length_of_literal_string(get_onscreen_keyboard_result()) <= 16)
					{
						menu_set_string(menu_get_current_item(), get_onscreen_keyboard_result());
						menu_set_action_mode(1);
					}
				}
			}
		}
		else
		{
			if (menu_items_type[menu_get_current_item()] == 7 || menu_items_type[menu_get_current_item()] == 14)
			{
				if (menu_keyboard("CELL_221"))
				{
					if (!is_string_null_or_empty(get_onscreen_keyboard_result()))
					{
						keyboard_string = strcpy(keyboard_string, get_onscreen_keyboard_result());
						if (string_to_int(&keyboard_string, &keyboard_int))
						{
							menu_set_number(menu_get_current_item(), keyboard_int);
						}
					}
				}
			}
			else if (menu_items_type[menu_get_current_item()] == 12)
			{
				if (menu_keyboard("CELL_221"))
				{
					if (!is_string_null_or_empty(get_onscreen_keyboard_result()))
					{
						keyboard_string = strcpy(keyboard_string, get_onscreen_keyboard_result());
						if (string_to_int(&keyboard_string, &keyboard_int))
						{
							menu_items_float[menu_get_current_item()] = to_float(keyboard_int);
						}
					}
				}
			}
		}
	}
}

void menu_reverse_game_state()
{
	set_ped_using_action_mode( player_ped_id(), 0, -1, 0 );
	set_cinematic_button_active( 1 );
}

void menu_shutdown()
{
	menu_reverse_game_state();
	scaleform_requested = 0;
	set_scaleform_movie_as_no_longer_needed( &instructional_buttons );
	menu_texture_loaded = 0;
	set_streamed_texture_dict_as_no_longer_needed( "CommonMenu" );
	project_close();
}

void menu_catch_button_press()
{
	int catch_button_menu_count;
	int catch_start_scolling;
	int i;
	float float_change;
	catch_button_menu_count = menu_get_count();
	catch_start_scolling = catch_button_menu_count - menu_start_scrolling;
	if ( menu_down_pressed( 1 ) )
	{
		menu_play_sound( "NAV_UP_DOWN" );
		if ( menu_get_current_item() < catch_button_menu_count )
		{
			menu_item_highlighted = menu_get_current_item() + 1;
			if ( catch_button_menu_count > menu_consts_max )
			{
				if ( menu_get_current_item() < catch_start_scolling + 1 )
				{
					if ( menu_get_current_item() > menu_start_scrolling )
					{
						menu_start_y -= menu_spacing;
						menu_max++;
					}
				}
			}
		}
		else
		{
			menu_start_y = menu_consts_start_y;
			menu_max = menu_consts_max;
			menu_item_highlighted = 0;
		}
	}
	else if ( menu_up_pressed( 1 ) )
	{
		menu_play_sound( "NAV_UP_DOWN" );
		if ( menu_get_current_item() > 0 )
		{
			menu_item_highlighted = menu_get_current_item() - 1;
			if ( catch_button_menu_count > menu_consts_max )
			{
				if ( menu_get_current_item() < catch_start_scolling )
				{
					if ( menu_get_current_item() > menu_start_scrolling - 1 )
					{
						menu_start_y += menu_spacing;
						menu_max--;
					}
				}
			}
		}
		else if ( menu_get_count() > menu_consts_max )
		{
			i = menu_start_scrolling;
			while ( i <= menu_get_count() )
			{
				if ( i >= catch_start_scolling )
					break;

				menu_start_y -= menu_spacing;
				menu_max++;
				i++;
			}
			menu_item_highlighted = catch_button_menu_count;
		}
		else
		{
			menu_item_highlighted = catch_button_menu_count;
		}
	}
	else if ( menu_left_pressed( 1 ) )
	{
		if ( menu_items_type[menu_get_current_item()] == 1 || menu_items_type[menu_get_current_item()] == 7 || menu_items_type[menu_get_current_item()] == 13 || menu_items_type[menu_get_current_item()] == 14 )
		{
			if ( menu_items_int[menu_get_current_item()] != 0 )
				menu_items_int[menu_get_current_item()]--;
			else
				menu_items_int[menu_get_current_item()] = 0;
			menu_play_sound( "NAV_LEFT_RIGHT" );
		}
		else
		{
			if ( menu_items_type[menu_get_current_item()] == 2 || menu_items_type[menu_get_current_item()] == 12 )
			{
				float_change = 0.010f;
				if ( is_control_pressed( 2, 178 ) )
				{
					float_change = 0.001f;
				}
				if ( is_control_pressed( 2, 179 ) )
				{
					float_change = 0.100f;
				}
				menu_items_float[menu_get_current_item()] -= float_change;
				menu_play_sound( "NAV_LEFT_RIGHT" );
			}
		}
	}
	else if ( menu_right_pressed( 1 ) )
	{
		if ( menu_items_type[menu_get_current_item()] == 1 || menu_items_type[menu_get_current_item()] == 7 || menu_items_type[menu_get_current_item()] == 13 || menu_items_type[menu_get_current_item()] == 14 )
		{
			if ( menu_items_extra_int[menu_get_current_item()] != menu_items_int[menu_get_current_item()] )
				menu_items_int[menu_get_current_item()]++;
			else
				menu_items_int[menu_get_current_item()] = 0;
			menu_play_sound( "NAV_LEFT_RIGHT" );
		}
		else
		{
			if ( menu_items_type[menu_get_current_item()] == 2 || menu_items_type[menu_get_current_item()] == 12 )
			{
				float_change = 0.010f;
				if ( is_control_pressed( 2, 178 ) )
				{
					float_change = 0.001f;
				}
				if ( is_control_pressed( 2, 179 ) )
				{
					float_change = 0.100f;
				}
				menu_items_float[menu_get_current_item()] += float_change;
				menu_play_sound( "NAV_LEFT_RIGHT" );
			}
		}
	}
	if ( reset_counter )
	{
		press_counter = 2;
		reset_counter = 0;
	}
}

void menu_set_last_selected()
{
	int i;
	int set_last_menu_count;
	if ( menu_get_last_selected( menu_get_current_level() ) <= menu_get_count() )
	{
		menu_item_highlighted = menu_get_last_selected( menu_get_current_level() );
	}
	else
	{
		menu_item_highlighted = menu_get_count();
	}
	last_selected[menu_get_current_level()] = 0;
	if ( menu_get_count() > menu_consts_max )
	{
		if ( menu_get_current_item() > menu_start_scrolling )
		{
			i = menu_start_scrolling + 1;
			set_last_menu_count = menu_get_count() - menu_start_scrolling;
			while ( i <= menu_get_current_item() )
			{
				if ( !( i < set_last_menu_count + 1 ) )
				{
					break;
				}
				menu_start_y -= menu_spacing;
				menu_max++;
				i++;
			}
		}
	}
}

void menu_catch_select_button_press()
{
	if ( is_disabled_control_just_pressed( 2, 174 ) )
	{
		if ( press_counter_timesby < 2 )
		{
			menu_play_sound( "SELECT" );
			if ( menu_items_action[menu_get_current_item()] == 0 )
			{
				menu_items_set = false;
				last_selected[menu_get_current_level()] = menu_get_current_item();
				menu_item_highlighted = 0;
				menu_clean();
				menu_level = menu_get_current_level() + 1;
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
			menu_items_set = false;
			menu_level = menu_get_current_level() - 1;
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
}

char* menu_add_int_to_string( int int_val, char* string_val )
{
	/*char string_int[16];
	
	strcpy( &string_int, "", 16 );
	strcpy( &string_int, string_val, 16 );
	sprintf(string_int,"%d", int_val);
	return menu_return_var( &string_int );*/
	return "";
}

char* menu_add_int_to_string2( int int_val, char* string_val )
{
	/*char string_int[16];
	
	strcpy( &string_int, string_val, 16 );
	if ( int_val < 10 )
	{
		strcat( &string_int, "0", 16 );
	}
	sprintf(string_int,"%d", int_val);
	return menu_return_var( &string_int );*/
	return "";
}

char* menu_return_var( char* return_this )
{
	return return_this;
}

void menu_play_sound( char* sound_name )
{
	if ( menu_sfx )
	{
		play_sound_frontend( -1, sound_name, "HUD_FRONTEND_DEFAULT_SOUNDSET" );
	}
}

bool menu_keyboard( char* keyboard_title )
{
	char* keyboard_title1;
	char* keyboard_title2;
	char* keyboard_current;

	menu_set_action_mode( 3 );
	switch( menu_get_sub_action_mode() )
	{
		case 0:
		keyboard_title1 = keyboard_title;
		keyboard_title2 = "";
		if ( is_xbox360_version() )
		{
			keyboard_title2 = keyboard_title1;
		}
		menu_set_sub_action_mode( 1 );
		if ( menu_keyboard_custom_length == 0 )
		{
			menu_keyboard_custom_length = 3;
		}
		if ( menu_items_type[menu_get_current_item()] == 6 )
		{
			keyboard_current = menu_get_current_keyboard();
			if (!is_string_null_or_empty(keyboard_current))
			{
				display_onscreen_keyboard( 0, keyboard_title1, keyboard_title2, keyboard_current, "", "", "", menu_keyboard_custom_length + 1 );
				break;
			}
		}
		display_onscreen_keyboard( 0, keyboard_title1, keyboard_title2, "", "", "", "", menu_keyboard_custom_length + 1 );
		break;
		
		case 1:
		menu_keyboard_update = update_onscreen_keyboard();
		switch( menu_keyboard_update )
		{
			case 0:
			return 0;
			
			case 3:
			menu_set_action_mode( 0 );
			menu_set_sub_action_mode( 0 );
			menu_keyboard_update = 0;
			return 0;
			
			case 2:
			menu_set_action_mode( 0 );
			menu_set_sub_action_mode( 0 );
			menu_keyboard_update = 0;
			return 0;
			
			case 1:
			menu_set_action_mode( 0 );
			menu_set_sub_action_mode( 0 );
			menu_keyboard_update = 0;
			return 1;
			
		}
		break;
		
	}
	return 0;
}

void menu_msg( char* string_val )
{
	_0x574EE85C( "STRING" );
	_add_text_component_string( string_val );
	_0x08F7AF78( 0, 1 );
}

void menu_error( char* string_val, int menu_level_back )
{
	if ( menu_level_back >= 1 )
	{
		menu_error_back( menu_level_back );
	}
	_0x574EE85C( "STRING" );
	_add_text_component_string( string_val );
	_0x08F7AF78( 0, 1 );
}

void menu_error_gxt( char* gxt, int menu_level_back )
{
	if ( menu_level_back >= 1 )
	{
		menu_error_back( menu_level_back );
	}
	_0x574EE85C( gxt );
	_0x08F7AF78( 0, 1 );
}

void menu_error_2_strings( char* string_val, char* string_val2, int menu_level_back )
{
	if ( menu_level_back >= 1 )
	{
		menu_error_back( menu_level_back );
	}
	_0x574EE85C( "TWOSTRINGS" );
	_add_text_component_string( string_val );
	_add_text_component_string( string_val2 );
	_0x08F7AF78( 0, 1 );
}

void menu_error_2_strings_gxt( char* string_val, char* gxt, int menu_level_back )
{
	if ( menu_level_back >= 1 )
	{
		menu_error_back( menu_level_back );
	}
	_0x574EE85C( "TWOSTRINGS" );
	_add_text_component_string( string_val );
	_0xDCE05406( gxt );
	_0x08F7AF78( 0, 1 );
}

void menu_error_back( int menu_level_back )
{
	menu_items_set = false;
	frontend_items_set = 0;
	menu_clean();
	menu_level = menu_get_current_level() - menu_level_back;
	menu_item_highlighted = menu_get_last_selected( menu_get_current_level() );
	menu_set();
	menu_set_frontend();
}

void menu_frontend_clean()
{
	frontend_items_set = 0;
	frontend_count = -1;
}

void menu_clean()
{
	int clean_index;
	int clean_menu_count;
	clean_index = 0;
	clean_menu_count = menu_get_count() + 1;
	while ( clean_index < clean_menu_count )
	{
		menu_items_name[clean_index] = "";
		menu_items_type[clean_index] = 0;
		menu_items_extra_int[clean_index] = 0;
		menu_items_action[clean_index] = 0;
		menu_items_int[clean_index] = 0;
		menu_items_float[clean_index] = 0;
		clean_index++;
	}
	menu_start_y = menu_consts_start_y;
	menu_max = menu_consts_max;
	menu_count = -1;
	menu_set_action_mode( 0 );
	menu_set_sub_action_mode( 0 );
	menu_keyboard_update = 0;
	menu_keyboard_custom_length = 0;
	menu_catch_button_id = 0;
	menu_frontend_clean();
}

void menu_draw_window()
{
	int win_r;
	int win_g;
	int win_b;
	int win_a;
	int win_menu_count;
	float win_size;
	_0x228A2598( 76, 84 );
	_0x76C641E4( -0.05f, -0.05f, 0.0f, 0.0f );
	win_r = 0;
	win_g = 0;
	win_b = 0;
	win_a = 186;
	//get_hud_colour( 140, &var_0, &var_1, &var_2, &var_3 );
	if ( menu_get_count() > menu_consts_max )
	{
		win_menu_count = menu_consts_max + 1;
	}
	else
	{
		win_menu_count = menu_get_count() + 1;
	}
	win_size = menu_spacing * (float)( win_menu_count );
	menu_draw_rect( menu_x - 0.0046875f, 0.084722f, 0.225f, win_size, win_r, win_g, win_b, win_a );
	menu_draw_rect( menu_x - 0.0046875f, 0.04999922f, 0.225f, menu_spacing, 0, 0, 0, 204 );
	if ( menu_get_count() > menu_consts_max )
	{
		menu_draw_rect( menu_x - 0.0046875f, win_size + menu_spacing + 0.04999922f, 0.225f, menu_spacing, 0, 0, 0, 204 );
	}
}

void menu_draw_rect(float rect_x, float rect_y, float rect_size_x, float rect_size_y, int rect_r, int rect_g, int rect_b, int rect_a)
{
	draw_rect(rect_x + rect_size_x * 0.5f, rect_y + rect_size_y * 0.5f, rect_size_x, rect_size_y, rect_r, rect_g, rect_b, rect_a);
}

void menu_do_hold_pressed( int button_id )
{
	if ( is_disabled_control_pressed( 2, button_id ) )
	{
		press_id = button_id;
		if ( hold_counter > 8 )
		{
			press_counter_timesby++;
			hold_counter = 0;
		}
		hold_counter++;
		press_counter++;
		press_counter *= press_counter_timesby;
	}
	else if ( press_id == button_id )
	{
		press_counter_timesby = 1;
		hold_counter = 0;
	}
}

bool menu_is_hold_pressed( int button_id )
{
	if ( press_counter > 5 )
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
	if ( is_disabled_control_just_pressed( 2, 162 ) || menu_is_hold_pressed( 162 ) )
	{
		reset_counter = 1;
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
	if ( is_disabled_control_just_pressed( 2, 161 ) || menu_is_hold_pressed( 161 ) )
	{
		reset_counter = 1;
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
	if ( is_disabled_control_just_pressed( 2, 163 ) || menu_is_hold_pressed( 163 ) )
	{
		reset_counter = 1;
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
	if ( is_disabled_control_just_pressed( 2, 164 ) || menu_is_hold_pressed( 164 ) )
	{
		reset_counter = 1;
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
	if ( ! (menu_texture_loaded ) )
	{
		request_streamed_texture_dict( "CommonMenu", 0 );
		if ( has_streamed_texture_dict_loaded( "CommonMenu" ) )
		{
			menu_texture_loaded = 1;
		}
	}
}

void menu_set_frontend()
{
	if ( ! (frontend_items_set ) )
	{
		frontend_items_set = 1;
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
	int var_1;
	int var_2;
	if ( has_scaleform_movie_loaded( instructional_buttons ) )
	{
		if ( scaleform_requested )
		{
			_0x215ABBE8( instructional_buttons, "CLEAR_ALL" );
			_0x02DBF2D7();
			_0x215ABBE8( instructional_buttons, "SET_MAX_WIDTH" );
			_0x9A01FFDA( 100.0f );
			_0x02DBF2D7();
			var_1 = 0;
			var_2 = frontend_count + 1;
			while ( var_1 < var_2 )
			{
				_0x215ABBE8( instructional_buttons, "SET_DATA_SLOT" );
				_0x716777CB( var_1 );
				_0x716777CB( frontend_items_button[var_1] );
				if ( does_text_label_exist( frontend_items_name[var_1] ) )
				{
					_0x3AC9CB55( frontend_items_name[var_1] );
				}
				else
				{
					_0x3AC9CB55( "STRING" );
					_add_text_component_string( frontend_items_name[var_1] );
				}
				add_text_component_integer( -1 );
				_0x386CE0B8();
				_0x02DBF2D7();
				var_1++;
			}
			menu_draw_frontend_hook();
			_0x215ABBE8( instructional_buttons, "SET_BACKGROUND_COLOUR" );
			_0x716777CB( 0 );
			_0x716777CB( 0 );
			_0x716777CB( 0 );
			_0x716777CB( 80 );
			_0x02DBF2D7();
			_0x215ABBE8( instructional_buttons, "DRAW_INSTRUCTIONAL_BUTTONS" );
			_0x716777CB( 0 );
			_0x02DBF2D7();
			_0x228A2598( 76, 66 );
			_0x76C641E4( 0.0f, 0.0f, 0.0f, 0.0f );
			_0x3FE33BD6();
			_0x7B48E696( instructional_buttons, 255, 255, 255, 255 );
		}
	}
	else
	{
		instructional_buttons = request_scaleform_movie( "instructional_buttons" );
		scaleform_requested = 1;
	}
}

void menu_draw_number_add( int item_id, float cur_menu_y )
{
	char* string_add;

	string_add = menu_add_int_to_string( menu_items_int[item_id], menu_items_name[item_id] );
	_set_text_entry( "STRING" );
	_add_text_component_string( string_add );
	_draw_text( menu_x, cur_menu_y );
	return;
}

void menu_draw_gxt_number_add( int item_id, float cur_menu_y )
{
	char* string_add;

	string_add = menu_add_int_to_string( menu_items_int[item_id], menu_items_name[item_id] );
	_set_text_entry( string_add );
	_draw_text( menu_x, cur_menu_y );
}

void menu_draw_gxt_number2_add( int item_id, float cur_menu_y )
{
	char* string_add;

	string_add = menu_add_int_to_string2( menu_items_int[item_id], menu_items_name[item_id] );
	_set_text_entry( string_add );
	_draw_text( menu_x, cur_menu_y );
}

void menu_draw()
{
	int var_1;
	float var_2;
	float var_3;
	float var_4;
	float var_5;
	float var_6;
	int var_7;
	char* var_8;
	char* var_9;
	int var_10;
	int var_11;
	int var_12;
	int var_13;
	int var_14;
	int var_15;
	int var_16;
	int var_17;
	int var_18;
	//int var_19;
	int var_20;
	int var_21;
	int var_22;
	int var_23;
	int var_24;
	int var_25;
	float var_26;
	Vector3 var_27;
	int var_31;
	float var_32;
	var_1 = 0;
	var_2 = menu_start_y;
	var_3 = var_2;
	var_4 = 0.05f;
	var_5 = var_4;
	var_6 = menu_spacing;
	var_7 = menu_get_count() + 1;
	var_8 = custom_bool_string_off;
	var_9 = custom_bool_string_on;
	var_10 = 240;
	var_11 = 240;
	var_12 = 240;
	//var_19 = 255;
	//get_hud_colour( 1, &var_10, &var_11, &var_12, &var_19 );
	var_20 = 1280;
	var_21 = 720;
	//get_screen_resolution( &var_20, &var_21 );
	var_13 = 0;
	var_14 = 0;
	var_15 = 0;
	set_up_draw( custom_font, 0.0f, 0.35f, var_10, var_11, var_12, 1.0f, 0, 0 );
	draw_string( menu_header, menu_x, 0.05416665f );
	if ( menu_get_count() > menu_consts_max )
	{
		set_up_draw( custom_font, 0.0f, 0.35f, var_10, var_11, var_12, menu_x + 0.215625f, 1, 0 );
		draw_item_count( menu_get_current_item() + 1, menu_get_count() + 1, 0.0f, 0.05416665f );
	}
	while ( var_1 < var_7 )
	{
		var_3 += var_6;
		if ( var_1 <= menu_max )
		{
			if ( var_3 > menu_consts_start_y + 0.0100f )
			{
				var_16 = var_10;
				var_17 = var_11;
				var_18 = var_12;
				var_5 += var_6;
				if ( menu_get_current_item() == var_1 )
				{
					menu_draw_rect( menu_x - 0.0046875f, var_5, 0.225f, var_6, 240, 240, 240, 255 );
					var_16 = var_13;
					var_17 = var_14;
					var_18 = var_15;
				}
				if ( menu_items_type[var_1] == 5 )
				{
					set_up_draw( custom_font, 0.0f, 0.35f, var_16, var_17, var_18, 1.0f, 0, 0 );
					draw_string_gxt( get_display_name_from_vehicle_model( menu_items_extra_int[var_1] ), menu_x, var_3 );
				}
				else if ( menu_items_type[var_1] == 6 )
				{
					set_up_draw( custom_font, 0.0f, 0.35f, var_16, var_17, var_18, 1.0f, 0, 0 );
					draw_string( menu_items_name[var_1], menu_x, var_3 );
					set_up_draw( custom_font, 0.0f, 0.35f, var_16, var_17, var_18, menu_x + 0.203125f, 1, 0 );
					draw_string( menu_items_extra_string[var_1], 0.0f, var_3 );
				}
				else if ( menu_items_type[var_1] == 8 )
				{
					set_up_draw( custom_font, 0.0f, 0.35f, var_16, var_17, var_18, 1.0f, 0, 0 );
					menu_draw_number_add( var_1, var_3 );
				}
				else if ( menu_items_type[var_1] == 9 )
				{
					set_up_draw( custom_font, 0.0f, 0.35f, var_16, var_17, var_18, 1.0f, 0, 0 );
					menu_draw_gxt_number_add( var_1, var_3 );
				}
				else if ( menu_items_type[var_1] == 10 )
				{
					set_up_draw( custom_font, 0.0f, 0.35f, var_16, var_17, var_18, 1.0f, 0, 0 );
					menu_draw_gxt_number2_add( var_1, var_3 );
				}
				else if ( menu_items_type[var_1] == 11 )
				{
					//set_up_draw( custom_font, 0.0f, 0.35f, var_16, var_17, var_18, 1.0f, 0, 0 );
					//draw_number_gxt( menu_items_name[var_1], menu_items_int[var_1], menu_x, var_3 );
				}
				else
				{
					set_up_draw( custom_font, 0.0f, 0.35f, var_16, var_17, var_18, 1.0f, 0, 0 );
					draw_string( menu_items_name[var_1], menu_x, var_3 );
				}
				if ( menu_items_type[var_1] == 1 || menu_items_type[var_1] == 2 || menu_items_type[var_1] == 7 || menu_items_type[var_1] == 12 || menu_items_type[var_1] == 13 || menu_items_type[var_1] == 14 )
				{
					set_up_draw( custom_font, 0.0f, 0.35f, var_16, var_17, var_18, menu_x + 0.203125f, 1, 0 );
					if ( menu_items_type[var_1] == 2 || menu_items_type[var_1] == 12 )
					{
						_0x51E7A037( "NUMBER" );
						add_text_component_float( menu_items_float[var_1], custom_float_dp );
						var_26 = _0xD12A643A( 1 ) + 0.00859375f;
						set_up_draw( custom_font, 0.0f, 0.35f, var_16, var_17, var_18, menu_x + 0.203125f, 1, 0 );
						draw_float( menu_items_float[var_1], 0.0f, var_3 );
					}
					else
					{
						if ( menu_items_type[var_1] == 13 || menu_items_type[var_1] == 14 )
						{
							_0x51E7A037( "ESDOLLA" );
							_0x12929BDF( menu_items_int[var_1], 1 );
							var_26 = _0xD12A643A( 1 ) + 0.00859375f;
							set_up_draw( custom_font, 0.0f, 0.35f, var_16, var_17, var_18, menu_x + 0.203125f, 1, 0 );
							draw_number_format( menu_items_int[var_1], 0.0f, var_3 );
						}
						else
						{
							_0x51E7A037( "NUMBER" );
							add_text_component_integer( menu_items_int[var_1] );
							var_26 = _0xD12A643A( 1 ) + 0.00859375f;
							set_up_draw( custom_font, 0.0f, 0.35f, var_16, var_17, var_18, menu_x + 0.203125f, 1, 0 );
							draw_number( menu_items_int[var_1], 0.0f, var_3 );
						}
					}
					if ( menu_texture_loaded )
					{
						if ( menu_get_current_item() == var_1 )
						{
							var_22 = 0;
							var_23 = 0;
							var_24 = 0;
							var_25 = 255;
							//get_hud_colour( 2, &var_22, &var_23, &var_24, &var_25 );
							var_27 = get_texture_resolution( "CommonMenu", "arrowleft" );
							draw_sprite( "CommonMenu", "arrowleft", menu_x - 0.0046875f - var_26 + 0.425f * 0.5f, var_3 - 0.00277776f + menu_spacing * 0.5f, var_27.x / (float) var_20, var_27.y / (float) var_21 , 0.0f, var_22, var_23, var_24, var_25 );
							var_27 = get_texture_resolution( "CommonMenu", "arrowright" );
							draw_sprite( "CommonMenu", "arrowright", menu_x - 0.0046875f + 0.425f * 0.5f, var_3 - 0.00277776f + menu_spacing * 0.5f, var_27.x / (float) var_20 , var_27.y / (float) var_21 , 0.0f, var_22, var_23, var_24, var_25 );
						}
					}
				}
				else if ( menu_items_type[var_1] == 3 )
				{
					set_up_draw( custom_font, 0.0f, 0.35f, var_16, var_17, var_18, menu_x + 0.203125f, 1, 0 );
					if ( ! (menu_items_extra_int[var_1] ) )
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
	if ( menu_texture_loaded )
	{
		if ( menu_get_count() > menu_consts_max )
		{
			var_22 = 240;
			var_23 = 240;
			var_24 = 240;
			var_25 = 255;
			//get_hud_colour( 1, &var_22, &var_23, &var_24, &var_25 );
			var_31 = menu_consts_max + 2;
			var_32 = menu_spacing * (float) var_31;
			var_27 = get_texture_resolution( "CommonMenu", "shop_arrows_upANDdown" );
			draw_sprite( "CommonMenu", "shop_arrows_upANDdown", menu_x - 0.0046875f + 0.225f * 0.5f, var_32 + 0.04999922f + menu_spacing * 0.5f, var_27.x / (float) var_20, var_27.y / (float) var_21, 0.0f, var_22, var_23, var_24, var_25 );
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
	_0x12929BDF( num_val, 1 );
	_draw_text( x, y );
}

void draw_float( float float_val,  float x, float y )
{
	_set_text_entry( "NUMBER" );
	add_text_component_float( float_val, custom_float_dp );
	_draw_text( x, y );
}

void draw_string(char* string_val, float x, float y )
{
	if ( does_text_label_exist( string_val ) )
	{
		_set_text_entry( string_val );
	}
	else
	{
		_set_text_entry( "STRING" );
		_add_text_component_string( string_val );
	}
	_draw_text( x, y );
}

void draw_string_gxt(char* gxt, float x, float y )
{
	_set_text_entry( gxt );
	_draw_text( x, y );
}

void draw_number_gxt(char* gxt, int num_val, float x, float y )
{
	_set_text_entry( gxt );
	add_text_component_integer( num_val );
	_draw_text( x, y );
}

void set_up_draw( int font, float scale1, float scale2, int r, int g, int b, float wrap, bool right, bool centre )
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
