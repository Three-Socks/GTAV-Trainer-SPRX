#include "main.h"
#include "menu_base.h"

#define Sleep(milliseconds)		sys_timer_usleep(milliseconds * 1000)
typedef void* PVOID;

SYS_MODULE_INFO("3s_trainer", 0, 1, 1);
SYS_MODULE_START(EntryPoint);

SYS_LIB_DECLARE_WITH_STUB(LIBNAME, SYS_LIB_AUTO_EXPORT, STUBNAME);
SYS_LIB_EXPORT(FakeExportFunction, LIBNAME);

sys_ppu_thread_t	g_MainThreadID;

/*
char* frontend_items_button[6];
char* frontend_items_name[6];

unsigned int last_selected[10];

char* menu_items_name[50];
unsigned int menu_items_type[50];
int menu_items_extra_val[50];
unsigned int menu_items_action[50];
int menu_items_num_val[50];
float menu_items_float_val[50];

int menu_stored_data[50];

char* custom_bool_string_off;
char* custom_bool_string_on;*/

//void (*scrThread_loop_original)(scrThread*, int);

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

int float_int(float f)
{
	return *(int*)&f;
}

bool menu_get_open_state()
{
	if ( ! (is_pause_menu_active() ) )
	{
		return menu_hidden;
	}
	return false;
}

void menu_set_open_state(bool open_state)
{
	menu_hidden = open_state;
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
			//Static_61[menu_get_current_level()] = menu_get_current_item();
			//menu_clean();
			//menu_play_sound("CANCEL");
			//menu_shutdown();
			menu_set_open_state(false);
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
			//Static_11 = 0;
			//menu_clean();
			//Static_378 = 1;
			//menu_play_sound("SELECT");
		}
	}
	trainer_load_pressed();
}

void menu_draw_rect(float rect_x, float rect_y, float rect_size_x, float rect_size_y, int rect_r, int rect_g, int rect_b, int rect_a)
{
	draw_rect(rect_x + rect_size_x * 0.5, rect_y + rect_size_y * 0.5, rect_size_x, rect_size_y, rect_r, rect_g, rect_b, rect_a);
}

void menu_draw_window()
{
	float var_5;

	var_5 = 0.03472f * 6.00f;
	menu_draw_rect(0.05f, 0.084722f, 0.225f, var_5, 0, 0, 0, 186);
	menu_draw_rect(0.05f, 0.04999922f, 0.225f, 0.03472f, 0, 0, 0, 204);
}

void set_up_draw(int r, int g, int b, float wrap, bool right_justify)
{
	set_text_font(0);
	set_text_scale(0.0, 0.35f);
	set_text_colour(r, g, b, 255);
	set_text_wrap(0.0f, wrap);
	set_text_right_justify(right_justify);
	set_text_centre(0);
	set_text_dropshadow(0, 0, 0, 0, 0);
	set_text_edge(0, 0, 0, 0, 0);
}

void draw_string(char* draw_string, float x, float y)
{
	_set_text_entry("STRING");
	_add_text_component_string(draw_string);
	_draw_text(x, y);
}

void hook_func()
{
	project_loop_checks();
	project_catch_load_button_press();
	if ( menu_get_open_state() )
	{
		menu_modify_game_state();
		if ( menu_get_action_mode() == 0 )
		{
			menu_catch_button_press();
			menu_catch_select_button_press();
			project_catch_button_press();
		}
		menu_action();
		menu_set_frontend();
		if ( ! (Static_11 ) )
		{
			menu_set();
			if ( menu_get_action_mode() == 0 )
			{
				if ( (is_disabled_control_just_released( 2, 175 ) || Static_378 == 1) )
				{
					Static_378 = 0;
					menu_set_last_selected();
				}
			}
		}
		menu_draw_frontend();
		menu_draw_window();
		menu_draw();
		menu_load_sprite();
		unk_0x3FE33BD6();
	}
}

void MainThread(uint64_t)
{
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
	if(sys_ppu_thread_create(&g_MainThreadID, MainThread, 0, 1000, 2048, 0, "GTA V Mod Menu") != CELL_OK)
	{
		printf("Unable to create the Thread !");
	}

	return SYS_PRX_RESIDENT;
}
