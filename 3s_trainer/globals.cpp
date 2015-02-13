#include "main.h"

int menu_count, instructional_buttons, frontend_count;

int menu_item_highlighted, menu_action_mode, menu_load_hold_pressed, menu_level,
 press_counter, hold_counter, press_counter_timesby, press_id, menu_unload_hold_pressed,
 menu_max, menu_consts_max, menu_start_scrolling, menu_sub_action_mode, menu_keyboard_update, 
 menu_keyboard_custom_length, menu_catch_button_id, menu_just_opened, custom_float_dp,
 custom_font;

bool menu_hidden, menu_items_set, scaleform_requested, reset_counter, menu_texture_loaded,
 frontend_items_set, menu_align, menu_sfx, menu_continue_action;

float menu_x, menu_start_y, menu_consts_start_y, menu_spacing;

char* menu_header;
char* custom_bool_string_off;
char* custom_bool_string_on;

int frontend_items_button[6];
char* frontend_items_name[6];
int last_selected[10];
char* menu_items_name[50];
int menu_items_type[50];
CallbackType menu_items_action[50];
int menu_items_int[50];
float menu_items_float[50];
char* menu_items_extra_string[50];
int menu_items_extra_int[50];
int menu_stored_data[50];

bool trainer_never_wanted, trainer_invincible, trainer_infinite_ammo, trainer_infinite_clip,
 trainer_explosive_ammo, trainer_fire_ammo, trainer_explosive_melee, trainer_infinite_special, trainer_superjump, trainer_wheel_check;

Group trainer_ped_group;

Hash trainer_ped_group_rel_hash, trainer_ped_group_rel_hash2;

int trainer_explosive_ammo_override, trainer_speed, trainer_brake, trainer_handling;

Vehicle trainer_spawn_vehicle, trainer_current_vehicle;
