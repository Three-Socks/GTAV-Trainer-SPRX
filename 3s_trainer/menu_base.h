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

uint menu_get_current_item();
int menu_get_count();
bool menu_get_open_state();
void menu_set_open_state( bool state );
uint menu_get_action_mode();
void menu_set_action_mode( uint action_mode );
uint menu_get_sub_action_mode();
void menu_set_sub_action_mode( uint sub_action_mode );
bool menu_get_continue_action();
void menu_set_continue_action( bool state );
uint menu_get_current_level();
uint menu_get_last_selected( uint menu_level );
int menu_get_stored_data( uint menu_item );
void menu_set_stored_data( int store_data );
void menu_set_title( char* menu_title );
void menu_set_bool_strings( char* bool_string_off, char* bool_string_on );
void menu_set_float_dp( uint float_dp );
void menu_set_font( uint font );
void menu_set_menu_align( bool align );
void menu_set_sfx( bool state );
void menu_addItem( char* menu_item_string );
void menu_addItem_add_number( char* menu_item_string, int num_val );
void menu_addItem_gxt_add_number( char* gxt, int num_val );
void menu_addItem_gxt_add_number2( char* gxt, int num_val );
void menu_addItem_gxt_number( char* gxt, int num_val );
void menu_addItem_number( int num_val, int min, int max );
void menu_addItem_number_format( int num_val, int min, int max );
void menu_add_number( int num_val );
void menu_set_number( uint menu_item, int num_val );
int menu_get_current_number();
int menu_get_number( uint menu_item );
void menu_addItem_float( float* float_val, float min, float max );
void menu_add_data_2( int data_2 );
int menu_get_current_data_2();
void menu_addItem_bool( bool state );
void menu_set_current_bool( bool state );
void menu_set_bool( uint menu_item, bool state );
void menu_toggle_bool( uint menu_item );
void menu_toggle_current_bool();
bool menu_get_current_bool();
bool menu_get_bool( uint menu_item );
void menu_addItem_gxt_veh_hash( int hash );
void menu_addItem_keyboard( char* menu_item_string, char* string_val, uint keyboard_len );
void menu_addItem_number_keyboard( int int_val, int min, int max, uint keyboard_len );
void menu_addItem_number_format_keyboard( float float_val, int min, int max, uint keyboard_len );
void menu_addItem_float_keyboard( float float_val, float min, float max, uint keyboard_len );
char* menu_get_current_keyboard();
int menu_get_current_extra();
void menu_add_extra( int extra_val );
int menu_get_extra( uint menu_item );
void menu_addItem_action( char* menu_item_string );
void menu_add_action();
void menu_addItem_frontend( uint button_id, char* string_val );
void menu_set_catch_button_id( uint catch_id );
uint menu_get_catch_button_id();
void menu_draw_frontend_hook();
void menu_add_frontend( uint frontend_id, uint button_id, char* string_val );
void menu_setup();
void menu_modify_game_state();
void menu_reverse_game_state();
void menu_shutdown();
void menu_catch_button_press();
void menu_set_last_selected();
void menu_catch_select_button_press();
char* menu_add_int_to_string( int int_val, char* string_val );
char* menu_add_int_to_string2( int int_val, char* string_val );
char* menu_return_var( char* return_this );
void menu_play_sound( char* sound_name );
bool menu_keyboard( char* keyboard_title );
void menu_msg( char* string_val );
void menu_error( char* string_val, int menu_level_back );
void menu_error_gxt( char* gxt, int menu_level_back );
void menu_error_2_strings( char* string_val, char* string_val2, int menu_level_back );
void menu_error_2_strings_gxt( char* string_val, char* gxt, int menu_level_back );
void menu_error_back( int menu_level_back );
void menu_frontend_clean();
void menu_clean();
void menu_draw_window();
void menu_draw_rect(float rect_x, float rect_y, float rect_size_x, float rect_size_y, int rect_r, int rect_g, int rect_b, int rect_a);
void menu_do_hold_pressed( uint button_id );
bool menu_is_hold_pressed( uint button_id );
bool menu_up_pressed( bool do_hold );
bool menu_down_pressed( bool do_hold );
bool menu_left_pressed( bool do_hold );
bool menu_right_pressed( bool do_hold );
void menu_load_sprite();
void menu_set_frontend();
void menu_draw_frontend();
void menu_draw_number_add( int item_id, float cur_menu_y );
void menu_draw_gxt_number_add( int item_id, float cur_menu_y );
void menu_draw_gxt_number2_add( int item_id, float cur_menu_y );
void menu_draw();
void draw_item_count( int num_val, int num_val2, float x, float y );
void draw_number( int num_val, float x, float y );
void draw_number_format( int num_val, float x, float y );
void draw_float( float float_val,  float x, float y );
void draw_string( char* string_val, float x, float y );
void draw_string_gxt( char* gxt, float x, float y );
void draw_number_gxt( char* gxt, char* string_val, float x, float y );
void set_up_draw( uint font, float scale1, float scale2, uint r, uint g, uint b, float wrap, bool right, bool centre );

#endif
