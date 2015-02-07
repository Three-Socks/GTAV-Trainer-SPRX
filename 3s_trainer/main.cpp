#include "main.h"

SYS_MODULE_INFO("gtav_3s_trainer", 0, 1, 1);
SYS_MODULE_START(EntryPoint);

SYS_LIB_DECLARE_WITH_STUB(LIBNAME, SYS_LIB_AUTO_EXPORT, STUBNAME);
SYS_LIB_EXPORT(FakeExportFunction, LIBNAME);

sys_ppu_thread_t	g_MainThreadID;

int float_int(float f)
{
	return *(int*)&f;
}

int Memcpy(PVOID destination, const PVOID source, size_t size)
{
	system_call_4(905, (uint64_t)sys_process_getpid(), (uint64_t)destination, size, (uint64_t)source);
	__dcbst(destination);
	__sync();
	__isync();
	return_to_user_prog(int);
}

void HookNative(int native, int Destination)
{
	Destination = *(int*)Destination;
	int FuncBytes[1];
	FuncBytes[0] = Destination;
	Memcpy((void*)native, FuncBytes, 4);
}

void trainer_loop_checks()
{
	if ( is_player_playing( player_id() ) )
	{
		if ( does_entity_exist( player_ped_id() ) )
		{
		}
	}
}

void trainer_load_pressed()
{
	if (!is_pause_menu_active())
	{
		if (is_control_pressed(2, 179))
		{
			if (is_control_pressed(2, 176))
			{
				disable_control_action(0, 22);
				disable_control_action(0, 42);
				if (menu_get_open_state())
				{
					if ( menu_load_hold_pressed == 0 )
					{
						menu_unload_hold_pressed++;
						return;
					}
					return;
				}
				else if (menu_unload_hold_pressed == 0)
				{
					menu_load_hold_pressed++;
					return;
				}
				return;
			}
		}
	}
	menu_unload_hold_pressed = 0;
	menu_load_hold_pressed = 0;
}

void trainer_catch_load_button_press()
{
	if (menu_get_open_state())
	{
		if (menu_unload_hold_pressed > 8)
		{
			last_selected[menu_get_current_level()] = menu_get_current_item();
			menu_clean();
			menu_play_sound("CANCEL");
			menu_shutdown();
		}
	}
	if (!menu_get_open_state())
	{
		if (menu_load_hold_pressed > 8)
		{
			if (is_ped_going_into_cover(player_ped_id()) || is_ped_jumping(player_ped_id()))
			{
				clear_ped_tasks_immediately(player_ped_id());
			}
			menu_set_open_state(true);
			menu_items_set = false;
			menu_clean();
			menu_just_opened = 1;
			menu_play_sound("SELECT");
		}
	}
	trainer_load_pressed();
}

void menu_set()
{
	menu_items_set = true;
	trainer_level_0();
}

void trainer_level_0()
{
	menu_set_title( "Menu Title" );
	switch( menu_get_current_level() )
	{
		case 0:
		menu_addItem( "Main 1" );
		menu_addItem( "Main 2" );
		menu_addItem( "Main 3" );
		break;
		
		case 1:
		trainer_level_1();
		break;
		
		case 2:
		trainer_level_2();
		break;
		
	}
}

void trainer_level_1()
{
	switch( menu_get_last_selected( 0 ) )
	{
		case 0:
		if ( menu_get_action_mode() )
		{
			trainer_main_action_level_1();
		}
		else
		{
			menu_set_title( "Main 1 Sub" );
			menu_addItem_action( "Main 1 Sub" );
			menu_addItem_action( "Main 1 Sub" );
			menu_addItem_action( "Main 1 Sub" );
		}
		break;
		
		case 1:
		menu_set_title( "Main 2 Sub" );
		menu_addItem( "Main 2 Sub" );
		menu_addItem( "Main 2 Sub" );
		menu_addItem( "Main 2 Sub" );
		break;
		
		case 2:
		menu_set_title( "Main 3 Sub" );
		menu_addItem( "Main 3 Sub" );
		menu_addItem( "Main 3 Sub" );
		menu_addItem( "Main 3 Sub" );
		break;
		
	}
}

void trainer_level_2()
{
	switch( menu_get_last_selected( 0 ) )
	{
		case 1:
		if ( menu_get_action_mode() )
		{
			trainer_main_2_action_level_2();
		}
		else
		{
			menu_set_title( "Main 2 Sub 2" );
			menu_addItem_action( "Main 2 Sub 2" );
			menu_addItem_action( "Main 2 Sub 2" );
			menu_addItem_action( "Main 2 Sub 2" );
		}
		break;
		
		case 2:
		if ( menu_get_action_mode() )
		{
			trainer_main_3_action_level_2();
		}
		else
		{
			menu_set_title( "Main 3 Sub 3" );
			menu_addItem_action( "Main 3 Sub 3" );
			menu_addItem_action( "Main 3 Sub 3" );
			menu_addItem_action( "Main 3 Sub 3" );
		}
		break;
		
	}
}

