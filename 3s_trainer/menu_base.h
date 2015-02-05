#ifndef __MENU_BASE_H__
#define __MENU_BASE_H__

typedef unsigned int uint;
typedef char* string;
typedef int BOOL;
typedef void* Void;
typedef unsigned int Any;
typedef int Vector3;
typedef unsigned int Hash;
typedef unsigned int Entity;
typedef unsigned int Player;
typedef unsigned int Ped;
typedef unsigned int Vehicle;
typedef unsigned int Camera;
typedef unsigned int Cam;
typedef unsigned int Object;
typedef unsigned int Weapon;
typedef unsigned int Interior;
typedef unsigned int Blip;
typedef unsigned int Texture;
typedef unsigned int Sphere;


int menu_count, instructional_buttons, frontend_count;

unsigned int menu_item_highlighted, menu_action_mode, menu_load_hold_pressed, menu_level,
 press_counter, hold_counter, press_counter_timesby, press_id, menu_unload_hold_pressed,
 menu_max, menu_consts_max, menu_start_scrolling, menu_sub_action_mode, menu_keyboard_update, 
 menu_keyboard_custom_length, menu_catch_button_id, menu_just_opened;

bool menu_hidden = 1, menu_items_set, scaleform_requested, reset_counter, menu_texture_loaded, frontend_items_set;

float menu_x, menu_start_y, menu_consts_start_y, menu_spacing;

char* menu_header;


#endif