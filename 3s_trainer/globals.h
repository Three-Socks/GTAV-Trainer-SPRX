#ifndef __GLOBALS_H__
#define __GLOBALS_H__

extern int menu_count, instructional_buttons, frontend_count;

extern int menu_item_highlighted, menu_action_mode, menu_load_hold_pressed, menu_level,
 press_counter, hold_counter, press_counter_timesby, press_id, menu_unload_hold_pressed,
 menu_max, menu_consts_max, menu_start_scrolling, menu_sub_action_mode, menu_keyboard_update, 
 menu_keyboard_custom_length, menu_catch_button_id, menu_just_opened, custom_float_dp,
 custom_font;

extern bool menu_hidden, menu_items_set, scaleform_requested, reset_counter, menu_texture_loaded,
 frontend_items_set, menu_align, menu_sfx, menu_continue_action;

extern float menu_x, menu_start_y, menu_consts_start_y, menu_spacing;

extern char* menu_header;
extern char* custom_bool_string_off;
extern char* custom_bool_string_on;

extern int frontend_items_button[6];
extern char* frontend_items_name[6];
extern int last_selected[10];
extern char* menu_items_name[50];
extern int menu_items_type[50];
extern int menu_items_extra_val[50];
extern bool menu_items_action[50];
extern int menu_items_num_val[50];
extern float menu_items_float_val[50];
extern int menu_stored_data[50];

#endif