void trainer_main_action_level_1()
{
	switch( menu_get_current_item() )
	{
		case 0:
		menu_msg( "Main 1 Sub Option 1 action" );
		break;
		
		case 1:
		menu_msg( "Main 1 Sub Option 2 action" );
		break;
		
		case 2:
		menu_msg( "Main 1 Sub Option 3 action" );
		break;
		
	}
}

void trainer_main_2_action_level_2()
{
	switch( menu_get_current_item() )
	{
		case 0:
		menu_msg( "Main 2 Sub 2 Option 1 action" );
		break;
		
		case 1:
		menu_msg( "Main 2 Sub 2 Option 2 action" );
		break;
		
		case 2:
		menu_msg( "Main 2 Sub 2 Option 3 action" );
		break;
		
	}
}

void trainer_main_3_action_level_2()
{
	switch( menu_get_current_item() )
	{
		case 0:
		menu_msg( "Main 3 Sub 2 Option 1 action" );
		break;
		
		case 1:
		menu_msg( "Main 3 Sub 2 Option 2 action" );
		break;
		
		case 2:
		menu_msg( "Main 3 Sub 2 Option 3 action" );
		break;
		
	}
}

void menu_action()
{
	if ( menu_get_action_mode() == 1 )
	{
		menu_set();
		if ( menu_get_continue_action() )
		{
			menu_set_action_mode( 1 );
			menu_set_continue_action( 0 );
		}
		else
		{
			menu_set_action_mode( 0 );
		}
	}
	else if ( menu_get_action_mode() == 2 )
	{
		menu_set_action_mode( 0 );
		menu_shutdown();
	}
	else if ( menu_get_action_mode() == 3 )
	{
		menu_set_action_mode( 0 );
		/*
		if ( menu_items_type[menu_get_current_item()] == 6 )
		{
			if ( menu_keyboard( "HTX_ENTER" ) )
			{
				if ( ! (is_string_null_or_empty( get_onscreen_keyboard_result() ) ) )
				{
					if ( get_length_of_literal_string( get_onscreen_keyboard_result() ) <= 16 )
					{
						menu_set_number( menu_get_current_item(), get_onscreen_keyboard_result() );
						menu_set_action_mode( 1 );
					}
				}
			}
		}
		else
		{
			if ( (Static_123[menu_get_current_item()] == 7 || Static_123[menu_get_current_item()] == 14) )
			{
				if ( menu_keyboard( "CELL_221" ) )
				{
					if ( ! (is_string_null_or_empty( get_onscreen_keyboard_result() ) ) )
					{
						StringCopyTo( &var_1, get_onscreen_keyboard_result(), 16 );
						if ( string_to_int( &var_1, &var_11 ) )
						{
							if ( var_11 > menu_get_current_extra() )
							{
								var_11 = menu_get_current_extra();
							}
							menu_set_number( menu_get_current_item(), var_11 );
						}
					}
				}
			}
			else if ( Static_123[menu_get_current_item()] == 12 )
			{
				if ( menu_keyboard( "CELL_221" ) )
				{
					if ( ! (is_string_null_or_empty( get_onscreen_keyboard_result() ) ) )
					{
						StringCopyTo( &var_1, get_onscreen_keyboard_result(), 16 );
						if ( string_to_int( &var_1, &var_11 ) )
						{
							menu_set_number( menu_get_current_item(), to_float( var_11 ) );
						}
					}
				}
			}
		}*/
	}
}

void trainer_catch_button_press()
{
}

void trainer_setup()
{
	menu_set_open_state( 0 );
}

void project_close()
{
	menu_set_open_state( 0 );
}

void hook_func()
{
	trainer_loop_checks();
	trainer_catch_load_button_press();
	if ( menu_get_open_state() )
	{
		menu_modify_game_state();
		if ( menu_get_action_mode() == 0 )
		{
			menu_catch_button_press();
			menu_catch_select_button_press();
			trainer_catch_button_press();
		}
		menu_action();
		//menu_set_frontend();
		if ( !menu_items_set )
		{
			menu_set();
			if ( menu_get_action_mode() == 0 )
			{
				if ( (is_disabled_control_just_released( 2, 175 ) || menu_just_opened == 1) )
				{
					menu_just_opened = 0;
					menu_set_last_selected();
				}
			}
		}
		//menu_draw_frontend();
		menu_draw_window();
		menu_draw();
		menu_load_sprite();
		_0x3FE33BD6();
	}
}

void MainThread(uint64_t)
{
	menu_setup();
	trainer_setup();

	for (;;)
	{
		Sleep(1);
	}
}


extern "C" int FakeExportFunction()
{
	return CELL_OK;
}

extern "C" int EntryPoint()
{
	HookNative(0x1B9BF28, (int)hook_func);
	//HookNative(0x01B96E40, (int)hook_func);
	if(sys_ppu_thread_create(&g_MainThreadID, MainThread, 0, 1000, 2048, 0, "gtav_3s_trainer") != CELL_OK)
	{
		printf("Unable to create the Thread !");
	}

	return SYS_PRX_RESIDENT;
}
