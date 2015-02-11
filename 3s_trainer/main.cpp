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
	menu_set_title("Three-Socks Trainer 1.7 SPRX");
	switch(menu_get_current_level())
	{
		case 0:
		menu_addItem("Player");
		menu_addItem("Vehicle");
		menu_addItem("World Settings");
		menu_addItem("Teleport");
		menu_addItem("Object");
		menu_addItem("Network");
		break;
		
		case 1:
		trainer_level_1();
		break;
		
		case 2:
		trainer_level_2();
		break;
		
		case 3:
		trainer_level_3();
		break;
		
	}
}

void trainer_level_1()
{
	switch(menu_get_last_selected(0))
	{
		case 0:
			trainer_player_level_1();
		break;
	}
}

void trainer_level_2()
{
	switch(menu_get_last_selected(0))
	{
		case 0:
			trainer_player_level_2();
		break;
		
		case 1:
		break;
		
	}
}

void trainer_level_3()
{
	switch(menu_get_last_selected(0))
	{
		case 0:
			trainer_player_level_3();
		break;
		
		case 1:
		break;
		
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
