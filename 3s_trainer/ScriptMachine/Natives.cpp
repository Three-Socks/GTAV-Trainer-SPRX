#include "..\main.h"

	Ped get_player_ped(Player player)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Ped>(0x6E31E993, 1, player);
	}
	Ped get_player_ped_script_index(Player player)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Ped>(0x6AC64990, 1, player);
	}
	void set_player_model(Player player, Hash model)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x774A4C54, 2, player, model);
	}
	void change_player_ped(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBE515485, 4, p0, p1, p2, p3);
	}
	void get_player_rgb_colour(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6EF43BBB, 4, p0, p1, p2, p3);
	}
	Any get_number_of_players()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4C1B8867, 0);
	}
	int get_player_team(Player player)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0x9873E404, 1, player);
	}
	void set_player_team(Player player, int teamid)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x725ADCF2, 2, player, teamid);
	}
	string get_player_name(Player player)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<string>(0x406B4B20, 1, player);
	}
	float get_wanted_level_radius(Player player)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<float>(0x1CF7D7DA, 1, player);
	}
	Vector3 get_player_wanted_centre_position(Player p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x821F2D2C, 1, p);
	}
	void set_player_wanted_centre_position(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF261633A, 4, p0, p1, p2, p3);
	}
	Any get_wanted_level_threshold(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD9783F6B, 1, p0);
	}
	void set_player_wanted_level(Player p, int level, BOOL unkb)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB7A0914B, 3, p, level, unkb);
	}
	void set_player_wanted_level_no_drop(Player p, int level, BOOL unkb)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xED6F44F5, 3, p, level, unkb);
	}
	void set_player_wanted_level_now(Player p, BOOL unkb)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAF3AFD83, 2, p, unkb);
	}
	BOOL are_player_flashing_stars_about_to_drop(Player p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xE13A71C7, 1, p);
	}
	BOOL are_player_stars_greyed_out(Player p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x5E72AB72, 1, p);
	}
	void set_dispatch_cops_for_player(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x48A18913, 2, p0, p1);
	}
	BOOL is_player_wanted_level_greater(Player player, int level)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x589A2661, 2, player, level);
	}
	void clear_player_wanted_level(Player p)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x54EA5BCC, 1, p);
	}
	BOOL is_player_dead(Player player)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x140CA5A8, 1, player);
	}
	BOOL is_player_pressing_horn(Player player)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xED1D1662, 1, player);
	}
	void set_player_control(Player p, BOOL b1, BOOL b2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD17AFCD8, 3, p, b1, b2);
	}
	int get_player_wanted_level(Player p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0xBDCDD163, 1, p);
	}
	void set_max_wanted_level(int level)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x665A06F5, 1, level);
	}
	void set_police_radar_blips(BOOL set)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8E114B10, 1, set);
	}
	void set_police_ignore_player(Player p, BOOL ignore)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE6DE71B7, 2, p, ignore);
	}
	BOOL is_player_playing(Player p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xE15D777F, 1, p);
	}
	void set_everyone_ignore_player(Player p, BOOL ignore)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC915285E, 2, p, ignore);
	}
	void set_all_random_peds_flee(Player player, BOOL flee)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x49EAE968, 2, player, flee);
	}
	void set_all_random_peds_flee_this_frame(Player player)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBF974891, 1, player);
	}
	void _0x274631FE(Player player, BOOL p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x274631FE, 2, player, p1);
	}
	void _0x02DF7AF4(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x02DF7AF4, 1, p0);
	}
	void _0x9CEA7458(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9CEA7458, 1, p0);
	}
	void set_ignore_low_priority_shocking_events(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA3D675ED, 2, p0, p1);
	}
	void set_wanted_level_multiplier(float p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1359292F, 1, float_int(p0));
	}
	void set_wanted_level_difficulty(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB552626C, 2, p0, p1);
	}
	void reset_wanted_level_difficulty(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA64C378D, 1, p0);
	}
	void start_firing_amnesty(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5F8A22A6, 1, p0);
	}
	void report_crime(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD8EB3A44, 3, p0, p1, p2);
	}
	void _0x59B5C2A2(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x59B5C2A2, 2, p0, p1);
	}
	void _0x6B34A160(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6B34A160, 1, p0);
	}
	void _0xB9FB142F(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB9FB142F, 1, p0);
	}
	void _0x85725848(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x85725848, 1, p0);
	}
	void _0x3A7E5FB6(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3A7E5FB6, 1, p0);
	}
	void _0xD15C4B1C(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD15C4B1C, 1, p0);
	}
	void _0xBF6993C7(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBF6993C7, 1, p0);
	}
	void _0x47CAB814()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x47CAB814, 0);
	}
	BOOL can_player_start_mission(Player p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x39E3CB3F, 1, p);
	}
	BOOL is_player_ready_for_cutscene(Player p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xBB77E9CD, 1, p);
	}
	BOOL is_player_targetting_entity(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xF3240B77, 2, p0, p1);
	}
	Any get_player_target_entity(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF6AAA2D7, 2, p0, p1);
	}
	BOOL is_player_free_aiming(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x1DEC67B7, 1, p0);
	}
	BOOL is_player_free_aiming_at_entity(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x7D80EEAA, 2, p0, p1);
	}
	Any _0x8866D9D0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8866D9D0, 2, p0, p1);
	}
	void _0x74D42C03(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x74D42C03, 2, p0, p1);
	}
	void set_player_can_do_drive_by(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF4D99685, 2, p0, p1);
	}
	void set_player_can_be_hassled_by_gangs(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x71B305BB, 2, p0, p1);
	}
	void set_player_can_use_cover(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x13CAFAFA, 2, p0, p1);
	}
	Any get_max_wanted_level()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x457F1E44, 0);
	}
	BOOL is_player_targetting_anything(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x456DB50D, 1, p0);
	}
	void set_player_sprint(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7DD7900C, 2, p0, p1);
	}
	void reset_player_stamina(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC0445A9C, 1, p0);
	}
	void restore_player_stamina(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x62A93608, 2, p0, p1);
	}
	Any _0x47017C90(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x47017C90, 1, p0);
	}
	Any get_player_sprint_time_remaining(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x40E80543, 1, p0);
	}
	Any get_player_underwater_time_remaining(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1317125A, 1, p0);
	}
	Any get_player_group(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA5EDCDE8, 1, p0);
	}
	int get_player_max_armour(Player p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0x02A50657, 1, p);
	}
	BOOL is_player_control_on(Player p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x618857F2, 1, p);
	}
	BOOL is_player_script_control_on(Player p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x61B00A84, 1, p);
	}
	BOOL is_player_climbing(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x4A9E9AE0, 1, p0);
	}
	BOOL is_player_being_arrested(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x7F6A60D3, 2, p0, p1);
	}
	Any get_players_last_vehicle()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE2757AC1, 0);
	}
	Player get_player_index()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Player>(0x309BBDC1, 0);
	}
	Player int_to_playerindex(Player player)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Player>(0x98DD98F1, 1, player);
	}
	Player _int_to_playerindex(Player player)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Player>(0x98F3B274, 1, player);
	}
	Any get_time_since_player_hit_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6E9B8B9E, 1, p0);
	}
	Any get_time_since_player_hit_ped(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB6209195, 1, p0);
	}
	Any get_time_since_player_drove_on_pavement(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8836E732, 1, p0);
	}
	Any get_time_since_player_drove_against_traffic(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9F27D00E, 1, p0);
	}
	BOOL is_player_free_for_ambient_task(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x85C7E232, 1, p0);
	}
	Player player_id()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Player>(0x8AEA886C, 0);
	}
	Ped player_ped_id()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Ped>(0xFA92E226, 0);
	}
	Player _player_id()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Player>(0x8DD5B838, 0);
	}
	Any _0x4B37333C(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4B37333C, 1, p0);
	}
	void force_cleanup(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFDAAEA2B, 1, p0);
	}
	void _0x04256C73(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x04256C73, 2, p0, p1);
	}
	void _0x882D3EB3(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x882D3EB3, 2, p0, p1);
	}
	Any _0x39AA9FC8()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x39AA9FC8, 0);
	}
	void set_player_may_only_enter_this_vehicle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA454DD29, 2, p0, p1);
	}
	void _0xAF7AFCC4(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAF7AFCC4, 1, p0);
	}
	Any give_achievement_to_player(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x822BC992, 1, p0);
	}
	BOOL has_achievement_been_passed(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x136A5BE9, 1, p0);
	}
	BOOL is_player_online()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x9FAB6729, 0);
	}
	BOOL is_player_logging_in_np()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x8F72FAD0, 0);
	}
	void display_system_signin_ui(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4264CED2, 1, p0);
	}
	BOOL is_system_ui_being_displayed()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xE495B6DA, 0);
	}
	void set_player_invincible(Player p, BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDFB9A2A2, 2, p, b);
	}
	BOOL get_player_invincible(Player p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x680C90EE, 1, p);
	}
	void _0x00563E0D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x00563E0D, 2, p0, p1);
	}
	void remove_player_helmet(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6255F3B4, 2, p0, p1);
	}
	void give_player_ragdoll_control(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC7B4D7AC, 2, p0, p1);
	}
	void set_player_lockon(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0B270E0F, 2, p0, p1);
	}
	void set_player_targeting_mode(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x61CAE253, 1, p0);
	}
	void clear_player_has_damaged_at_least_one_ped(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1D31CBBD, 1, p0);
	}
	BOOL has_player_damaged_at_least_one_ped(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x14F52453, 1, p0);
	}
	void _0x7E3BFBC5(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7E3BFBC5, 1, p0);
	}
	Any _0xA3707DFC(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA3707DFC, 1, p0);
	}
	void set_air_drag_multiplier_for_players_vehicle(Player p, float m)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF20F72E5, 2, p, float_int(m));
	}
	void _set_swim_speed_multiplier(Player p, float m)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB986FF47, 2, p, float_int(m));
	}
	void _set_move_speed_multiplier(Player p, float m)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x825423C2, 2, p, float_int(m));
	}
	Any get_time_since_last_arrest()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x62824EF4, 0);
	}
	Any get_time_since_last_death()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x24BC5AC0, 0);
	}
	void assisted_movement_close_route()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF23277F3, 0);
	}
	void assisted_movement_flush_route()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD04568B9, 0);
	}
	void set_player_forced_aim(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x94E42E2E, 2, p0, p1);
	}
	void set_player_forced_zoom(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB0C576CB, 2, p0, p1);
	}
	void _0x374F42F0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x374F42F0, 2, p0, p1);
	}
	void disable_player_firing(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x30CB28CB, 2, p0, p1);
	}
	void _0xCCD937E7(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCCD937E7, 2, p0, p1);
	}
	void set_player_max_armour(Player p, int val)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC6C3C53B, 2, p, val);
	}
	void special_ability_deactivate(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x80C2AB09, 1, p0);
	}
	void _0x0751908A(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0751908A, 1, p0);
	}
	void special_ability_reset(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA7D8BCD3, 1, p0);
	}
	void _0x4136829A(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4136829A, 1, p0);
	}
	void _0x6F463F56(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6F463F56, 3, p0, p1, p2);
	}
	void _0xAB55D8F3(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAB55D8F3, 3, p0, p1, p2);
	}
	void _0xF440C04D(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF440C04D, 3, p0, p1, p2);
	}
	void _0x5FEE98A2(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5FEE98A2, 2, p0, p1);
	}
	void _0x72429998(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x72429998, 3, p0, p1, p2);
	}
	void reset_special_ability_controls_cinematic(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8C7E68C1, 3, p0, p1, p2);
	}
	void special_ability_fill_meter(Player p, BOOL unkTrue)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB71589DA, 2, p, unkTrue);
	}
	void _0x9F80F6DF(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9F80F6DF, 2, p0, p1);
	}
	void special_ability_lock(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1B7BB388, 1, p0);
	}
	void special_ability_unlock(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1FDB2919, 1, p0);
	}
	BOOL is_special_ability_unlocked(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xC9C75E82, 1, p0);
	}
	BOOL is_special_ability_active(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x1B17E334, 1, p0);
	}
	BOOL is_special_ability_meter_full(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x2E19D7F6, 1, p0);
	}
	void enable_special_ability(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC86C1B4E, 2, p0, p1);
	}
	BOOL is_special_ability_enabled(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xC01238CC, 1, p0);
	}
	void set_special_ability_multiplier(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFF1BC556, 1, p0);
	}
	void _0x5D0FE25B(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5D0FE25B, 1, p0);
	}
	Any _0x46E7E31D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x46E7E31D, 1, p0);
	}
	Any _0x1E359CC8(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1E359CC8, 2, p0, p1);
	}
	Any _0x8CB53C9F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8CB53C9F, 2, p0, p1);
	}
	void start_player_teleport(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC552E06C, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void stop_player_teleport()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x86AB8DBB, 0);
	}
	BOOL is_player_teleport_active()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x3A11D118, 0);
	}
	Any get_player_current_stealth_noise(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC3B02362, 1, p0);
	}
	void _0x45514731(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x45514731, 2, p0, p1);
	}
	void set_player_weapon_damage_modifier(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB02C2F39, 2, p0, p1);
	}
	void _0xAE446344(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAE446344, 2, p0, p1);
	}
	void _0x362E69AD(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x362E69AD, 2, p0, p1);
	}
	void _0x9F3D577F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9F3D577F, 2, p0, p1);
	}
	void set_player_vehicle_damage_modifier(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x823ECA63, 2, p0, p1);
	}
	void _0xA16626C7(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA16626C7, 2, p0, p1);
	}
	void set_player_parachute_tint_index(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8EA12EDB, 2, p0, p1);
	}
	void get_player_parachute_tint_index(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x432B0509, 2, p0, p1);
	}
	void _0xD79D5D1B(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD79D5D1B, 2, p0, p1);
	}
	void _0x832DEB7A(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x832DEB7A, 2, p0, p1);
	}
	void _0x14FE9264(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x14FE9264, 4, p0, p1, p2, p3);
	}
	void _0xF66E5CDD(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF66E5CDD, 4, p0, p1, p2, p3);
	}
	void set_player_noise_multiplier(Any p0, float p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x15786DD1, 2, p0, float_int(p1));
	}
	void _0x8D2D89C4(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8D2D89C4, 2, p0, p1);
	}
	Any _0x1C70B2EB(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1C70B2EB, 2, p0, p1);
	}
	void simulate_player_input_gait(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0D77CC34, 6, p0, p1, p2, p3, p4, p5);
	}
	void reset_player_input_gait(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4A701EE1, 1, p0);
	}
	void _0xA97C2059(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA97C2059, 2, p0, p1);
	}
	void _0xA25D767E(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA25D767E, 2, p0, p1);
	}
	void _0x3D26105F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3D26105F, 2, p0, p1);
	}
	Any _0x1D371529(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1D371529, 1, p0);
	}
	void _0xE30A64DC(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE30A64DC, 1, p0);
	}
	void set_player_simulate_aiming(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF1E0CAFC, 2, p0, p1);
	}
	void _0xF7A0F00F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF7A0F00F, 2, p0, p1);
	}
	void _0xB8209F16(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB8209F16, 1, p0);
	}
	void _0x8D9FD4D1(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8D9FD4D1, 1, p0);
	}
	void _0xECD12E60(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xECD12E60, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void _0x96100EA4()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x96100EA4, 0);
	}
	Any _0x4A01B76A(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4A01B76A, 1, p0);
	}
	Any _0x013B4F72(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x013B4F72, 1, p0);
	}
	void _0x64DDB07D(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x64DDB07D, 3, p0, p1, p2);
	}
	void _0xA97C2F6C()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA97C2F6C, 0);
	}
	BOOL is_player_riding_train(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x9765E71D, 1, p0);
	}
	Any _0xFEA40B6C(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFEA40B6C, 1, p0);
	}
	void _0xAD8383FA(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAD8383FA, 2, p0, p1);
	}
	void _0x9254249D(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9254249D, 3, p0, p1, p2);
	}
	// 0xFD60F5AB -- no params/results data
	void _0x8C6E611D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8C6E611D, 1, p0);
	}

	BOOL does_entity_exist(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x3AC90869, 1, e);
	}
	Any _0xACFEB3F9(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xACFEB3F9, 2, p0, p1);
	}
	BOOL does_entity_have_drawable(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xA5B33300, 1, p0);
	}
	BOOL does_entity_have_physics(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x9BCD2979, 1, p0);
	}
	BOOL has_entity_anim_finished(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x1D9CAB92, 4, p0, p1, p2, p3);
	}
	BOOL has_entity_been_damaged_by_any_object(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x6B74582E, 1, p0);
	}
	BOOL has_entity_been_damaged_by_any_ped(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x53FD4A25, 1, p0);
	}
	BOOL has_entity_been_damaged_by_any_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x878C2CE0, 1, p0);
	}
	BOOL has_entity_been_damaged_by_entity(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x07FC77E0, 3, p0, p1, p2);
	}
	BOOL has_entity_clear_los_to_entity(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x53576FA7, 3, p0, p1, p2);
	}
	BOOL has_entity_clear_los_to_entity_in_front(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x210D87C8, 2, p0, p1);
	}
	BOOL has_entity_collided_with_anything(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x662A2F41, 1, p0);
	}
	Any _0xC0E3AA47(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC0E3AA47, 1, p0);
	}
	Vector3 _0xAB415C07(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0xAB415C07, 1, p0);
	}
	void _0x58D9775F(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x58D9775F, 1, p0);
	}
	Any get_entity_anim_current_time(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x83943F41, 3, p0, p1, p2);
	}
	Any get_entity_anim_total_time(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x433A9D18, 3, p0, p1, p2);
	}
	Any get_entity_attached_to(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFE1589F9, 1, p0);
	}
	Vector3 get_entity_coords(Entity e, BOOL b)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x1647F1CB, 2, e, b);
	}
	Vector3 get_entity_forward_vector(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x84DCECBF, 1, e);
	}
	float get_entity_forward_x(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<float>(0x49FAE914, 1, e);
	}
	float get_entity_forward_y(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<float>(0x9E2F917C, 1, e);
	}
	float get_entity_heading(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<float>(0x972CC383, 1, e);
	}
	int get_entity_health(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0x8E3222B7, 1, e);
	}
	int get_entity_max_health(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0xC7AE6AA1, 1, e);
	}
	void set_entity_max_health(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x96F84DF8, 2, p0, p1);
	}
	Any get_entity_height(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEE443481, 6, p0, p1, p2, p3, p4, p5);
	}
	Any get_entity_height_above_ground(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x57F56A4D, 1, p0);
	}
	void get_entity_matrix(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEB9EB001, 5, p0, p1, p2, p3, p4);
	}
	Hash get_entity_model(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Hash>(0xDAFCB3EC, 1, e);
	}
	Vector3 get_offset_from_entity_given_world_coords(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x6477EC9E, 4, p0, p1, p2, p3);
	}
	Vector3 get_offset_from_entity_in_world_coords(Entity e, float x, float y, float z)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0xABCF043A, 4, e, float_int(x), float_int(y), float_int(z));
	}
	Any get_entity_pitch(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFCE6ECE5, 1, p0);
	}
	void get_entity_quaternion(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5154EC90, 5, p0, p1, p2, p3, p4);
	}
	Any get_entity_roll(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x36610842, 1, p0);
	}
	Vector3 get_entity_rotation(Entity e, int mode)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x8FF45B04, 2, e, mode);
	}
	Vector3 get_entity_rotation_velocity(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x9BF8A73F, 1, e);
	}
	Any get_entity_script(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB7F70784, 2, p0, p1);
	}
	float get_entity_speed(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<float>(0x9E1E4798, 1, e);
	}
	Vector3 get_entity_speed_vector(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x3ED2B997, 2, p0, p1);
	}
	Any get_entity_upright_value(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF4268190, 1, p0);
	}
	Vector3 get_entity_velocity(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0xC14C9B6B, 1, p0);
	}
	Any _0xBC5A9C58(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBC5A9C58, 1, p0);
	}
	Any _0xC46F74AC(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC46F74AC, 1, p0);
	}
	Any _0xC69CF43D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC69CF43D, 1, p0);
	}
	Vector3 _0x7C6339DF(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x7C6339DF, 2, p0, p1);
	}
	Any get_nearest_player_to_entity(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCE17FDEC, 1, p0);
	}
	Any get_entity_type(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0B1BD08D, 1, p0);
	}
	BOOL is_an_entity(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xD4B9715A, 1, p0);
	}
	BOOL is_entity_a_ped(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x55D33EAB, 1, p0);
	}
	BOOL is_entity_a_mission_entity(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x2632E124, 1, p0);
	}
	BOOL is_entity_a_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xBE800B01, 1, p0);
	}
	BOOL is_entity_an_object(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x3F52E561, 1, p0);
	}
	BOOL is_entity_at_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xD749B606, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	BOOL is_entity_at_entity(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xDABDCB52, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	BOOL is_entity_attached(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xEC1479D5, 1, p0);
	}
	BOOL is_entity_attached_to_any_object(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0B5DE340, 1, p0);
	}
	BOOL is_entity_attached_to_any_ped(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x9D7A609C, 1, p0);
	}
	BOOL is_entity_attached_to_any_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xDE5C995E, 1, p0);
	}
	BOOL is_entity_attached_to_entity(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xB0ABFEA8, 2, p0, p1);
	}
	BOOL is_entity_dead(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xB6F7CBAC, 1, e);
	}
	BOOL is_entity_in_air(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xA4157987, 1, e);
	}
	BOOL is_entity_in_angled_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x883622FA, 11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	BOOL is_entity_in_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x8C2DFA9D, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	BOOL is_entity_in_zone(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x45C82B21, 2, p0, p1);
	}
	BOOL is_entity_in_water(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x4C3C2508, 1, e);
	}
	Any _0x0170F68C(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0170F68C, 1, p0);
	}
	void _0x40C84A74(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x40C84A74, 2, p0, p1);
	}
	BOOL is_entity_on_screen(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xC1FEC5ED, 1, e);
	}
	BOOL is_entity_playing_anim(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0D130D34, 4, p0, p1, p2, p3);
	}
	BOOL is_entity_(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x928E12E9, 1, e);
	}
	BOOL is_entity_touching_entity(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x6B931477, 2, p0, p1);
	}
	BOOL is_entity_upright(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x3BCDF4E1, 2, p0, p1);
	}
	BOOL is_entity_upsidedown(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x5ACAA48F, 1, p0);
	}
	BOOL is_entity_visible(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x120B4ED5, 1, e);
	}
	BOOL is_entity_visible_to_script(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x5D240E9D, 1, e);
	}
	BOOL is_entity_occluded(Entity e)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x46BC5B40, 1, e);
	}
	Any _0xEA127CBC(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEA127CBC, 5, p0, p1, p2, p3, p4);
	}
	BOOL is_entity_waiting_for_world_collision(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x00AB7A4A, 1, p0);
	}
	void _0x28924E98(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x28924E98, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void apply_force_to_entity(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC1C0855A, 14, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
	}
	void attach_entity_to_entity(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEC024237, 15, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
	}
	void attach_entity_to_entity_physically(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17, Any p18)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0547417F, 19, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18);
	}
	void _0x6909BA59(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6909BA59, 1, p0);
	}
	Any _0xE4ECAC22(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE4ECAC22, 2, p0, p1);
	}
	void clear_entity_last_damage_entity(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2B83F43B, 1, p0);
	}
	void delete_entity(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFAA3D236, 1, p0);
	}
	void detach_entity(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC8EFCB41, 3, p0, p1, p2);
	}
	void freeze_entity_position(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x65C16D57, 2, p0, p1);
	}
	void _0xD3850671(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD3850671, 2, p0, p1);
	}
	Any play_entity_anim(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x878753D5, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	Any play_synchronized_entity_anim(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x012760AA, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	Any _0xEB4CBA74(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEB4CBA74, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	Any _0x7253D5B2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7253D5B2, 6, p0, p1, p2, p3, p4, p5);
	}
	Any stop_entity_anim(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC4769830, 4, p0, p1, p2, p3);
	}
	Any stop_synchronized_entity_anim(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE27D2FC1, 3, p0, p1, p2);
	}
	Any _0x66571CA0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x66571CA0, 2, p0, p1);
	}
	Any _0xC41DDA62(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC41DDA62, 5, p0, p1, p2, p3, p4);
	}
	void set_entity_anim_current_time(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x99D90735, 4, p0, p1, p2, p3);
	}
	void set_entity_anim_speed(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3990C90A, 4, p0, p1, p2, p3);
	}
	void set_entity_as_mission_entity(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5D1F9E0F, 3, p0, p1, p2);
	}
	void set_entity_as_no_longer_needed(Entity *e)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xADF2267C, 1, e);
	}
	void set_ped_as_no_longer_needed(Ped *p)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9A388380, 1, p);
	}
	void set_vehicle_as_no_longer_needed(Vehicle *v)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9B0E10BE, 1, v);
	}
	void set_object_as_no_longer_needed(Object *o)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3F6B949F, 1, o);
	}
	void set_entity_can_be_damaged(Entity e, BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x60B6E744, 2, e, b);
	}
	void set_entity_can_be_damaged_by_relationship_group(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x34165B5D, 3, p0, p1, p2);
	}
	void set_entity_can_be_targeted_without_los(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3B13797C, 2, p0, p1);
	}
	void set_entity_collision(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x139FD37D, 3, p0, p1, p2);
	}
	void set_entity_coords(Entity e, float x, float y, float z, BOOL b1, BOOL b2, BOOL b3, BOOL b4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDF70B41B, 8, e, float_int(x), float_int(y), float_int(z), b1, b2, b3, b4);
	}
	void set_entity_coords_no_offset(Entity e, float x, float y, float z, BOOL b1, BOOL b2, BOOL b3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4C83DE8D, 7, e, float_int(x), float_int(y), float_int(z), b1, b2, b3);
	}
	void set_entity_dynamic(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x236F525B, 2, p0, p1);
	}
	void set_entity_heading(Entity e, float heading)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE0FF064D, 2, e, float_int(heading));
	}
	void set_entity_health(Entity e, int health)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFBCD1831, 2, e, health);
	}
	void set_entity_invincible(Entity e, BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC1213A21, 2, e, b);
	}
	void set_entity_is_target_priority(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9729EE32, 3, p0, p1, p2);
	}
	void set_entity_lights(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE8FC85AF, 2, p0, p1);
	}
	void set_entity_load_collision_flag(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC52F295B, 2, p0, p1);
	}
	Any _0x851687F9(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x851687F9, 1, p0);
	}
	void set_entity_max_speed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x46AFFED3, 2, p0, p1);
	}
	void set_entity_only_damaged_by_player(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4B707F50, 2, p0, p1);
	}
	void set_entity_only_damaged_by_relationship_group(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x202237E2, 3, p0, p1, p2);
	}
	void set_entity_proofs(Entity e, BOOL b1, BOOL b2, BOOL b3, BOOL b4, BOOL b5, BOOL b6, BOOL b7, BOOL b8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7E9EAB66, 9, e, b1, b2, b3, b4, b5, b6, b7, b8);
	}
	void set_entity_quaternion(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x83B6046F, 5, p0, p1, p2, p3, p4);
	}
	void set_entity_records_collisions(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6B189A1A, 2, p0, p1);
	}
	void set_entity_rotation(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0A345EFE, 6, p0, p1, p2, p3, p4, p5);
	}
	void set_entity_visible(Entity e, BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD043E8E1, 2, e, b);
	}
	void set_entity_velocity(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFF5A1988, 4, p0, p1, p2, p3);
	}
	void set_entity_has_gravity(Entity e, BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE2F262BF, 2, e, b);
	}
	void set_entity_lod_dist(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD7ACC7AD, 2, p0, p1);
	}
	void set_entity_alpha(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAE667CB0, 3, p0, p1, p2);
	}
	Any get_entity_alpha(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1560B017, 1, p0);
	}
	void reset_entity_alpha(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8A30761C, 1, p0);
	}
	void _0xD8FF798A(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD8FF798A, 2, p0, p1);
	}
	void set_entity_render_scorched(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAAC9317B, 2, p0, p1);
	}
	void _0xC47F5B91(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC47F5B91, 2, p0, p1);
	}
	void create_model_swap(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0BC12F9E, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void remove_model_swap(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCE0AA8BC, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void create_model_hide(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7BD5CF2F, 6, p0, p1, p2, p3, p4, p5);
	}
	void remove_model_hide(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x993DBC10, 6, p0, p1, p2, p3, p4, p5);
	}
	void create_forced_object(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x335190A2, 6, p0, p1, p2, p3, p4, p5);
	}
	void remove_forced_object(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAED73ADD, 5, p0, p1, p2, p3, p4);
	}
	void set_entity_no_collision_entity(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1E11BFE9, 3, p0, p1, p2);
	}
	void set_entity_motion_blur(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE90005B8, 2, p0, p1);
	}
	void _0x44767B31(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x44767B31, 2, p0, p1);
	}
	void _0xE224A6A5(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE224A6A5, 2, p0, p1);
	}
	// 0xA0466A69 -- no params/results data

	Any create_ped(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0389EF71, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void delete_ped(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x13EFB9A0, 1, p0);
	}
	Any clone_ped(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8C8A8D6E, 4, p0, p1, p2, p3);
	}
	void _0xFC70EEC7(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFC70EEC7, 2, p0, p1);
	}
	BOOL is_ped_in_vehicle(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x7DA6BC83, 3, p0, p1, p2);
	}
	BOOL is_ped_in_model(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xA6438D4B, 2, p0, p1);
	}
	BOOL is_ped_in_any_vehicle(Ped p, BOOL unkb)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x3B0171EE, 2, p, unkb);
	}
	BOOL is_cop_ped_in_area_3d(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xB98DB96B, 6, p0, p1, p2, p3, p4, p5);
	}
	BOOL is_ped_injured(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x2530A087, 1, p0);
	}
	BOOL is_ped_hurt(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x69DFA0AF, 1, p0);
	}
	BOOL is_ped_fatally_injured(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xBADA0093, 1, p0);
	}
	Any _0xCBDB7739(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCBDB7739, 2, p0, p1);
	}
	BOOL is_conversation_ped_dead(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x1FA39EFE, 1, p0);
	}
	BOOL is_ped_aiming_from_cover(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xDEBAB2AF, 1, p0);
	}
	BOOL is_ped_reloading(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x961E1745, 1, p0);
	}
	BOOL is_ped_a_player(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x404794CA, 1, p0);
	}
	Any create_ped_inside_vehicle(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3000F092, 6, p0, p1, p2, p3, p4, p5);
	}
	void set_ped_desired_heading(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x961458F9, 2, p0, p1);
	}
	void _0x290421BE(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x290421BE, 1, p0);
	}
	BOOL is_ped_facing_ped(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0B775838, 3, p0, p1, p2);
	}
	BOOL is_ped_in_melee_combat(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xFD7814A5, 1, p0);
	}
	BOOL is_ped_stopped(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xA0DC0B87, 1, p0);
	}
	BOOL is_ped_shooting_in_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x741BF04F, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	BOOL is_any_ped_shooting_in_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x91833867, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	BOOL is_ped_shooting(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xE7C3405E, 1, p0);
	}
	void set_ped_accuracy(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6C17122E, 2, p0, p1);
	}
	Any get_ped_accuracy(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0A2A0AA0, 1, p0);
	}
	BOOL is_ped_model(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x5F1DDFCB, 2, p0, p1);
	}
	void explode_ped_head(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x05CC1380, 2, p0, p1);
	}
	void remove_ped_elegantly(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4FFB8C6C, 1, p0);
	}
	void add_armour_to_ped(Ped p, int armour)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF686B26E, 2, p, armour);
	}
	void set_ped_armour(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4E3A0CC4, 2, p0, p1);
	}
	void set_ped_into_vehicle(Ped ped, Vehicle veh, int unk)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x07500C79, 3, ped, veh, unk);
	}
	void _0x58A80BD5(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x58A80BD5, 2, p0, p1);
	}
	BOOL can_create_random_ped(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xF9ABE88F, 1, p0);
	}
	Any create_random_ped(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5A949543, 3, p0, p1, p2);
	}
	Any create_random_ped_as_driver(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB927CE9A, 2, p0, p1);
	}
	BOOL can_create_random_driver()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x99861609, 0);
	}
	Any _0x7018BE31()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7018BE31, 0);
	}
	void set_ped_move_anims_blend_out(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x20E01957, 1, p0);
	}
	void set_ped_can_be_dragged_out(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAA7F1131, 2, p0, p1);
	}
	void _0x6CD58238(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6CD58238, 1, p0);
	}
	BOOL is_ped_male(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x90950455, 1, p0);
	}
	BOOL is_ped_human(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x194BB7B0, 1, p0);
	}
	Any get_vehicle_ped_is_in(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAFE92319, 2, p0, p1);
	}
	void reset_ped_last_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5E3B5942, 1, p0);
	}
	void set_ped_density_multiplier_this_frame(float m)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x039C82BB, 1, float_int(m));
	}
	void set_scenario_ped_density_multiplier_this_frame(float m1, float m2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2909ABF0, 2, float_int(m1), float_int(m2));
	}
	void _0xB48C0C04()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB48C0C04, 0);
	}
	void _0x25EA2AA5(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x25EA2AA5, 3, p0, p1, p2);
	}
	void set_ped_non_creation_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7A97283F, 6, p0, p1, p2, p3, p4, p5);
	}
	void clear_ped_non_creation_area()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6F7043A3, 0);
	}
	void _0x8C555ADD()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8C555ADD, 0);
	}
	BOOL is_ped_on_mount(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x43103006, 1, p0);
	}
	Any get_mount(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDD31EC4E, 1, p0);
	}
	BOOL is_ped_on_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xA1AE7CC7, 1, p0);
	}
	BOOL is_ped_on_specific_vehicle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x63CB4603, 2, p0, p1);
	}
	void set_ped_money(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x40D90BF2, 2, p0, p1);
	}
	Any get_ped_money(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEB3C4C7E, 1, p0);
	}
	void _0xD41C9AED(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD41C9AED, 2, p0, p1);
	}
	void _0x30B98369(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x30B98369, 1, p0);
	}
	void _0x02A080C8(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x02A080C8, 1, p0);
	}
	void set_ped_suffers_critical_hits(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6F6FC7E6, 2, p0, p1);
	}
	void _0x1572022A(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1572022A, 2, p0, p1);
	}
	BOOL is_ped_sitting_in_vehicle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xDDDE26FA, 2, p0, p1);
	}
	BOOL is_ped_sitting_in_any_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0EA9CA03, 1, p0);
	}
	BOOL is_ped_on_foot(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xC60D0785, 1, p0);
	}
	BOOL is_ped_on_any_bike(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x4D885B2E, 1, p0);
	}
	BOOL is_ped_planting_bomb(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0EDAC574, 1, p0);
	}
	Vector3 get_dead_ped_pickup_coords(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x129F9DC1, 3, p0, p1, p2);
	}
	BOOL is_ped_in_any_boat(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x1118A947, 1, p0);
	}
	BOOL is_ped_in_any_sub(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xE65F8059, 1, p0);
	}
	BOOL is_ped_in_any_heli(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x7AB5523B, 1, p0);
	}
	BOOL is_ped_in_any_plane(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x51BBCE7E, 1, p0);
	}
	BOOL is_ped_in_flying_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xCA072485, 1, p0);
	}
	void set_ped_dies_in_water(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x604C872B, 2, p0, p1);
	}
	void set_ped_dies_in_sinking_vehicle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8D4D9ABB, 2, p0, p1);
	}
	int get_ped_armour(Ped p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0x2CE311A7, 1, p);
	}
	void set_ped_stay_in_vehicle_when_jacked(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB014A09C, 2, p0, p1);
	}
	void set_ped_can_be_shot_in_vehicle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5DB7B3A9, 2, p0, p1);
	}
	Any get_ped_last_damage_bone(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAB933841, 2, p0, p1);
	}
	void clear_ped_last_damage_bone(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x56CB715E, 1, p0);
	}
	void set_ai_weapon_damage_modifier(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x516E30EE, 1, p0);
	}
	void reset_ai_weapon_damage_modifier()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6E965420, 0);
	}
	void _0x0F9A401F(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0F9A401F, 1, p0);
	}
	void _0x97886238()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x97886238, 0);
	}
	void _0xCC9D7F1A(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCC9D7F1A, 2, p0, p1);
	}
	void set_ped_can_be_targetted(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x75C49F74, 2, p0, p1);
	}
	void set_ped_can_be_targetted_by_team(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB103A8E1, 3, p0, p1, p2);
	}
	void set_ped_can_be_targetted_by_player(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD050F490, 3, p0, p1, p2);
	}
	void _0x7DA12905(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7DA12905, 2, p0, p1);
	}
	void set_time_exclusive_display_texture(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7F67671D, 2, p0, p1);
	}
	BOOL is_ped_in_any_police_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x84FA790D, 1, p0);
	}
	void _0xA819680B(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA819680B, 1, p0);
	}
	Any _0xCD71F11B(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCD71F11B, 1, p0);
	}
	BOOL is_ped_falling(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xABF77334, 1, p0);
	}
	BOOL is_ped_jumping(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x07E5BC0E, 1, p0);
	}
	BOOL is_ped_climbing(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xBCE03D35, 1, p0);
	}
	BOOL is_ped_diving(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x7BC5BF3C, 1, p0);
	}
	Any _0xB19215F6(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB19215F6, 1, p0);
	}
	Any get_ped_parachute_state(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7D4BC475, 1, p0);
	}
	Any _0x01F3B035(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x01F3B035, 1, p0);
	}
	void set_ped_parachute_tint_index(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5AEFEC3A, 2, p0, p1);
	}
	void get_ped_parachute_tint_index(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE9E7FAC5, 2, p0, p1);
	}
	void set_ped_ducking(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB90353D7, 2, p0, p1);
	}
	BOOL is_ped_ducking(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x9199C77D, 1, p0);
	}
	BOOL is_ped_in_any_taxi(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x16FD386C, 1, p0);
	}
	void set_ped_id_range(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEF3B4ED9, 2, p0, p1);
	}
	void _0x9A2180FF(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9A2180FF, 2, p0, p1);
	}
	void _0xF30658D2(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF30658D2, 2, p0, p1);
	}
	void _0x43709044(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x43709044, 1, p0);
	}
	void set_ped_seeing_range(Any p0, float p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4BD72FE8, 2, p0, float_int(p1));
	}
	void set_ped_hearing_range(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB32087E0, 2, p0, p1);
	}
	void set_ped_visual_field_min_angle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x72E2E18B, 2, p0, p1);
	}
	void set_ped_visual_field_max_angle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0CEA0F9A, 2, p0, p1);
	}
	void set_ped_visual_field_min_elevation_angle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5CC2F1B8, 2, p0, p1);
	}
	void set_ped_visual_field_max_elevation_angle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x39D9102F, 2, p0, p1);
	}
	void _0xFDF2F7C2(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFDF2F7C2, 2, p0, p1);
	}
	void _0xE57202A1(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE57202A1, 2, p0, p1);
	}
	void set_ped_stealth_movement(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x67E28E1D, 3, p0, p1, p2);
	}
	Any get_ped_stealth_movement(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x40321B83, 1, p0);
	}
	Any create_group(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8DC0368D, 1, p0);
	}
	void set_ped_as_group_leader(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7265BEA2, 2, p0, p1);
	}
	void set_ped_as_group_member(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0EE13F92, 2, p0, p1);
	}
	void _0xD0D8BDBC(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD0D8BDBC, 3, p0, p1, p2);
	}
	void remove_group(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x48D72B88, 1, p0);
	}
	void remove_ped_from_group(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x82697713, 1, p0);
	}
	BOOL is_ped_group_member(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x876D5363, 2, p0, p1);
	}
	Any _0x9678D4FF(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9678D4FF, 1, p0);
	}
	void set_group_separation_range(Any p0, float p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7B820CD5, 2, p0, float_int(p1));
	}
	void _0x2F0D0973(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2F0D0973, 2, p0, p1);
	}
	BOOL is_ped_prone(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x02C2A6C3, 1, p0);
	}
	BOOL is_ped_in_combat(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xFE027CB5, 2, p0, p1);
	}
	Any _0xCCD525E1(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCCD525E1, 2, p0, p1);
	}
	BOOL is_ped_doing_driveby(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xAC3CEB9C, 1, p0);
	}
	BOOL is_ped_jacking(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x3B321816, 1, p0);
	}
	BOOL is_ped_being_jacked(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xD45D605C, 1, p0);
	}
	BOOL is_ped_being_stunned(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0A66CE30, 2, p0, p1);
	}
	Any get_peds_jacker(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDE1DBB59, 1, p0);
	}
	Any get_jack_target(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1D196361, 1, p0);
	}
	BOOL is_ped_fleeing(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x85D813C6, 1, p0);
	}
	BOOL is_ped_in_cover(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x972C5A8B, 2, p0, p1);
	}
	BOOL is_ped_in_cover_facing_left(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xB89DBB80, 1, p0);
	}
	BOOL is_ped_going_into_cover(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xA3589628, 1, p0);
	}
	Any set_ped_pinned_down(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCC78999D, 3, p0, p1, p2);
	}
	Any _0xACF162E0(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xACF162E0, 1, p0);
	}
	Any _0x99968B37(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x99968B37, 1, p0);
	}
	Any _0x84ADF9EB(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x84ADF9EB, 1, p0);
	}
	Any get_ped_cause_of_death(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x63458C27, 1, p0);
	}
	Any get_ped_time_of_death(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDF6D5D54, 1, p0);
	}
	Any _0xEF0B78E6(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEF0B78E6, 1, p0);
	}
	Any _0xFB18CB19(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFB18CB19, 5, p0, p1, p2, p3, p4);
	}
	void set_ped_relationship_group_default_hash(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x423B7BA2, 2, p0, p1);
	}
	void set_ped_relationship_group_hash(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x79F8C18C, 2, p0, p1);
	}
	void set_relationship_between_groups(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD4A215BA, 3, p0, p1, p2);
	}
	void clear_relationship_between_groups(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x994B8C2D, 3, p0, p1, p2);
	}
	Any add_relationship_group(string p0, Hash *p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8B635546, 2, p0, p1);
	}
	void remove_relationship_group(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4A1DC59A, 1, p0);
	}
	Any get_relationship_between_peds(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE254C39C, 2, p0, p1);
	}
	Any get_ped_relationship_group_default_hash(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x714BD6E4, 1, p0);
	}
	Any get_ped_relationship_group_hash(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x354F283C, 1, p0);
	}
	Any get_relationship_between_groups(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4E372FE2, 2, p0, p1);
	}
	void set_ped_can_be_targeted_without_los(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7FDDC0A6, 2, p0, p1);
	}
	void set_ped_to_inform_respected_friends(Any p0, float p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD78AC46C, 3, p0, float_int(p1), p2);
	}
	BOOL is_ped_responding_to_event(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x7A877554, 2, p0, p1);
	}
	void set_ped_firing_pattern(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB4629D66, 2, p0, p1);
	}
	void set_ped_shoot_rate(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFB301746, 2, p0, p1);
	}
	void set_combat_float(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD8B7637C, 3, p0, p1, p2);
	}
	Any get_combat_float(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x511D7EF8, 2, p0, p1);
	}
	void get_group_size(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF7E1A691, 3, p0, p1, p2);
	}
	BOOL does_group_exist(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x935C978D, 1, p0);
	}
	Any get_ped_group_index(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x134E0785, 1, p0);
	}
	BOOL is_ped_in_group(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x836D9795, 1, p0);
	}
	Any _0xDE7442EE(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDE7442EE, 1, p0);
	}
	void set_group_formation(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x08FAC739, 2, p0, p1);
	}
	void set_group_formation_spacing(Any p0, float p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB1E086FF, 4, p0, float_int(p1), p2, p3);
	}
	void _0x267FCEAD(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x267FCEAD, 1, p0);
	}
	Vehicle get_vehicle_ped_is_using(Ped p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6DE3AADA, 1, p);
	}
	Any set_exclusive_phone_relationships(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x56E0C163, 1, p0);
	}
	void set_ped_gravity(Ped p, BOOL gravity)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3CA16652, 2, p, gravity);
	}
	void apply_damage_to_ped(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4DC27FCF, 3, p0, p1, p2);
	}
	void set_ped_allowed_to_duck(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC4D122F8, 2, p0, p1);
	}
	void set_ped_never_leaves_group(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0E038813, 2, p0, p1);
	}
	Any get_ped_type(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB1460D43, 1, p0);
	}
	void set_ped_as_cop(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x84E7DE9F, 2, p0, p1);
	}
	void set_ped_max_health(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5533F60B, 2, p0, p1);
	}
	Any get_ped_max_health(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA45B6C8D, 1, p0);
	}
	void set_ped_max_time_in_water(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFE0A106B, 2, p0, p1);
	}
	void set_ped_max_time_underwater(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x082EF240, 2, p0, p1);
	}
	void _0x373CC405(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x373CC405, 2, p0, p1);
	}
	void set_ped_can_be_knocked_off_vehicle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8A251612, 2, p0, p1);
	}
	Any _0xC9D098B3(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC9D098B3, 1, p0);
	}
	void knock_ped_off_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xACDD0674, 1, p0);
	}
	void set_ped_coords_no_gang(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9561AD98, 4, p0, p1, p2, p3);
	}
	Any get_ped_as_group_member(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9AA3CC8C, 2, p0, p1);
	}
	void set_ped_keep_task(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA7EC79CE, 2, p0, p1);
	}
	void _0x397F06E3(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x397F06E3, 2, p0, p1);
	}
	BOOL is_ped_swimming(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x7AB43DB8, 1, p0);
	}
	BOOL is_ped_swimming_under_water(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0E8D524F, 1, p0);
	}
	void set_ped_coords_keep_vehicle(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD66AE1D3, 4, p0, p1, p2, p3);
	}
	void set_ped_dies_in_vehicle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6FE1E440, 2, p0, p1);
	}
	void set_create_random_cops(BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x23441648, 1, b);
	}
	void _0x82E548CC(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x82E548CC, 1, p0);
	}
	void _0xEDC31475(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEDC31475, 1, p0);
	}
	BOOL can_create_random_cops()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xAA73DAD9, 0);
	}
	void set_ped_as_enemy(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAE620A1B, 2, p0, p1);
	}
	void set_ped_can_smash_glass(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x149C60A8, 3, p0, p1, p2);
	}
	BOOL is_ped_in_any_train(Ped p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x759EF63A, 1, p);
	}
	BOOL is_ped_getting_into_a_vehicle(Ped p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x90E805AC, 1, p);
	}
	BOOL is_ped_trying_to_enter_a_locked_vehicle(Ped p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x46828B4E, 1, p);
	}
	void set_enable_handcuffs(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAC9BBA23, 2, p0, p1);
	}
	void set_enable_bound_ankles(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9208D689, 2, p0, p1);
	}
	void _0x7BF61471(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7BF61471, 2, p0, p1);
	}
	void set_can_attack_friendly(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x47C60963, 3, p0, p1, p2);
	}
	Any get_ped_alertness(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF83E4DAF, 1, p0);
	}
	void set_ped_alertness(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2C32D9AE, 2, p0, p1);
	}
	void set_ped_get_out_upside_down_vehicle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x89AD49FF, 2, p0, p1);
	}
	void set_ped_movement_clipset(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA817CDEB, 3, p0, p1, p2);
	}
	void reset_ped_movement_clipset(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB83CEE93, 2, p0, p1);
	}
	void set_ped_strafe_clipset(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0BACF010, 2, p0, p1);
	}
	void reset_ped_strafe_clipset(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF1967A12, 1, p0);
	}
	void set_ped_weapon_movement_clipset(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF8BE54DC, 2, p0, p1);
	}
	void reset_ped_weapon_movement_clipset(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC60C9ACD, 1, p0);
	}
	void _0xD4C73595(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD4C73595, 2, p0, p1);
	}
	void _0xAEC9163B(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAEC9163B, 1, p0);
	}
	void set_ped_in_vehicle_context(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x27F25C0E, 2, p0, p1);
	}
	void reset_ped_in_vehicle_context(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3C94D88A, 1, p0);
	}
	Any _0x3C30B447(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3C30B447, 3, p0, p1, p2);
	}
	void _0x895E1D67(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x895E1D67, 5, p0, p1, p2, p3, p4);
	}
	void _0x5736FB23(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5736FB23, 2, p0, p1);
	}
	void set_ped_alternate_movement_anim(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBA84FD8C, 6, p0, p1, p2, p3, p4, p5);
	}
	void clear_ped_alternate_movement_anim(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7A7F5BC3, 3, p0, p1, p2);
	}
	void set_ped_gesture_group(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x170DA109, 2, p0, p1);
	}
	Vector3 _0xC59D4268(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0xC59D4268, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	Vector3 _0x5F7789E6(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x5F7789E6, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	Any get_ped_drawable_variation(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x29850FE2, 2, p0, p1);
	}
	Any get_number_of_ped_drawable_variations(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9754C27D, 2, p0, p1);
	}
	Any get_ped_texture_variation(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC0A8590A, 2, p0, p1);
	}
	Any get_number_of_ped_texture_variations(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x83D9FBE7, 3, p0, p1, p2);
	}
	Any _0xC9780B95(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC9780B95, 2, p0, p1);
	}
	Any remove_nightvision_melee(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4892B882, 3, p0, p1, p2);
	}
	Any get_ped_palette_variation(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEF1BC082, 2, p0, p1);
	}
	BOOL is_ped_component_variation_valid(Ped ped, int componentId, int drawableId, int textureId)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x952ABD9A, 4, ped, componentId, drawableId, textureId);
	}
	void set_ped_component_variation(Ped ped, int componentId, int drawableId, int textureId, int paletteId)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD4F7B05C, 5, ped, componentId, drawableId, textureId, paletteId);
	}
	void set_ped_random_component_variation(Ped ped, BOOL rand)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4111BA46, 2, ped, rand);
	}
	void set_ped_random_props(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE3318E0E, 1, p0);
	}
	void set_ped_default_component_variation(Ped p)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC866A984, 1, p);
	}
	void set_ped_blend_from_parents(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x837BD370, 5, p0, p1, p2, p3, p4);
	}
	void _0xC21C8A56(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC21C8A56, 1, p0);
	}
	void _0x5D2FC042(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5D2FC042, 3, p0, p1, p2);
	}
	void set_ped_head_blend_data(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x60746B88, 11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	void update_ped_head_blend_data(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5CB76219, 4, p0, p1, p2, p3);
	}
	void set_ped_head_overlay(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD28DBA90, 4, p0, p1, p2, p3);
	}
	// GET_PED_HEAD_OVERLAY -- no params/results data
	Any _0xFF43C18D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFF43C18D, 1, p0);
	}
	BOOL has_ped_head_blend_finished(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x2B1BD9C5, 1, p0);
	}
	void _0x894314A4(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x894314A4, 1, p0);
	}
	void _0x57E5B3F9(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x57E5B3F9, 5, p0, p1, p2, p3, p4);
	}
	void _0xC6F36292(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC6F36292, 1, p0);
	}
	Any _0x211DEFEC(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x211DEFEC, 1, p0);
	}
	Any _0x095D3BD8(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x095D3BD8, 1, p0);
	}
	void _0x45F3BDFB(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x45F3BDFB, 4, p0, p1, p2, p3);
	}
	Any _0xC6517D52(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC6517D52, 1, p0);
	}
	void _0x6435F67F(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6435F67F, 1, p0);
	}
	void _0xC0E23671(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC0E23671, 4, p0, p1, p2, p3);
	}
	Any _0x3B0CA391(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3B0CA391, 1, p0);
	}
	void _0xFD103BA7(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFD103BA7, 1, p0);
	}
	Any get_ped_prop_index(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x746DDAC0, 2, p0, p1);
	}
	void set_ped_prop_index(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0829F2E2, 5, p0, p1, p2, p3, p4);
	}
	void knock_off_ped_prop(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x08D8B180, 5, p0, p1, p2, p3, p4);
	}
	void clear_ped_prop(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2D23D743, 2, p0, p1);
	}
	void clear_all_ped_props(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x81DF8B43, 1, p0);
	}
	Any get_ped_prop_texture_index(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x922A6653, 2, p0, p1);
	}
	void _0x7BCD8991(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7BCD8991, 1, p0);
	}
	void _0x080275EE(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x080275EE, 1, p0);
	}
	void set_blocking_of_non_temporary_events(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDFE34E4A, 2, p0, p1);
	}
	void set_ped_bounds_orientation(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCFA20D68, 6, p0, p1, p2, p3, p4, p5);
	}
	void register_target(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x50A95442, 2, p0, p1);
	}
	void register_hated_targets_around_ped(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7F87559E, 2, p0, p1);
	}
	Any get_random_ped_at_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDC8239EB, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any get_closest_ped(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8F6C1F55, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void set_scenario_peds_to_be_returned_by_next_command(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x85615FD0, 1, p0);
	}
	Any _0x18DD76A1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x18DD76A1, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void _0x6D55B3B3(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6D55B3B3, 2, p0, p1);
	}
	void set_driver_ability(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAAD4012C, 2, p0, p1);
	}
	void set_driver_aggressiveness(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8B02A8FB, 2, p0, p1);
	}
	BOOL can_ped_ragdoll(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xC0EFB7A3, 1, p0);
	}
	Any set_ped_to_ragdoll(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x83CB5052, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any set_ped_to_ragdoll_with_fall(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFA12E286, 14, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
	}
	void set_ped_ragdoll_on_collision(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2654A0F4, 2, p0, p1);
	}
	BOOL is_ped_ragdoll(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xC833BBE1, 1, p0);
	}
	BOOL is_ped_running_ragdoll_task(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x44A153F2, 1, p0);
	}
	void set_ped_ragdoll_force_fall(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x20A5BDE0, 1, p0);
	}
	void reset_ped_ragdoll_timer(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF2865370, 1, p0);
	}
	void set_ped_can_ragdoll(Ped ped, BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCF1384C4, 2, ped, b);
	}
	BOOL is_ped_running_mobile_phone_task(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xFB2AFED1, 1, p0);
	}
	Any _0x97353375(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x97353375, 1, p0);
	}
	void _0x9C8F830D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9C8F830D, 2, p0, p1);
	}
	void _0x77CBA290(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x77CBA290, 2, p0, p1);
	}
	void set_ped_angled_defensive_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3EFBDD9B, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void set_ped_sphere_defensive_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBD96D8E8, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void _0x40638BDC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x40638BDC, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void _0x4763B2C6(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4763B2C6, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void set_ped_defensive_area_attached_to_ped(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x74BDA7CE, 11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	void remove_ped_defensive_area(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x34AAAFA5, 2, p0, p1);
	}
	Vector3 get_ped_defensive_area_position(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0xCB65198D, 2, p0, p1);
	}
	void _0xF3B7EFBF(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF3B7EFBF, 2, p0, p1);
	}
	void _0xA0134498(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA0134498, 1, p0);
	}
	void revive_injured_ped(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x14D3E6E3, 1, p0);
	}
	void resurrect_ped(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA4B82097, 1, p0);
	}
	void set_ped_name_debug(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x20D6273E, 2, p0, p1);
	}
	Vector3 get_ped_extracted_displacement(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x5231F901, 2, p0, p1);
	}
	void set_ped_dies_when_injured(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE94E24D4, 2, p0, p1);
	}
	void set_ped_enable_weapon_blocking(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4CAD1A4A, 2, p0, p1);
	}
	void _0x141CC936(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x141CC936, 2, p0, p1);
	}
	void reset_ped_visible_damage(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC4BC4841, 1, p0);
	}
	void _0x1E54DB12(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1E54DB12, 5, p0, p1, p2, p3, p4);
	}
	void apply_ped_blood(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x376CE3C0, 6, p0, p1, p2, p3, p4, p5);
	}
	void _0x8F3F3A9C(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8F3F3A9C, 5, p0, p1, p2, p3, p4);
	}
	void _0xFC13CE80(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFC13CE80, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void apply_ped_damage_decal(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8A13A41F, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void apply_ped_damage_pack(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x208D0CB8, 4, p0, p1, p2, p3);
	}
	void clear_ped_blood_damage(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF7ADC960, 1, p0);
	}
	void _0xF210BE69(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF210BE69, 2, p0, p1);
	}
	void _0x0CB6C4ED(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0CB6C4ED, 3, p0, p1, p2);
	}
	void _0x70AA5B7D(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x70AA5B7D, 3, p0, p1, p2);
	}
	void clear_ped_wetness(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x629F15BD, 1, p0);
	}
	void set_ped_wetness_height(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7B33289A, 2, p0, p1);
	}
	void set_ped_wetness_enabled_this_frame(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBDE749F7, 1, p0);
	}
	void _0xA993915F(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA993915F, 1, p0);
	}
	void set_ped_sweat(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x76A1DB9F, 2, p0, p1);
	}
	void _0x70559AC7(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x70559AC7, 3, p0, p1, p2);
	}
	Any _0x3543019E(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3543019E, 2, p0, p1);
	}
	void clear_ped_decorations(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD4496BF3, 1, p0);
	}
	void _0xEFD58EB9(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEFD58EB9, 1, p0);
	}
	BOOL was_ped_skeleton_updated(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xF7E2FBAD, 1, p0);
	}
	Vector3 get_ped_bone_coords(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x4579CAB1, 5, p0, p1, p2, p3, p4);
	}
	void create_nm_message(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1CFBFD4B, 2, p0, p1);
	}
	void give_ped_nm_message(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x737C3689, 1, p0);
	}
	Any add_scenario_blocking_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA38C0234, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void remove_scenario_blocking_areas()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4DDF845F, 0);
	}
	void remove_scenario_blocking_area(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4483EF06, 2, p0, p1);
	}
	void set_scenario_peds_spawn_in_sphere_area(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x80EAD297, 5, p0, p1, p2, p3, p4);
	}
	BOOL is_ped_using_scenario(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0F65B0D4, 2, p0, p1);
	}
	BOOL is_ped_using_any_scenario(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x195EF5B7, 1, p0);
	}
	Any _0x59DE73AC(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x59DE73AC, 4, p0, p1, p2, p3);
	}
	void _0xC08FE5F6(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC08FE5F6, 2, p0, p1);
	}
	Any _0x58C0F6CF(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x58C0F6CF, 4, p0, p1, p2, p3);
	}
	Any _0x761F8F48(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x761F8F48, 2, p0, p1);
	}
	void _0x033F43FA(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x033F43FA, 1, p0);
	}
	void _0x4C684C81(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4C684C81, 1, p0);
	}
	Any _0x7B4C3E6F(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7B4C3E6F, 4, p0, p1, p2, p3);
	}
	void _0x5BC276AE(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5BC276AE, 2, p0, p1);
	}
	void play_facial_anim(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1F6CCDDE, 3, p0, p1, p2);
	}
	void set_facial_idle_anim_override(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9BA19C13, 3, p0, p1, p2);
	}
	void clear_facial_idle_anim_override(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5244F4E2, 1, p0);
	}
	void set_ped_can_play_gesture_anims(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE131E3B3, 2, p0, p1);
	}
	void set_ped_can_play_viseme_anims(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA2FDAF27, 3, p0, p1, p2);
	}
	void _0xADB2511A(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xADB2511A, 2, p0, p1);
	}
	void set_ped_can_play_ambient_anims(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF8053081, 2, p0, p1);
	}
	void set_ped_can_play_ambient_base_anims(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5720A5DD, 2, p0, p1);
	}
	void _0xB7CD0A49(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB7CD0A49, 1, p0);
	}
	void _0x343B4DE0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x343B4DE0, 2, p0, p1);
	}
	void set_ped_can_head_ik(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD3B04476, 2, p0, p1);
	}
	void set_ped_can_leg_ik(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9955BC6F, 2, p0, p1);
	}
	void _0x8E5D4EAB(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8E5D4EAB, 2, p0, p1);
	}
	void _0x7B0040A8(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7B0040A8, 2, p0, p1);
	}
	void _0x0FDA62DE(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0FDA62DE, 2, p0, p1);
	}
	void set_ped_can_use_auto_conversation_lookat(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x584C5178, 2, p0, p1);
	}
	BOOL is_ped_headtracking_ped(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x2A5DF721, 2, p0, p1);
	}
	BOOL is_ped_headtracking_entity(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x233C9ACF, 2, p0, p1);
	}
	void set_ped_primary_lookat(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6DEF6F1C, 2, p0, p1);
	}
	void _0xFC942D7C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFC942D7C, 2, p0, p1);
	}
	void _0x89EEE07B(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x89EEE07B, 2, p0, p1);
	}
	void set_ped_config_flag(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9CFBE10D, 3, p0, p1, p2);
	}
	void set_ped_reset_flag(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCFF6FF66, 3, p0, p1, p2);
	}
	Any get_ped_config_flag(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xABE98267, 3, p0, p1, p2);
	}
	Any get_ped_reset_flag(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2FC10D11, 2, p0, p1);
	}
	void set_ped_group_member_passenger_index(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2AB3670B, 2, p0, p1);
	}
	void set_ped_can_evasive_dive(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x542FEB4D, 2, p0, p1);
	}
	BOOL is_ped_evasive_diving(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xD82829DC, 2, p0, p1);
	}
	void set_ped_shoots_at_coord(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFD64EAE5, 5, p0, p1, p2, p3, p4);
	}
	void set_ped_model_is_suppressed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7820CA43, 2, p0, p1);
	}
	void stop_any_ped_model_being_suppressed()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5AD7DC55, 0);
	}
	void set_ped_can_be_targeted_when_injured(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6FD9A7CD, 2, p0, p1);
	}
	void set_ped_generates_dead_body_events(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE9B97A2B, 2, p0, p1);
	}
	void _0xFF1F6AEB(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFF1F6AEB, 2, p0, p1);
	}
	void set_ped_can_ragdoll_from_player_impact(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE9BD733A, 2, p0, p1);
	}
	void give_ped_helmet(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1862A461, 4, p0, p1, p2, p3);
	}
	void remove_ped_helmet(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2086B1F0, 2, p0, p1);
	}
	void set_ped_helmet(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xED366E53, 2, p0, p1);
	}
	void set_ped_helmet_flag(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x12677780, 2, p0, p1);
	}
	void set_ped_helmet_prop_index(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA316D13F, 2, p0, p1);
	}
	void set_ped_helmet_texture_index(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5F6C3328, 2, p0, p1);
	}
	BOOL is_ped_wearing_helmet(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0D680D49, 1, p0);
	}
	void _0x24A1284E(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x24A1284E, 1, p0);
	}
	Any _0x8A3A3116(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8A3A3116, 1, p0);
	}
	Any _0x74EB662D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x74EB662D, 1, p0);
	}
	Any _0xFFF149FE(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFFF149FE, 1, p0);
	}
	void set_ped_to_load_cover(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCF94BA97, 2, p0, p1);
	}
	void set_ped_can_cower_in_cover(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5194658B, 2, p0, p1);
	}
	void set_ped_can_peek_in_cover(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC1DAE216, 2, p0, p1);
	}
	void set_ped_plays_head_on_horn_anim_when_dies_in_vehicle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7C563CD2, 2, p0, p1);
	}
	void set_ped_leg_ik_mode(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFDDB042E, 2, p0, p1);
	}
	void set_ped_motion_blur(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA211A128, 2, p0, p1);
	}
	void set_ped_can_switch_weapon(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB5F8BA28, 2, p0, p1);
	}
	void set_ped_dies_instantly_in_water(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFE2554FC, 2, p0, p1);
	}
	void _0x77BB7CB8(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x77BB7CB8, 2, p0, p1);
	}
	void stop_ped_weapon_firing_when_dropped(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4AC3421E, 1, p0);
	}
	void set_scripted_anim_seat_offset(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7CEFFA45, 2, p0, p1);
	}
	void set_ped_combat_movement(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x12E62F9E, 2, p0, p1);
	}
	Any get_ped_combat_movement(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF3E7730E, 1, p0);
	}
	void set_ped_combat_ability(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6C23D329, 2, p0, p1);
	}
	void set_ped_combat_range(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8818A959, 2, p0, p1);
	}
	Any get_ped_combat_range(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9B9B7163, 1, p0);
	}
	void set_ped_combat_attributes(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x81D64248, 3, p0, p1, p2);
	}
	void set_ped_target_loss_response(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCFA613FF, 2, p0, p1);
	}
	Any _0x139C0875(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x139C0875, 1, p0);
	}
	BOOL is_ped_performing_stealth_kill(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x9ADD7B21, 1, p0);
	}
	Any _0x9BE7C860(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9BE7C860, 1, p0);
	}
	BOOL is_ped_being_stealth_killed(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xD044C8AF, 1, p0);
	}
	Any _0xAFEC26A4(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAFEC26A4, 1, p0);
	}
	BOOL was_ped_killed_by_stealth(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x2EA4B54E, 1, p0);
	}
	BOOL was_ped_killed_by_takedown(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xBDD3CE69, 1, p0);
	}
	Any _0x3993092B(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3993092B, 1, p0);
	}
	void set_ped_flee_attributes(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA717A875, 3, p0, p1, p2);
	}
	void set_ped_cower_hash(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x16F30DF4, 2, p0, p1);
	}
	void _0xA6F2C057(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA6F2C057, 2, p0, p1);
	}
	void set_ped_steers_around_peds(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x797CAE4F, 2, p0, p1);
	}
	void set_ped_steers_around_objects(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3BD9B0A6, 2, p0, p1);
	}
	void set_ped_steers_around_vehicles(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x533C0651, 2, p0, p1);
	}
	void _0x2276DE0D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2276DE0D, 2, p0, p1);
	}
	void _0x59C52BE6(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x59C52BE6, 1, p0);
	}
	void _0x1D87DDC1(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1D87DDC1, 2, p0, p1);
	}
	void _0xB52BA5F5(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB52BA5F5, 1, p0);
	}
	BOOL is_any_ped_near_point(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xFBD9B050, 4, p0, p1, p2, p3);
	}
	void _0x187B9070(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x187B9070, 3, p0, p1, p2);
	}
	Any _0x45037B9B(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x45037B9B, 5, p0, p1, p2, p3, p4);
	}
	void _0x840D24D3(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x840D24D3, 1, p0);
	}
	void get_ped_flood_invincibility(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x31C31DAA, 2, p0, p1);
	}
	void _0x9194DB71(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9194DB71, 2, p0, p1);
	}
	BOOL is_tracked_ped_visible(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x33248CC1, 1, p0);
	}
	Any _0x5B1B70AA(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5B1B70AA, 1, p0);
	}
	BOOL is_ped_tracked(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x7EB613D9, 1, p0);
	}
	BOOL has_ped_received_event(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xECD73DB0, 2, p0, p1);
	}
	Any _0x74A0F291(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x74A0F291, 2, p0, p1);
	}
	Any get_ped_bone_index(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x259C6BA2, 2, p0, p1);
	}
	Any get_ped_ragdoll_bone_index(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x849F0716, 2, p0, p1);
	}
	void set_ped_enveff_scale(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFC1CFC27, 2, p0, p1);
	}
	Any get_ped_enveff_scale(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA3421E39, 1, p0);
	}
	void set_enable_ped_enveff_scale(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC70F4A84, 2, p0, p1);
	}
	void _0x3B882533(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3B882533, 2, p0, p1);
	}
	void _0x87A0C174(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x87A0C174, 4, p0, p1, p2, p3);
	}
	void _0x7BD26837(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7BD26837, 2, p0, p1);
	}
	void _0x98E29ED0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x98E29ED0, 2, p0, p1);
	}
	Any create_synchronized_scene(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFFDDF8FA, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any _0xF3876894(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF3876894, 5, p0, p1, p2, p3, p4);
	}
	BOOL is_synchronized_scene_running(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x57A282F1, 1, p0);
	}
	void set_synchronized_scene_origin(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2EC2A0B2, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void set_synchronized_scene_phase(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF5AB0D98, 2, p0, p1);
	}
	Any get_synchronized_scene_phase(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB0B2C852, 1, p0);
	}
	void set_synchronized_scene_rate(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF10112FD, 2, p0, p1);
	}
	Any get_synchronized_scene_rate(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x89365F0D, 1, p0);
	}
	void set_synchronized_scene_looped(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x32ED9F82, 2, p0, p1);
	}
	BOOL is_synchronized_scene_looped(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x47D87A84, 1, p0);
	}
	void _0x2DE48DA1(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2DE48DA1, 2, p0, p1);
	}
	Any _0x72CF2514(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x72CF2514, 1, p0);
	}
	void attach_synchronized_scene_to_entity(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE9BA6189, 3, p0, p1, p2);
	}
	void detach_synchronized_scene(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x52A1CAB2, 1, p0);
	}
	void _0xBF7F9035(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBF7F9035, 1, p0);
	}
	Any force_ped_motion_state(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x164DDEFF, 5, p0, p1, p2, p3, p4);
	}
	void set_ped_max_move_blend_ratio(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEAD0269A, 2, p0, p1);
	}
	void set_ped_min_move_blend_ratio(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x383EC364, 2, p0, p1);
	}
	void set_ped_move_rate_override(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x900008C6, 2, p0, p1);
	}
	Any _0x79543043(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x79543043, 2, p0, p1);
	}
	Any get_ped_nearby_vehicles(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCB716F68, 2, p0, p1);
	}
	Any get_ped_nearby_peds(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4D3325F4, 3, p0, p1, p2);
	}
	Any _0xF9FB4B71(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF9FB4B71, 1, p0);
	}
	BOOL is_ped_using_action_mode(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x5AE7EDA2, 1, p0);
	}
	void set_ped_using_action_mode(Any p0, Any p1, int p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8802F696, 4, p0, p1, p2, p3);
	}
	void set_ped_capsule(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB153E1B9, 2, p0, p1);
	}
	Any register_pedheadshot(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFFE2667B, 1, p0);
	}
	Any _0x4DD03628(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4DD03628, 1, p0);
	}
	void unregister_pedheadshot(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0879AE45, 1, p0);
	}
	BOOL is_pedheadshot_valid(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0B1080C4, 1, p0);
	}
	BOOL is_pedheadshot_ready(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x761CD02E, 1, p0);
	}
	Any get_pedheadshot_txd_string(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x76D28E96, 1, p0);
	}
	void set_pedheadshot_custom_lighting(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAB688DAB, 1, p0);
	}
	void set_pedheadshot_custom_light(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF48A9155, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	Any _0x10F2C023(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x10F2C023, 1, p0);
	}
	void _0x0DBB2FA7(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0DBB2FA7, 1, p0);
	}
	Any _0x810158F8()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x810158F8, 0);
	}
	Any _0x05023F8F()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x05023F8F, 0);
	}
	Any _0xAA39FD6C()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAA39FD6C, 0);
	}
	void _0xEF9142DB(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEF9142DB, 2, p0, p1);
	}
	void _0x0688DE64(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0688DE64, 1, p0);
	}
	void _0x909A1D76(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x909A1D76, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void _0x4AAD0ECB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4AAD0ECB, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void _0x492C9E46()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x492C9E46, 0);
	}
	Any _0x814A28F4()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x814A28F4, 0);
	}
	Any _0x0B60D2BA()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0B60D2BA, 0);
	}
	Any _0x6B83ABDF()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6B83ABDF, 0);
	}
	Any _0xF46B4DC8()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF46B4DC8, 0);
	}
	void _0x36A4AC65(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x36A4AC65, 4, p0, p1, p2, p3);
	}
	void _0xBA699DDF(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBA699DDF, 2, p0, p1);
	}
	void set_ik_target(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6FE5218C, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void _0xFB4000DC(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFB4000DC, 1, p0);
	}
	void request_action_mode_asset(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x572BA553, 1, p0);
	}
	BOOL has_action_mode_asset_loaded(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xF7EB2BF1, 1, p0);
	}
	void remove_action_mode_asset(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3F480F92, 1, p0);
	}
	void request_stealth_mode_asset(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x280A004A, 1, p0);
	}
	BOOL has_stealth_mode_asset_loaded(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x39245667, 1, p0);
	}
	void remove_stealth_mode_asset(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8C0B243A, 1, p0);
	}
	void set_ped_lod_multiplier(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1D2B5C70, 2, p0, p1);
	}
	void _0x2F9550C2(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2F9550C2, 3, p0, p1, p2);
	}
	void _0x37DBC2AD(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x37DBC2AD, 2, p0, p1);
	}
	void _0xC0F1BC91(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC0F1BC91, 4, p0, p1, p2, p3);
	}
	Any _0x1A464167(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1A464167, 5, p0, p1, p2, p3, p4);
	}
	Any _0xD0567D41(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD0567D41, 6, p0, p1, p2, p3, p4, p5);
	}
	void _0x4BBE5E2C(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4BBE5E2C, 5, p0, p1, p2, p3, p4);
	}
	// DOES_PED_EXIST_WITH_DECORATOR -- no params/results data

	Vehicle create_vehicle(Hash model, float x, float y, float z, float r, BOOL b1, BOOL b2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vehicle>(0xDD75460A, 7, model, float_int(x), float_int(y), float_int(z), r, b1, b2);
	}
	void delete_vehicle(Vehicle *v)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9803AF60, 1, v);
	}
	void _0x8BAAC437(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8BAAC437, 2, p0, p1);
	}
	Any _0xFBDE9FD8(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFBDE9FD8, 1, p0);
	}
	BOOL is_vehicle_model(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x013B10B6, 2, p0, p1);
	}
	BOOL does_script_vehicle_generator_exist(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xF6BDDA30, 1, p0);
	}
	Any create_script_vehicle_generator(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x25A9A261, 17, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16);
	}
	void delete_script_vehicle_generator(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE4328E3F, 1, p0);
	}
	void set_script_vehicle_generator(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x40D73747, 2, p0, p1);
	}
	void set_all_vehicle_generators_active_in_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB4E0E69A, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void set_all_vehicle_generators_active()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAB1FDD76, 0);
	}
	void set_all_low_priority_vehicle_generators_active(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x87F767F2, 1, p0);
	}
	void _0x935A95DA(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x935A95DA, 4, p0, p1, p2, p3);
	}
	void _0x6C73E45A()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6C73E45A, 0);
	}
	BOOL set_vehicle_on_ground_properly(Vehicle v)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xE14FDBA6, 1, v);
	}
	Any set_all_vehicles_spawn(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA0909ADB, 4, p0, p1, p2, p3);
	}
	BOOL is_vehicle_stuck_on_roof(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x18D07C6C, 1, p0);
	}
	void add_vehicle_upsidedown_check(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3A13D384, 1, p0);
	}
	void remove_vehicle_upsidedown_check(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF390BA1B, 1, p0);
	}
	BOOL is_vehicle_stopped(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x655F072C, 1, p0);
	}
	Any get_vehicle_number_of_passengers(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1EF20849, 1, p0);
	}
	Any get_vehicle_max_number_of_passengers(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0A2FC08C, 1, p0);
	}
	Any _0x838F7BF7(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x838F7BF7, 1, p0);
	}
	Any _0x769E5CF2(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x769E5CF2, 2, p0, p1);
	}
	void set_vehicle_density_multiplier_this_frame(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF4187E51, 1, p0);
	}
	void set_random_vehicle_density_multiplier_this_frame(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x543F712B, 1, p0);
	}
	void set_parked_vehicle_density_multiplier_this_frame(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDD46CEBE, 1, p0);
	}
	void _0x09462665(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x09462665, 1, p0);
	}
	void _0xDAE2A2BE(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDAE2A2BE, 1, p0);
	}
	void set_far_draw_vehicles(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9F019C49, 1, p0);
	}
	void set_number_of_parked_vehicles(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x206A58E8, 1, p0);
	}
	void set_vehicle_doors_locked(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4CDD35D0, 2, p0, p1);
	}
	void set_ped_targettable_vehicle_destroy(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD61D182D, 3, p0, p1, p2);
	}
	void disable_vehicle_impact_explosion_activation(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC54156A9, 2, p0, p1);
	}
	void set_vehicle_doors_locked_for_player(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x49829236, 3, p0, p1, p2);
	}
	Any get_vehicle_doors_locked_for_player(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1DC50247, 2, p0, p1);
	}
	void set_vehicle_doors_locked_for_all_players(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x891BA8A4, 2, p0, p1);
	}
	void _0xE4EF6514(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE4EF6514, 2, p0, p1);
	}
	void set_vehicle_doors_locked_for_team(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4F85E783, 3, p0, p1, p2);
	}
	void explode_vehicle(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBEDEACEB, 3, p0, p1, p2);
	}
	void set_vehicle_out_of_control(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3764D734, 3, p0, p1, p2);
	}
	void set_vehicle_timed_explosion(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDB8CB8E2, 3, p0, p1, p2);
	}
	void _0x811373DE(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x811373DE, 1, p0);
	}
	Any _0xA4E69134()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA4E69134, 0);
	}
	void _0x65255524()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x65255524, 0);
	}
	void set_taxi_lights(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x68639D85, 2, p0, p1);
	}
	BOOL is_taxi_light_on(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x6FC4924A, 1, p0);
	}
	BOOL is_vehicle_in_garage_area(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xA90EC257, 2, p0, p1);
	}
	void set_vehicle_colours(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x57F24253, 3, p0, p1, p2);
	}
	void set_vehicle_fullbeam(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9C49CC15, 2, p0, p1);
	}
	void steer_unlock_bias(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA59E3DCD, 2, p0, p1);
	}
	void set_vehicle_custom_primary_colour(Vehicle veh, int r, int g, int b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8DF9F9BC, 4, veh, r, g, b);
	}
	void get_vehicle_custom_primary_colour(Vehicle veh, int *r, int *g, int *b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1C2B9FEF, 4, veh, r, g, b);
	}
	void clear_vehicle_custom_primary_colour(Vehicle veh)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x51E1E33D, 1, veh);
	}
	Any _0xD7EC8760(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD7EC8760, 1, p0);
	}
	void set_vehicle_custom_secondary_colour(Vehicle veh, int r, int g, int b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9D77259E, 4, veh, r, g, b);
	}
	void get_vehicle_custom_secondary_colour(Vehicle veh, int *r, int *g, int *b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3FF247A2, 4, veh, r, g, b);
	}
	void clear_vehicle_custom_secondary_colour(Vehicle veh)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7CE00B29, 1, veh);
	}
	Any _0x288AD228(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x288AD228, 1, p0);
	}
	void set_can_respray_vehicle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x37677590, 2, p0, p1);
	}
	void _0x54E9EE75(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x54E9EE75, 2, p0, p1);
	}
	void _0x4A46E814(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4A46E814, 5, p0, p1, p2, p3, p4);
	}
	void set_boat_anchor(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA3906284, 2, p0, p1);
	}
	void _0x0ED84792(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0ED84792, 2, p0, p1);
	}
	void _0xA739012A(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA739012A, 2, p0, p1);
	}
	void _0x66FA450C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x66FA450C, 2, p0, p1);
	}
	void _0x35614622(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x35614622, 2, p0, p1);
	}
	void set_vehicle_siren(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4AC1EFC7, 2, p0, p1);
	}
	BOOL is_vehicle_siren_on(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x25EB5873, 1, p0);
	}
	void set_vehicle_strong(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC758D19F, 2, p0, p1);
	}
	void remove_vehicle_stuck_check(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x81594917, 1, p0);
	}
	void get_vehicle_colours(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x40D82D88, 3, p0, p1, p2);
	}
	BOOL is_vehicle_seat_free(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xDAF42B02, 2, p0, p1);
	}
	Any get_ped_in_vehicle_seat(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x388FDE9A, 2, p0, p1);
	}
	Any _0xF7C6792D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF7C6792D, 2, p0, p1);
	}
	Any get_vehicle_lights_state(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7C278621, 3, p0, p1, p2);
	}
	BOOL is_vehicle_tyre_burst(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x48C80210, 3, p0, p1, p2);
	}
	void set_vehicle_forward_speed(Vehicle veh, float speed)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x69880D14, 2, veh, float_int(speed));
	}
	void _0xCBC7D3C8(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCBC7D3C8, 4, p0, p1, p2, p3);
	}
	void _0x943A6CFC(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x943A6CFC, 2, p0, p1);
	}
	Any set_ped_enabled_bike_ringtone(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7FB25568, 2, p0, p1);
	}
	Any _0x593143B9(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x593143B9, 1, p0);
	}
	Any _0x70DD5E25(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x70DD5E25, 1, p0);
	}
	Any _0xFBF5536A(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFBF5536A, 2, p0, p1);
	}
	void _0x20AB5783(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x20AB5783, 2, p0, p1);
	}
	void _0x0F11D01F(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0F11D01F, 1, p0);
	}
	void _0xAE040377(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAE040377, 2, p0, p1);
	}
	void _0x4C0E4031(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4C0E4031, 2, p0, p1);
	}
	Any _0x6346B7CC(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6346B7CC, 1, p0);
	}
	void _0xCCB41A55(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCCB41A55, 2, p0, p1);
	}
	void set_vehicle_tyre_burst(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x89D28068, 4, p0, p1, p2, p3);
	}
	void set_vehicle_doors_shut(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBB1FF6E7, 2, p0, p1);
	}
	void set_vehicle_tyres_can_burst(Vehicle veh, BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA198DB54, 2, veh, b);
	}
	Any get_vehicle_tyres_can_burst(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4D76CD2F, 1, p0);
	}
	void set_vehicle_wheels_can_break(Vehicle veh, BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x829ED654, 2, veh, b);
	}
	void set_vehicle_door_open(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBB75D38B, 4, p0, p1, p2, p3);
	}
	void remove_vehicle_window(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBB8104A3, 2, p0, p1);
	}
	void roll_down_windows(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x51A16DC6, 1, p0);
	}
	void roll_down_window(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF840134C, 2, p0, p1);
	}
	void roll_up_window(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x83B7E06A, 2, p0, p1);
	}
	void smash_vehicle_window(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDDD9A8C2, 2, p0, p1);
	}
	void fix_vehicle_window(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6B8E990D, 2, p0, p1);
	}
	void _0xCC95C96B(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCC95C96B, 1, p0);
	}
	void _0xFDA7B6CA(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFDA7B6CA, 4, p0, p1, p2, p3);
	}
	void set_vehicle_lights(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE8930226, 2, p0, p1);
	}
	void _0x4221E435(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4221E435, 2, p0, p1);
	}
	void set_vehicle_alarm(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x24877D84, 2, p0, p1);
	}
	void start_vehicle_alarm(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5B451FF7, 1, p0);
	}
	BOOL is_vehicle_alarm_activated(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xF2630A4C, 1, p0);
	}
	void set_vehicle_interiorlight(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9AD1FE1E, 2, p0, p1);
	}
	void set_vehicle_light_multiplier(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x48039D6A, 2, p0, p1);
	}
	void attach_vehicle_to_trailer(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2133977F, 3, p0, p1, p2);
	}
	void _0x12AC1A16(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x12AC1A16, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	void _0x40C4763F(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x40C4763F, 3, p0, p1, p2);
	}
	void detach_vehicle_from_trailer(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB5DBF91D, 1, p0);
	}
	BOOL is_vehicle_attached_to_trailer(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xE142BBCC, 1, p0);
	}
	void _0xE74E85CE(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE74E85CE, 2, p0, p1);
	}
	void _0x06C47A6F(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x06C47A6F, 1, p0);
	}
	void set_vehicle_tyre_fixed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA42EFA6B, 2, p0, p1);
	}
	void set_vehicle_number_plate_text(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x400F9556, 2, p0, p1);
	}
	Any get_vehicle_number_plate_text(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE8522D58, 1, p0);
	}
	Any get_number_of_vehicle_number_plates()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD24BC1AE, 0);
	}
	void set_vehicle_number_plate_text_index(Vehicle veh, int index)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA1A1890E, 2, veh, index);
	}
	int get_vehicle_number_plate_text_index(Vehicle veh)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0x499747B6, 1, veh);
	}
	void set_random_trains(BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD461CA7F, 1, b);
	}
	Any create_mission_train(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD4C2EAFD, 5, p0, p1, p2, p3, p4);
	}
	void switch_train_track(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x68BFDD61, 2, p0, p1);
	}
	void _0xD5774FB7(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD5774FB7, 2, p0, p1);
	}
	void delete_all_trains()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x83DE7ABF, 0);
	}
	void set_train_speed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDFC35E4D, 2, p0, p1);
	}
	void set_train_cruise_speed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB507F51D, 2, p0, p1);
	}
	void set_random_boats(BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB505BD89, 1, b);
	}
	void set_garbage_trucks(BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD9ABB0FF, 1, b);
	}
	BOOL does_vehicle_have_stuck_vehicle_check(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x5D91D9AC, 1, p0);
	}
	Any get_vehicle_recording_id(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x328D601D, 2, p0, p1);
	}
	void request_vehicle_recording(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x91AFEFD9, 2, p0, p1);
	}
	BOOL has_vehicle_recording_been_loaded(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xF52CD7F5, 2, p0, p1);
	}
	void remove_vehicle_recording(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD3C05B00, 2, p0, p1);
	}
	Vector3 _0xF31973BB(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0xF31973BB, 2, p0, p1);
	}
	Vector3 get_position_of_vehicle_recording_at_time(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x7178558D, 3, p0, p1, p2);
	}
	Vector3 _0x4D1C15C2(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x4D1C15C2, 2, p0, p1);
	}
	Vector3 get_rotation_of_vehicle_recording_at_time(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0xD96DEC68, 3, p0, p1, p2);
	}
	Any get_total_duration_of_vehicle_recording_id(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7116785E, 1, p0);
	}
	Any get_total_duration_of_vehicle_recording(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5B35EEB7, 2, p0, p1);
	}
	Any get_position_in_recording(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7DCD644C, 1, p0);
	}
	Any get_time_position_in_recording(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF8C3E4A2, 1, p0);
	}
	void start_playback_recorded_vehicle(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCF614CA8, 4, p0, p1, p2, p3);
	}
	void start_playback_recorded_vehicle_with_flags(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4E721AD2, 6, p0, p1, p2, p3, p4, p5);
	}
	void _0x01B91CD0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x01B91CD0, 2, p0, p1);
	}
	void stop_playback_recorded_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAE99C57C, 1, p0);
	}
	void pause_playback_recorded_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCCF54912, 1, p0);
	}
	void unpause_playback_recorded_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x59060F75, 1, p0);
	}
	BOOL is_playback_going_on_for_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x61F7650D, 1, p0);
	}
	BOOL is_playback_using_ai_going_on_for_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x63022C58, 1, p0);
	}
	Any get_current_playback_for_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA3F44390, 1, p0);
	}
	void skip_to_end_and_stop_playback_recorded_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8DEA18C8, 1, p0);
	}
	void set_playback_speed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x684E26E4, 2, p0, p1);
	}
	void start_playback_recorded_vehicle_using_ai(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8DE8E24E, 5, p0, p1, p2, p3, p4);
	}
	void skip_time_in_playback_recorded_vehicle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCF3EFA4B, 2, p0, p1);
	}
	void set_playback_to_use_ai(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB536CCD7, 2, p0, p1);
	}
	void set_playback_to_use_ai_try_to_revert_back_later(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0C8ABAA4, 4, p0, p1, p2, p3);
	}
	void _0x943A58EB(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x943A58EB, 5, p0, p1, p2, p3, p4);
	}
	void _0x5C9F477C(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5C9F477C, 4, p0, p1, p2, p3);
	}
	void _0xCD83C393(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCD83C393, 4, p0, p1, p2, p3);
	}
	void _0x2EF8435C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2EF8435C, 2, p0, p1);
	}
	void explode_vehicle_in_cutscene(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA85207B5, 2, p0, p1);
	}
	void add_vehicle_stuck_check_with_warp(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC8B789AD, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void set_vehicle_model_is_suppressed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x42A08C9B, 2, p0, p1);
	}
	Any get_random_vehicle_in_sphere(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x57216D03, 6, p0, p1, p2, p3, p4, p5);
	}
	Any get_random_vehicle_front_bumper_in_sphere(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDCADEB66, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any get_random_vehicle_back_bumper_in_sphere(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD6343F6B, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any get_closest_vehicle(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD7E26B2C, 6, p0, p1, p2, p3, p4, p5);
	}
	Any get_train_carriage(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2544E7A6, 2, p0, p1);
	}
	void delete_mission_train(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x86C9497D, 1, p0);
	}
	void set_mission_train_as_no_longer_needed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x19808560, 2, p0, p1);
	}
	void set_mission_train_coords(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD6D70803, 4, p0, p1, p2, p3);
	}
	BOOL is_this_model_a_boat(Hash model)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x10F6085C, 1, model);
	}
	BOOL is_this_model_a_plane(Hash model)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x3B3907BB, 1, model);
	}
	BOOL is_this_model_a_heli(Hash model)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x8AF7F568, 1, model);
	}
	BOOL is_this_model_a_car(Hash model)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x60E4C22F, 1, model);
	}
	BOOL is_this_model_a_train(Hash model)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xF87DCFFD, 1, model);
	}
	BOOL is_this_model_a_bike(Hash model)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x7E702CDD, 1, model);
	}
	BOOL is_this_model_a_bicycle(Hash model)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x328E6FF5, 1, model);
	}
	BOOL is_this_model_a_quadbike(Hash model)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xC1625277, 1, model);
	}
	void set_heli_blades_full_speed(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x033A9408, 1, p0);
	}
	void set_heli_blades_speed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5C7D4EA9, 2, p0, p1);
	}
	void _0x1128A45B(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1128A45B, 3, p0, p1, p2);
	}
	void set_vehicle_can_be_targetted(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x64B70B1D, 2, p0, p1);
	}
	void _0x486C1280(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x486C1280, 2, p0, p1);
	}
	void set_vehicle_can_be_visibly_damaged(Vehicle veh, BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC5D94017, 2, veh, b);
	}
	void _0x009AB49E(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x009AB49E, 2, p0, p1);
	}
	void _0x758C5E2E(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x758C5E2E, 2, p0, p1);
	}
	Any get_vehicle_dirt_level(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFD15C065, 1, p0);
	}
	void set_vehicle_dirt_level(Any p0, float p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2B39128B, 2, p0, float_int(p1));
	}
	Any _0xDAC523BC(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDAC523BC, 1, p0);
	}
	BOOL is_vehicle_door_fully_open(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xC2385B6F, 2, p0, p1);
	}
	void set_vehicle_engine_on(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7FBC86F1, 3, p0, p1, p2);
	}
	void set_vehicle_undriveable(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x48D02A4E, 2, p0, p1);
	}
	void set_vehicle_provides_cover(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEFC01CA9, 2, p0, p1);
	}
	void set_vehicle_door_control(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x572DD360, 4, p0, p1, p2, p3);
	}
	void set_vehicle_door_latched(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4EB7BBFC, 5, p0, p1, p2, p3, p4);
	}
	Any get_vehicle_door_angle_ratio(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0E399C26, 2, p0, p1);
	}
	void set_vehicle_door_shut(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x142606BD, 3, p0, p1, p2);
	}
	void set_vehicle_door_broken(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8147FEA7, 3, p0, p1, p2);
	}
	void set_vehicle_can_break(Vehicle veh, BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x90A810D1, 2, veh, b);
	}
	BOOL does_vehicle_have_roof(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xDB817403, 1, p0);
	}
	BOOL is_big_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x9CDBA8DE, 1, p0);
	}
	Any get_number_of_vehicle_model_colours(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8CC23EEC, 1, p0);
	}
	Any get_number_of_vehicle_colours(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF2442EE2, 1, p0);
	}
	void set_vehicle_colour_combination(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA557AEAD, 2, p0, p1);
	}
	Any get_vehicle_colour_combination(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x77AC1B4C, 1, p0);
	}
	void set_vehicle_is_considered_by_player(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x14413319, 2, p0, p1);
	}
	void _0xA6D8D7A5(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA6D8D7A5, 2, p0, p1);
	}
	void _0xACAB8FF3(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xACAB8FF3, 2, p0, p1);
	}
	void _0xF0E5C41D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF0E5C41D, 2, p0, p1);
	}
	void _0x2F98B4B7(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2F98B4B7, 2, p0, p1);
	}
	void get_random_vehicle_model_in_memory(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE2C45631, 3, p0, p1, p2);
	}
	Any get_vehicle_door_lock_status(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0D72CEF2, 1, p0);
	}
	BOOL is_vehicle_door_damaged(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x4999E3C3, 2, p0, p1);
	}
	void _0x065B92B3(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x065B92B3, 3, p0, p1, p2);
	}
	Any _0xB3A2CC4F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB3A2CC4F, 2, p0, p1);
	}
	BOOL is_vehicle_bumper_broken_off(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xAF25C027, 2, p0, p1);
	}
	BOOL is_cop_vehicle_in_area_3d(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xFB16C6D1, 6, p0, p1, p2, p3, p4, p5);
	}
	BOOL is_vehicle_on_all_wheels(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x10089F8E, 1, p0);
	}
	Any get_vehicle_model_value(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x58FEFC3D, 1, p0);
	}
	Any get_vehicle_layout_hash(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE0B35187, 1, p0);
	}
	void set_render_train_as_derailed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x899D9092, 2, p0, p1);
	}
	void set_vehicle_extra_colours(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x515DB2A0, 3, p0, p1, p2);
	}
	void get_vehicle_extra_colours(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x80E4659B, 3, p0, p1, p2);
	}
	void stop_all_garage_activity()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x17A0BCE5, 0);
	}
	void set_vehicle_fixed(Vehicle veh)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x17469AA1, 1, veh);
	}
	void set_vehicle_deformation_fixed(Vehicle veh)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDD2920C8, 1, veh);
	}
	void _0x88F0F7E7(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x88F0F7E7, 2, p0, p1);
	}
	void _0x90D6EE57(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x90D6EE57, 2, p0, p1);
	}
	void _0xC40192B5(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC40192B5, 2, p0, p1);
	}
	void _0xAD3E05F2(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAD3E05F2, 2, p0, p1);
	}
	void _0x1784BA1A(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1784BA1A, 2, p0, p1);
	}
	void _0x40C323AE(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x40C323AE, 2, p0, p1);
	}
	void _0x847F1304(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x847F1304, 2, p0, p1);
	}
	void _0xCBD98BA1(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCBD98BA1, 2, p0, p1);
	}
	void remove_vehicles_from_generators_in_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x42CC15E0, 6, p0, p1, p2, p3, p4, p5);
	}
	void set_vehicle_steer_bias(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7357C1EB, 2, p0, p1);
	}
	BOOL is_vehicle_extra_turned_on(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x042098B5, 2, p0, p1);
	}
	void set_vehicle_extra(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x642D065C, 3, p0, p1, p2);
	}
	BOOL does_extra_exist(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x409411CC, 2, p0, p1);
	}
	void set_convertible_roof(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC87B6A51, 2, p0, p1);
	}
	void lower_convertible_roof(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC5F72EAE, 2, p0, p1);
	}
	void raise_convertible_roof(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA4E4CBA3, 2, p0, p1);
	}
	Any get_convertible_roof_state(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1B09714D, 1, p0);
	}
	BOOL is_vehicle_a_convertible(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x6EF54490, 2, p0, p1);
	}
	BOOL is_vehicle_stopped_at_traffic_lights(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x69200FA4, 1, p0);
	}
	void set_vehicle_damage(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x21B458B2, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any get_vehicle_engine_health(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8880038A, 1, p0);
	}
	void set_vehicle_engine_health(Any p0, float p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1B760FB5, 2, p0, float_int(p1));
	}
	Any get_vehicle_petrol_tank_health(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE41595CE, 1, p0);
	}
	void set_vehicle_petrol_tank_health(Any p0, float p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x660A3692, 2, p0, float_int(p1));
	}
	BOOL is_vehicle_stuck_timer_up(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x2FCF58C1, 3, p0, p1, p2);
	}
	void reset_vehicle_stuck_timer(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEF2A6016, 2, p0, p1);
	}
	BOOL is_vehicle_driveable(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x41A7267A, 2, p0, p1);
	}
	void set_vehicle_has_been_owned_by_player(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB4D3DBFB, 2, p0, p1);
	}
	void set_vehicle_needs_to_be_hotwired(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD8260751, 2, p0, p1);
	}
	void start_vehicle_horn(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0DF5ADB3, 4, p0, p1, p2, p3);
	}
	void _0x968E5770(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x968E5770, 2, p0, p1);
	}
	void set_vehicle_has_strong_axles(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0D1CBC65, 2, p0, p1);
	}
	string get_display_name_from_vehicle_model(Hash p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<string>(0xEC86DF39, 1, p0);
	}
	Vector3 get_vehicle_deformation_at_pos(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0xABF02075, 4, p0, p1, p2, p3);
	}
	void set_vehicle_livery(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7AD87059, 2, p0, p1);
	}
	Any get_vehicle_livery(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEC82A51D, 1, p0);
	}
	Any get_vehicle_livery_count(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFB0CA947, 1, p0);
	}
	BOOL is_vehicle_window_intact(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xAC4EF23D, 2, p0, p1);
	}
	Any _0xBB619744(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBB619744, 1, p0);
	}
	Any _0x648E685A(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x648E685A, 1, p0);
	}
	void reset_vehicle_wheels(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD5FFE779, 2, p0, p1);
	}
	BOOL is_heli_part_broken(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xF4E4C439, 4, p0, p1, p2, p3);
	}
	Any _0xF01E2AAB(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF01E2AAB, 1, p0);
	}
	Any _0xA41BC13D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA41BC13D, 1, p0);
	}
	Any _0x8A68388F(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8A68388F, 1, p0);
	}
	BOOL was_counter_activated(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x2916D69B, 2, p0, p1);
	}
	void set_vehicle_name_debug(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA712FF5C, 2, p0, p1);
	}
	void set_vehicle_explodes_on_high_explosion_damage(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x38CC692B, 2, p0, p1);
	}
	void _0xC306A9A3(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC306A9A3, 2, p0, p1);
	}
	void _0x95A9ACCB(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x95A9ACCB, 2, p0, p1);
	}
	void _0x24F873FB(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x24F873FB, 2, p0, p1);
	}
	Any _0xA6F02670(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA6F02670, 1, p0);
	}
	BOOL is_any_vehicle_near_point(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x2867A834, 4, p0, p1, p2, p3);
	}
	void request_vehicle_high_detail_model(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9DA21956, 1, p0);
	}
	void remove_vehicle_high_detail_model(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x382BE070, 1, p0);
	}
	BOOL is_vehicle_high_detail(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x55D41928, 1, p0);
	}
	void request_vehicle_asset(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x902B4F06, 2, p0, p1);
	}
	BOOL has_vehicle_asset_loaded(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x8DAAC3CB, 1, p0);
	}
	void remove_vehicle_asset(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9620E9C6, 1, p0);
	}
	void _0x88236E22(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x88236E22, 2, p0, p1);
	}
	void attach_vehicle_to_tow_truck(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8151571A, 6, p0, p1, p2, p3, p4, p5);
	}
	void detach_vehicle_from_tow_truck(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC666CF33, 2, p0, p1);
	}
	Any detach_vehicle_from_any_tow_truck(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3BF93651, 1, p0);
	}
	BOOL is_vehicle_attached_to_tow_truck(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x9699CFDC, 2, p0, p1);
	}
	Any get_entity_attached_to_tow_truck(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x11EC7844, 1, p0);
	}
	Any set_vehicle_automatically_attaches(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4273A8D3, 3, p0, p1, p2);
	}
	void _0xED23C8A3(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xED23C8A3, 3, p0, p1, p2);
	}
	void _0xB1A52EF7(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB1A52EF7, 3, p0, p1, p2);
	}
	void _0xF30C566F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF30C566F, 2, p0, p1);
	}
	Any _0x34E02FCD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x34E02FCD, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void set_vehicle_burnout(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9B6EF0EA, 2, p0, p1);
	}
	BOOL is_vehicle_in_burnout(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x6632BC12, 1, p0);
	}
	void set_vehicle_reduce_grip(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x90D3A0D9, 2, p0, p1);
	}
	void set_vehicle_indicator_lights(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA6073B5D, 3, p0, p1, p2);
	}
	void set_vehicle_brake_lights(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6D9BA11E, 2, p0, p1);
	}
	void set_vehicle_handbrake(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBA729A25, 2, p0, p1);
	}
	// SET_VEHICLE_BRAKE -- no params/results data
	void _0x37BC6ACB()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x37BC6ACB, 0);
	}
	Any _0x71D898EF()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x71D898EF, 0);
	}
	void _0x0B0523B0(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0B0523B0, 1, p0);
	}
	Any get_vehicle_trailer_vehicle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAE84D758, 2, p0, p1);
	}
	void _0x0B200CE2(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0B200CE2, 2, p0, p1);
	}
	void set_vehicle_rudder_broken(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3FAC3CD4, 2, p0, p1);
	}
	void _0x0858678C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0858678C, 2, p0, p1);
	}
	Any _0x7D1A0616(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7D1A0616, 1, p0);
	}
	Any get_vehicle_max_braking(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x03B926F6, 1, p0);
	}
	Any get_vehicle_max_traction(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7E5A1587, 1, p0);
	}
	Any get_vehicle_acceleration(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x00478321, 1, p0);
	}
	Any _0x8F291C4A(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8F291C4A, 1, p0);
	}
	Any get_vehicle_model_max_braking(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7EF02883, 1, p0);
	}
	Any _0xF3A7293F(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF3A7293F, 1, p0);
	}
	Any get_vehicle_model_max_traction(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7F985597, 1, p0);
	}
	Any get_vehicle_model_acceleration(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x29CB3537, 1, p0);
	}
	Any _0x37FBA7BC(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x37FBA7BC, 1, p0);
	}
	Any _0x95BB67EB(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x95BB67EB, 1, p0);
	}
	Any _0x87C5D271(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x87C5D271, 1, p0);
	}
	Any _0xCE67162C(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCE67162C, 1, p0);
	}
	Any get_vehicle_class_max_traction(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5B4FDC16, 1, p0);
	}
	Any get_vehicle_class_max_agility(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x45F2BD83, 1, p0);
	}
	Any get_vehicle_class_max_acceleration(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3E220A9B, 1, p0);
	}
	Any get_vehicle_class_max_braking(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD08CC1A5, 1, p0);
	}
	Any _0xD6685803(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD6685803, 6, p0, p1, p2, p3, p4, p5);
	}
	Any _0x0C0332A6(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0C0332A6, 1, p0);
	}
	void _0x6574041D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6574041D, 1, p0);
	}
	void _0xF8EC5751(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF8EC5751, 1, p0);
	}
	BOOL is_vehicle_searchlight_on(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xADAF3513, 1, p0);
	}
	void set_vehicle_searchlight(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE2C0DD8A, 3, p0, p1, p2);
	}
	Any _0xAB0E79EB(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAB0E79EB, 5, p0, p1, p2, p3, p4);
	}
	Any _0xB3EB01ED(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB3EB01ED, 2, p0, p1);
	}
	Any get_num_mod_kits(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE4903AA0, 1, p0);
	}
	void set_vehicle_mod_kit(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB8132158, 2, p0, p1);
	}
	Any get_vehicle_mod_kit(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9FE60927, 1, p0);
	}
	Any get_vehicle_mod_kit_type(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE5F76765, 1, p0);
	}
	Any get_vehicle_wheel_type(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDA58D7AE, 1, p0);
	}
	void set_vehicle_wheel_type(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x64BDAAAD, 2, p0, p1);
	}
	Any _0x73722CD9(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x73722CD9, 2, p0, p1);
	}
	void set_vehicle_mod_color_1(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCBE9A54D, 4, p0, p1, p2, p3);
	}
	void set_vehicle_mod_color_2(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC32613C2, 3, p0, p1, p2);
	}
	void get_vehicle_mod_color_1(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE625510A, 4, p0, p1, p2, p3);
	}
	void get_vehicle_mod_color_2(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9B76BB8E, 3, p0, p1, p2);
	}
	Any _0x9A0840FD(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9A0840FD, 2, p0, p1);
	}
	Any _0x9BDC0B49(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9BDC0B49, 1, p0);
	}
	// REMOVE_VEHICLE_MOD_KIT -- no params/results data
	Any _0x112D637A(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x112D637A, 1, p0);
	}
	void set_vehicle_mod(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB52E5ED5, 4, p0, p1, p2, p3);
	}
	Any get_vehicle_mod(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDC520069, 2, p0, p1);
	}
	Any get_vehicle_mod_variation(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC1B92003, 2, p0, p1);
	}
	Any get_num_vehicle_mods(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8A814FF9, 2, p0, p1);
	}
	void remove_vehicle_mod(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9CC80A43, 2, p0, p1);
	}
	void toggle_vehicle_mod(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD095F811, 3, p0, p1, p2);
	}
	BOOL is_toggle_mod_on(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xF0E1689F, 2, p0, p1);
	}
	string get_mod_text_label(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<string>(0x0BA39CA7, 3, p0, p1, p2);
	}
	string get_mod_slot_name(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<string>(0x5E113483, 2, p0, p1);
	}
	Any get_livery_name(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xED80B5BE, 2, p0, p1);
	}
	Any get_vehicle_mod_modifier_value(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x73AE5505, 3, p0, p1, p2);
	}
	Any _0x94850968(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x94850968, 3, p0, p1, p2);
	}
	void preload_vehicle_mod(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6EA5F4A8, 3, p0, p1, p2);
	}
	BOOL has_preload_mods_finished(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xA8A0D246, 1, p0);
	}
	void release_preload_mods(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD442521F, 1, p0);
	}
	void set_vehicle_tyre_smoke_color(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3EDEC0DB, 4, p0, p1, p2, p3);
	}
	void get_vehicle_tyre_smoke_color(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x75280015, 4, p0, p1, p2, p3);
	}
	void set_vehicle_window_tint(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x497C8787, 2, p0, p1);
	}
	Any get_vehicle_window_tint(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x13D53892, 1, p0);
	}
	Any get_num_vehicle_window_tints()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x625C7B66, 0);
	}
	void get_vehicle_color(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x03BC8F1B, 4, p0, p1, p2, p3);
	}
	Any _0x749DEEA2(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x749DEEA2, 1, p0);
	}
	Any get_vehicle_cause_of_destruction(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7F8C20DD, 1, p0);
	}
	Any _0xA0777943(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA0777943, 1, p0);
	}
	Any _0xF178390B(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF178390B, 1, p0);
	}
	void _0xE943B09C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE943B09C, 2, p0, p1);
	}
	void _0xDF594D8D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDF594D8D, 2, p0, p1);
	}
	void _0x4D840FC4(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4D840FC4, 2, p0, p1);
	}
	Any _0x5AB26C2B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5AB26C2B, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void _0xEF05F807(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEF05F807, 1, p0);
	}
	Any _0xD656E7E5(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD656E7E5, 1, p0);
	}
	void _0x642DA5AA(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x642DA5AA, 2, p0, p1);
	}
	void _0x04F5546C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x04F5546C, 2, p0, p1);
	}
	void set_vehicle_is_wanted(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDAA388E8, 2, p0, p1);
	}
	void _0xA25CCB8C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA25CCB8C, 2, p0, p1);
	}
	void _0x00966934(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x00966934, 2, p0, p1);
	}
	void _0x113DF5FD(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x113DF5FD, 2, p0, p1);
	}
	Any _0x7C8D6464(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7C8D6464, 1, p0);
	}
	void disable_plane_aileron(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7E84C45C, 3, p0, p1, p2);
	}
	Any _0x7DC6D022(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7DC6D022, 1, p0);
	}
	void _0xA03E42DF(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA03E42DF, 2, p0, p1);
	}
	void _0x15D40761(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x15D40761, 3, p0, p1, p2);
	}
	void _0x1984F88D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1984F88D, 2, p0, p1);
	}
	void _0x3FBE904F(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3FBE904F, 1, p0);
	}
	void _0xD1B71A25(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD1B71A25, 1, p0);
	}
	Any _0xFEB0C0C8()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFEB0C0C8, 0);
	}
	void _0x08CD58F9(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x08CD58F9, 2, p0, p1);
	}
	void _0x8C4B63E2(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8C4B63E2, 2, p0, p1);
	}
	void set_vehicle_lod_multiplier(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x569E5AE3, 2, p0, p1);
	}
	void _0x1604C2F5(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1604C2F5, 2, p0, p1);
	}
	Any _0x8CDB0C09(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8CDB0C09, 1, p0);
	}
	Any _0xABC99E21(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xABC99E21, 1, p0);
	}
	void _0x900C878C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x900C878C, 2, p0, p1);
	}
	void _0xB3200F72(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB3200F72, 2, p0, p1);
	}
	void _0xBAE491C7(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBAE491C7, 2, p0, p1);
	}
	void _0xF0E59BC1()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF0E59BC1, 0);
	}
	void _0x929801C6(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x929801C6, 1, p0);
	}
	void set_vehicle_shoot_at_target(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2343FFDF, 5, p0, p1, p2, p3, p4);
	}
	void _0xE0FC6A32(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE0FC6A32, 2, p0, p1);
	}
	void _0x7D0DE7EA(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7D0DE7EA, 2, p0, p1);
	}
	Any get_vehicle_plate_type(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x65CA9286, 1, p0);
	}
	void track_vehicle_visibility(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x78122DC1, 1, p0);
	}
	BOOL is_vehicle_visible(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x7E0D6056, 1, p0);
	}
	void set_vehicle_gravity(Vehicle veh, BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x07B2A6DC, 2, veh, b);
	}
	void _0xD2B8ACBD(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD2B8ACBD, 1, p0);
	}
	Any _0xA4A75FCF(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA4A75FCF, 1, p0);
	}
	void _0x50F89338(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x50F89338, 2, p0, p1);
	}
	void _0xEB7D7C27(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEB7D7C27, 2, p0, p1);
	}
	Any _0x5EB00A6A(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5EB00A6A, 1, p0);
	}
	void _0x081DAC12(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x081DAC12, 2, p0, p1);
	}
	void _0x5BD8D82D(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5BD8D82D, 3, p0, p1, p2);
	}
	void _0x450AD03A(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x450AD03A, 1, p0);
	}
	Any _0xBD085DCA(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBD085DCA, 1, p0);
	}
	Any _0xABBDD5C6(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xABBDD5C6, 1, p0);
	}
	void _0x9B581DE7(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9B581DE7, 2, p0, p1);
	}
	BOOL is_vehicle_stolen(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x20B61DDE, 1, p0);
	}
	void set_vehicle_is_stolen(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x70912E42, 2, p0, p1);
	}
	void _0xED159AE6(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xED159AE6, 2, p0, p1);
	}
	Any _0xAF8CB3DF(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAF8CB3DF, 1, p0);
	}
	void _0x45F72495(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x45F72495, 1, p0);
	}
	void detach_vehicle_from_cargobob(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x83D3D331, 2, p0, p1);
	}
	Any detach_vehicle_from_any_cargobob(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x50E0EABE, 1, p0);
	}
	BOOL is_vehicle_attached_to_cargobob(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x5DEEC76C, 2, p0, p1);
	}
	Any get_vehicle_attached_to_cargobob(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x301A1D24, 1, p0);
	}
	void attach_vehicle_to_cargobob(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x607DC9D5, 6, p0, p1, p2, p3, p4, p5);
	}
	Any _0xAF769B81(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAF769B81, 1, p0);
	}
	void _0x4D3C9A99(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4D3C9A99, 1, p0);
	}
	void get_closest_vehicle_turning_bloodspray(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA8211EE9, 1, p0);
	}
	void get_vehicle_has_back_recursive(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3A8AB081, 4, p0, p1, p2, p3);
	}
	BOOL does_vehicle_have_weapons(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xB2E1E1FB, 1, p0);
	}
	void _0x2EC19A8B(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2EC19A8B, 2, p0, p1);
	}
	void disable_vehicle_weapon(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA688B7D1, 4, p0, p1, p2, p3);
	}
	void _0x123E5B90(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x123E5B90, 2, p0, p1);
	}
	void _0xEBC225C1(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEBC225C1, 2, p0, p1);
	}
	Any get_vehicle_class(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC025338E, 1, p0);
	}
	Any get_vehicle_class_from_name(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEA469980, 1, p0);
	}
	void set_players_last_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDE86447D, 1, p0);
	}
	void _0x5130DB1E(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5130DB1E, 2, p0, p1);
	}
	void _0xB6BE07E0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB6BE07E0, 2, p0, p1);
	}
	void _0x4BB5605D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4BB5605D, 2, p0, p1);
	}
	void _0x51E0064F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x51E0064F, 2, p0, p1);
	}
	void _0xAEF9611C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAEF9611C, 2, p0, p1);
	}
	void _0x585E49B6(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x585E49B6, 2, p0, p1);
	}
	void _0x6E67FD35(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6E67FD35, 2, p0, p1);
	}
	void set_vehicle_friction_override(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x32AFD42E, 2, p0, p1);
	}
	void set_vehicle_max_str_trap(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x670913A4, 2, p0, p1);
	}
	void get_vehicle_deformation_get_tree(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x98A10A86, 2, p0, p1);
	}
	void _0xBC649C49(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBC649C49, 2, p0, p1);
	}
	void _0x8DD9AA0C(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8DD9AA0C, 1, p0);
	}
	BOOL does_vehicle_exist_with_decorator(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x39E68EDD, 1, p0);
	}

	Any create_object(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2F7AA05C, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any create_object_no_offset(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x58040420, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void delete_object(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD6EF9DA7, 1, p0);
	}
	Any place_object_on_ground_properly(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8F95A20B, 1, p0);
	}
	Any slide_object(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x63BFA7A0, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void set_object_targettable(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3F88CD86, 2, p0, p1);
	}
	void _0x483C5C88(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x483C5C88, 2, p0, p1);
	}
	Any get_closest_object_of_type(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x45619B33, 6, p0, p1, p2, p3, p4, p5);
	}
	BOOL has_object_been_broken(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xFE21F891, 1, p0);
	}
	BOOL has_closest_object_of_type_been_broken(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x6FC0353D, 6, p0, p1, p2, p3, p4, p5);
	}
	Any _0x7DB578DD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7DB578DD, 6, p0, p1, p2, p3, p4, p5);
	}
	Vector3 _0x87A42A12(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x87A42A12, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any _0x65213FC3(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x65213FC3, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void set_state_of_closest_door_of_type(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x38C951A4, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void get_state_of_closest_door_of_type(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4B44A83D, 6, p0, p1, p2, p3, p4, p5);
	}
	void _0x4E0A260B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4E0A260B, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void _0x9D2D778D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9D2D778D, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void _0x00253286(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x00253286, 1, p0);
	}
	void _0xDF83DB47(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDF83DB47, 4, p0, p1, p2, p3);
	}
	Any _0xD42A41C2(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD42A41C2, 1, p0);
	}
	Any _0xD649B7E1(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD649B7E1, 1, p0);
	}
	void _0x4F44AF21(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4F44AF21, 4, p0, p1, p2, p3);
	}
	void _0x47531446(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x47531446, 4, p0, p1, p2, p3);
	}
	void _0x34883DE3(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x34883DE3, 4, p0, p1, p2, p3);
	}
	Any _0xB74C3BD7(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB74C3BD7, 1, p0);
	}
	void _0xB4A9A558(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB4A9A558, 4, p0, p1, p2, p3);
	}
	void _0xECE58AE0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xECE58AE0, 2, p0, p1);
	}
	void _0xF736227C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF736227C, 2, p0, p1);
	}
	Any _0x5AFCD8A1(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5AFCD8A1, 1, p0);
	}
	BOOL is_door_closed(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x48659CD7, 1, p0);
	}
	void _0x9BF33E41(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9BF33E41, 1, p0);
	}
	void _0xF592AD10()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF592AD10, 0);
	}
	Any _0x17FF9393(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x17FF9393, 1, p0);
	}
	Any _0xE9AE494F(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE9AE494F, 5, p0, p1, p2, p3, p4);
	}
	BOOL is_garage_empty(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xA8B37DEA, 3, p0, p1, p2);
	}
	Any _0xC33ED360(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC33ED360, 4, p0, p1, p2, p3);
	}
	Any _0x41924877(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x41924877, 3, p0, p1, p2);
	}
	Any _0x4BD59750(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4BD59750, 5, p0, p1, p2, p3, p4);
	}
	Any _0x7B44D659(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7B44D659, 5, p0, p1, p2, p3, p4);
	}
	Any _0x142C8F76(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x142C8F76, 4, p0, p1, p2, p3);
	}
	Any _0x95A9AB2B(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x95A9AB2B, 3, p0, p1, p2);
	}
	void _0xA565E27E(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA565E27E, 5, p0, p1, p2, p3, p4);
	}
	void _0x43BB7E48(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x43BB7E48, 2, p0, p1);
	}
	void _0x6158959E()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6158959E, 0);
	}
	BOOL does_object_of_type_exist_at_coords(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x23FF2BA4, 6, p0, p1, p2, p3, p4, p5);
	}
	BOOL is_point_in_angled_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x73BCFFDC, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	void _0x19B17769(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x19B17769, 2, p0, p1);
	}
	void set_object_physics_params(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE8D11C58, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	Any get_object_fragment_damage_health(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF0B330AD, 2, p0, p1);
	}
	void set_activate_object_physics_as_soon_as_it_is_unfrozen(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3E263AE1, 2, p0, p1);
	}
	BOOL is_any_object_near_point(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xE9E46941, 5, p0, p1, p2, p3, p4);
	}
	BOOL is_object_near_point(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x50A62C43, 5, p0, p1, p2, p3, p4);
	}
	void _0xE3261B35(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE3261B35, 1, p0);
	}
	void _0x1E82C2AE(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1E82C2AE, 3, p0, p1, p2);
	}
	void track_object_visibility(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x46D06B9A, 1, p0);
	}
	BOOL is_object_visible(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xF4FD8AE4, 1, p0);
	}
	void _0xF4A1A14A(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF4A1A14A, 2, p0, p1);
	}
	void _0xAF016CC1(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAF016CC1, 2, p0, p1);
	}
	void _0x3A68AA46(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3A68AA46, 2, p0, p1);
	}
	Any _0xA286DE96(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA286DE96, 5, p0, p1, p2, p3, p4);
	}
	void _0x21F51560(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x21F51560, 2, p0, p1);
	}
	Any _0xF1B8817A(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF1B8817A, 1, p0);
	}
	Any _0xE08C834D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE08C834D, 1, p0);
	}
	Any _0x020497DE(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x020497DE, 1, p0);
	}
	Any create_pickup(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5E14DF68, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	Any create_pickup_rotate(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF015BFE2, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	Any create_ambient_pickup(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x17B99CE7, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	// 0xE51B4C5A -- no params/results data
	Any create_portable_pickup(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8C886BE5, 6, p0, p1, p2, p3, p4, p5);
	}
	Any _0x56A02502(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x56A02502, 6, p0, p1, p2, p3, p4, p5);
	}
	void attach_portable_pickup_to_ped(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x184F6AB3, 2, p0, p1);
	}
	void detach_portable_pickup_from_ped(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1D094562, 1, p0);
	}
	void _0x7EFBA039(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7EFBA039, 2, p0, p1);
	}
	void _0xA3CDF152(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA3CDF152, 1, p0);
	}
	Vector3 get_safe_pickup_coords(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x618B5F67, 5, p0, p1, p2, p3, p4);
	}
	Vector3 get_pickup_coords(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0xC2E1E2C5, 1, p0);
	}
	void remove_all_pickups_of_type(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x40062C53, 1, p0);
	}
	BOOL has_pickup_been_collected(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0BE5CCED, 1, p0);
	}
	void remove_pickup(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x64A7A0E0, 1, p0);
	}
	void create_money_pickups(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x36C9A5EA, 6, p0, p1, p2, p3, p4, p5);
	}
	BOOL does_pickup_exist(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x9C6DA0B3, 1, p0);
	}
	BOOL does_pickup_object_exist(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xE0B32108, 1, p0);
	}
	Any _0xF139681B(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF139681B, 5, p0, p1, p2, p3, p4);
	}
	void set_pickup_regeneration_time(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAB11267D, 2, p0, p1);
	}
	void _0x7FADB4B9(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7FADB4B9, 3, p0, p1, p2);
	}
	void _0x3A8F1BF7(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3A8F1BF7, 2, p0, p1);
	}
	void set_team_pickup_object(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x77687DC5, 3, p0, p1, p2);
	}
	void _0xCBB5F9B6(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCBB5F9B6, 3, p0, p1, p2);
	}
	void _0x276A7807(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x276A7807, 3, p0, p1, p2);
	}
	Any _0x000E92DC(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x000E92DC, 1, p0);
	}
	void _0x9879AC51(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9879AC51, 1, p0);
	}
	void _0xDB18FA01(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDB18FA01, 1, p0);
	}
	void _0xA7E936FD(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA7E936FD, 2, p0, p1);
	}
	void _0xB241806C()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB241806C, 0);
	}
	void _0xD1BAAFB7(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD1BAAFB7, 1, p0);
	}
	void _0x63B02FAD(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x63B02FAD, 4, p0, p1, p2, p3);
	}
	void _0x132B6D92(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x132B6D92, 2, p0, p1);
	}
	Any _0xEDD01937(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEDD01937, 1, p0);
	}
	Any _0x6AE36192(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6AE36192, 1, p0);
	}
	void set_force_object_this_frame(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3DA41C1A, 4, p0, p1, p2, p3);
	}
	void _0x2048A7DD(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2048A7DD, 1, p0);
	}
	// DOES_OBJECT_EXIST_WITH_DECORATOR -- no params/results data

	void task_pause(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x17A64668, 2, p0, p1);
	}
	void task_stand_still(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6F80965D, 2, p0, p1);
	}
	void task_jump(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0356E3CE, 2, p0, p1);
	}
	void task_cower(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9CF1C19B, 2, p0, p1);
	}
	void task_hands_up(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8DCC19C5, 5, p0, p1, p2, p3, p4);
	}
	void _0x3AA39BE9(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3AA39BE9, 2, p0, p1);
	}
	void task_open_vehicle_door(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8EE06BF4, 5, p0, p1, p2, p3, p4);
	}
	void task_enter_vehicle(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB8689B4E, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void task_leave_vehicle(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7B1141C6, 3, p0, p1, p2);
	}
	void task_sky_dive(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD3874AFA, 1, p0);
	}
	void task_parachute(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEC3060A2, 2, p0, p1);
	}
	void task_parachute_to_target(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE0104D6C, 4, p0, p1, p2, p3);
	}
	void set_parachute_task_target(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6ED3AD81, 4, p0, p1, p2, p3);
	}
	void set_parachute_task_thrust(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD07C8AAA, 2, p0, p1);
	}
	void task_rappel_from_heli(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2C7ADB93, 2, p0, p1);
	}
	void task_vehicle_drive_to_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE4AC0387, 11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	void task_vehicle_drive_to_coord_longrange(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1490182A, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void task_vehicle_drive_wander(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x36EC0EB0, 4, p0, p1, p2, p3);
	}
	void task_follow_to_offset_of_entity(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2DF5A6AC, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void task_go_straight_to_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x80A9E7A7, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void task_go_straight_to_coord_relative_to_entity(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD26CAC68, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void task_achieve_heading(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0A0E9B42, 3, p0, p1, p2);
	}
	void task_flush_route()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x34219154, 0);
	}
	void task_extend_route(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x43271F69, 3, p0, p1, p2);
	}
	void task_follow_point_route(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB837C816, 3, p0, p1, p2);
	}
	void task_go_to_entity(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x374827C2, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void task_smart_flee_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB2E686FC, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void task_smart_flee_ped(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE52EB560, 6, p0, p1, p2, p3, p4, p5);
	}
	void task_react_and_flee_ped(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8A632BD8, 2, p0, p1);
	}
	void task_shocking_event_react(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9BD00ACF, 2, p0, p1);
	}
	void task_wander_in_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC6981FB9, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void task_wander_standard(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAF59151A, 3, p0, p1, p2);
	}
	void task_vehicle_park(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5C85FF90, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void task_stealth_kill(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0D64C2FA, 5, p0, p1, p2, p3, p4);
	}
	void task_plant_bomb(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x33457535, 5, p0, p1, p2, p3, p4);
	}
	void task_follow_nav_mesh_to_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFE4A10D9, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void set_ped_path_can_use_climbovers(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB7B7D442, 2, p0, p1);
	}
	void set_ped_path_can_use_ladders(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x53A879EE, 2, p0, p1);
	}
	void set_ped_path_can_drop_from_height(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x394B7AC9, 2, p0, p1);
	}
	void _0x55E06443(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x55E06443, 2, p0, p1);
	}
	void set_ped_paths_width_plant(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9C606EE3, 2, p0, p1);
	}
	void set_ped_path_prefer_to_avoid_water(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0EA39A29, 2, p0, p1);
	}
	void set_ped_path_avoid_fire(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDCC5B934, 2, p0, p1);
	}
	void _0x2AFB14B8(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2AFB14B8, 1, p0);
	}
	Any get_navmesh_route_distance_remaining(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD9281778, 3, p0, p1, p2);
	}
	Any get_navmesh_route_result(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x96491602, 1, p0);
	}
	void task_go_to_coord_any_means(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF91DF93B, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void _0x094B75EF(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x094B75EF, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	void task_play_anim(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5AB552C6, 11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	void _0x3DDEB0E6(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3DDEB0E6, 16, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15);
	}
	void stop_anim_task(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2B520A57, 4, p0, p1, p2, p3);
	}
	void task_scripted_animation(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFC2DCF47, 6, p0, p1, p2, p3, p4, p5);
	}
	void play_entity_scripted_anim(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x02F72AE5, 6, p0, p1, p2, p3, p4, p5);
	}
	void stop_anim_playback(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE5F16398, 3, p0, p1, p2);
	}
	void set_anim_weight(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x17229D98, 5, p0, p1, p2, p3, p4);
	}
	void set_anim_rate(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6DB46584, 4, p0, p1, p2, p3);
	}
	void set_anim_looped(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x095D61A4, 4, p0, p1, p2, p3);
	}
	void _0x1582162C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1582162C, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	// 0x5A32D4B4 -- no params/results data
	void task_vehicle_play_anim(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2B28F598, 3, p0, p1, p2);
	}
	void task_look_at_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7B784DD8, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void task_look_at_entity(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x991D6619, 5, p0, p1, p2, p3, p4);
	}
	void task_clear_look_at(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x60EB4054, 1, p0);
	}
	void open_sequence_task(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xABA6923E, 1, p0);
	}
	void close_sequence_task(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1A7CEBD0, 1, p0);
	}
	void task_perform_sequence(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4D9FBD11, 2, p0, p1);
	}
	void clear_sequence_task(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x47ED03CE, 1, p0);
	}
	void set_sequence_to_repeat(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCDDF1508, 2, p0, p1);
	}
	Any get_sequence_progress(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA3419909, 1, p0);
	}
	Any get_is_task_active(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x86FDDF55, 2, p0, p1);
	}
	Any get_script_task_status(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB2477B23, 2, p0, p1);
	}
	Any _0xAFA914EF(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAFA914EF, 1, p0);
	}
	void task_leave_any_vehicle(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDBDD79FA, 3, p0, p1, p2);
	}
	void task_aim_gun_scripted(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9D296BCD, 4, p0, p1, p2, p3);
	}
	void task_aim_gun_scripted_with_target(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFD517CE3, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void _0x67E73525(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x67E73525, 6, p0, p1, p2, p3, p4, p5);
	}
	Any _0x249EB4EB(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x249EB4EB, 1, p0);
	}
	void task_aim_gun_at_entity(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBE32B3B6, 4, p0, p1, p2, p3);
	}
	void task_turn_ped_to_face_entity(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3C37C767, 3, p0, p1, p2);
	}
	void task_aim_gun_at_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFBF44AD3, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void task_shoot_at_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x601C22E3, 6, p0, p1, p2, p3, p4, p5);
	}
	void task_shuffle_to_next_vehicle_seat(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBEAF8F67, 2, p0, p1);
	}
	void clear_ped_tasks(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDE3316AB, 1, p0);
	}
	// 0x9226734D -- no params/results data
	void clear_ped_secondary_task(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA635F451, 1, p0);
	}
	void task_everyone_leave_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC1971F30, 1, p0);
	}
	void task_goto_entity_offset(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1A17A85E, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void task_goto_entity_offset_xy(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBC1E3D0A, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void task_turn_ped_to_face_coord(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x30463D73, 5, p0, p1, p2, p3, p4);
	}
	void task_vehicle_temp_action(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0679DFB8, 4, p0, p1, p2, p3);
	}
	void task_vehicle_mission(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x20609E56, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void task_vehicle_mission_ped_target(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC81C4677, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void task_vehicle_mission_coors_target(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6719C109, 11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	void task_vehicle_escort(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9FDCB250, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void task_vehicle_follow(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA8B917D7, 6, p0, p1, p2, p3, p4, p5);
	}
	void task_vehicle_chase(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x55634798, 2, p0, p1);
	}
	void task_vehicle_heli_protect(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0CB415EE, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void _0x2A83083F(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2A83083F, 3, p0, p1, p2);
	}
	void _0x04FD3EE7(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x04FD3EE7, 2, p0, p1);
	}
	void task_heli_chase(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAC290A21, 5, p0, p1, p2, p3, p4);
	}
	void task_plane_chase(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x12FA1C28, 5, p0, p1, p2, p3, p4);
	}
	void task_plane_land(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5F7E23EA, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void task_heli_mission(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0C143E97, 15, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
	}
	void task_plane_mission(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1D007E65, 13, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
	}
	void task_boat_mission(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5865B031, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	void task_drive_by(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2B84D1C4, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void set_driveby_task_target(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDA6A6FC1, 6, p0, p1, p2, p3, p4, p5);
	}
	void _0x9B76F7E6(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9B76F7E6, 1, p0);
	}
	Any _0xB23F46E6(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB23F46E6, 1, p0);
	}
	Any _0x500D9244(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x500D9244, 1, p0);
	}
	void _0x98713C68(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x98713C68, 6, p0, p1, p2, p3, p4, p5);
	}
	Any _0x291E938C(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x291E938C, 1, p0);
	}
	void task_use_mobile_phone(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x225A38C8, 2, p0, p1);
	}
	void task_use_mobile_phone_timed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC99C19F5, 2, p0, p1);
	}
	void task_chat_to_ped(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA2BE1821, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void add_follow_navmesh_to_phone_task(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x00D7303F, 5, p0, p1, p2, p3, p4);
	}
	void task_warp_ped_into_vehicle(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x65D4A35D, 3, p0, p1, p2);
	}
	void task_shoot_at_entity(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAC0631C9, 4, p0, p1, p2, p3);
	}
	void task_climb(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x90847790, 2, p0, p1);
	}
	void task_climb_ladder(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x35BB4EE0, 2, p0, p1);
	}
	void clear_ped_tasks_immediately(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBC045625, 1, p0);
	}
	void task_perform_sequence_from_progress(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFA60601B, 4, p0, p1, p2, p3);
	}
	void set_next_desired_move_state(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4E937D57, 1, p0);
	}
	void set_ped_desired_move_blend_ratio(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC65FC712, 2, p0, p1);
	}
	Any get_ped_desired_move_blend_ratio(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5FEFAB72, 1, p0);
	}
	void task_goto_entity_aiming(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF1C493CF, 4, p0, p1, p2, p3);
	}
	void task_set_decision_maker(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x830AD50C, 2, p0, p1);
	}
	void task_set_sphere_defensive_area(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9F3C5D6A, 5, p0, p1, p2, p3, p4);
	}
	void task_clear_defensive_area(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7A05BF0D, 1, p0);
	}
	void task_ped_slide_to_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x225380EF, 6, p0, p1, p2, p3, p4, p5);
	}
	void task_ped_slide_to_coord_hdg_rate(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x38A995C1, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any add_cover_point(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA0AF0B98, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void remove_cover_point(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0776888B, 1, p0);
	}
	Any _0x29F97A71(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x29F97A71, 3, p0, p1, p2);
	}
	Vector3 _0xC6B6CCC1(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0xC6B6CCC1, 1, p0);
	}
	void task_combat_ped(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCB0D8932, 4, p0, p1, p2, p3);
	}
	void task_combat_ped_timed(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF5CA2A45, 4, p0, p1, p2, p3);
	}
	void task_seek_cover_from_pos(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x83F18EE9, 6, p0, p1, p2, p3, p4, p5);
	}
	void task_seek_cover_from_ped(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC1EC907E, 4, p0, p1, p2, p3);
	}
	void task_seek_cover_to_cover_point(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3D026B29, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void task_seek_cover_to_coords(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFFFE754E, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void task_put_ped_directly_into_cover(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC9F00E68, 11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	void task_exit_cover(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC829FAC9, 5, p0, p1, p2, p3, p4);
	}
	void task_put_ped_directly_into_melee(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x79E1D27D, 6, p0, p1, p2, p3, p4, p5);
	}
	void task_toggle_duck(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x61CFBCBF, 2, p0, p1);
	}
	void task_guard_current_position(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2FB099E9, 4, p0, p1, p2, p3);
	}
	void task_guard_sphere_defensive_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x86B76CB7, 11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	void task_stand_guard(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD130F636, 6, p0, p1, p2, p3, p4, p5);
	}
	void set_drive_task_cruise_speed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3CEC07B1, 2, p0, p1);
	}
	void set_drive_task_max_cruise_speed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7FDF6131, 2, p0, p1);
	}
	void _0x59C5FAD7(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x59C5FAD7, 2, p0, p1);
	}
	void add_cover_blocking_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3536946F, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void remove_all_cover_blocking_areas()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCF9221A7, 0);
	}
	void task_start_scenario_in_place(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE50D6DDE, 4, p0, p1, p2, p3);
	}
	void task_start_scenario_at_position(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAA2C4AC2, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void task_use_nearest_scenario_to_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9C50FBF0, 6, p0, p1, p2, p3, p4, p5);
	}
	void task_use_nearest_scenario_to_coord_warp(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1BE9D65C, 6, p0, p1, p2, p3, p4, p5);
	}
	// 0x60DE1B76 -- no params/results data
	void task_use_nearest_scenario_chain_to_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE32FFB22, 6, p0, p1, p2, p3, p4, p5);
	}
	void task_use_nearest_scenario_chain_to_coord_warp(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBAB4C0AE, 6, p0, p1, p2, p3, p4, p5);
	}
	BOOL does_scenario_exist_in_area(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xFA7F5047, 5, p0, p1, p2, p3, p4);
	}
	Any _0x0FB138A5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0FB138A5, 6, p0, p1, p2, p3, p4, p5);
	}
	BOOL is_scenario_occupied(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x697FC008, 5, p0, p1, p2, p3, p4);
	}
	Any _0x9BE9C691(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9BE9C691, 1, p0);
	}
	void _0x1984A5D1(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1984A5D1, 3, p0, p1, p2);
	}
	BOOL does_scenario_group_exist(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x5F072EB9, 1, p0);
	}
	BOOL is_scenario_group_enabled(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x90991122, 1, p0);
	}
	void set_scenario_group_enabled(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x116997B1, 2, p0, p1);
	}
	void _0xBF55025D()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBF55025D, 0);
	}
	void set_exclusive_scenario_group(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x59DB8F26, 1, p0);
	}
	void reset_exclusive_scenario_group()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x17F9DFE8, 0);
	}
	BOOL is_scenario_type_enabled(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xAE37E969, 1, p0);
	}
	void set_scenario_type_enabled(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDB18E5DE, 2, p0, p1);
	}
	void _0xF58FDEB4()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF58FDEB4, 0);
	}
	BOOL is_ped_active_in_scenario(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x05038F1A, 1, p0);
	}
	void task_combat_hated_targets_in_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDF099E18, 6, p0, p1, p2, p3, p4, p5);
	}
	void task_combat_hated_targets_around_ped(Any p0, float p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2E7064E4, 3, p0, float_int(p1), p2);
	}
	void task_combat_hated_targets_around_ped_timed(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF127AD6A, 4, p0, p1, p2, p3);
	}
	void task_throw_projectile(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF65C20A7, 4, p0, p1, p2, p3);
	}
	void task_swap_weapon(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDAF4F8FC, 2, p0, p1);
	}
	void task_reload_weapon(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCA6E91FD, 2, p0, p1);
	}
	BOOL is_ped_getting_up(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x320813E6, 1, p0);
	}
	void task_writhe(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0FDC54FC, 4, p0, p1, p2, p3);
	}
	BOOL is_ped_in_writhe(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x09E61921, 1, p0);
	}
	void open_patrol_route(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF33F83CA, 1, p0);
	}
	void close_patrol_route()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x67305E59, 0);
	}
	void add_patrol_route_node(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x21B48F10, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void add_patrol_route_link(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD8761BB3, 2, p0, p1);
	}
	void create_patrol_route()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0A6C7864, 0);
	}
	void delete_patrol_route(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2A4E6706, 1, p0);
	}
	void task_patrol(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB92E5AF6, 5, p0, p1, p2, p3, p4);
	}
	void task_stay_in_cover(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA27A9413, 1, p0);
	}
	void add_vehicle_subtask_attack_ped(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x80461113, 2, p0, p1);
	}
	void task_vehicle_shoot_at_ped(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x59677BA0, 3, p0, p1, p2);
	}
	void task_vehicle_aim_at_ped(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x920AE6DB, 2, p0, p1);
	}
	void task_vehicle_shoot_at_coord(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA7AAA4D6, 5, p0, p1, p2, p3, p4);
	}
	void task_vehicle_aim_at_coord(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x010F47CE, 4, p0, p1, p2, p3);
	}
	void task_vehicle_goto_navmesh(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x55CF3BCD, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void task_go_to_coord_while_aiming_at_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1552DC91, 15, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
	}
	void task_go_to_coord_while_aiming_at_entity(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9BD52ABD, 14, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
	}
	void task_go_to_coord_and_aim_at_hated_entities_near_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3F91358E, 15, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
	}
	void task_go_to_entity_while_aiming_at_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD896CD82, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	void task_go_to_entity_while_aiming_at_entity(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x68E36B7A, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void set_high_fall_task(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBBB26172, 4, p0, p1, p2, p3);
	}
	void request_waypoint_recording(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAFABFB5D, 1, p0);
	}
	Any _0x87125F5D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x87125F5D, 1, p0);
	}
	void remove_waypoint_recording(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x624530B0, 1, p0);
	}
	Any _0xF5F9B71E(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF5F9B71E, 2, p0, p1);
	}
	Any _0x19266913(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x19266913, 3, p0, p1, p2);
	}
	Any _0xC765633A(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC765633A, 2, p0, p1);
	}
	Any _0xC4CD35AF(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC4CD35AF, 5, p0, p1, p2, p3, p4);
	}
	void task_follow_waypoint_recording(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xADF9904D, 5, p0, p1, p2, p3, p4);
	}
	BOOL is_waypoint_playback_going_on_for_ped(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x85B7725F, 1, p0);
	}
	Any get_ped_waypoint_progress(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3595B104, 1, p0);
	}
	Any get_ped_waypoint_distance(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x084B35B0, 1, p0);
	}
	Any set_ped_waypoint_route_offset(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF867F747, 4, p0, p1, p2, p3);
	}
	Any _0xE8422AC4(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE8422AC4, 2, p0, p1);
	}
	Any waypoint_playback_get_is_paused(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA6BB5717, 1, p0);
	}
	void waypoint_playback_pause(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFE39ECF8, 3, p0, p1, p2);
	}
	void waypoint_playback_resume(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x50F392EF, 4, p0, p1, p2, p3);
	}
	void waypoint_playback_override_speed(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x23E6BA96, 3, p0, p1, p2);
	}
	void waypoint_playback_use_default_speed(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1BBB2CAC, 1, p0);
	}
	void _0x4DFD5FEC(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4DFD5FEC, 4, p0, p1, p2, p3);
	}
	void waypoint_playback_start_aiming_at_ped(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x75E60CF6, 3, p0, p1, p2);
	}
	void waypoint_playback_start_aiming_at_coord(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF120A34E, 5, p0, p1, p2, p3, p4);
	}
	void waypoint_playback_start_shooting_at_ped(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBD5F0EB8, 4, p0, p1, p2, p3);
	}
	void waypoint_playback_start_shooting_at_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCDDB44D5, 6, p0, p1, p2, p3, p4, p5);
	}
	void waypoint_playback_stop_aiming_or_shooting(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6D7CF40C, 1, p0);
	}
	void assisted_movement_request_route(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x48262EDA, 1, p0);
	}
	void assisted_movement_remove_route(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB3CEC06F, 1, p0);
	}
	Any _0x79B067AF(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x79B067AF, 1, p0);
	}
	void _0x01CAAFCC(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x01CAAFCC, 2, p0, p1);
	}
	void _0x8FB923EC(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8FB923EC, 1, p0);
	}
	void task_vehicle_follow_waypoint_recording(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x959818B6, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	BOOL is_waypoint_playback_going_on_for_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x80DD15DB, 1, p0);
	}
	Any get_vehicle_waypoint_progress(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD3CCF64E, 1, p0);
	}
	Any get_vehicle_waypoint_target_point(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x81049608, 1, p0);
	}
	void vehicle_waypoint_playback_pause(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7C00B415, 1, p0);
	}
	void vehicle_waypoint_playback_resume(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBEB14C82, 1, p0);
	}
	void vehicle_waypoint_playback_use_default_speed(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x923C3AA4, 1, p0);
	}
	void vehicle_waypoint_playback_override_speed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBE1E7BB4, 2, p0, p1);
	}
	void task_set_blocking_of_non_temporary_events(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1B54FB6B, 2, p0, p1);
	}
	void task_force_motion_state(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCAD2EF77, 3, p0, p1, p2);
	}
	void _0x6F5D215F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6F5D215F, 6, p0, p1, p2, p3, p4, p5);
	}
	void _0x71A5C5DB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x71A5C5DB, 13, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
	}
	Any _0x902656EB(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x902656EB, 1, p0);
	}
	Any _0x92FDBAE6(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x92FDBAE6, 1, p0);
	}
	Any _0x885724DE(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x885724DE, 2, p0, p1);
	}
	Any _0x96C0277B(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x96C0277B, 1, p0);
	}
	void _0xA79BE783(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA79BE783, 3, p0, p1, p2);
	}
	void _0xF3538041(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF3538041, 3, p0, p1, p2);
	}
	Any _0x1EBB6F3D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1EBB6F3D, 2, p0, p1);
	}
	Any _0x72FA5EF2(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x72FA5EF2, 2, p0, p1);
	}
	Any _0xE9DAF877(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE9DAF877, 1, p0);
	}
	Any _0xD21639A8(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD21639A8, 1, p0);
	}
	Any _0xE76A2353(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE76A2353, 1, p0);
	}
	Any _0xDD616893(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDD616893, 1, p0);
	}
	BOOL is_ped_still(Ped p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x09E3418D, 1, p);
	}
	BOOL is_ped_walking(Ped p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x4B865C4A, 1, p);
	}
	BOOL is_ped_running(Ped p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xE9A5578F, 1, p);
	}
	BOOL is_ped_sprinting(Ped p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x4F3E0633, 1, p);
	}
	BOOL is_ped_strafing(Ped p)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xEFEED13C, 1, p);
	}
	void task_synchronized_scene(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4F217E7B, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void _0x4D210467(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4D210467, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void _0xF65F0F4F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF65F0F4F, 2, p0, p1);
	}
	void _0x1683FE66(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1683FE66, 11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	void _0x6345EC80(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6345EC80, 4, p0, p1, p2, p3);
	}
	void task_arrest_ped(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBC0F153D, 2, p0, p1);
	}
	BOOL is_ped_running_arrest_task(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x6942DB7A, 1, p0);
	}
	BOOL is_ped_being_arrested(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x5FF6C2ED, 1, p0);
	}
	void uncuff_ped(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA23A1D61, 1, p0);
	}
	BOOL is_ped_cuffed(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x511CE741, 1, p0);
	}

	Any _0x4E9CA30A()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4E9CA30A, 0);
	}
	Any _0x11A178B8(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x11A178B8, 1, p0);
	}
	void set_random_seed(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDB3FEB5C, 1, p0);
	}
	void set_time_scale(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA7F84694, 1, p0);
	}
	void set_mission_flag(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x57592D52, 1, p0);
	}
	Any get_mission_flag()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x95115F97, 0);
	}
	void set_random_event_flag(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA77F31E8, 1, p0);
	}
	Any get_random_event_flag()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x794CC92C, 0);
	}
	void _0x8B2DE971(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8B2DE971, 1, p0);
	}
	void _0xE77199F7(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE77199F7, 1, p0);
	}
	Any _0xA8171E9E()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA8171E9E, 0);
	}
	Any _0x353E8056()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x353E8056, 0);
	}
	BOOL is_prev_weather_type(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x250ADA61, 1, p0);
	}
	BOOL is_next_weather_type(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x99CB167F, 1, p0);
	}
	void set_weather_type_persist(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC6C04C75, 1, p0);
	}
	void set_weather_type_now_persist(char* weatherName)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC869FE97, 1, weatherName);
	}
	void set_weather_type_now(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x361E9EAC, 1, p0);
	}
	void _0x386F0D25(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x386F0D25, 2, p0, p1);
	}
	void set_random_weather_type()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE7AA1BC9, 0);
	}
	void clear_weather_type_persist()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6AB757D8, 0);
	}
	void _0x9A5C1D56(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9A5C1D56, 3, p0, p1, p2);
	}
	void _0x5CA74040(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5CA74040, 3, p0, p1, p2);
	}
	void set_override_weather(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD9082BB5, 1, p0);
	}
	void clear_override_weather()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7740EA4E, 0);
	}
	void _0x625181DC(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x625181DC, 1, p0);
	}
	void _0xBEBBFDC8(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBEBBFDC8, 1, p0);
	}
	void _0x6926AB03(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6926AB03, 1, p0);
	}
	void _0xD447439D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD447439D, 1, p0);
	}
	void _0x584E9C59(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x584E9C59, 1, p0);
	}
	void _0x5656D578(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5656D578, 1, p0);
	}
	void _0x0DE40C28(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0DE40C28, 1, p0);
	}
	void _0x98C9138B(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x98C9138B, 1, p0);
	}
	void _0xFB1A9CDE(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFB1A9CDE, 1, p0);
	}
	void _0x1C0CAE89(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1C0CAE89, 1, p0);
	}
	void _0x4671AC2E(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4671AC2E, 1, p0);
	}
	void _0xDA02F415(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDA02F415, 1, p0);
	}
	void _0x5F3DDEC0(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5F3DDEC0, 1, p0);
	}
	void _0x63A89684(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x63A89684, 1, p0);
	}
	void set_wind(float f)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC6294698, 1, float_int(f));
	}
	void set_wind_speed(float speed)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x45705F94, 1, float_int(speed));
	}
	float get_wind_speed()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<float>(0x098F0F3C, 0);
	}
	void set_wind_direction(float f)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x381AEEE9, 1, float_int(f));
	}
	Vector3 get_wind_direction()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x89499A0D, 0);
	}
	Any get_rain_level()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC9F67F28, 0);
	}
	Any get_snow_level()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1B09184F, 0);
	}
	void _0xDF38165E()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDF38165E, 0);
	}
	void _0x8727A4C5(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8727A4C5, 1, p0);
	}
	void _0x96B2FD08(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x96B2FD08, 1, p0);
	}
	void _0xED88FC61(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xED88FC61, 2, p0, p1);
	}
	void _0xC9FA6E07(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC9FA6E07, 2, p0, p1);
	}
	void _0x2D7787BC()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2D7787BC, 0);
	}
	Any get_game_timer()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA4EA0691, 0);
	}
	Any get_frame_time()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x96374262, 0);
	}
	Any get_frame_count()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB477A015, 0);
	}
	Any get_random_float_in_range(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0562C4D0, 2, p0, p1);
	}
	Any get_random_int_in_range(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4051115B, 2, p0, p1);
	}
	BOOL get_ground_z_for_3d_coord(float x, float y, float z, float *pZ)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xA1BFD5E0, 4, float_int(x), float_int(y), float_int(z), pZ);
	}
	Any _0x64D91CED(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x64D91CED, 5, p0, p1, p2, p3, p4);
	}
	Any asin(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x998E5CAD, 1, p0);
	}
	Any acos(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF4038776, 1, p0);
	}
	Any tan(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD320CE5E, 1, p0);
	}
	Any atan(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7A03CC8E, 1, p0);
	}
	Any atan2(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2508AC81, 2, p0, p1);
	}
	Any get_distance_between_coords(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF698765E, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any get_angle_between_2d_vectors(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDBF75E58, 4, p0, p1, p2, p3);
	}
	Any get_heading_from_vector_2d(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD209D52B, 2, p0, p1);
	}
	Any _0x89459F0A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x89459F0A, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	Vector3 _0xCAECF37E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0xCAECF37E, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	Any _0xC6CC812C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC6CC812C, 13, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
	}
	void set_bit(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4EFE7E6B, 2, p0, p1);
	}
	void clear_bit(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8BC9E618, 2, p0, p1);
	}
	Hash get_hash_key(char* str)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Hash>(0x98EFF6F1, 1, str);
	}
	void _0x87B92190(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x87B92190, 13, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
	}
	BOOL is_area_occupied(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xC013972F, 13, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
	}
	BOOL is_position_occupied(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x452E8D9E, 11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	BOOL is_point_obscured_by_a_mission_entity(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xC161558D, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void clear_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x854E9AB8, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void clear_area_of_vehicles(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x63320F3C, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void clear_angled_area_of_vehicles(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF11A3018, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	void clear_area_of_objects(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBB720FE7, 5, p0, p1, p2, p3, p4);
	}
	void clear_area_of_peds(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x25BE7FA8, 5, p0, p1, p2, p3, p4);
	}
	void clear_area_of_cops(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x95C53824, 5, p0, p1, p2, p3, p4);
	}
	void clear_area_of_projectiles(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x18DB5434, 5, p0, p1, p2, p3, p4);
	}
	void set_save_menu_active(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF5CCF164, 1, p0);
	}
	Any _0x39771F21()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x39771F21, 0);
	}
	void set_credits_active(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEC2A0ECF, 1, p0);
	}
	void _0x75B06B5A(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x75B06B5A, 1, p0);
	}
	Any _0x2569C9A7()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2569C9A7, 0);
	}
	void terminate_all_scripts_with_this_name(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9F861FD4, 1, p0);
	}
	void network_set_script_is_safe_for_network_game()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x878486CE, 0);
	}
	Any add_hospital_restart(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4F3E3104, 5, p0, p1, p2, p3, p4);
	}
	void disable_hospital_restart(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x09F49C72, 2, p0, p1);
	}
	Any add_police_restart(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE96C29FE, 5, p0, p1, p2, p3, p4);
	}
	void disable_police_restart(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0A280324, 2, p0, p1);
	}
	void _0x296574AE(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x296574AE, 1, p0);
	}
	void ignore_next_restart(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDA13A4B6, 1, p0);
	}
	void _0xC9F6F0BC(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC9F6F0BC, 1, p0);
	}
	void _0xCB074B9D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCB074B9D, 1, p0);
	}
	void set_fade_in_after_death_arrest(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xACDE6985, 1, p0);
	}
	void set_fade_in_after_load(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6E00EB0B, 1, p0);
	}
	Any register_save_house(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x39C1849A, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void set_save_house(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC3240BB4, 3, p0, p1, p2);
	}
	Any override_save_house(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x47436C12, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	Any _0xC4D71AB4(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC4D71AB4, 4, p0, p1, p2, p3);
	}
	void do_auto_save()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x54C44B1A, 0);
	}
	Any _0xA8546914()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA8546914, 0);
	}
	BOOL is_auto_save_in_progress()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x36F75399, 0);
	}
	Any _0x78350773()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x78350773, 0);
	}
	void _0x5A45B11A()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5A45B11A, 0);
	}
	void begin_replay_stats(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x17F4F44D, 2, p0, p1);
	}
	void _0x81216EE0(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x81216EE0, 1, p0);
	}
	void end_replay_stats()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCB570185, 0);
	}
	Any _0xC58250F1()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC58250F1, 0);
	}
	Any _0x50C39926()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x50C39926, 0);
	}
	Any _0x710E5D1E()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x710E5D1E, 0);
	}
	Any _0xC7BD1AF0()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC7BD1AF0, 0);
	}
	Any _0x22BE2423(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x22BE2423, 1, p0);
	}
	void clear_replay_stats()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC47DFF02, 0);
	}
	Any _0xF62B3C48()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF62B3C48, 0);
	}
	Any _0x3589452B()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3589452B, 0);
	}
	Any _0x144AAF22()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x144AAF22, 0);
	}
	BOOL is_memory_card_in_use()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x40CE4DFD, 0);
	}
	void shoot_single_bullet_between_coords(float x1, float y1, float z1, float x2, float y2, float z2, int unk1, BOOL unk2, Hash weaponBullet, Ped shooter, BOOL unk3, BOOL unk4, float unk5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCB7415AC, 13, float_int(x1), float_int(y1), float_int(z1), float_int(x2), float_int(y2), float_int(z2), unk1, unk2, weaponBullet, shooter, unk3, unk4, float_int(unk5));
	}
	void _0x52ACCB7B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x52ACCB7B, 14, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
	}
	void get_model_dimensions(Hash model, Vector3 *pV0, Vector3 *pV1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x91ABB8E0, 3, model, pV0, pV1);
	}
	void set_fake_wanted_level(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x85B1C9FA, 1, p0);
	}
	BOOL is_bit_set(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x902E26AC, 2, p0, p1);
	}
	void using_mission_creator(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x20AB0B6B, 1, p0);
	}
	void _0x082BA6F2(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x082BA6F2, 1, p0);
	}
	void set_minigame_in_progress(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x348B9046, 1, p0);
	}
	BOOL is_minigame_in_progress()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x53A95E13, 0);
	}
	BOOL is_this_a_minigame_script()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x7605EF6F, 0);
	}
	BOOL is_sniper_inverted()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x5C3BF51B, 0);
	}
	Any get_current_language()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x761BE00B, 0);
	}
	Any _0xBAF17315()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBAF17315, 0);
	}
	Any get_profile_setting(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD374BEBC, 1, p0);
	}
	BOOL are_strings_equal(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x877C0BC5, 2, p0, p1);
	}
	Any compare_strings(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFE25A58F, 4, p0, p1, p2, p3);
	}
	Any absi(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB44677C5, 1, p0);
	}
	Any absf(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAF6F6E0B, 1, p0);
	}
	BOOL is_sniper_bullet_in_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0483715C, 6, p0, p1, p2, p3, p4, p5);
	}
	BOOL is_projectile_in_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x78E1A557, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	BOOL is_projectile_type_in_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x2B73BCF6, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	BOOL is_projectile_type_in_angled_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xD1AE2681, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	Any _0xBE81F1E2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBE81F1E2, 6, p0, p1, p2, p3, p4, p5);
	}
	Any _0x1A40454B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1A40454B, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	Any _0x6BDE5CE4(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6BDE5CE4, 5, p0, p1, p2, p3, p4);
	}
	Any _0x507BC6F7(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x507BC6F7, 6, p0, p1, p2, p3, p4, p5);
	}
	BOOL is_bullet_in_angled_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xE2DB58F7, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	BOOL is_bullet_in_area(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xB54F46CA, 5, p0, p1, p2, p3, p4);
	}
	BOOL is_bullet_in_box(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xAB73ED26, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	BOOL has_bullet_impacted_in_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x902BC7D9, 6, p0, p1, p2, p3, p4, p5);
	}
	BOOL has_bullet_impacted_in_box(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x2C2618CC, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	BOOL is_orbis_version()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x40282018, 0);
	}
	BOOL is_durango_version()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x46FB06A5, 0);
	}
	BOOL is_xbox360_version()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x24005CC8, 0);
	}
	BOOL is_ps3_version()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x4C0D5303, 0);
	}
	BOOL is_pc_version()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x4D5D9EE3, 0);
	}
	BOOL is_aussie_version()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x944BA1DC, 0);
	}
	BOOL is_string_null(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x8E71E00F, 1, p0);
	}
	BOOL is_string_null_or_empty(string p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x42E9F2CA, 1, p0);
	}
	BOOL string_to_int(char** string_val, int *num_val)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x590A8160, 2, string_val, num_val);
	}
	void set_bits_in_range(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x32094719, 4, p0, p1, p2, p3);
	}
	Any get_bits_in_range(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCA03A1E5, 3, p0, p1, p2);
	}
	Any add_stunt_jump(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB630E5FF, 17, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16);
	}
	Any add_stunt_jump_angled(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17, Any p18)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB9B7E777, 19, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18);
	}
	void delete_stunt_jump(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x840CB5DA, 1, p0);
	}
	void enable_stunt_jump_set(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9D1E7785, 1, p0);
	}
	void disable_stunt_jump_set(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x644C9FA4, 1, p0);
	}
	void _0x3C806A2D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3C806A2D, 1, p0);
	}
	BOOL is_stunt_jump_in_progress()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xF477D0B1, 0);
	}
	Any _0x021636EE()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x021636EE, 0);
	}
	Any _0x006F9BA2()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x006F9BA2, 0);
	}
	void cancel_stunt_jump()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF43D9821, 0);
	}
	void set_game_paused(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8230FF6C, 1, p0);
	}
	void set_this_script_can_be_paused(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA0C3CE29, 1, p0);
	}
	void set_this_script_can_remove_blips_created_by_any_script(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD06F1720, 1, p0);
	}
	Any _0xFF6191E1(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFF6191E1, 2, p0, p1);
	}
	void _0x721B2492(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x721B2492, 1, p0);
	}
	void _0xE202879D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE202879D, 1, p0);
	}
	BOOL is_frontend_fading()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x8FF6232C, 0);
	}
	void populate_now()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x72C20700, 0);
	}
	Any get_index_of_current_level()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6F203C6E, 0);
	}
	void set_gravity_level(BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2D833F4A, 1, b);
	}
	void start_save_data(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x881A694D, 3, p0, p1, p2);
	}
	void stop_save_data()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3B1C07C8, 0);
	}
	Any _0x9EF0BC64(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9EF0BC64, 1, p0);
	}
	void register_int_to_save(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB930956F, 2, p0, p1);
	}
	void _0x9B38374A(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9B38374A, 2, p0, p1);
	}
	void register_float_to_save(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDB06F7AD, 2, p0, p1);
	}
	void register_bool_to_save(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5417E0E0, 2, p0, p1);
	}
	void register_text_label_to_save(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x284352C4, 2, p0, p1);
	}
	void _0xE2089749(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE2089749, 2, p0, p1);
	}
	void _0xF91B8C33(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF91B8C33, 2, p0, p1);
	}
	void _0x74E8FAD9(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x74E8FAD9, 2, p0, p1);
	}
	void _0x6B4335DD(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6B4335DD, 2, p0, p1);
	}
	void _0xFB45728E(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFB45728E, 3, p0, p1, p2);
	}
	void stop_save_struct()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC2624A28, 0);
	}
	void _0x893A342C(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x893A342C, 3, p0, p1, p2);
	}
	void stop_save_array()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0CAD8217, 0);
	}
	void _0x0B710A51(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0B710A51, 2, p0, p1);
	}
	void _0xE0F0684F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE0F0684F, 2, p0, p1);
	}
	Any _0x3CE5BF6B(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3CE5BF6B, 1, p0);
	}
	Any create_incident(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFC5FF7B3, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any create_incident_with_entity(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBBC35B03, 5, p0, p1, p2, p3, p4);
	}
	void delete_incident(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x212BD0DC, 1, p0);
	}
	BOOL is_incident_valid(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x31FD0BA4, 1, p0);
	}
	void _0x0242D88E(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0242D88E, 3, p0, p1, p2);
	}
	void _0x1F38102E(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1F38102E, 2, p0, p1);
	}
	Any find_spawn_point_in_direction(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x71AEFD77, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	Any _0x42BF09B3(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x42BF09B3, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void _0xFBDBE374(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFBDBE374, 2, p0, p1);
	}
	void enable_tennis_mode(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0BD3F9EC, 3, p0, p1, p2);
	}
	BOOL is_tennis_mode(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x04A947BA, 1, p0);
	}
	void _0xC20A7D2B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC20A7D2B, 6, p0, p1, p2, p3, p4, p5);
	}
	Any _0x8501E727(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8501E727, 1, p0);
	}
	Any _0x1A332D2D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1A332D2D, 1, p0);
	}
	void _0x0C8865DF(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0C8865DF, 6, p0, p1, p2, p3, p4, p5);
	}
	void _0x49F977A9(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x49F977A9, 3, p0, p1, p2);
	}
	void _0x6F009E33(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6F009E33, 3, p0, p1, p2);
	}
	void reset_dispatch_ideal_spawn_distance()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDA65ECAA, 0);
	}
	void set_dispatch_ideal_spawn_distance(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6283BE32, 1, p0);
	}
	void reset_dispatch_time_between_spawn_attempts(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1479E85A, 1, p0);
	}
	void set_dispatch_time_between_spawn_attempts(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xABADB709, 2, p0, p1);
	}
	void set_dispatch_time_between_spawn_attempts_multiplier(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1C996BCD, 2, p0, p1);
	}
	Any _0xF557BAF9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF557BAF9, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void remove_dispatch_spawn_blocking_area(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA8D2FB92, 1, p0);
	}
	void reset_dispatch_spawn_blocking_areas()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9A17F835, 0);
	}
	void _0xE0C9307E()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE0C9307E, 0);
	}
	void _0xA0D8C749(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA0D8C749, 2, p0, p1);
	}
	void _0x24A4E0B2(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x24A4E0B2, 3, p0, p1, p2);
	}
	void _0x66C3C59C()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x66C3C59C, 0);
	}
	void _0xD9660339(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD9660339, 1, p0);
	}
	void _0xD2688412(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD2688412, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	void display_onscreen_keyboard(int p0, string p1, string p2, string p3, string p4, string p5, string p6, int p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAD99F2CE, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	Any update_onscreen_keyboard()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x23D0A1CE, 0);
	}
	string get_onscreen_keyboard_result()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<string>(0x44828FB3, 0);
	}
	// 0x196444BB -- no params/results data
	void _0x3301EA47(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3301EA47, 1, p0);
	}
	void _0x42B484ED(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x42B484ED, 2, p0, p1);
	}
	void _0x8F60366E(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8F60366E, 2, p0, p1);
	}
	void set_explosive_ammo_this_frame(Player p)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2EAFA1D1, 1, p);
	}
	void set_fire_ammo_this_frame(Player p)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7C18FC8A, 1, p);
	}
	void set_explosive_melee_this_frame(Player p)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x96663D56, 1, p);
	}
	void set_super_jump_this_frame(Player p)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x86745EF3, 1, p);
	}
	Any _0xC3C10FCC()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC3C10FCC, 0);
	}
	void _0x054EC103()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x054EC103, 0);
	}
	Any _0x46B5A15C()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x46B5A15C, 0);
	}
	void _0x5D209F25()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5D209F25, 0);
	}
	void _0x2D33F15A(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2D33F15A, 4, p0, p1, p2, p3);
	}
	void _0xDF99925C()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDF99925C, 0);
	}
	void _0xA27F4472(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA27F4472, 4, p0, p1, p2, p3);
	}
	Any _0x07FF553F(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x07FF553F, 3, p0, p1, p2);
	}

	void play_ped_ringtone(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1D530E47, 3, p0, p1, p2);
	}
	BOOL is_ped_ringtone_playing(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xFE576EE4, 1, p0);
	}
	void stop_ped_ringtone(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFEEA107C, 1, p0);
	}
	BOOL is_mobile_phone_call_ongoing()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x4ED1400A, 0);
	}
	Any _0x16FB88B5()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x16FB88B5, 0);
	}
	void create_new_scripted_conversation()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB2BC25F8, 0);
	}
	void add_line_to_conversation(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x96CD0513, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	void add_ped_to_conversation(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF8D5EB86, 3, p0, p1, p2);
	}
	void _0x73C6F979(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x73C6F979, 4, p0, p1, p2, p3);
	}
	void _0x88203DDA(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x88203DDA, 2, p0, p1);
	}
	void set_microphone_position(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAD7BB191, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void _0x1193ED6E(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1193ED6E, 1, p0);
	}
	void start_script_phone_conversation(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x38E42D07, 2, p0, p1);
	}
	void preload_script_phone_conversation(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9ACB213A, 2, p0, p1);
	}
	void start_script_conversation(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE5DE7D9D, 4, p0, p1, p2, p3);
	}
	void preload_script_conversation(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDDF5C579, 4, p0, p1, p2, p3);
	}
	void start_preloaded_conversation()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA170261B, 0);
	}
	Any _0x336F3D35()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x336F3D35, 0);
	}
	BOOL is_scripted_conversation_ongoing()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xCB8FD96F, 0);
	}
	BOOL is_scripted_conversation_loaded()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xE1870EA9, 0);
	}
	Any get_current_scripted_conversation_line()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9620E41F, 0);
	}
	void pause_scripted_conversation(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE2C9C6F8, 1, p0);
	}
	void restart_scripted_conversation()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6CB24B56, 0);
	}
	Any stop_scripted_conversation(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAB77DA7D, 1, p0);
	}
	void skip_to_next_scripted_conversation_line()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x85C98304, 0);
	}
	void interrupt_conversation(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF3A67AF3, 3, p0, p1, p2);
	}
	Any _0xB58B8FF3(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB58B8FF3, 1, p0);
	}
	void _0x789D8C6C(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x789D8C6C, 1, p0);
	}
	void register_script_with_audio(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA6203643, 1, p0);
	}
	void unregister_script_with_audio()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x66728EFE, 0);
	}
	Any request_mission_audio_bank(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x916E37CA, 2, p0, p1);
	}
	Any request_ambient_audio_bank(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x23C88BC7, 2, p0, p1);
	}
	Any request_script_audio_bank(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x21322887, 2, p0, p1);
	}
	Any hint_ambient_audio_bank(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF1850DDC, 2, p0, p1);
	}
	Any hint_script_audio_bank(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x41FA0E51, 2, p0, p1);
	}
	void release_mission_audio_bank()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8E8824C7, 0);
	}
	void release_ambient_audio_bank()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8C938784, 0);
	}
	void release_named_script_audio_bank(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x16707ABC, 1, p0);
	}
	void release_script_audio_bank()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x22F865E5, 0);
	}
	void _0xA58BBF4F()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA58BBF4F, 0);
	}
	Any get_sound_id()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6AE0AD56, 0);
	}
	void release_sound_id(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9C080899, 1, p0);
	}
	void play_sound(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB6E1917F, 5, p0, p1, p2, p3, p4);
	}
	void play_sound_frontend(int t, char* sound, char* soundSet)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2E458F74, 3, t, sound, soundSet);
	}
	void play_sound_from_entity(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x95AE00F8, 6, p0, p1, p2, p3, p4, p5);
	}
	void play_sound_from_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCAD3E2D5, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void stop_sound(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCD7F4030, 1, p0);
	}
	Any get_network_id_from_sound_id(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2576F610, 1, p0);
	}
	Any _0xD064D4DC(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD064D4DC, 1, p0);
	}
	void set_variable_on_sound(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x606EE5FA, 3, p0, p1, p2);
	}
	void set_variable_on_stream(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF67BB44C, 2, p0, p1);
	}
	void override_underwater_stream(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9A083B7E, 2, p0, p1);
	}
	void _0x62D026BE(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x62D026BE, 2, p0, p1);
	}
	BOOL has_sound_finished(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xE85AEC2E, 1, p0);
	}
	void _0x5C57B85D(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5C57B85D, 3, p0, p1, p2);
	}
	void _0x444180DB(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x444180DB, 3, p0, p1, p2);
	}
	void _0x8386AE28(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8386AE28, 5, p0, p1, p2, p3, p4);
	}
	void _0xA1A1402E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA1A1402E, 6, p0, p1, p2, p3, p4, p5);
	}
	void override_trevor_rage(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x05B9B5CF, 1, p0);
	}
	void reset_trevor_rage()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE80CF0D4, 0);
	}
	void set_player_angry(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x782CA58D, 2, p0, p1);
	}
	void play_pain(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x874BD6CB, 3, p0, p1, p2);
	}
	void release_weapon_audio()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6096504C, 0);
	}
	void _0x59A3A17D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x59A3A17D, 1, p0);
	}
	void _0x0E387BFE(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0E387BFE, 1, p0);
	}
	void set_ambient_voice_name(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBD2EA1A1, 2, p0, p1);
	}
	void stop_current_playing_ambient_speech(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBB8E64BF, 1, p0);
	}
	BOOL is_ambient_speech_playing(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x1972E8AA, 1, p0);
	}
	BOOL is_scripted_speech_playing(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x2C653904, 1, p0);
	}
	BOOL is_any_speech_playing(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x2B74A6D6, 1, p0);
	}
	Any _0x8BD5F11E(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8BD5F11E, 3, p0, p1, p2);
	}
	BOOL is_ped_in_current_conversation(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x7B2F0743, 1, p0);
	}
	void set_ped_is_drunk(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD2EA77A3, 2, p0, p1);
	}
	void _0x498849F3(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x498849F3, 3, p0, p1, p2);
	}
	Any _0x0CBAF2EF(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0CBAF2EF, 1, p0);
	}
	void set_animal_mood(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3EA7C6CB, 2, p0, p1);
	}
	BOOL is_mobile_phone_radio_active()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x6E502A5B, 0);
	}
	void set_mobile_phone_radio_state(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE1E0ED34, 1, p0);
	}
	Any get_player_radio_station_index()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1C4946AC, 0);
	}
	Any get_player_radio_station_name()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD909C107, 0);
	}
	Any get_radio_station_name(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3DF493BC, 1, p0);
	}
	Any get_player_radio_station_genre()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x872CF0EA, 0);
	}
	BOOL is_radio_retuning()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xCF29097B, 0);
	}
	void _0x53DB6994()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x53DB6994, 0);
	}
	void _0xD70ECC80()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD70ECC80, 0);
	}
	void set_radio_to_station_name(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7B36E35E, 1, p0);
	}
	void set_veh_radio_station(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE391F55F, 2, p0, p1);
	}
	void _0x7ABB89D2(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7ABB89D2, 1, p0);
	}
	void set_emitter_radio_station(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x87431585, 2, p0, p1);
	}
	void set__emitter_enabled(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x91F72E92, 2, p0, p1);
	}
	void set_radio_to_station_index(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1D82766D, 1, p0);
	}
	void set_frontend_radio_active(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB1172075, 1, p0);
	}
	void unlock_mission_news_story(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCCD9ABE4, 1, p0);
	}
	Any get_number_of_passenger_voice_variations(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x27305D37, 1, p0);
	}
	int get_audible_music_track_text_id()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0xA2B88CA7, 0);
	}
	void play_end_credits_music(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8E88B3CC, 1, p0);
	}
	void skip_radio_forward()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x10D36630, 0);
	}
	void freeze_radio_station(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x286BF543, 1, p0);
	}
	void unfreeze_radio_station(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4D46202C, 1, p0);
	}
	void set_radio_auto_unfreeze(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA40196BF, 1, p0);
	}
	void set_initial_player_station(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9B069233, 1, p0);
	}
	void set_user_radio_control_enabled(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x52E054CE, 1, p0);
	}
	void set_radio_track(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x76E96212, 2, p0, p1);
	}
	void set_vehicle_radio_loud(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8D9EDD99, 2, p0, p1);
	}
	Any _0xCBA99F4A(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCBA99F4A, 1, p0);
	}
	void set_mobile_radio_enabled_during_gameplay(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x990085F0, 1, p0);
	}
	Any _0x46B0C696()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x46B0C696, 0);
	}
	Any _0x2A3E5E8B()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2A3E5E8B, 0);
	}
	void set_vehicle_radio_enabled(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6F812CAB, 2, p0, p1);
	}
	void _0x128C3873(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x128C3873, 3, p0, p1, p2);
	}
	void _0x1D766976(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1D766976, 1, p0);
	}
	Any _0xCC91FCF5()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCC91FCF5, 0);
	}
	Any find_radio_station_index(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xECA1512F, 1, p0);
	}
	void _0xB1FF7137(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB1FF7137, 2, p0, p1);
	}
	void _0xC8B514E2(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC8B514E2, 1, p0);
	}
	void _0xBE998184(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBE998184, 2, p0, p1);
	}
	// 0x779F6E40 -- no params/results data
	// 0xA85397A2 -- no params/results data
	void set_ambient_zone_state(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2849CAC9, 3, p0, p1, p2);
	}
	void clear_ambient_zone_state(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCDFF3C82, 2, p0, p1);
	}
	void set_ambient_zone_list_state(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBF80B412, 3, p0, p1, p2);
	}
	void clear_ambient_zone_list_state(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x38B9B8D4, 2, p0, p1);
	}
	void set_ambient_zone_state_persistent(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC1FFB672, 3, p0, p1, p2);
	}
	void set_ambient_zone_list_state_persistent(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5F5A2605, 3, p0, p1, p2);
	}
	BOOL is_ambient_zone_enabled(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xBFABD872, 1, p0);
	}
	void set_cutscene_audio_override(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCE1332B7, 1, p0);
	}
	void get_player_headset_sound_alternate(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD63CF33A, 2, p0, p1);
	}
	Any play_police_report(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3F277B62, 2, p0, p1);
	}
	void blip_siren(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC0EB6924, 1, p0);
	}
	void override_veh_horn(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2ACAB783, 3, p0, p1, p2);
	}
	BOOL is_horn_active(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x20E2BDD0, 1, p0);
	}
	void set_aggressive_horns(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x01D6EABE, 1, p0);
	}
	void _0x3C395AEE(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3C395AEE, 1, p0);
	}
	void _0x8CE63FA1(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8CE63FA1, 2, p0, p1);
	}
	BOOL is_stream_playing()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xF1F51A14, 0);
	}
	Any get_stream_play_time()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB4F0AD56, 0);
	}
	Any load_stream(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0D89599D, 2, p0, p1);
	}
	Any load_stream_with_start_offset(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE5B5745C, 3, p0, p1, p2);
	}
	void play_stream_from_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF8E4BDA2, 1, p0);
	}
	void play_stream_from_object(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC5266BF7, 1, p0);
	}
	void play_stream_frontend()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2C2A16BC, 0);
	}
	void special_frontend_equal(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6FE5D865, 3, p0, p1, p2);
	}
	void stop_stream()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD1E364DE, 0);
	}
	void stop_ped_speaking(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFF92B49D, 2, p0, p1);
	}
	void disable_ped_pain_audio(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3B8E2D5F, 2, p0, p1);
	}
	BOOL is_ambient_speech_disabled(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x109D1F89, 1, p0);
	}
	void set_siren_with_no_driver(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x77182D58, 2, p0, p1);
	}
	void _0xDE8BA3CD(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDE8BA3CD, 1, p0);
	}
	void set_horn_enabled(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6EB92D05, 2, p0, p1);
	}
	void set_audio_vehicle_priority(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x271A9766, 2, p0, p1);
	}
	void _0x2F0A16D1(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2F0A16D1, 2, p0, p1);
	}
	void use_siren_as_horn(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC6BC16F3, 2, p0, p1);
	}
	void _0x33B0B007(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x33B0B007, 2, p0, p1);
	}
	void _0x1C0C5E4C(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1C0C5E4C, 3, p0, p1, p2);
	}
	Any _0x6E660D3F(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6E660D3F, 1, p0);
	}
	void _0x23BE6432(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x23BE6432, 2, p0, p1);
	}
	void _0xE81FAC68(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE81FAC68, 2, p0, p1);
	}
	void _0x9365E042(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9365E042, 2, p0, p1);
	}
	void _0x2A60A90E(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2A60A90E, 2, p0, p1);
	}
	void set_vehicle_boost_active(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x072F15F2, 2, p0, p1);
	}
	void _0x934BE749(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x934BE749, 2, p0, p1);
	}
	void _0xE61110A2(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE61110A2, 2, p0, p1);
	}
	void play_vehicle_door_open_sound(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x84930330, 2, p0, p1);
	}
	void play_vehicle_door_close_sound(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBA2CF407, 2, p0, p1);
	}
	void _0x563B635D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x563B635D, 2, p0, p1);
	}
	BOOL is_game_in_control_of_music()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x7643170D, 0);
	}
	void set_gps_active(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0FC3379A, 1, p0);
	}
	void play_mission_complete_audio(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3033EA1D, 1, p0);
	}
	BOOL is_mission_complete_playing()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x939982A1, 0);
	}
	Any _0xCBE09AEC()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCBE09AEC, 0);
	}
	void _0xD2858D8A(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD2858D8A, 1, p0);
	}
	Any start_audio_scene(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE48D757B, 1, p0);
	}
	void stop_audio_scene(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA08D8C58, 1, p0);
	}
	void stop_audio_scenes()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF6C7342A, 0);
	}
	BOOL is_audio_scene_active(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xACBED05C, 1, p0);
	}
	void set_audio_scene_variable(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x19BB3CE8, 3, p0, p1, p2);
	}
	void _0xE812925D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE812925D, 1, p0);
	}
	void _0x2BC93264(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2BC93264, 3, p0, p1, p2);
	}
	void _0x308ED0EC(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x308ED0EC, 2, p0, p1);
	}
	Any audio_is_scripted_music_playing()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x86E995D1, 0);
	}
	Any prepare_music_event(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x534A5C1C, 1, p0);
	}
	Any cancel_music_event(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x89FF942D, 1, p0);
	}
	Any trigger_music_event(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB6094948, 1, p0);
	}
	Any _0x2705C4D5()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2705C4D5, 0);
	}
	Any get_music_playtime()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD633C809, 0);
	}
	void _0x53FC3FEC(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x53FC3FEC, 4, p0, p1, p2, p3);
	}
	void _0xE6B033BF()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE6B033BF, 0);
	}
	void _0x95050CAD(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x95050CAD, 2, p0, p1);
	}
	void _0xE64F97A0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE64F97A0, 2, p0, p1);
	}
	void _0xD87AF337()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD87AF337, 0);
	}
	Any prepare_alarm(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x084932E8, 1, p0);
	}
	void start_alarm(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x703F524B, 2, p0, p1);
	}
	void stop_alarm(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF987BE8C, 2, p0, p1);
	}
	void stop_all_alarms(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC3CB9DC6, 1, p0);
	}
	BOOL is_alarm_playing(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x9D8E1D23, 1, p0);
	}
	Any get_vehicle_default_horn(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE84ABC19, 1, p0);
	}
	Any _0xFD4B5B3B(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFD4B5B3B, 1, p0);
	}
	void reset_ped_audio_flags(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDF720C86, 1, p0);
	}
	void _0xC307D531(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC307D531, 2, p0, p1);
	}
	void _0x13EB5861(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x13EB5861, 1, p0);
	}
	void _0x7BED1872(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7BED1872, 2, p0, p1);
	}
	void set_audio_flag(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1C09C9E0, 2, p0, p1);
	}
	Any prepare_synchronized_audio_event(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE1D91FD0, 2, p0, p1);
	}
	Any prepare_synchronized_audio_event_for_scene(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7652DD49, 2, p0, p1);
	}
	Any play_synchronized_audio_event(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x507F3241, 1, p0);
	}
	Any stop_synchronized_audio_event(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xADEED2B4, 1, p0);
	}
	void _0x55A21772(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x55A21772, 4, p0, p1, p2, p3);
	}
	void _0xA17F9AB0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA17F9AB0, 2, p0, p1);
	}
	void _0x62B43677(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x62B43677, 1, p0);
	}
	void _0x8AD670EC(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8AD670EC, 2, p0, p1);
	}
	void _0xD24B4D0C(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD24B4D0C, 1, p0);
	}
	void _0x7262B5BA()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7262B5BA, 0);
	}
	Any _0x93A44A1F()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x93A44A1F, 0);
	}
	void _0x13777A0B(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x13777A0B, 1, p0);
	}
	void _0x1134F68B()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1134F68B, 0);
	}
	void _0xE0047BFD(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE0047BFD, 1, p0);
	}

	void request_cutscene(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB5977853, 2, p0, p1);
	}
	void _0xD98F656A(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD98F656A, 3, p0, p1, p2);
	}
	void remove_cutscene()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8052F533, 0);
	}
	BOOL has_cutscene_loaded()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xF9998582, 0);
	}
	BOOL has_this_cutscene_loaded(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x3C5619F2, 1, p0);
	}
	void _0x25A2CABC(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x25A2CABC, 1, p0);
	}
	Any _0xDD8878E9()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDD8878E9, 0);
	}
	Any _0x7B93CDAA(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7B93CDAA, 1, p0);
	}
	// 0xCAB087F0 -- no params/results data
	// SET_CUTSCENE_ENTITY_MODEL -- no params/results data
	void _0x47DB08A9(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x47DB08A9, 3, p0, p1, p2);
	}
	void start_cutscene(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x210106F6, 1, p0);
	}
	void start_cutscene_at_coords(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x58BEA436, 4, p0, p1, p2, p3);
	}
	void stop_cutscene(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5EE84DC7, 1, p0);
	}
	void stop_cutscene_immediately()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF528A2AD, 0);
	}
	void set_cutscene_origin(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB0AD7792, 5, p0, p1, p2, p3, p4);
	}
	Any get_cutscene_time()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x53F5B5AB, 0);
	}
	Any get_cutscene_total_duration()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0824EBE8, 0);
	}
	BOOL was_cutscene_skipped()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xC9B6949D, 0);
	}
	BOOL has_cutscene_finished()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x5DED14B4, 0);
	}
	BOOL is_cutscene_active()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xCCE2FE9D, 0);
	}
	BOOL is_cutscene_playing()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xA3A78392, 0);
	}
	Any get_cutscene_section_playing()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1026F0D6, 0);
	}
	Any get_entity_index_of_cutscene_entity(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1D09ABC7, 2, p0, p1);
	}
	Any _0x5AE68AE6()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5AE68AE6, 0);
	}
	void register_entity_for_cutscene(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7CBC3EC7, 5, p0, p1, p2, p3, p4);
	}
	Any get_entity_index_of_registered_entity(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x46D18755, 2, p0, p1);
	}
	void set_cutscene_trigger_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9D76D9DE, 6, p0, p1, p2, p3, p4, p5);
	}
	BOOL can_set_enter_state_for_registered_entity(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x55C30B26, 2, p0, p1);
	}
	BOOL can_set_exit_state_for_registered_entity(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x8FF5D3C4, 2, p0, p1);
	}
	BOOL can_set_exit_state_for_camera(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xEDAE6C02, 1, p0);
	}
	void _0x35721A08(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x35721A08, 1, p0);
	}
	void set_cutscene_fade_values(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD19EF0DD, 4, p0, p1, p2, p3);
	}
	void _0x8338DA1D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8338DA1D, 1, p0);
	}
	void _0x04377C10(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x04377C10, 1, p0);
	}
	Any _0xDBD88708()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDBD88708, 0);
	}
	void _0x28D54A7F(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x28D54A7F, 1, p0);
	}
	void register_synchronised_script_speech()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB60CFBB9, 0);
	}
	void set_cutscene_ped_component_variation(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6AF994A1, 5, p0, p1, p2, p3, p4);
	}
	void _0x1E7DA95E(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1E7DA95E, 3, p0, p1, p2);
	}
	BOOL does_cutscene_entity_exist(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x58E67409, 2, p0, p1);
	}
	void _0x22E9A9DE(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x22E9A9DE, 5, p0, p1, p2, p3, p4);
	}
	Any _0x4315A7C5()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4315A7C5, 0);
	}

	Any get_interior_group_id(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x09D6376F, 1, p0);
	}
	Vector3 get_offset_from_interior_in_world_coords(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x7D8F26A1, 4, p0, p1, p2, p3);
	}
	BOOL is_interior_scene()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x55226C13, 0);
	}
	BOOL is_valid_interior(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x39C0B635, 1, p0);
	}
	void clear_room_for_entity(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7DDADB92, 1, p0);
	}
	void force_room_for_entity(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x10BD4435, 3, p0, p1, p2);
	}
	Any get_room_key_from_entity(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE4ACF8C3, 1, p0);
	}
	Any get_key_for_entity_in_room(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x91EA80EF, 1, p0);
	}
	Any get_interior_from_entity(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5C644614, 1, p0);
	}
	void _0xE645E162(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE645E162, 2, p0, p1);
	}
	void _0xD79803B5(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD79803B5, 2, p0, p1);
	}
	void _0x1F6B4B13(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1F6B4B13, 1, p0);
	}
	void _0x0E9529CC(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0E9529CC, 1, p0);
	}
	Any _0x4FF3D3F5()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4FF3D3F5, 0);
	}
	void _0x617DC75D()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x617DC75D, 0);
	}
	Any get_interior_at_coords(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA17FBF37, 3, p0, p1, p2);
	}
	void add_pickup_to_interior_room_by_name(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA2A73564, 2, p0, p1);
	}
	void _0x3ADA414E(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3ADA414E, 1, p0);
	}
	void unpin_interior(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFCFF792A, 1, p0);
	}
	BOOL is_interior_ready(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xE1EF6450, 1, p0);
	}
	Any _0x96525B06(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x96525B06, 4, p0, p1, p2, p3);
	}
	Any _0x7762249C(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7762249C, 3, p0, p1, p2);
	}
	Any get_interior_from_collision(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7ED33DC1, 3, p0, p1, p2);
	}
	void _0xC80A5DDF(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC80A5DDF, 2, p0, p1);
	}
	void _0xDBA768A1(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDBA768A1, 2, p0, p1);
	}
	Any _0x39A3CC6F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x39A3CC6F, 2, p0, p1);
	}
	void refresh_interior(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9A29ACE6, 1, p0);
	}
	void _0x1F375B4C(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1F375B4C, 1, p0);
	}
	void disable_interior(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x093ADEA5, 2, p0, p1);
	}
	BOOL is_interior_disabled(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x81F34C71, 1, p0);
	}
	void cap_interior(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x34E735A6, 2, p0, p1);
	}
	BOOL is_interior_capped(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x18B17C80, 1, p0);
	}
	void _0x5EF9C5C2(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5EF9C5C2, 1, p0);
	}
	// 0xFC227584 -- no params/results data

	void render_script_cams(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x74337969, 5, p0, p1, p2, p3, p4);
	}
	void _0xD3C08183(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD3C08183, 3, p0, p1, p2);
	}
	Cam create_cam(char* name, BOOL unk)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Cam>(0xE9BF2A7D, 2, name, unk);
	}
	Cam create_cam_with_params(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Cam>(0x23B02F15, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	Cam create_camera(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Cam>(0x5D6739AE, 2, p0, p1);
	}
	Cam create_camera_with_params(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Cam>(0x0688BE9A, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void destroy_cam(Cam cam, BOOL unk)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC39302BD, 2, cam, unk);
	}
	void destroy_all_cams(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x10C151CE, 1, p0);
	}
	BOOL does_cam_exist(Cam cam)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x1EF89DC0, 1, cam);
	}
	void set_cam_active(Cam cam, BOOL active)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x064659C2, 2, cam, active);
	}
	BOOL is_cam_active(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x4B58F177, 1, p0);
	}
	BOOL is_cam_rendering(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x6EC6B5B2, 1, p0);
	}
	Any get_rendering_cam()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0FCF4DF1, 0);
	}
	Vector3 get_cam_coord(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x7C40F09C, 1, p0);
	}
	Vector3 get_cam_rot(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0xDAC84C9F, 2, p0, p1);
	}
	Any get_cam_fov(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD6E9FCF5, 1, p0);
	}
	Any get_cam_near_clip(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCFCD35EE, 1, p0);
	}
	Any get_cam_far_clip(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x09F119B8, 1, p0);
	}
	Any get_cam_far_dof(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x98C5CCE9, 1, p0);
	}
	void set_cam_params(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2167CEBF, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	void set_cam_coord(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7A8053AF, 4, p0, p1, p2, p3);
	}
	void set_cam_rot(Cam cam, float x, float y, float z, int mode)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEE38B3C1, 5, cam, float_int(x), float_int(y), float_int(z), mode);
	}
	void set_cam_fov(Cam cam, float val)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD3D5D74F, 2, cam, float_int(val));
	}
	void set_cam_near_clip(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x46DB13B1, 2, p0, p1);
	}
	void set_cam_far_clip(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0D23E381, 2, p0, p1);
	}
	void set_cam_near_dof(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF28254DF, 2, p0, p1);
	}
	void set_cam_far_dof(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x58515E8E, 2, p0, p1);
	}
	void set_cam_dof_strength(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3CC4EB3F, 2, p0, p1);
	}
	void set_cam_dof_planes(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAD6C2B8F, 5, p0, p1, p2, p3, p4);
	}
	void _0x8306C256(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8306C256, 2, p0, p1);
	}
	void set_cam_motion_blur_strength(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFD6E0D67, 2, p0, p1);
	}
	void _0x8BBF2950()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8BBF2950, 0);
	}
	void attach_cam_to_entity(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAD7C45F6, 6, p0, p1, p2, p3, p4, p5);
	}
	void attach_cam_to_ped_bone(Cam cam, Ped p, int boneId, float x, float y, float z, BOOL unk)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x506BB35C, 7, cam, p, boneId, float_int(x), float_int(y), float_int(z), unk);
	}
	void detach_cam(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF4FBF14A, 1, p0);
	}
	void set_cam_inherit_roll_vehicle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE4BD5342, 2, p0, p1);
	}
	void point_cam_at_coord(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x914BC21A, 4, p0, p1, p2, p3);
	}
	void point_cam_at_entity(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7597A0F7, 6, p0, p1, p2, p3, p4, p5);
	}
	void point_cam_at_ped_bone(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x09F47049, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void stop_cam_pointing(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5435F6A5, 1, p0);
	}
	void _0x0C74F9AF(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0C74F9AF, 2, p0, p1);
	}
	void _0xE1A0B2F1(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE1A0B2F1, 2, p0, p1);
	}
	void _0x43220969(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x43220969, 2, p0, p1);
	}
	void set_cam_debug_name(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9B00DF3F, 2, p0, p1);
	}
	void add_cam_spline_node(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAD3C7EAA, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void _0x30510511(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x30510511, 4, p0, p1, p2, p3);
	}
	void _0xBA6C085B(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBA6C085B, 4, p0, p1, p2, p3);
	}
	void _0xB4737F03(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB4737F03, 3, p0, p1, p2);
	}
	void set_cam_spline_phase(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF0AED233, 2, p0, p1);
	}
	Any get_cam_spline_phase(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x39784DD9, 1, p0);
	}
	Any get_cam_spline_node_phase(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7B9522F6, 1, p0);
	}
	void set_cam_spline_duration(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3E91FC8A, 2, p0, p1);
	}
	void _0x15E141CE(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x15E141CE, 2, p0, p1);
	}
	Any get_cam_spline_node_index(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF8AEB6BD, 1, p0);
	}
	void _0x21D275DA(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x21D275DA, 4, p0, p1, p2, p3);
	}
	void _0xA3BD9E94(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA3BD9E94, 3, p0, p1, p2);
	}
	void override_cam_spline_velocity(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x326A17E2, 4, p0, p1, p2, p3);
	}
	void override_cam_spline_motion_blur(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x633179E6, 4, p0, p1, p2, p3);
	}
	void _0xC90B2DDC(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC90B2DDC, 3, p0, p1, p2);
	}
	BOOL is_cam_spline_paused(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x60B34FF5, 1, p0);
	}
	void set_cam_active_with_interp(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7983E7F0, 5, p0, p1, p2, p3, p4);
	}
	BOOL is_cam_interpolating(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x7159CB5D, 1, p0);
	}
	void shake_cam(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1D4211B0, 3, p0, p1, p2);
	}
	void animated_shake_cam(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE1168767, 5, p0, p1, p2, p3, p4);
	}
	BOOL is_cam_shaking(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0961FD9B, 1, p0);
	}
	void set_cam_shake_amplitude(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x60FF6382, 2, p0, p1);
	}
	void stop_cam_shaking(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x40D0EB87, 2, p0, p1);
	}
	void _0x2B0F05CD(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2B0F05CD, 2, p0, p1);
	}
	void _0xCB75BD9C(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCB75BD9C, 4, p0, p1, p2, p3);
	}
	Any _0x6AEFE6A5()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6AEFE6A5, 0);
	}
	void _0x26FCFB96(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x26FCFB96, 1, p0);
	}
	Any play_cam_anim(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBCEFB87E, 11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	BOOL is_cam_playing_anim(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xB998CB49, 3, p0, p1, p2);
	}
	void set_cam_anim_current_phase(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3CB1D17F, 2, p0, p1);
	}
	Any get_cam_anim_current_phase(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x345F72D0, 1, p0);
	}
	Any play_synchronized_cam_anim(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9458459E, 4, p0, p1, p2, p3);
	}
	BOOL is_cam_transitioning(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xE905BC7E, 1, p0);
	}
	void _0x56F9ED27(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x56F9ED27, 4, p0, p1, p2, p3);
	}
	void _0x71570DBA(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x71570DBA, 2, p0, p1);
	}
	void _0x60B345DE(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x60B345DE, 4, p0, p1, p2, p3);
	}
	void _0x44473EFC(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x44473EFC, 1, p0);
	}
	Any _0xDA931D65(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDA931D65, 1, p0);
	}
	BOOL is_screen_faded_out()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x9CAA05FA, 0);
	}
	BOOL is_screen_faded_in()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x4F37276D, 0);
	}
	BOOL is_screen_fading_out()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x79275A57, 0);
	}
	BOOL is_screen_fading_in()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xC7C82800, 0);
	}
	void do_screen_fade_in(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x66C1BDEE, 1, p0);
	}
	void do_screen_fade_out(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x89D01805, 1, p0);
	}
	void set_widescreen_borders(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1A75DC9A, 2, p0, p1);
	}
	Vector3 get_gameplay_cam_coord()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x9388CF79, 0);
	}
	Vector3 get_gameplay_cam_rot(int mode)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x13A010B5, 1, mode);
	}
	Any get_gameplay_cam_fov()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4D6B3BFA, 0);
	}
	void _0xA6E73135(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA6E73135, 1, p0);
	}
	void _0x1126E37C(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1126E37C, 1, p0);
	}
	Any get_gameplay_cam_relative_heading()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCAF839C2, 0);
	}
	void set_gameplay_cam_relative_heading(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x20C6217C, 1, p0);
	}
	Any get_gameplay_cam_relative_pitch()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFC5A4946, 0);
	}
	void set_gameplay_cam_relative_pitch(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6381B963, 2, p0, p1);
	}
	void shake_gameplay_cam(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF2EFE660, 2, p0, p1);
	}
	BOOL is_gameplay_cam_shaking()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x3457D681, 0);
	}
	void set_gameplay_cam_shake_amplitude(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9219D44A, 1, p0);
	}
	void stop_gameplay_cam_shaking(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFD569E4E, 1, p0);
	}
	void _0x7D3007A2(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7D3007A2, 1, p0);
	}
	BOOL is_gameplay_cam_rendering()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0EF276DA, 0);
	}
	Any _0xC0B00C20()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC0B00C20, 0);
	}
	Any _0x60C23785()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x60C23785, 0);
	}
	void _0x20BFF6E5(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x20BFF6E5, 1, p0);
	}
	void _0xA61FF9AC()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA61FF9AC, 0);
	}
	BOOL is_gameplay_cam_looking_behind()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x33C83F17, 0);
	}
	void _0x2701A9AD(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2701A9AD, 1, p0);
	}
	void _0xC4736ED3(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC4736ED3, 1, p0);
	}
	void _0x6B0E9D57()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6B0E9D57, 0);
	}
	BOOL is_sphere_visible(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xDD1329E2, 4, p0, p1, p2, p3);
	}
	BOOL is_follow_ped_cam_active()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x9F9E856C, 0);
	}
	Any set_follow_ped_cam_cutscene_chat(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1425F6AC, 2, p0, p1);
	}
	void _0x8DC53629(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8DC53629, 2, p0, p1);
	}
	void _0x1F9DE6E4()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1F9DE6E4, 0);
	}
	void _0x749909AC(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x749909AC, 2, p0, p1);
	}
	void _0xFA3A16E7(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFA3A16E7, 2, p0, p1);
	}
	void _0x77340650(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x77340650, 2, p0, p1);
	}
	void _0x4B22C5CB(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4B22C5CB, 2, p0, p1);
	}
	Any get_follow_ped_cam_zoom_level()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x57583DF1, 0);
	}
	Any get_follow_ped_cam_view_mode()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA65FF946, 0);
	}
	void set_follow_ped_cam_view_mode(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x495DBE8D, 1, p0);
	}
	BOOL is_follow_vehicle_cam_active()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x8DD49B77, 0);
	}
	void _0x9DB5D391(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9DB5D391, 1, p0);
	}
	void _0x92302899(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x92302899, 2, p0, p1);
	}
	Any get_follow_vehicle_cam_zoom_level()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8CD67DE3, 0);
	}
	void set_follow_vehicle_cam_zoom_level(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8F55EBBE, 1, p0);
	}
	Any get_follow_vehicle_cam_view_mode()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA4B4DB03, 0);
	}
	void set_follow_vehicle_cam_view_mode(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC4FBBBD3, 1, p0);
	}
	Any _0xF3B148A6(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF3B148A6, 1, p0);
	}
	void _0x1DEBCB45(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1DEBCB45, 2, p0, p1);
	}
	BOOL is_aim_cam_active()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xC24B4F6F, 0);
	}
	Any _0x8F320DE4()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8F320DE4, 0);
	}
	BOOL is_first_person_aim_cam_active()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xD6280468, 0);
	}
	void _0x1BAA7182()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1BAA7182, 0);
	}
	Any _0x33951005()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x33951005, 0);
	}
	void _0x9F4AF763(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9F4AF763, 1, p0);
	}
	void _0x68BA0730(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x68BA0730, 2, p0, p1);
	}
	void _0x2F29F0D5(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2F29F0D5, 2, p0, p1);
	}
	void _0x76DAC96C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x76DAC96C, 2, p0, p1);
	}
	void _0x0E21069D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0E21069D, 1, p0);
	}
	void _0x71E9C63E(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x71E9C63E, 1, p0);
	}
	void _0xD1EEBC45(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD1EEBC45, 1, p0);
	}
	Vector3 _0x9C84BDA0()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x9C84BDA0, 0);
	}
	Vector3 _0x1FFBEFC5(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x1FFBEFC5, 1, p0);
	}
	Vector3 _0xACADF916(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0xACADF916, 2, p0, p1);
	}
	Any _0x721B763B()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x721B763B, 0);
	}
	Any _0x23E3F106(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x23E3F106, 1, p0);
	}
	Any _0x457AE195()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x457AE195, 0);
	}
	Any _0x46CB3A49()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x46CB3A49, 0);
	}
	Any _0x19297A7A()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x19297A7A, 0);
	}
	Any _0xF24777CA()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF24777CA, 0);
	}
	Any _0x38992E83()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x38992E83, 0);
	}
	void set_gameplay_coord_hint(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF27483C9, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void set_gameplay_ped_hint(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7C27343E, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void set_gameplay_vehicle_hint(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2C9A11D8, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void set_gameplay_entity_hint(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x66C32306, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	BOOL is_gameplay_hint_active()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xAD8DA205, 0);
	}
	void stop_gameplay_hint(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1BC28B7B, 1, p0);
	}
	void _0xCAFEE798(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCAFEE798, 1, p0);
	}
	void set_gameplay_hint_fov(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x96FD173B, 1, p0);
	}
	void _0x72E8CD3A(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x72E8CD3A, 1, p0);
	}
	void _0x79472AE3(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x79472AE3, 1, p0);
	}
	void _0xFC7464A0(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFC7464A0, 1, p0);
	}
	void _0x3554AA0E(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3554AA0E, 1, p0);
	}
	void get_is_multiplayer_brief(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2F0CE859, 1, p0);
	}
	void set_cinematic_button_active(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3FBC5D00, 1, p0);
	}
	BOOL is_cinematic_cam_rendering()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x80471AD9, 0);
	}
	void shake_cinematic_cam(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x61815F31, 2, p0, p1);
	}
	BOOL is_cinematic_cam_shaking()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x8376D939, 0);
	}
	void set_cinematic_cam_shake_amplitude(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x67510C4B, 1, p0);
	}
	void stop_cinematic_cam_shaking(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x71C12904, 1, p0);
	}
	void _0x5AC6DAC9()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5AC6DAC9, 0);
	}
	void _0x837F8581()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x837F8581, 0);
	}
	void _0x65DDE8AF()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x65DDE8AF, 0);
	}
	void _0xD75CDD75()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD75CDD75, 0);
	}
	Any _0x96A07066()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x96A07066, 0);
	}
	void create_cinematic_shot(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAC494E35, 4, p0, p1, p2, p3);
	}
	BOOL is_cinematic_shot_active(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xA4049042, 1, p0);
	}
	void stop_cinematic_shot(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD78358C5, 1, p0);
	}
	void _0xFBB85E02(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFBB85E02, 1, p0);
	}
	void _0x4938C82F()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4938C82F, 0);
	}
	Any _0x2939D0B6(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2939D0B6, 3, p0, p1, p2);
	}
	void set_cinematic_mode_active(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2009E747, 1, p0);
	}
	void _0xAA2B89E0()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAA2B89E0, 0);
	}
	Any _0x6739AD55()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6739AD55, 0);
	}
	void stop_cutscene_cam_shaking(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF07D603D, 1, p0);
	}
	void _0x067BA6F5(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x067BA6F5, 1, p0);
	}
	Any _0xFD99BE2B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFD99BE2B, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void _0xE206C450()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE206C450, 0);
	}
	void _0xB06CCD38(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB06CCD38, 1, p0);
	}

	void enable_laser_sight_rendering(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE3438955, 1, p0);
	}
	Any _0x324FA47A(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x324FA47A, 1, p0);
	}
	Any get_weapontype_model(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x44E1C269, 1, p0);
	}
	Any get_weapontype_slot(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2E3759AF, 1, p0);
	}
	Any get_weapontype_group(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5F2DE833, 1, p0);
	}
	void set_current_ped_weapon(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB8278882, 3, p0, p1, p2);
	}
	BOOL get_current_ped_weapon(Ped ped, Hash *pWeapon, BOOL b)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xB0237302, 3, ped, pWeapon, b);
	}
	Any _0x5D73CD20(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5D73CD20, 1, p0);
	}
	Any get_best_ped_weapon(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB998D444, 2, p0, p1);
	}
	Any set_current_ped_vehicle_weapon(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8E6F2AF1, 2, p0, p1);
	}
	Any get_current_ped_vehicle_weapon(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF26C5D65, 2, p0, p1);
	}
	BOOL is_ped_armed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0BFC892C, 2, p0, p1);
	}
	BOOL is_weapon_valid(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x38CA2954, 1, p0);
	}
	BOOL has_ped_got_weapon(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x43D2FA82, 3, p0, p1, p2);
	}
	Any _0x02A32CB0(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x02A32CB0, 1, p0);
	}
	Any get_ped_weapontype_in_slot(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9BC64E16, 2, p0, p1);
	}
	Any get_ammo_in_ped_weapon(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0C755733, 2, p0, p1);
	}
	void add_ammo_to_ped(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7F0580C7, 3, p0, p1, p2);
	}
	void set_ped_ammo(Ped ped, Hash weapon, int ammo)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBF90DF1A, 3, ped, weapon, ammo);
	}
	void set_ped_infinite_ammo(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9CB8D278, 3, p0, p1, p2);
	}
	void set_ped_infinite_ammo_clip(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5A5E3B67, 2, p0, p1);
	}
	void give_weapon_to_ped(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC4D88A85, 5, p0, p1, p2, p3, p4);
	}
	void give_delayed_weapon_to_ped(Ped p, Hash weapon, int ammo, BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5868D20D, 4, p, weapon, ammo, b);
	}
	void remove_all_ped_weapons(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA44CE817, 2, p0, p1);
	}
	void remove_weapon_from_ped(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9C37F220, 2, p0, p1);
	}
	void hide_ped_weapon_for_scripted_cutscene(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x00CFD6E9, 2, p0, p1);
	}
	void set_ped_current_weapon_visible(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x00BECD77, 4, p0, p1, p2, p3);
	}
	void set_ped_drops_weapons_when_dead(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8A444056, 2, p0, p1);
	}
	BOOL has_ped_been_damaged_by_weapon(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xCDFBBCC6, 3, p0, p1, p2);
	}
	void clear_ped_last_weapon_damage(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x52C68832, 1, p0);
	}
	BOOL has_entity_been_damaged_by_weapon(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x6DAABB39, 3, p0, p1, p2);
	}
	void clear_entity_last_weapon_damage(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCEC2732B, 1, p0);
	}
	void set_ped_drops_weapon(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3D3329FA, 1, p0);
	}
	void set_ped_drops_inventory_weapon(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x81FFB874, 6, p0, p1, p2, p3, p4, p5);
	}
	int get_max_ammo_in_clip(Ped ped, Hash weapon, BOOL b)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0x6961E2A4, 3, ped, weapon, b);
	}
	Any get_ammo_in_clip(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x73C100C3, 3, p0, p1, p2);
	}
	Any set_ammo_in_clip(Ped ped, Hash weapon, int ammo)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA54B0B10, 3, ped, weapon, ammo);
	}
	Any get_max_ammo(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0B294796, 3, p0, p1, p2);
	}
	void set_ped_ammo_by_type(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x311C52BB, 3, p0, p1, p2);
	}
	Any get_ped_ammo_by_type(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x54077C4D, 2, p0, p1);
	}
	void set_ped_ammo_to_drop(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2386A307, 2, p0, p1);
	}
	void _0xD6460EA2(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD6460EA2, 1, p0);
	}
	Any _0x09337863(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x09337863, 2, p0, p1);
	}
	Any get_ped_last_weapon_impact_coord(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9B266079, 2, p0, p1);
	}
	void set_ped_gadget(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8A256D0A, 3, p0, p1, p2);
	}
	Any _0x8DDD0B5B(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8DDD0B5B, 2, p0, p1);
	}
	Any get_selected_ped_weapon(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD240123E, 1, p0);
	}
	void explode_projectiles(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x35A0B955, 3, p0, p1, p2);
	}
	void remove_all_projectiles_of_type(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA5F89919, 2, p0, p1);
	}
	Any _0x3612110D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3612110D, 1, p0);
	}
	Any _0xB2B2BBAA(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB2B2BBAA, 1, p0);
	}
	BOOL has_vehicle_got_projectile_attached(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xA57E2E80, 4, p0, p1, p2, p3);
	}
	void give_weapon_component_to_ped(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3E1E286D, 3, p0, p1, p2);
	}
	void remove_weapon_component_from_ped(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x412AA00D, 3, p0, p1, p2);
	}
	BOOL has_ped_got_weapon_component(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xDC0FC145, 3, p0, p1, p2);
	}
	BOOL is_ped_weapon_component_active(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x7565FB19, 3, p0, p1, p2);
	}
	Any _0x82EEAF0F(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x82EEAF0F, 1, p0);
	}
	Any make_ped_reload(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x515292C2, 1, p0);
	}
	void request_weapon_asset(Hash name, int type, int unk)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x65D139A5, 3, name, type, unk);
	}
	BOOL has_weapon_asset_loaded(Hash name)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x1891D5BB, 1, name);
	}
	void remove_weapon_asset(Hash name)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2C0DFE3C, 1, name);
	}
	Any create_weapon_object(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x62F5987F, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void give_weapon_component_to_weapon_object(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF7612A37, 2, p0, p1);
	}
	void remove_weapon_component_from_weapon_object(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA6E7ED3C, 2, p0, p1);
	}
	BOOL has_weapon_got_weapon_component(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x1D368510, 2, p0, p1);
	}
	void give_weapon_object_to_ped(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x639AF3EF, 2, p0, p1);
	}
	Any _0xB1817BAA(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB1817BAA, 2, p0, p1);
	}
	Any get_weapon_object_from_ped(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDF939A38, 1, p0);
	}
	void set_ped_weapon_tint_index(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEB2A7B23, 3, p0, p1, p2);
	}
	Any get_ped_weapon_tint_index(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3F9C90A7, 2, p0, p1);
	}
	void set_weapon_object_tint_index(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x44ACC1DA, 2, p0, p1);
	}
	Any get_weapon_object_tint_index(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD91D9576, 1, p0);
	}
	Any get_weapon_tint_count(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x99E4EAAB, 1, p0);
	}
	Any get_weapon_hud_stats(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA9AD3D98, 2, p0, p1);
	}
	Any get_weapon_component_hud_stats(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBB5498F4, 2, p0, p1);
	}
	Any get_weapon_clip_size(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8D515E66, 1, p0);
	}
	void _0xB4F44C6E(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB4F44C6E, 3, p0, p1, p2);
	}
	Any _0xEC2E5304(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEC2E5304, 2, p0, p1);
	}
	void _0xE3BD00F9(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE3BD00F9, 1, p0);
	}
	Any _0xBAF7BFBE(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBAF7BFBE, 1, p0);
	}
	Any set_weapon_smokegrenade_assigned(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x76876154, 1, p0);
	}
	Any _0xB0127EA7(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB0127EA7, 1, p0);
	}
	void set_weapon_animation_override(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA5DF7484, 2, p0, p1);
	}
	Any get_weapon_damage_type(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x013AFC13, 1, p0);
	}
	void _0x64646F1D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x64646F1D, 1, p0);
	}

	Any create_itemset(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0A113B2C, 1, p0);
	}
	void destroy_itemset(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x83CE1A4C, 1, p0);
	}
	BOOL is_itemset_valid(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xD201FC29, 1, p0);
	}
	Any add_to_itemset(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6B0FE61B, 2, p0, p1);
	}
	void remove_from_itemset(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA9565228, 2, p0, p1);
	}
	Any get_itemset_size(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2B31F41A, 1, p0);
	}
	Any get_indexed_item_in_itemset(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3F712874, 2, p0, p1);
	}
	BOOL is_in_itemset(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0D4B9730, 2, p0, p1);
	}
	void clean_itemset(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x919A4858, 1, p0);
	}

	void load_all_objects_now()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC9DBDA90, 0);
	}
	void load_scene(float x, float y, float z)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB72403F5, 3, float_int(x), float_int(y), float_int(z));
	}
	Any network_update_load_scene()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC76E023C, 0);
	}
	void network_stop_load_scene()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x24857907, 0);
	}
	BOOL is_network_loading_scene()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x6DCFC021, 0);
	}
	void set_interior_active(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE1013910, 2, p0, p1);
	}
	void request_model(Hash model)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFFF1B500, 1, model);
	}
	void _0x48CEB6B4(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x48CEB6B4, 1, p0);
	}
	BOOL has_model_loaded(Hash model)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x62BFDB37, 1, model);
	}
	void _0x939243FB(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x939243FB, 2, p0, p1);
	}
	void set_model_as_no_longer_needed(Hash model)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAE0F069E, 1, model);
	}
	BOOL is_model_in_cdimage(Hash model)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x1094782F, 1, model);
	}
	BOOL is_model_valid(Hash model)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xAF8F8E9D, 1, model);
	}
	BOOL is_model_a_vehicle(Hash model)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xFFFC85D4, 1, model);
	}
	void _0x0B7E0F0A()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0B7E0F0A, 0);
	}
	void request_collision_at_coord(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCD9805E7, 3, p0, p1, p2);
	}
	void request_collision_for_model(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3930C042, 1, p0);
	}
	BOOL has_collision_for_model_loaded(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x41A094F8, 1, p0);
	}
	void request_additional_collision_at_coord(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC2CC1DF2, 3, p0, p1, p2);
	}
	void request_anim_dict(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDCA96950, 1, p0);
	}
	BOOL has_anim_dict_loaded(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x05E6763C, 1, p0);
	}
	void remove_anim_dict(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0AE050B5, 1, p0);
	}
	void request_anim_set(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2988B3FC, 1, p0);
	}
	BOOL has_anim_set_loaded(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x4FFF397D, 1, p0);
	}
	void remove_anim_set(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD04A817A, 1, p0);
	}
	void request_clip_set(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x546C627A, 1, p0);
	}
	BOOL has_clip_set_loaded(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x230D5455, 1, p0);
	}
	void remove_clip_set(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1E21F7AA, 1, p0);
	}
	void request_ipl(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3B70D1DB, 1, p0);
	}
	void remove_ipl(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDF7CBD36, 1, p0);
	}
	BOOL is_ipl_active(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xB2C33714, 1, p0);
	}
	void set_streaming(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x27EF6CB2, 1, p0);
	}
	void set_game_pauses_for_streaming(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9211A28A, 1, p0);
	}
	void set_reduce_ped_model_budget(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAFCB2B86, 1, p0);
	}
	void set_reduce_vehicle_model_budget(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCDB4FB7E, 1, p0);
	}
	void set_ditch_police_models(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3EA7FCE4, 1, p0);
	}
	Any get_number_of_streaming_requests()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC2EE9A02, 0);
	}
	void request_ptfx_asset()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2C649263, 0);
	}
	BOOL has_ptfx_asset_loaded()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x3EFF96BE, 0);
	}
	void remove_ptfx_asset()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC10F178C, 0);
	}
	void set_vehicle_population_budget(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1D56993C, 1, p0);
	}
	void set_ped_population_budget(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD2D026CD, 1, p0);
	}
	void clear_focus()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x34D91E7A, 0);
	}
	void _0x14680A60(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x14680A60, 6, p0, p1, p2, p3, p4, p5);
	}
	void set_focus_entity(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x18DB04AC, 1, p0);
	}
	BOOL is_entity_focus(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xB456D707, 1, p0);
	}
	void _0x403CD434(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x403CD434, 2, p0, p1);
	}
	void _0xA07BAEB9(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA07BAEB9, 1, p0);
	}
	Any _0x10B6AB36(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x10B6AB36, 6, p0, p1, p2, p3, p4, p5);
	}
	Any _0x72344191(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x72344191, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	Any _0xC0157255(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC0157255, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void _0xE80F8ABE(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE80F8ABE, 1, p0);
	}
	Any _0x1B3521F4(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1B3521F4, 1, p0);
	}
	Any _0x42CFE9C0(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x42CFE9C0, 1, p0);
	}
	Any _0x56253356()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x56253356, 0);
	}
	Any new_load_scene_start(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDF9C38B6, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	Any _0xFA037FEB(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFA037FEB, 5, p0, p1, p2, p3, p4);
	}
	void new_load_scene_stop()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7C05B1F6, 0);
	}
	BOOL is_new_load_scene_active()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xAD234B7F, 0);
	}
	BOOL is_new_load_scene_loaded()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x3ECD839F, 0);
	}
	Any _0xEAA51103()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEAA51103, 0);
	}
	void start_player_switch(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0829E975, 4, p0, p1, p2, p3);
	}
	void stop_player_switch()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2832C010, 0);
	}
	Any stop_player_remain_arcade()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x56135ACC, 0);
	}
	Any get_player_switch_type()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x280DC015, 0);
	}
	Any get_ideal_player_switch_type(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD5A450F1, 6, p0, p1, p2, p3, p4, p5);
	}
	Any get_player_switch_state()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x39A0E1F2, 0);
	}
	Any get_player_short_switch_state()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9B7BA38F, 0);
	}
	void _0xF0BD420D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF0BD420D, 1, p0);
	}
	Any _0x02BA7AC2()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x02BA7AC2, 0);
	}
	void _0x47352E14(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x47352E14, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void _0x279077B0(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x279077B0, 1, p0);
	}
	void _0x55CB21F9()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x55CB21F9, 0);
	}
	void _0x1084F2F4()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1084F2F4, 0);
	}
	void _0x5B1E995D()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5B1E995D, 0);
	}
	void _0x4B4B9A13()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4B4B9A13, 0);
	}
	Any _0x408F7148()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x408F7148, 0);
	}
	void _0xFB4D062D(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFB4D062D, 3, p0, p1, p2);
	}
	void _0x2349373B(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2349373B, 1, p0);
	}
	Any _0x74C16879()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x74C16879, 0);
	}
	Any set_player_inverted_up()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x569847E3, 0);
	}
	Any _0xC7A3D279()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC7A3D279, 0);
	}
	Any destroy_player_in_pause_menu()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x90F64284, 0);
	}
	Any _0x7154B6FD()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7154B6FD, 0);
	}
	void _0xE5612C1A(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE5612C1A, 1, p0);
	}
	void _0x9CD6A451(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9CD6A451, 4, p0, p1, p2, p3);
	}
	void _0x4267DA87()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4267DA87, 0);
	}
	void _0x9FA4AF99(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9FA4AF99, 1, p0);
	}
	void _0x9EF0A9CF(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9EF0A9CF, 2, p0, p1);
	}
	void _0xF2CDD6A8()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF2CDD6A8, 0);
	}
	Any _0x17B0A1CD()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x17B0A1CD, 0);
	}
	void _0x3DA7AA5D()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3DA7AA5D, 0);
	}
	Any _0xDAB4BAC0()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDAB4BAC0, 0);
	}
	void prefetch_srl(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x37BE2FBB, 1, p0);
	}
	BOOL is_srl_loaded()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x670FA2A6, 0);
	}
	void begin_srl()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x24F49427, 0);
	}
	void end_srl()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1977C56A, 0);
	}
	void set_srl_time(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x30F8A487, 1, p0);
	}
	void _0x814D0752(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x814D0752, 6, p0, p1, p2, p3, p4, p5);
	}
	void _0x62F02485(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x62F02485, 4, p0, p1, p2, p3);
	}
	void _0xA6459CAA(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA6459CAA, 1, p0);
	}
	void _0xF8F515E4(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF8F515E4, 1, p0);
	}
	void set_hd_area(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x80BAA035, 4, p0, p1, p2, p3);
	}
	void clear_hd_area()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7CAC6FA0, 0);
	}
	void _0xE243B2AF()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE243B2AF, 0);
	}
	void _0x897A510F()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x897A510F, 0);
	}
	// 0x81043F00 -- no params/results data
	Any _0xC0E83320(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC0E83320, 1, p0);
	}
	void _0x1C576388(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1C576388, 1, p0);
	}
	Any _0x3E9C4CBE()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3E9C4CBE, 0);
	}

	void request_script(char* name)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE26B2666, 1, name);
	}
	void set_script_as_no_longer_needed(char* name)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6FCB7795, 1, name);
	}
	BOOL has_script_loaded(char* name)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x5D67F751, 1, name);
	}
	BOOL does_script_exist(char* name)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xDEAB87AB, 1, name);
	}
	void terminate_thread(int tid)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x253FD520, 1, tid);
	}
	BOOL is_thread_active(int tid)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x78D7A5A0, 1, tid);
	}
	Any _0xBE7ACD89(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBE7ACD89, 1, p0);
	}
	void _0xBB4E2F66()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBB4E2F66, 0);
	}
	Any _0x1E28B28F()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1E28B28F, 0);
	}
	int get_id_of_this_thread()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0xDE524830, 0);
	}
	void terminate_this_thread()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3CD9CBB7, 0);
	}
	Any _0x029D3841(Hash script)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x029D3841, 1, script);
	}
	string GET_THIS_SCRIPT_NAME()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<string>(0xA40FD5D9, 0);
	}
	Any _0x2BEE1F45()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2BEE1F45, 0);
	}
	Any get_number_of_events(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA3525D60, 1, p0);
	}
	Any get_event_exists(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA1B447B5, 2, p0, p1);
	}
	Any get_event_at_index(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB49C1442, 2, p0, p1);
	}
	Any get_event_data(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4280F92F, 4, p0, p1, p2, p3);
	}
	void trigger_script_event(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x54763B35, 4, p0, p1, p2, p3);
	}
	void shutdown_loading_screen()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA2826D17, 0);
	}
	void set_no_loading_screen(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC8055034, 1, p0);
	}
	void _0xB03BCCDF()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB03BCCDF, 0);
	}
	// 0xCDC9D654 -- no params/results data

	void _0xCB7C8994(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCB7C8994, 1, p0);
	}
	void _0x903F5EE4(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x903F5EE4, 1, p0);
	}
	void _0x94119534()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x94119534, 0);
	}
	void _0x71077FBD()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x71077FBD, 0);
	}
	Any _0xB8B3A5D0()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB8B3A5D0, 0);
	}
	void _0xA7C8594B(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA7C8594B, 1, p0);
	}
	void _0x1DA7E41A(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1DA7E41A, 1, p0);
	}
	void _0x1E63088A()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1E63088A, 0);
	}
	void _0x5205C6F5()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5205C6F5, 0);
	}
	void _0xECA8ACB9(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xECA8ACB9, 1, p0);
	}
	void _0x520FCB6D()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x520FCB6D, 0);
	}
	void _0xC8BAB2F2()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC8BAB2F2, 0);
	}
	void _0x4D0449C6()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4D0449C6, 0);
	}
	void _0xD3F40140()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD3F40140, 0);
	}
	Any _0xC5223796()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC5223796, 0);
	}
	void _0x709B4BCB()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x709B4BCB, 0);
	}
	void _0x4A4A40A4()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4A4A40A4, 0);
	}
	Any _0x294405D4()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x294405D4, 0);
	}
	void _0xF881AB87()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF881AB87, 0);
	}
	void _0x1D6859CA()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1D6859CA, 0);
	}
	void _0xCF14D7F2(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCF14D7F2, 4, p0, p1, p2, p3);
	}
	void _0x24A97AF8(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x24A97AF8, 1, p0);
	}
	void _0x44018EDB(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x44018EDB, 1, p0);
	}
	void _0xA4524B23()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA4524B23, 0);
	}
	void _0xAFA1148B()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAFA1148B, 0);
	}
	void _0x3CD4307C()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3CD4307C, 0);
	}
	void _0x574EE85C(char* p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x574EE85C, 1, p0);
	}
	Any _0xED130FA1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xED130FA1, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any _0xE7E3C98B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE7E3C98B, 6, p0, p1, p2, p3, p4, p5);
	}
	Any _0x0EB382B7(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0EB382B7, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any _0x08F7AF78(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x08F7AF78, 2, p0, p1);
	}
	Any _0x57B8D0D4(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x57B8D0D4, 2, p0, p1);
	}
	Any _0x02DED2B8(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x02DED2B8, 5, p0, p1, p2, p3, p4);
	}
	Any _0xA9CCEF66(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA9CCEF66, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	Any _0x88B9B909(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x88B9B909, 11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	Any _0xE05E7052(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE05E7052, 3, p0, p1, p2);
	}
	Any _0x4FA43BA4(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4FA43BA4, 4, p0, p1, p2, p3);
	}
	Any _0x8C90D22F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8C90D22F, 6, p0, p1, p2, p3, p4, p5);
	}
	Any _0x8E319AB8(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8E319AB8, 2, p0, p1);
	}
	Any _0x76FB0F21(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x76FB0F21, 4, p0, p1, p2, p3);
	}
	Any _0x5E93FBFA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5E93FBFA, 6, p0, p1, p2, p3, p4, p5);
	}
	void _0xF42C43C7(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF42C43C7, 1, p0);
	}
	void _0x38F82261(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x38F82261, 2, p0, p1);
	}
	void _0xDD524A11(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDD524A11, 1, p0);
	}
	Any _0x672EFB45()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x672EFB45, 0);
	}
	void _set_text_entry(char* gxtEntry)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3E35563E, 1, gxtEntry);
	}
	void _draw_text(float x, float y)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6F8350CE, 2, float_int(x), float_int(y));
	}
	void _0x51E7A037(char* p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x51E7A037, 1, p0);
	}
	float _0xD12A643A(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<float>(0xD12A643A, 1, p0);
	}
	void _0x94B82066(char* gxtEntry)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x94B82066, 1, gxtEntry);
	}
	int _0xAA318785(float x, float y)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0xAA318785, 2, float_int(x), float_int(y));
	}
	void _0xB245FC10(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB245FC10, 1, p0);
	}
	void _0xB59B530D(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB59B530D, 4, p0, p1, p2, p3);
	}
	void _0x00E20F2D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x00E20F2D, 1, p0);
	}
	Any _0xF63A13EC(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF63A13EC, 1, p0);
	}
	void _0xF4C211F6(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF4C211F6, 1, p0);
	}
	void _0xE8E59820(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE8E59820, 1, p0);
	}
	void _0x0E103475(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0E103475, 1, p0);
	}
	void _0x2944A6C5(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2944A6C5, 1, p0);
	}
	void _0x550665AE(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x550665AE, 1, p0);
	}
	void _0x67785AF2()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x67785AF2, 0);
	}
	void _0xBF855650(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBF855650, 1, p0);
	}
	void _0x6E7FDA1C(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6E7FDA1C, 1, p0);
	}
	void add_text_component_integer(int p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFE272A57, 1, p0);
	}
	void add_text_component_float(float float_val, int dp)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x24D78013, 2, float_int(float_val), dp);
	}
	void _0xDCE05406(char* p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDCE05406, 1, p0);
	}
	void _0x150E03B6(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x150E03B6, 1, p0);
	}
	void _0x5DE98F0A(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5DE98F0A, 1, p0);
	}
	void _add_text_component_string(char* str)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x27A244D8, 1, str);
	}
	void add_text_component_substring_time(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x135B3CD0, 2, p0, p1);
	}
	void _0x12929BDF(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x12929BDF, 2, p0, p1);
	}
	void _0x65E1D404(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x65E1D404, 2, p0, p1);
	}
	void _0xC736999E(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC736999E, 1, p0);
	}
	void _0x0829A799(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0829A799, 1, p0);
	}
	void _0x6F1A1901(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6F1A1901, 1, p0);
	}
	Any _0x34A396EE(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x34A396EE, 3, p0, p1, p2);
	}
	Any _0x0183A66C(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0183A66C, 4, p0, p1, p2, p3);
	}
	Any _0xFA6373BB(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFA6373BB, 3, p0, p1, p2);
	}
	Any _0x95C4B5AD(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x95C4B5AD, 1, p0);
	}
	void clear_prints()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x216CB1C5, 0);
	}
	void clear_brief()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9F75A929, 0);
	}
	void clear_all_help_messages()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9E5D9198, 0);
	}
	void clear_this_print(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x06878327, 1, p0);
	}
	void clear_small_prints()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA869A238, 0);
	}
	BOOL does_text_block_exist(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x96F74838, 1, p0);
	}
	void request_additional_text(char* gxt, int slot)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9FA9175B, 2, gxt, slot);
	}
	BOOL has_additional_text_loaded(int slot)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xB0E56045, 1, slot);
	}
	void clear_additional_text(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x518141E0, 2, p0, p1);
	}
	BOOL is_streaming_additional_text(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xF079E4EB, 1, p0);
	}
	BOOL has_this_additional_text_loaded(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x80A52040, 2, p0, p1);
	}
	BOOL is_message_being_displayed()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x6A77FE8D, 0);
	}
	BOOL does_text_label_exist(char* gxtEntry)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x6ECAE560, 1, gxtEntry);
	}
	Any get_length_of_string_with_this_text_label(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA4CA7BE5, 1, p0);
	}
	Any get_length_of_literal_string(string p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x99379D55, 1, p0);
	}
	Any _0x7DBC0764(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7DBC0764, 1, p0);
	}
	Any get_street_name_from_hash_key(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1E8E310C, 1, p0);
	}
	BOOL is_hud_preference_switched_on()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xC3BC1B4F, 0);
	}
	BOOL is_radar_preference_switched_on()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x14AEAA28, 0);
	}
	BOOL is_subtitle_preference_switched_on()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x63BA19F5, 0);
	}
	void display_hud(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD10E4E31, 1, p0);
	}
	void _0xC380AC85()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC380AC85, 0);
	}
	void _0xC47AB1B0()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC47AB1B0, 0);
	}
	void display_radar(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x52816BD4, 1, p0);
	}
	BOOL is_hud_hidden()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x40BADA1D, 0);
	}
	BOOL is_radar_hidden()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x1AB3B954, 0);
	}
	void set_blip_route(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3E160C90, 2, p0, p1);
	}
	void set_blip_route_colour(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDDE7C65C, 2, p0, p1);
	}
	void add_next_message_to_previous_briefs(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB58B25BD, 1, p0);
	}
	void _0x9854485F(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9854485F, 1, p0);
	}
	void responding_as_temp(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDCA3F423, 1, p0);
	}
	void set_radar_zoom(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2A50D1A6, 1, p0);
	}
	void _0x25EC28C0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x25EC28C0, 2, p0, p1);
	}
	void _0x09CF1CE5(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x09CF1CE5, 1, p0);
	}
	void _0xE8D3A910()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE8D3A910, 0);
	}
	void get_hud_colour(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x63F66A0B, 5, p0, p1, p2, p3, p4);
	}
	void _0x0E41E45C(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0E41E45C, 4, p0, p1, p2, p3);
	}
	void _0x6BE3ACA8(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6BE3ACA8, 4, p0, p1, p2, p3);
	}
	void flash_ability_bar(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3648960D, 1, p0);
	}
	void set_ability_bar_value(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x24E53FD8, 2, p0, p1);
	}
	void flash_wanted_display(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x629F866B, 1, p0);
	}
	float _0x3330175B(float x, float y)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<float>(0x3330175B, 2, float_int(x), float_int(y));
	}
	void set_text_scale(float x, float y)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB6E15B23, 2, float_int(x), float_int(y));
	}
	void set_text_colour(int r, int g, int b, int a)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE54DD2C8, 4, r, g, b, a);
	}
	void set_text_centre(BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE26D39A1, 1, b);
	}
	void set_text_right_justify(BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x45B60520, 1, b);
	}
	void _0x68CDFA60(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x68CDFA60, 1, p0);
	}
	void set_text_wrap(float x, float y)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6F60AB54, 2, float_int(x), float_int(y));
	}
	void set_text_leading(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x98CE21D4, 1, p0);
	}
	void set_text_proportional(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF49D8A08, 1, p0);
	}
	void set_text_font(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x80BC530D, 1, p0);
	}
	void set_text_drop_shadow()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE2A11511, 0);
	}
	void set_text_dropshadow(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE6587517, 5, p0, p1, p2, p3, p4);
	}
	void set_text_outline()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC753412F, 0);
	}
	void set_text_edge(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3F1A5DAB, 5, p0, p1, p2, p3, p4);
	}
	void set_text_render_id(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC5C3B7F3, 1, p0);
	}
	Any get_default_script_rendertarget_render_id()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8188935F, 0);
	}
	Any register_named_rendertarget(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFAE5D6F0, 2, p0, p1);
	}
	BOOL is_named_rendertarget_registered(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x284057F5, 1, p0);
	}
	Any release_named_rendertarget(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD3F6C892, 1, p0);
	}
	void link_named_rendertarget(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6844C4B9, 1, p0);
	}
	Any get_named_rendertarget_render_id(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF9D7A401, 1, p0);
	}
	BOOL is_named_rendertarget_linked(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x8B52601F, 1, p0);
	}
	void clear_help(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE6D85741, 1, p0);
	}
	BOOL is_help_message_on_screen()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x4B3C9CA9, 0);
	}
	Any _0x812CBE0E()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x812CBE0E, 0);
	}
	BOOL is_help_message_being_displayed()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xA65F262A, 0);
	}
	BOOL is_help_message_fading_out()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x3E50AE92, 0);
	}
	Any _0x87871CE0()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x87871CE0, 0);
	}
	int _get_blip_info_id_iterator()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0xB9827942, 0);
	}
	int get_number_of_active_blips()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0x144020FA, 0);
	}
	Blip get_next_blip_info_id(int blipIterator)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Blip>(0x9356E92F, 1, blipIterator);
	}
	Blip get_first_blip_info_id(int blipIterator)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Blip>(0x64C0273D, 1, blipIterator);
	}
	Vector3 get_blip_info_id_coord(Blip b)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0xB7374A66, 1, b);
	}
	int get_blip_info_id_display(Blip b)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0xD0FC19F4, 1, b);
	}
	int get_blip_info_id_type(Blip b)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0x501D7B4E, 1, b);
	}
	int get_blip_info_id_entity_index(Blip b)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0xA068C40B, 1, b);
	}
	int get_blip_info_id_pickup_index(Blip b)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0x86913D37, 1, b);
	}
	Any get_blip_from_entity(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x005A2A47, 1, p0);
	}
	Any add_blip_for_radius(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4626756C, 4, p0, p1, p2, p3);
	}
	Any add_blip_for_entity(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x30822554, 1, p0);
	}
	Any add_blip_for_pickup(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x16693C3A, 1, p0);
	}
	Any add_blip_for_coord(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC6F43D0E, 3, p0, p1, p2);
	}
	void _0xBF25E7B2(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBF25E7B2, 5, p0, p1, p2, p3, p4);
	}
	void _0xE7E1E32B(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE7E1E32B, 1, p0);
	}
	void set_blip_coords(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x680A34D4, 4, p0, p1, p2, p3);
	}
	Vector3 get_blip_coords(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0xEF6FF47B, 1, p0);
	}
	void set_blip_sprite(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8DBBB0B9, 2, p0, p1);
	}
	Any get_blip_sprite(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x72FF2E73, 1, p0);
	}
	void set_blip_name_from_text_file(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAC8A5461, 2, p0, p1);
	}
	void set_blip_name_to_player_name(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x03A0B8F9, 2, p0, p1);
	}
	void set_blip_alpha(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA791FCCD, 2, p0, p1);
	}
	Any get_blip_alpha(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x297AF6C8, 1, p0);
	}
	void set_blip_fade(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA5999031, 3, p0, p1, p2);
	}
	void set_blip_rotation(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6B8F44FE, 2, p0, p1);
	}
	void set_blip_flash_timer(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8D5DF611, 2, p0, p1);
	}
	void set_blip_flash_interval(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEAF67377, 2, p0, p1);
	}
	void set_blip_colour(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBB3C5A41, 2, p0, p1);
	}
	void set_blip_secondary_colour(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC6384D32, 4, p0, p1, p2, p3);
	}
	Any get_blip_colour(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDD6A1E54, 1, p0);
	}
	Any get_blip_hud_colour(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE88B4BC2, 1, p0);
	}
	BOOL is_blip_short_range(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x1226765A, 1, p0);
	}
	BOOL is_blip_on_minimap(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x258CBA3A, 1, p0);
	}
	Any _0x3E47F357(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3E47F357, 1, p0);
	}
	void _0x43996428(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x43996428, 2, p0, p1);
	}
	void set_blip_high_detail(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD5842BFF, 2, p0, p1);
	}
	void set_blip_as_mission_creator_blip(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x802FB686, 2, p0, p1);
	}
	BOOL is_mission_creator_blip(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x24ACC4E9, 1, p0);
	}
	Any disable_blip_name_for_var()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFFD7476C, 0);
	}
	Any _0xC5EB849A()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC5EB849A, 0);
	}
	void _0xA2CAAB4F(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA2CAAB4F, 1, p0);
	}
	void set_blip_flashes(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC0047F15, 2, p0, p1);
	}
	void set_blip_flashes_alternate(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1A81202B, 2, p0, p1);
	}
	BOOL is_blip_flashing(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x52E111D7, 1, p0);
	}
	void set_blip_as_short_range(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5C67725E, 2, p0, p1);
	}
	void set_blip_scale(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1E6EC434, 2, p0, p1);
	}
	void set_blip_priority(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCE87DA6F, 2, p0, p1);
	}
	void set_blip_display(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2B521F91, 2, p0, p1);
	}
	void set_blip_category(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEF72F533, 2, p0, p1);
	}
	void remove_blip(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD8C3C1CD, 1, p0);
	}
	void set_blip_as_friendly(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF290CFD8, 2, p0, p1);
	}
	void pulse_blip(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x44253855, 1, p0);
	}
	void show_number_on_blip(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7BFC66C6, 2, p0, p1);
	}
	void hide_number_on_blip(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0B6D610D, 1, p0);
	}
	void _0x1D99F676(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1D99F676, 2, p0, p1);
	}
	void _0x3DCF0092(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3DCF0092, 2, p0, p1);
	}
	void _0xD1C3D71B(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD1C3D71B, 2, p0, p1);
	}
	void _0x8DE82C15(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8DE82C15, 2, p0, p1);
	}
	void _0x4C8F02B4(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4C8F02B4, 2, p0, p1);
	}
	void _0xABBE1E45(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xABBE1E45, 2, p0, p1);
	}
	void _0x6AA6A1CC(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6AA6A1CC, 2, p0, p1);
	}
	void _0xC575F0BC(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC575F0BC, 2, p0, p1);
	}
	void _0x40E25DB8(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x40E25DB8, 2, p0, p1);
	}
	BOOL does_blip_exist(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xAE92DD96, 1, p0);
	}
	void set_waypoint_off()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB3496E1B, 0);
	}
	void _0x62BABF2C()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x62BABF2C, 0);
	}
	void refresh_waypoint()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB395D753, 0);
	}
	BOOL is_waypoint_active()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x5E4DF47B, 0);
	}
	void set_new_waypoint(float a_fX, float a_fY)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8444E1F0, 2, float_int(a_fX), float_int(a_fY));
	}
	void set_blip_bright(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x72BEE6DF, 2, p0, p1);
	}
	void set_blip_show_cone(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFF545AD8, 2, p0, p1);
	}
	void _0x41B0D022(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x41B0D022, 1, p0);
	}
	Any set_minimap_component(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x419DCDC4, 2, p0, p1);
	}
	Any get_main_player_blip_id()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAB93F020, 0);
	}
	void hide_loading_on_fade_this_frame()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x35087963, 0);
	}
	void set_radar_as_interior_this_frame(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6F2626E1, 5, p0, p1, p2, p3, p4);
	}
	void set_radar_as_exterior_this_frame()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x39ABB10E, 0);
	}
	void _0x54E75C7D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x54E75C7D, 2, p0, p1);
	}
	Any _0x199DED14()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x199DED14, 0);
	}
	void _0x1A4318F7()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1A4318F7, 0);
	}
	void _0xCE36E3FE()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCE36E3FE, 0);
	}
	void _0x334EFD46()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x334EFD46, 0);
	}
	void _0x8A292AA3()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8A292AA3, 0);
	}
	void set_widescreen_format(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF016E08F, 1, p0);
	}
	Any _0xB6507AD9()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB6507AD9, 0);
	}
	// 0x00BDF45B -- no params/results data
	void display_area_name(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x489FDD41, 1, p0);
	}
	void display_cash(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0049DF83, 1, p0);
	}
	void display_ammo_this_frame(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x60693CEE, 1, p0);
	}
	void display_sniper_scope_this_frame()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBC6C73CB, 0);
	}
	void hide_hud_and_radar_this_frame()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB75D4AD2, 0);
	}
	void _0x5476B9FD(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5476B9FD, 1, p0);
	}
	void _0xF4F3C796()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF4F3C796, 0);
	}
	void _0x7BFFE82F()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7BFFE82F, 0);
	}
	void set_multiplayer_bank_cash()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2C842D03, 0);
	}
	void remove_multiplayer_bank_cash()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x728B4EF4, 0);
	}
	void set_multiplayer_hud_cash(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA8DB435E, 2, p0, p1);
	}
	void remove_multiplayer_hud_cash()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x07BF4A7D, 0);
	}
	void hide_help_text_this_frame()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF3807BED, 0);
	}
	void display_help_text_this_frame(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x18E3360A, 2, p0, p1);
	}
	void _0x1EFFB02A(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1EFFB02A, 1, p0);
	}
	void _0xB26FED2B()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB26FED2B, 0);
	}
	Any _0x22E9F555()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x22E9F555, 0);
	}
	void _0x83B608A0(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x83B608A0, 1, p0);
	}
	void _0xE70D1F43(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE70D1F43, 1, p0);
	}
	void set_gps_flags(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x60539BAB, 2, p0, p1);
	}
	void clear_gps_flags()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x056AFCE6, 0);
	}
	void _0xFB9BABF5(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFB9BABF5, 1, p0);
	}
	void clear_gps_race_track()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x40C59829, 0);
	}
	void _0x7F93799B(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7F93799B, 3, p0, p1, p2);
	}
	void _0xEEBDFE55(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEEBDFE55, 3, p0, p1, p2);
	}
	void _0xDA0AF00E(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDA0AF00E, 3, p0, p1, p2);
	}
	void _0xCF2E3E24()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCF2E3E24, 0);
	}
	void _0xC3DCBEDB(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC3DCBEDB, 3, p0, p1, p2);
	}
	void _0xFE485135(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFE485135, 3, p0, p1, p2);
	}
	void _0xE87CBE4C(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE87CBE4C, 1, p0);
	}
	void _0x0D9969E4()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0D9969E4, 0);
	}
	void clear_gps_player_waypoint()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0B9C7FC2, 0);
	}
	void set_gps_flashes(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE991F733, 1, p0);
	}
	void flash_minimap_display()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB8359952, 0);
	}
	void toggle_stealth_radar(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC68D47C4, 1, p0);
	}
	void key_hud_colour(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD5BFCADB, 2, p0, p1);
	}
	void set_mission_name(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x68DCAE10, 2, p0, p1);
	}
	void _0x8D9A1734(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8D9A1734, 2, p0, p1);
	}
	void _0x407C47FF(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x407C47FF, 5, p0, p1, p2, p3, p4);
	}
	void _0xD2161E77(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD2161E77, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void set_minimap_block_waypoint(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA41C3B62, 1, p0);
	}
	void _0x02F5F1D1(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x02F5F1D1, 1, p0);
	}
	void _0xD8D77733(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD8D77733, 1, p0);
	}
	float _0xA4098ACC()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<float>(0xA4098ACC, 0);
	}
	Any _0x65B705F6(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x65B705F6, 3, p0, p1, p2);
	}
	void _0xE010F081(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE010F081, 3, p0, p1, p2);
	}
	void _0x5133A750(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5133A750, 1, p0);
	}
	void _0x20FD3E87()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x20FD3E87, 0);
	}
	void lock_minimap_angle(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDEC733E4, 1, p0);
	}
	void unlock_minimap_angle()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x742043F9, 0);
	}
	void lock_minimap_position(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB9632A91, 2, p0, p1);
	}
	void unlock_minimap_position()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5E8E6F54, 0);
	}
	void _0x0308EDF6(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0308EDF6, 1, p0);
	}
	void _0x7FB6FB2A(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7FB6FB2A, 3, p0, p1, p2);
	}
	void _0xF07D8CEF(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF07D8CEF, 1, p0);
	}
	void _0x827F14DE(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x827F14DE, 1, p0);
	}
	void _0x08EB83D2(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x08EB83D2, 2, p0, p1);
	}
	BOOL is_hud_component_active(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x6214631F, 1, p0);
	}
	BOOL is_scripted_hud_component_active(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x2B86F382, 1, p0);
	}
	void hide_scripted_hud_component_this_frame(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x31ABA127, 1, p0);
	}
	Any _0xE8C8E535(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE8C8E535, 1, p0);
	}
	void hide_hud_component_this_frame(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDB2D0762, 1, p0);
	}
	// 0x20871FD7 -- no params/results data
	void show_hud_component_this_frame(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x95E1546E, 1, p0);
	}
	void _0x52746FE1()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x52746FE1, 0);
	}
	void reset_reticule_values()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBE27AA3F, 0);
	}
	void reset_hud_component_values(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD15B46DA, 1, p0);
	}
	void set_hud_component_position(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2F3A0D15, 3, p0, p1, p2);
	}
	Vector3 get_hud_component_position(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x080DCED6, 1, p0);
	}
	void _0x5BBCC934()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5BBCC934, 0);
	}
	Any _0xFE9A39F8(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFE9A39F8, 5, p0, p1, p2, p3, p4);
	}
	void _0x10DE5150()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x10DE5150, 0);
	}
	void _0x67649EE0()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x67649EE0, 0);
	}
	Any _0x9D2C94FA()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9D2C94FA, 0);
	}
	// 0xDFA36277 -- no params/results data
	Any _0x45472FD5(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x45472FD5, 1, p0);
	}
	void _0x198F32D7(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x198F32D7, 3, p0, p1, p2);
	}
	void _0x93045157(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x93045157, 4, p0, p1, p2, p3);
	}
	void _0x18B012B7(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x18B012B7, 4, p0, p1, p2, p3);
	}
	void _0x97852A82(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x97852A82, 6, p0, p1, p2, p3, p4, p5);
	}
	void clear_floating_help(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB181F88F, 2, p0, p1);
	}
	void _0xC969F2D0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC969F2D0, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	Any _0xEFD2564A()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEFD2564A, 0);
	}
	Any _0xF5CD2AA4(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF5CD2AA4, 6, p0, p1, p2, p3, p4, p5);
	}
	// 0x1A83A1B9 -- no params/results data
	void _0x3D081FE4(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3D081FE4, 1, p0);
	}
	Any _0x60118951(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x60118951, 1, p0);
	}
	Any add_trevor_random_modifier(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x63959059, 1, p0);
	}
	void _0xD41DF479(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD41DF479, 3, p0, p1, p2);
	}
	void _0x767DED29(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x767DED29, 2, p0, p1);
	}
	void _0xE1BC7485(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE1BC7485, 2, p0, p1);
	}
	void _0xB01A5434(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB01A5434, 2, p0, p1);
	}
	void _0x7E3AA40A(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7E3AA40A, 3, p0, p1, p2);
	}
	void _0x5777EC77(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5777EC77, 2, p0, p1);
	}
	void _0xF4418611(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF4418611, 3, p0, p1, p2);
	}
	void _0x0EBB003F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0EBB003F, 2, p0, p1);
	}
	void _0x627A559B(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x627A559B, 2, p0, p1);
	}
	Any _0xF11414C4(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF11414C4, 1, p0);
	}
	void _0x939218AB(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x939218AB, 2, p0, p1);
	}
	Any _0xAB5B7C18()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAB5B7C18, 0);
	}
	Any get_current_website_id()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x42A55B14, 0);
	}
	Any _0xD217EE7E(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD217EE7E, 1, p0);
	}
	void set_warning_message(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBE699BDE, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void _0x2DB9EAB5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2DB9EAB5, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void set_dance_mappers(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x749929D3, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	Any _0x94C834AD()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x94C834AD, 0);
	}
	void _0xE4FD20D8(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE4FD20D8, 1, p0);
	}
	void _0x13E7A5A9(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x13E7A5A9, 1, p0);
	}
	Any _0x786CA0A2(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x786CA0A2, 3, p0, p1, p2);
	}
	void _0xCBEC9369()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCBEC9369, 0);
	}
	Any _0x3F4AFB13()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3F4AFB13, 0);
	}
	void _0x801D0D86()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x801D0D86, 0);
	}
	void activate_frontend_menu(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x01D83872, 3, p0, p1, p2);
	}
	void restart_frontend_menu(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB07DAF98, 2, p0, p1);
	}
	Any _0x33D6868F()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x33D6868F, 0);
	}
	void set_pause_menu_active(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1DCD878E, 1, p0);
	}
	void disable_frontend_this_frame()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD86A029E, 0);
	}
	void _0x7F349900()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7F349900, 0);
	}
	void _0x630CD8EE()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x630CD8EE, 0);
	}
	void set_frontend_active(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x81E1AD32, 1, p0);
	}
	BOOL is_pause_menu_active()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xD3600591, 0);
	}
	Any get_pause_menu_state()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x92F50134, 0);
	}
	BOOL is_pause_menu_restarting()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x3C4CF4D9, 0);
	}
	void _0x2DFD35C7(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2DFD35C7, 1, p0);
	}
	void _0x0A89336C(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0A89336C, 1, p0);
	}
	void _0xC84BE309()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC84BE309, 0);
	}
	void _0x9FE8FD5E(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9FE8FD5E, 1, p0);
	}
	void object_decal_toggle(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0029046E, 1, p0);
	}
	Any _0xC51BC42F(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC51BC42F, 1, p0);
	}
	Any _0x016D7AF9()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x016D7AF9, 0);
	}
	void enable_deathblood_seethrough(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x15B24768, 1, p0);
	}
	void _0x6C67131A(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6C67131A, 3, p0, p1, p2);
	}
	void _0x11D09737(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x11D09737, 1, p0);
	}
	Any _0xD3BF3ABD()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD3BF3ABD, 0);
	}
	void _0xC06B763D()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC06B763D, 0);
	}
	void _0xB9392CE7()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB9392CE7, 0);
	}
	Any _0x92DAFA78()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x92DAFA78, 0);
	}
	Any _0x22CA9F2A()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x22CA9F2A, 0);
	}
	Any _0xDA7951A2()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDA7951A2, 0);
	}
	Any _0x7D95AFFF()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7D95AFFF, 0);
	}
	Any _0x96863460()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x96863460, 0);
	}
	void _0x8543AAC8(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8543AAC8, 2, p0, p1);
	}
	void _0x6025AA2F(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6025AA2F, 3, p0, p1, p2);
	}
	void _0x30D72A4B(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x30D72A4B, 2, p0, p1);
	}
	Any _0x46794EB2(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x46794EB2, 3, p0, p1, p2);
	}
	Any set_userids_uihidden(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4370999E, 2, p0, p1);
	}
	Any _0xD6CC4766(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD6CC4766, 4, p0, p1, p2, p3);
	}
	Any _0x51972B04(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x51972B04, 2, p0, p1);
	}
	Any _0xD43BB56D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD43BB56D, 2, p0, p1);
	}
	void clear_ped_in_pause_menu()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x28058ACF, 0);
	}
	void give_ped_to_pause_menu(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2AD2C9CE, 2, p0, p1);
	}
	// 0x92593632 -- no params/results data
	void _0x127310EB(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x127310EB, 1, p0);
	}
	void _0x8F45D327(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8F45D327, 1, p0);
	}
	void _0x19FCBBB2()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x19FCBBB2, 0);
	}
	Any _0x850690FF()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x850690FF, 0);
	}
	Any _0x9D4934F4()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9D4934F4, 0);
	}
	void _0x57218529()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x57218529, 0);
	}
	void _0x5F86AA39()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5F86AA39, 0);
	}
	void _0x7AD67C95(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7AD67C95, 1, p0);
	}
	Any _0xD4DA14EF()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD4DA14EF, 0);
	}
	void _0x96C4C4DD(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x96C4C4DD, 2, p0, p1);
	}
	Any _0x3BE1257F(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3BE1257F, 1, p0);
	}
	void _0xD8E31B1A(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD8E31B1A, 2, p0, p1);
	}
	void hide_special_ability_lockon_operation(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x872C2CFB, 2, p0, p1);
	}
	void _0xFFDF46F0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFFDF46F0, 2, p0, p1);
	}
	void _0xF9DC2AF7(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF9DC2AF7, 2, p0, p1);
	}
	Any _0x06349065(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x06349065, 1, p0);
	}
	Any _0xCA52CF43(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCA52CF43, 1, p0);
	}

	void set_debug_lines_and_spheres_drawing_active(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1418CA37, 1, p0);
	}
	void draw_debug_line(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xABF783AB, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void draw_debug_line_with_two_colours(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE8BFF632, 14, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
	}
	void draw_debug_sphere(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x304D0EEF, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void draw_debug_box(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8524A848, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void draw_debug_text(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x269B006F, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void draw_debug_text_2d(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x528B973B, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void draw_line(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB3426BCC, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void draw_poly(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xABD19253, 13, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
	}
	Any _0xBA9AD458()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBA9AD458, 0);
	}
	Any _0xADBBA287()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xADBBA287, 0);
	}
	void _0x9E553002()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9E553002, 0);
	}
	Any _0x83C846A0(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x83C846A0, 1, p0);
	}
	Any _0x5A59A24A(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5A59A24A, 1, p0);
	}
	Any _0x56C1E488(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x56C1E488, 1, p0);
	}
	Any _0x226B08EA(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x226B08EA, 1, p0);
	}
	Any _0x1F3CADB0()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1F3CADB0, 0);
	}
	Any _0xA9DC8558()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA9DC8558, 0);
	}
	void _0x88EAF398()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x88EAF398, 0);
	}
	Any _0x47B0C137()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x47B0C137, 0);
	}
	Any melee_seethrough_skipped()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x65376C9B, 0);
	}
	void _0x9CBA682A()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9CBA682A, 0);
	}
	Any _0x3B15D33C(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3B15D33C, 1, p0);
	}
	Any _0xEC5D0317()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEC5D0317, 0);
	}
	Any _0x25D569EB(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x25D569EB, 1, p0);
	}
	Any _0xCFCDC518(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCFCDC518, 1, p0);
	}
	void _0x108F36CC()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x108F36CC, 0);
	}
	void _0xE9F2B68F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE9F2B68F, 2, p0, p1);
	}
	Any get_maximum_number_of_photos()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x727AA63F, 0);
	}
	Any _0x239272BD()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x239272BD, 0);
	}
	Any _0x21DBF0C9()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x21DBF0C9, 0);
	}
	Any _0x199FABF0(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x199FABF0, 1, p0);
	}
	Any _0x596B900D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x596B900D, 1, p0);
	}
	void _0xC9EF81ED()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC9EF81ED, 0);
	}
	Any _0x9D84554C(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9D84554C, 1, p0);
	}
	Any _0x9C106AD9(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9C106AD9, 1, p0);
	}
	Any _0x762E5C5F(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x762E5C5F, 1, p0);
	}
	void draw_light_with_range(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6A396E9A, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void draw_spot_light(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBDBC410C, 14, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
	}
	void _0x32BF9598(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x32BF9598, 15, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
	}
	void _0x93628786(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x93628786, 1, p0);
	}
	void draw_marker(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17, Any p18, Any p19, Any p20, Any p21, Any p22, Any p23)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x48D84A02, 24, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23);
	}
	Any create_checkpoint(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF541B690, 13, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
	}
	void _0x80151CCF(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x80151CCF, 2, p0, p1);
	}
	void set_checkpoint_cylinder_height(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFF0F9B22, 4, p0, p1, p2, p3);
	}
	void set_checkpoint_rgba(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEF9C8CB3, 5, p0, p1, p2, p3, p4);
	}
	void _0xA5456DBB(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA5456DBB, 5, p0, p1, p2, p3, p4);
	}
	void _0x20EABD0F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x20EABD0F, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void _0x1E3A3126(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1E3A3126, 1, p0);
	}
	void delete_checkpoint(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB66CF3CA, 1, p0);
	}
	void _0x932FDB81(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x932FDB81, 1, p0);
	}
	void _0x7E946E87(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7E946E87, 1, p0);
	}
	void request_streamed_texture_dict(char* p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4C9B035F, 2, p0, p1);
	}
	BOOL has_streamed_texture_dict_loaded(char* p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x3F436EEF, 1, p0);
	}
	void set_streamed_texture_dict_as_no_longer_needed(char* p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF07DDA38, 1, p0);
	}
	void draw_rect(float x1, float y1, float x2, float y2, int r, int g, int b, int a)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDD2BFC77, 8, float_int(x1), float_int(y1), float_int(x2), float_int(y2), r, g, b, a);
	}
	void _0xF8FBCC25(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF8FBCC25, 1, p0);
	}
	void _0xADF81D24(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xADF81D24, 1, p0);
	}
	void _0x228A2598(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x228A2598, 2, p0, p1);
	}
	void _0x3FE33BD6()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3FE33BD6, 0);
	}
	void _0x76C641E4(float p0, float p1, float p2, float p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x76C641E4, 4, float_int(p0), float_int(p1), float_int(p2), float_int(p3));
	}
	Any _0x3F0D1A6F()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3F0D1A6F, 0);
	}
	void draw_sprite(char* p0, char* p1, float p2, float p3, float p4, float p5, float p6, int r, int g, int b, int a)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1FEC16B0, 11, p0, p1, float_int(p2), float_int(p3), float_int(p4), float_int(p5), float_int(p6), r, g, b, a);
	}
	Any add_entity_icon(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF3027D21, 2, p0, p1);
	}
	Any add_entity_icon_by_vector(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x49C4B137, 4, p0, p1, p2, p3);
	}
	BOOL does_entity_have_icon_id(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x1D244044, 1, p0);
	}
	void set_entity_icon_visibility(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD1D2FD52, 2, p0, p1);
	}
	void set_entity_icon_id_visibility(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1D61FACC, 2, p0, p1);
	}
	void _0x7722F545(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7722F545, 2, p0, p1);
	}
	void set_entity_icon_color(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6EE1E946, 5, p0, p1, p2, p3, p4);
	}
	void set_entity_icon_id_color(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x857DF02F, 5, p0, p1, p2, p3, p4);
	}
	void _0x173F2EB3(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x173F2EB3, 5, p0, p1, p2, p3, p4);
	}
	void set_draw_origin(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE10198D5, 4, p0, p1, p2, p3);
	}
	void clear_draw_origin()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDD76B263, 0);
	}
	void attach_tv_audio_to_entity(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x784944DB, 1, p0);
	}
	void set_tv_audio_frontend(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2E0DFA35, 1, p0);
	}
	Any load_movie_mesh_set(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9627905C, 1, p0);
	}
	void release_movie_mesh_set(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4FA5501D, 1, p0);
	}
	Any _0x9D5D9B38(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9D5D9B38, 1, p0);
	}
	void get_screen_resolution(int *x, int *y)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x29F3572F, 2, x, y);
	}
	BOOL get_is_widescreen()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xEC717AEF, 0);
	}
	BOOL get_is_hidef()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x1C340359, 0);
	}
	void set_nightvision(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD1E5565F, 1, p0);
	}
	void set_noiseoveride(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD576F5DD, 1, p0);
	}
	void set_noisinessoveride(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x046B62D9, 1, p0);
	}
	Any _0x1F950E4B(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1F950E4B, 5, p0, p1, p2, p3, p4);
	}
	Vector3 get_texture_resolution(char* p0, char* p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x096DAA4D, 2, p0, p1);
	}
	void _0x455F1084(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x455F1084, 1, p0);
	}
	void set_flash(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7E55A1EE, 5, p0, p1, p2, p3, p4);
	}
	void _0x0DCC0B8B()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0DCC0B8B, 0);
	}
	Any create_tracked_point()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3129C31A, 0);
	}
	void set_tracked_point_info(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x28689AA4, 5, p0, p1, p2, p3, p4);
	}
	BOOL is_tracked_point_visible(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0BFC4F64, 1, p0);
	}
	void destroy_tracked_point(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x14AC675F, 1, p0);
	}
	void _0x48F16186()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x48F16186, 0);
	}
	void _0x13D4ABC0(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x13D4ABC0, 1, p0);
	}
	void _0xD2157428(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD2157428, 1, p0);
	}
	void _0xC07C64C9(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC07C64C9, 1, p0);
	}
	void _0xFE903D0F(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFE903D0F, 1, p0);
	}
	void _0xDE10BA1F(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDE10BA1F, 1, p0);
	}
	void _0x9F470BE3(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9F470BE3, 1, p0);
	}
	void _0x4A124267(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4A124267, 1, p0);
	}
	void _0xB19B2764(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB19B2764, 1, p0);
	}
	void _0x342FA2B4(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x342FA2B4, 1, p0);
	}
	void _0x5D3BFFC9(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5D3BFFC9, 1, p0);
	}
	void _0xD9653728(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD9653728, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void _0x72BA8A14(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x72BA8A14, 3, p0, p1, p2);
	}
	void _0x804F444C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x804F444C, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	void _0xBB1A1294(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBB1A1294, 2, p0, p1);
	}
	void _0x1A1A72EF(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1A1A72EF, 1, p0);
	}
	void _0x3BB12B75(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3BB12B75, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void _0x4EA70FB4(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4EA70FB4, 5, p0, p1, p2, p3, p4);
	}
	void _0x0D830DC7(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0D830DC7, 1, p0);
	}
	Any _0xA08B46AD()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA08B46AD, 0);
	}
	Vector3 _0xECD470F0(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0xECD470F0, 1, p0);
	}
	void set_seethrough(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x74D4995C, 1, p0);
	}
	Any _0x1FE547F2()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1FE547F2, 0);
	}
	void seethrough_reset()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x310E9B67, 0);
	}
	void _0x654F0287(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x654F0287, 2, p0, p1);
	}
	void _0xF6B837F0(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF6B837F0, 1, p0);
	}
	Any _0xD906A3A9()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD906A3A9, 0);
	}
	void _0xD34A6CBA(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD34A6CBA, 1, p0);
	}
	void _0xD8CC7221(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD8CC7221, 1, p0);
	}
	Any _0x5604B890(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5604B890, 1, p0);
	}
	Any _0x46617502(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x46617502, 1, p0);
	}
	void _0xDB7AECDA()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDB7AECDA, 0);
	}
	BOOL is_particle_fx_delayed_blink()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xEA432A94, 0);
	}
	Any _0x926B8734()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x926B8734, 0);
	}
	void _0x30ADE541(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x30ADE541, 1, p0);
	}
	void _0x0113EAE4()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0113EAE4, 0);
	}
	void _0xDCBA251B()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDCBA251B, 0);
	}
	void _0x513D444B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x513D444B, 6, p0, p1, p2, p3, p4, p5);
	}
	Any _0xB2410EAB(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB2410EAB, 1, p0);
	}
	Any _0x5AB94128()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5AB94128, 0);
	}
	Any _0xD63FCB3E(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD63FCB3E, 2, p0, p1);
	}
	// 0x7F8AE259 -- no params/results data
	Any start_particle_fx_non_looped_at_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDD79D679, 11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	Any start_particle_fx_non_looped_on_ped_bone(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x53DAEF4E, 13, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
	}
	Any start_particle_fx_non_looped_on_entity(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9604DAD4, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	void set_particle_fx_non_looped_alpha(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x497EAFF2, 1, p0);
	}
	Any start_particle_fx_looped_at_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD348E3E6, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	Any start_particle_fx_looped_on_ped_bone(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF8FC196F, 13, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
	}
	Any start_particle_fx_looped_on_entity(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0D06FF62, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	Any _0x110752B2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x110752B2, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	void stop_particle_fx_looped(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD245455B, 2, p0, p1);
	}
	void remove_particle_fx(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6BA48C7E, 2, p0, p1);
	}
	void remove_particle_fx_from_entity(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCEDE52E9, 1, p0);
	}
	void remove_particle_fx_in_range(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7EB8F275, 4, p0, p1, p2, p3);
	}
	BOOL does_particle_fx_looped_exist(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xCBF91D2A, 1, p0);
	}
	void set_particle_fx_looped_offsets(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x641F7790, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void set_particle_fx_looped_evolution(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1CBC1373, 3, p0, p1, p2);
	}
	void set_particle_fx_looped_colour(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5219D530, 5, p0, p1, p2, p3, p4);
	}
	void set_particle_fx_looped_alpha(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5ED49BE1, 2, p0, p1);
	}
	void set_particle_fx_looped_scale(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x099B8B49, 2, p0, p1);
	}
	void _0x233DE879(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x233DE879, 2, p0, p1);
	}
	void set_particle_fx_cam_inside_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x19EC0001, 1, p0);
	}
	void _0x6B125A02(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6B125A02, 2, p0, p1);
	}
	void _0xD938DEE0(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD938DEE0, 1, p0);
	}
	void _0xD6844637()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD6844637, 0);
	}
	void set_particle_fx_blood_scale(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x18136DE0, 1, p0);
	}
	void set_camera_endtime(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC61C75E9, 1, p0);
	}
	void _0xCE8B8748(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCE8B8748, 1, p0);
	}
	void _0xC1AD5DDF(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC1AD5DDF, 1, p0);
	}
	void _0x3968E915(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3968E915, 1, p0);
	}
	void _0x64BA4648(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x64BA4648, 1, p0);
	}
	void _0x8BE3D47F(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8BE3D47F, 1, p0);
	}
	void _0xE3880F5A(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE3880F5A, 1, p0);
	}
	void wash_decals_in_range(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDEECBC57, 5, p0, p1, p2, p3, p4);
	}
	void wash_decals_from_vehicle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2929F11A, 2, p0, p1);
	}
	void fade_decals_in_range(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF81E884A, 5, p0, p1, p2, p3, p4);
	}
	void remove_decals_in_range(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x06A619A0, 4, p0, p1, p2, p3);
	}
	void remove_decals_from_object(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8B67DCA7, 1, p0);
	}
	void remove_decals_from_object_facing(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF4999A55, 4, p0, p1, p2, p3);
	}
	void remove_decals_from_vehicle(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x831D06CA, 1, p0);
	}
	Any add_decal(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17, Any p18, Any p19)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEAD0C412, 20, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19);
	}
	Any add_petrol_decal(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1259DF42, 6, p0, p1, p2, p3, p4, p5);
	}
	void _0xE3938B0B(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE3938B0B, 1, p0);
	}
	void _0xBAEC6ADD(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBAEC6ADD, 4, p0, p1, p2, p3);
	}
	void set_camera_camera_forward()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCCCA6855, 0);
	}
	void remove_decal(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA4363188, 1, p0);
	}
	BOOL is_decal_alive(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xCDD4A61A, 1, p0);
	}
	Any get_decal_wash_level(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x054448EF, 1, p0);
	}
	void _0xEAB6417C()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEAB6417C, 0);
	}
	void _0xC2703B88()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC2703B88, 0);
	}
	void _0xA706E84D()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA706E84D, 0);
	}
	Any _0x242C6A04(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x242C6A04, 4, p0, p1, p2, p3);
	}
	void _0x335695CF(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x335695CF, 3, p0, p1, p2);
	}
	void _0x7B786555(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7B786555, 1, p0);
	}
	void move_vehicle_decals(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCE9E6CF2, 2, p0, p1);
	}
	Any _0x12077738(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x12077738, 13, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
	}
	void _0x667046A8(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x667046A8, 1, p0);
	}
	Any _0x4F4D76E8(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4F4D76E8, 1, p0);
	}
	Any _0x6D58F73B(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6D58F73B, 1, p0);
	}
	void _0x9BABCBA4(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9BABCBA4, 1, p0);
	}
	void _0xFDF6D8DA(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFDF6D8DA, 1, p0);
	}
	void _0x2056A015(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2056A015, 1, p0);
	}
	void _0x0F486429(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0F486429, 1, p0);
	}
	void _0xD87CC710(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD87CC710, 1, p0);
	}
	void _0xE29EE145()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE29EE145, 0);
	}
	void disable_vehicle_distantlights(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7CFAE36F, 1, p0);
	}
	void _0x60F72371(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x60F72371, 1, p0);
	}
	void set_timecycle_modifier(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA81F3638, 1, p0);
	}
	void set_timecycle_modifier_strength(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x458F4F45, 1, p0);
	}
	void set_transition_timecycle_modifier(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBB2BA72A, 2, p0, p1);
	}
	void _0x56345F6B(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x56345F6B, 1, p0);
	}
	void clear_timecycle_modifier()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8D8DF8EE, 0);
	}
	Any get_timecycle_modifier_index()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x594FEEC4, 0);
	}
	Any _0x03C44E4B()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x03C44E4B, 0);
	}
	void push_timecycle_modifier()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7E082045, 0);
	}
	void pop_timecycle_modifier()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x79D7D235, 0);
	}
	void _0x85BA15A4(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x85BA15A4, 1, p0);
	}
	void _0x9559BB38(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9559BB38, 1, p0);
	}
	void _0x554BA16E(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x554BA16E, 1, p0);
	}
	void _0xE8F538B5(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE8F538B5, 2, p0, p1);
	}
	void _0x805BAB08(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x805BAB08, 1, p0);
	}
	void _0x908A335E(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x908A335E, 1, p0);
	}
	void _0x6776720A()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6776720A, 0);
	}
	Scaleform request_scaleform_movie(char* p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC67E3DCB, 1, p0);
	}
	Any _0x7CC8057D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7CC8057D, 1, p0);
	}
	BOOL has_scaleform_movie_loaded(Scaleform p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xDDFB6448, 1, p0);
	}
	Any _0x1DFE8D8A(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1DFE8D8A, 1, p0);
	}
	void set_scaleform_movie_as_no_longer_needed(Scaleform* p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5FED3BA1, 1, p0);
	}
	void _0x18C9DE8D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x18C9DE8D, 2, p0, p1);
	}
	void draw_scaleform_movie(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x48DA6A58, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void _0x7B48E696(Scaleform p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7B48E696, 5, p0, p1, p2, p3, p4);
	}
	void _0x9C59FC06(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9C59FC06, 6, p0, p1, p2, p3, p4, p5);
	}
	void _0xC4F63A89(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC4F63A89, 14, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
	}
	void _0x899933C8(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x899933C8, 14, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
	}
	void _0x7AB77B57(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7AB77B57, 2, p0, p1);
	}
	void _0x557EDA1D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x557EDA1D, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void _0x91A7FCEB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x91A7FCEB, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void _0x6EAF56DE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6EAF56DE, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	Any _0x5D66CE1E(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5D66CE1E, 2, p0, p1);
	}
	Any _0x215ABBE8(Scaleform p0, char* p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x215ABBE8, 2, p0, p1);
	}
	Any _0xF6015178(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF6015178, 1, p0);
	}
	Any _0x5E219B67(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5E219B67, 1, p0);
	}
	void _0x02DBF2D7()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x02DBF2D7, 0);
	}
	Any _0x2F38B526()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2F38B526, 0);
	}
	Any _0x5CD7C3C0(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5CD7C3C0, 1, p0);
	}
	Any _0x2CFB0E6D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2CFB0E6D, 1, p0);
	}
	Any sitting_tv(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x516862EB, 1, p0);
	}
	void _0x716777CB(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x716777CB, 1, p0);
	}
	void _0x9A01FFDA(float p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9A01FFDA, 1, float_int(p0));
	}
	void _0x0D4AE8CB(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0D4AE8CB, 1, p0);
	}
	void _0x3AC9CB55(char* p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3AC9CB55, 1, p0);
	}
	void _0x386CE0B8()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x386CE0B8, 0);
	}
	void _0x2E80DB52()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2E80DB52, 0);
	}
	void _0x4DAAD55B(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4DAAD55B, 1, p0);
	}
	void _0xCCBF0334(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCCBF0334, 1, p0);
	}
	void _0x83A9811D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x83A9811D, 1, p0);
	}
	void _0x7AF85862(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7AF85862, 1, p0);
	}
	Any _0x79B43255(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x79B43255, 1, p0);
	}
	void _0x03D87600(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x03D87600, 1, p0);
	}
	Any _0xE9183D3A(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE9183D3A, 1, p0);
	}
	void set_tv_channel(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x41A8A627, 1, p0);
	}
	Any get_tv_channel()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6B96145A, 0);
	}
	void set_tv_volume(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF3504F4D, 1, p0);
	}
	Any get_tv_volume()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x39555CF0, 0);
	}
	void draw_tv_channel(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8129EF89, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void _0xB262DE67(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB262DE67, 3, p0, p1, p2);
	}
	void _0x78C4DCBE(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x78C4DCBE, 3, p0, p1, p2);
	}
	void _0xCBE7068F(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCBE7068F, 1, p0);
	}
	Any _0x4D1EB0FB(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4D1EB0FB, 1, p0);
	}
	void _0x796DE696(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x796DE696, 1, p0);
	}
	void _0xD99EC000(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD99EC000, 1, p0);
	}
	void enable_movie_subtitles(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC2DEBA3D, 1, p0);
	}
	Any _0xE40A0F1A()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE40A0F1A, 0);
	}
	Any _0x2E7D9B98(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2E7D9B98, 1, p0);
	}
	Any _0x9A0E3BFE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9A0E3BFE, 6, p0, p1, p2, p3, p4, p5);
	}
	Any _0x6BBDE6CD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6BBDE6CD, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void _0x431AA036()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x431AA036, 0);
	}
	void _0x24A7A7F6(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x24A7A7F6, 1, p0);
	}
	void _0xA1CB6C94(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA1CB6C94, 1, p0);
	}
	void _0x3B637AA7(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3B637AA7, 13, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
	}
	void _0xDF552973(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDF552973, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	void _0x1D980479(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1D980479, 3, p0, p1, p2);
	}
	void _0x06BB5CDA(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x06BB5CDA, 1, p0);
	}
	Any _0x089D5921(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x089D5921, 1, p0);
	}
	void _0x4E6D875B()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4E6D875B, 0);
	}

	Any _0x84BDD475(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x84BDD475, 1, p0);
	}
	Any stat_load(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9E5629F4, 1, p0);
	}
	Any stat_save(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE10A7CA4, 3, p0, p1, p2);
	}
	void _0xC62406A6(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC62406A6, 1, p0);
	}
	Any stat_load_pending(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4E9AC983, 1, p0);
	}
	Any stat_save_pending()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC3FD3822, 0);
	}
	Any _0xA3407CA3()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA3407CA3, 0);
	}
	Any stat_delete_slot(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2F171B94, 1, p0);
	}
	Any _0x7A299C13(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7A299C13, 1, p0);
	}
	Any _0x0BF0F4B2(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0BF0F4B2, 1, p0);
	}
	Any _0xCE6B62B5(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCE6B62B5, 1, p0);
	}
	void _0xCE7A2411(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCE7A2411, 1, p0);
	}
	Any _0x22804C20(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x22804C20, 1, p0);
	}
	// 0x174B3AAC -- no params/results data
	void _0x395D18B1(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x395D18B1, 1, p0);
	}
	Any _0xED7000C8()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xED7000C8, 0);
	}
	// 0x61801DA5 -- no params/results data
	// 0x1E06DF87 -- no params/results data
	// 0x6B9CA7C1 -- no params/results data
	Any _0x099FCC86()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x099FCC86, 0);
	}
	BOOL stat_set_int(Hash stat, int value, int unk)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xC9CC1C5C, 3, stat, value, unk);
	}
	Any stat_set_float(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6CEA96F2, 3, p0, p1, p2);
	}
	Any stat_set_bool(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x55D79DFB, 3, p0, p1, p2);
	}
	Any _0xC1224AA7(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC1224AA7, 3, p0, p1, p2);
	}
	Any stat_set_date(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x36BE807B, 4, p0, p1, p2, p3);
	}
	Any stat_set_string(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB1EF2E21, 3, p0, p1, p2);
	}
	Any stat_set_pos(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1192C9A3, 5, p0, p1, p2, p3, p4);
	}
	Any stat_set_masked_int(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2CBAA739, 5, p0, p1, p2, p3, p4);
	}
	Any stat_set_user_id(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDBE78ED7, 3, p0, p1, p2);
	}
	BOOL stat_get_int(Hash stat, int *pValue, int unk)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x1C6FE43E, 3, stat, pValue, unk);
	}
	Any stat_get_float(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFCBDA612, 3, p0, p1, p2);
	}
	Any stat_get_bool(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x28A3DD2B, 3, p0, p1, p2);
	}
	Any stat_get_date(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD762D16C, 4, p0, p1, p2, p3);
	}
	Any stat_get_string(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x10CE4BDE, 2, p0, p1);
	}
	Any stat_get_pos(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC846ECCE, 5, p0, p1, p2, p3, p4);
	}
	Any stat_get_masked_int(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE9D9B70F, 5, p0, p1, p2, p3, p4);
	}
	Any stat_get_user_id(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE2E8B6BA, 1, p0);
	}
	Any _0x1544B29F(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1544B29F, 1, p0);
	}
	Any _0x3507D253(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3507D253, 2, p0, p1);
	}
	void stat_increment(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDFC5F71E, 2, p0, p1);
	}
	Any _0x46F21343()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x46F21343, 0);
	}
	Any _0x02F283CE()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x02F283CE, 0);
	}
	Any _0xC4110917(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC4110917, 3, p0, p1, p2);
	}
	void _0x343B27E2(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x343B27E2, 1, p0);
	}
	void _0xE3247582(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE3247582, 1, p0);
	}
	Any _0xFD66A429(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFD66A429, 1, p0);
	}
	Any _0x9B431236(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9B431236, 1, p0);
	}
	Any _0x347B4436(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x347B4436, 1, p0);
	}
	Any _0x2C1D6C31(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2C1D6C31, 1, p0);
	}
	Any _0xDFC25D66(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDFC25D66, 1, p0);
	}
	Any _0xCA160BCC(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCA160BCC, 1, p0);
	}
	Any _0xB5BF87B2(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB5BF87B2, 4, p0, p1, p2, p3);
	}
	Any _0x1F938864(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1F938864, 4, p0, p1, p2, p3);
	}
	Any _0x3F8E893B(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3F8E893B, 4, p0, p1, p2, p3);
	}
	Any _0xFB93C5A2(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFB93C5A2, 4, p0, p1, p2, p3);
	}
	Any stat_get_bool_masked(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6ACE1B7D, 3, p0, p1, p2);
	}
	Any stat_set_bool_masked(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7842C4D6, 4, p0, p1, p2, p3);
	}
	void playstats_npc_invite(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x598C06F3, 1, p0);
	}
	void playstats_award_xp(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8770017B, 3, p0, p1, p2);
	}
	void playstats_rank_up(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x56AFB9F5, 1, p0);
	}
	void playstats_mission_started(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3AAB699C, 4, p0, p1, p2, p3);
	}
	void playstats_mission_over(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5B90B5FF, 6, p0, p1, p2, p3, p4, p5);
	}
	void playstats_mission_checkpoint(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCDC52280, 4, p0, p1, p2, p3);
	}
	void _0xAC2C7C63(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAC2C7C63, 4, p0, p1, p2, p3);
	}
	void _0x413539BC(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x413539BC, 4, p0, p1, p2, p3);
	}
	void playstats_race_checkpoint(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x580D5508, 5, p0, p1, p2, p3, p4);
	}
	void playstats_post_match_blob(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x036B42BD, 16, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15);
	}
	Any _0x489E27E7(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x489E27E7, 2, p0, p1);
	}
	void playstats_match_started(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2BDE85C1, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void playstats_match_ended(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF5CAB247, 6, p0, p1, p2, p3, p4, p5);
	}
	void playstats_shop_item(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA4746384, 5, p0, p1, p2, p3, p4);
	}
	void _0x6602CED6(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6602CED6, 6, p0, p1, p2, p3, p4, p5);
	}
	void _0x759E0EC9(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x759E0EC9, 4, p0, p1, p2, p3);
	}
	void _0x62073DF7(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x62073DF7, 4, p0, p1, p2, p3);
	}
	void _0x30558CFD(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x30558CFD, 3, p0, p1, p2);
	}
	void _0x06CE3692(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x06CE3692, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void _0x8D5C7B37(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8D5C7B37, 1, p0);
	}
	void _0x37D152BB(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x37D152BB, 2, p0, p1);
	}
	void playstats_friend_activity(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD1FA1BDB, 2, p0, p1);
	}
	void playstats_oddjob_done(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFE14A8EA, 3, p0, p1, p2);
	}
	void playstats_prop_change(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x25740A1D, 4, p0, p1, p2, p3);
	}
	void playstats_cloth_change(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3AFF9E58, 5, p0, p1, p2, p3, p4);
	}
	void _0x79716890(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x79716890, 3, p0, p1, p2);
	}
	void playstats_cheat_applied(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x345166F3, 1, p0);
	}
	void _0x04181752(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x04181752, 3, p0, p1, p2);
	}
	Any leaderboards_get_number_of_columns(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0A56EE34, 2, p0, p1);
	}
	Any leaderboards_get_column_id(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3821A334, 3, p0, p1, p2);
	}
	Any leaderboards_get_column_type(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6F2820F4, 3, p0, p1, p2);
	}
	Any leaderboards_read_clear_all()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x233E058A, 0);
	}
	Any leaderboards_read_clear(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7090012F, 3, p0, p1, p2);
	}
	Any leaderboards_read_pending(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEEB8BF5C, 3, p0, p1, p2);
	}
	Any _0x1789437B()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1789437B, 0);
	}
	Any leaderboards_read_successful(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3AC5B2F1, 3, p0, p1, p2);
	}
	Any leaderboards2_read_friends_by_row(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBD91B136, 6, p0, p1, p2, p3, p4, p5);
	}
	Any leaderboards2_read_by_handle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6B553408, 2, p0, p1);
	}
	Any leaderboards2_read_by_row(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCA931F34, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any leaderboards2_read_by_rank(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1B03F59F, 3, p0, p1, p2);
	}
	Any leaderboards2_read_by_radius(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC5B7E685, 3, p0, p1, p2);
	}
	Any leaderboards2_read_by_score_int(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAC020C18, 3, p0, p1, p2);
	}
	Any leaderboards2_read_by_score_float(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC678B29F, 3, p0, p1, p2);
	}
	Any _0x9BEC3401(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9BEC3401, 3, p0, p1, p2);
	}
	Any _0xC977D6E2(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC977D6E2, 1, p0);
	}
	void _0xF2DB6A82()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF2DB6A82, 0);
	}
	Any _0x766A74FE(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x766A74FE, 2, p0, p1);
	}
	Any _0x6B90E730(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6B90E730, 2, p0, p1);
	}
	Any _0x509A286F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x509A286F, 2, p0, p1);
	}
	Any leaderboards2_write_data(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5F9DF634, 1, p0);
	}
	void _0x7524E27B(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7524E27B, 3, p0, p1, p2);
	}
	void _0x1C5CCC3A(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1C5CCC3A, 3, p0, p1, p2);
	}
	Any leaderboards_cache_data_row(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x44F7D82B, 1, p0);
	}
	void leaderboards_clear_cache_data()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x87F498C1, 0);
	}
	void _0x88AE9667(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x88AE9667, 1, p0);
	}
	Any leaderboards_get_cache_exists(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFC8A71F3, 1, p0);
	}
	Any leaderboards_get_cache_time(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEDF02302, 1, p0);
	}
	Any _0xCE7CB520(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCE7CB520, 1, p0);
	}
	Any leaderboards_get_cache_data_row(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA11289EC, 3, p0, p1, p2);
	}
	void _0x4AC39C6C(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4AC39C6C, 3, p0, p1, p2);
	}
	void _0x3E69E7C3(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3E69E7C3, 3, p0, p1, p2);
	}
	void _0x2FFD2FA5(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2FFD2FA5, 4, p0, p1, p2, p3);
	}
	Any _0x23D70C39()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x23D70C39, 0);
	}
	void _0x0AD43306()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0AD43306, 0);
	}
	void _0xC7DE5C30()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC7DE5C30, 0);
	}
	void _0xA3DAC790(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA3DAC790, 1, p0);
	}
	void _0x726FAE66(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x726FAE66, 1, p0);
	}
	void _0x4C39CF10(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4C39CF10, 2, p0, p1);
	}
	void _0x2180AE13(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2180AE13, 2, p0, p1);
	}
	void _0xEE292B91(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEE292B91, 2, p0, p1);
	}
	void _0xA063CABD()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA063CABD, 0);
	}
	// 0x472A6511 -- no params/results data
	Any _0x62C19A3D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x62C19A3D, 2, p0, p1);
	}
	void _0x3B4EF322()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3B4EF322, 0);
	}

	void add_script_to_random_ped(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xECC76C3D, 4, p0, p1, p2, p3);
	}
	void register_object_script_brain(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB6BCC608, 6, p0, p1, p2, p3, p4, p5);
	}
	BOOL is_object_within_brain_activation_range(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xBA4CAA56, 1, p0);
	}
	void register_world_point_script_brain(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x725D91F7, 3, p0, p1, p2);
	}
	BOOL is_world_point_within_brain_activation_range()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x2CF305A0, 0);
	}
	void enable_script_brain_set(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2765919F, 1, p0);
	}
	void disable_script_brain_set(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFBD13FAD, 1, p0);
	}
	void _0x19B27825()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x19B27825, 0);
	}
	void _0xF3A3AB08()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF3A3AB08, 0);
	}
	void _0x949FE53E(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x949FE53E, 1, p0);
	}
	void _0x29CE8BAA(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x29CE8BAA, 1, p0);
	}

	void create_mobile_phone(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5BBC5E23, 1, p0);
	}
	void destroy_mobile_phone()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1A65037B, 0);
	}
	void set_mobile_phone_scale(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x09BCF1BE, 1, p0);
	}
	void set_mobile_phone_rotation(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x209C28CF, 4, p0, p1, p2, p3);
	}
	void get_mobile_phone_rotation(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x17A29F23, 2, p0, p1);
	}
	void set_mobile_phone_position(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x841800B3, 3, p0, p1, p2);
	}
	void get_mobile_phone_position(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB2E1E1A0, 1, p0);
	}
	void script_is_moving_mobile_phone_offscreen(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x29828690, 1, p0);
	}
	BOOL can_phone_be_seen_on_screen()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x5F978584, 0);
	}
	void cell_cam_activate(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x234C1AE9, 2, p0, p1);
	}
	void _0x4479B304(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4479B304, 1, p0);
	}
	void _0xC273BB4D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC273BB4D, 1, p0);
	}
	void _0x66DCD9D2(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x66DCD9D2, 1, p0);
	}
	Any cell_cam_is_char_visible_no_face_check(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBEA88097, 1, p0);
	}
	void get_mobile_phone_render_id(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x88E4FECE, 1, p0);
	}

	Any app_data_valid()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x72BDE002, 0);
	}
	Any app_get_int(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2942AAD2, 1, p0);
	}
	Any app_get_float(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD87F3A1C, 1, p0);
	}
	Any app_get_string(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x849CEB80, 1, p0);
	}
	void app_set_int(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1B509C32, 2, p0, p1);
	}
	void app_set_float(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF3076135, 2, p0, p1);
	}
	void app_set_string(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x23DF19A8, 2, p0, p1);
	}
	void app_set_app(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8BAC4146, 1, p0);
	}
	void app_set_block(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC2D54DD9, 1, p0);
	}
	void app_clear_block()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDAB86A18, 0);
	}
	void app_close_app()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x03767C7A, 0);
	}
	void app_close_block()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xED97B202, 0);
	}
	Any _0xD368BA15()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD368BA15, 0);
	}
	Any app_has_synced_data(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1DE2A63D, 1, p0);
	}
	void app_save_data()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x84A3918D, 0);
	}
	Any _0x784D550B()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x784D550B, 0);
	}
	Any app_delete_app_data(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2A2FBD1C, 1, p0);
	}

	void set_clock_time(int h, int m, int s)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x26F6AF14, 3, h, m, s);
	}
	void pause_clock(BOOL b)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB02D6124, 1, b);
	}
	void _0x57B8DA7C(int h, int m, int s)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x57B8DA7C, 3, h, m, s);
	}
	void add_to_clock_time(int h, int m, int s)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCC40D20D, 3, h, m, s);
	}
	int get_clock_hours()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0x7EF8316F, 0);
	}
	int get_clock_minutes()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0x94AAC486, 0);
	}
	int get_clock_seconds()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0x099C927E, 0);
	}
	void set_clock_date(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x96891C94, 3, p0, p1, p2);
	}
	Any get_clock_day_of_week()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x84E4A289, 0);
	}
	Any get_clock_day_of_month()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC7A5ACB7, 0);
	}
	Any get_clock_month()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3C48A3D5, 0);
	}
	Any get_clock_year()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB8BECF15, 0);
	}
	Any _0x3B74095C()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3B74095C, 0);
	}
	void get_posix_time(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE15A5281, 6, p0, p1, p2, p3, p4, p5);
	}
	void get_local_time(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x124BCFA2, 6, p0, p1, p2, p3, p4, p5);
	}

	void set_roads_in_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEBC7B918, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void set_roads_in_angled_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBD088F4B, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void set_ped_paths_in_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2148EA84, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any get_safe_coord_for_ped(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB370270A, 6, p0, p1, p2, p3, p4, p5);
	}
	Any get_closest_vehicle_node(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6F5F1E6C, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any get_closest_major_vehicle_node(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x04B5F15B, 6, p0, p1, p2, p3, p4, p5);
	}
	Any get_closest_vehicle_node_with_heading(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8BD5759B, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	Any get_nth_closest_vehicle_node(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF125BFCC, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	Any get_nth_closest_vehicle_node_id(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3F358BEA, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any get_nth_closest_vehicle_node_with_heading(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7349C856, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	Any get_nth_closest_vehicle_node_id_with_heading(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC1AEB88D, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	Any get_nth_closest_vehicle_node_favour_direction(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x928A4DEC, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	Any get_vehicle_node_properties(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCC90110B, 5, p0, p1, p2, p3, p4);
	}
	BOOL is_vehicle_node_id_valid(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x57DFB1EF, 1, p0);
	}
	void get_vehicle_node_position(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE38E252D, 2, p0, p1);
	}
	Any _0xEE4B1219(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEE4B1219, 1, p0);
	}
	Any _0x56737A3C(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x56737A3C, 1, p0);
	}
	Any get_closest_road(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x567B0E11, 11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	Any load_all_path_nodes(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC66E28C3, 1, p0);
	}
	void _0xD6A3B458(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD6A3B458, 1, p0);
	}
	Any _0x86E80A17(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x86E80A17, 4, p0, p1, p2, p3);
	}
	Any _0x2CDA5012(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2CDA5012, 4, p0, p1, p2, p3);
	}
	void set_roads_back_to_original(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x86AC4A85, 6, p0, p1, p2, p3, p4, p5);
	}
	void set_roads_back_to_original_in_angled_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9DB5D209, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void _0x3C5085E4(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3C5085E4, 1, p0);
	}
	void _0xD0F51299(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD0F51299, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void set_ped_paths_back_to_original(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3F1ABDA4, 6, p0, p1, p2, p3, p4, p5);
	}
	Any get_random_vehicle_node(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAD1476EA, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void get_street_name_at_coord(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDEBEEFCF, 5, p0, p1, p2, p3, p4);
	}
	Any generate_directions_to_coord(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xED35C094, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void set_ignore_no_gps_flag(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB72CF194, 1, p0);
	}
	void _0x90DF7A4C(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x90DF7A4C, 1, p0);
	}
	void set_gps_disabled_zone(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x720B8073, 6, p0, p1, p2, p3, p4, p5);
	}
	Any _0x4B770634()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4B770634, 0);
	}
	Any _0x286F82CC()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x286F82CC, 0);
	}
	Any _0xF6422F9A(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF6422F9A, 5, p0, p1, p2, p3, p4);
	}
	BOOL is_point_on_road(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xCF198055, 4, p0, p1, p2, p3);
	}
	void add_navmesh_required_region(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x12B086EA, 3, p0, p1, p2);
	}
	void remove_navmesh_required_regions()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x637BB680, 0);
	}
	void disable_navmesh_in_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6E37F132, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	BOOL are_all_navmesh_regions_loaded()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x34C4E789, 0);
	}
	BOOL is_navmesh_loaded_in_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x4C2BA99E, 6, p0, p1, p2, p3, p4, p5);
	}
	Any add_navmesh_blocking_object(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2952BA56, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void update_navmesh_blocking_object(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4E9776D0, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void remove_navmesh_blocking_object(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x098602B0, 1, p0);
	}
	Any _0x4B67D7EE(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4B67D7EE, 1, p0);
	}
	Any _0x3FE8C5A0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3FE8C5A0, 2, p0, p1);
	}
	Any _0x3ED21C90(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3ED21C90, 4, p0, p1, p2, p3);
	}
	Any _0xA07C5B7D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA07C5B7D, 2, p0, p1);
	}
	Any _0x76751DD4(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x76751DD4, 4, p0, p1, p2, p3);
	}
	Any calculate_travel_distance_between_points(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB114489B, 6, p0, p1, p2, p3, p4, p5);
	}

	BOOL is_control_enabled(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x9174AF84, 2, p0, p1);
	}
	BOOL is_control_pressed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x517A4384, 2, p0, p1);
	}
	BOOL is_control_released(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x1F91A06E, 2, p0, p1);
	}
	BOOL is_control_just_pressed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x4487F579, 2, p0, p1);
	}
	BOOL is_control_just_released(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x2314444B, 2, p0, p1);
	}
	Any get_control_value(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC526F3C6, 2, p0, p1);
	}
	Any get_control_normal(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5DE226A5, 2, p0, p1);
	}
	Any _0xC49343BB(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC49343BB, 2, p0, p1);
	}
	BOOL is_disabled_control_pressed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x32A93544, 2, p0, p1);
	}
	BOOL is_disabled_control_just_pressed(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xEE6ABD32, 2, p0, p1);
	}
	BOOL is_disabled_control_just_released(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xD6A679E1, 2, p0, p1);
	}
	Any get_disabled_control_normal(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x66FF4FAA, 2, p0, p1);
	}
	Any _0xF2A65A4C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF2A65A4C, 2, p0, p1);
	}
	Any _0x0E8EF929(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0E8EF929, 1, p0);
	}
	Any _0x3551727A(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3551727A, 3, p0, p1, p2);
	}
	Any _0x3EE71F6A(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3EE71F6A, 3, p0, p1, p2);
	}
	void set_pad_shake(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5D38BD2F, 3, p0, p1, p2);
	}
	void stop_pad_shake(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8F75657E, 1, p0);
	}
	void _0x7D65EB6E(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7D65EB6E, 2, p0, p1);
	}
	void set_control_shake(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF63D817A, 3, p0, p1, p2);
	}
	BOOL is_look_inverted()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x313434B2, 0);
	}
	Any _0x81802053()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x81802053, 0);
	}
	void set_playerpad_shakes_when_controller_disabled(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA86BD91F, 1, p0);
	}
	void set_input_exclusive(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4E8E29E6, 2, p0, p1);
	}
	void disable_control_action(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3800C0DC, 2, p0, p1);
	}
	void enable_control_action(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD2753551, 2, p0, p1);
	}
	void disable_all_control_actions(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x16753CF4, 1, p0);
	}
	void enable_all_control_actions(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFC2F119F, 1, p0);
	}
	Any _0xD2C80B2E(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD2C80B2E, 1, p0);
	}
	Any _0xBBFC9050(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBBFC9050, 1, p0);
	}
	void _0x42140FF9()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x42140FF9, 0);
	}
	void _0x2CEDE6C5(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2CEDE6C5, 1, p0);
	}

	void _0x621388FF(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x621388FF, 1, p0);
	}
	void _0x5B39D0AC()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5B39D0AC, 0);
	}
	Any _0xB41064A4(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB41064A4, 1, p0);
	}
	// 0x01393D16 -- no params/results data
	// 0x2A9411DA -- no params/results data
	Any _0x9DB63CFF(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9DB63CFF, 1, p0);
	}
	Any _0xF09157B0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF09157B0, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any _0xD96860FC(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD96860FC, 5, p0, p1, p2, p3, p4);
	}
	Any _0x459F2683(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x459F2683, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any _0xDBB83E2B(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDBB83E2B, 5, p0, p1, p2, p3, p4);
	}
	Any _0xBB6321BD(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBB6321BD, 3, p0, p1, p2);
	}
	Any _0xE8D56DA2(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE8D56DA2, 1, p0);
	}
	Any _0xCB6A351E(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCB6A351E, 2, p0, p1);
	}
	Any _0xA4D1B30E(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA4D1B30E, 1, p0);
	}
	Any _0xB8515B2F(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB8515B2F, 1, p0);
	}
	Any _0x660C468E(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x660C468E, 1, p0);
	}
	void datafile_create()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x95F8A221, 0);
	}
	void datafile_delete()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDEF31B0A, 0);
	}
	void _0x4E03F632()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4E03F632, 0);
	}
	void _0xF11F956F()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF11F956F, 0);
	}
	Any preload_find()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x86DDF9C2, 0);
	}
	Any _0x768CBB35(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x768CBB35, 1, p0);
	}
	Any _0x0B4087F7(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0B4087F7, 1, p0);
	}
	Any _0x5DCD0796()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5DCD0796, 0);
	}
	void _0x9B29D99B(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9B29D99B, 3, p0, p1, p2);
	}
	void _0xEFCF554A(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEFCF554A, 3, p0, p1, p2);
	}
	void _0xE972CACF(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE972CACF, 3, p0, p1, p2);
	}
	void _0xD437615C(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD437615C, 3, p0, p1, p2);
	}
	void _0x75FC6C3C(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x75FC6C3C, 5, p0, p1, p2, p3, p4);
	}
	Any _0x96A8E05F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x96A8E05F, 2, p0, p1);
	}
	Any _0x03939B8D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x03939B8D, 2, p0, p1);
	}
	Any _0x8876C872(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8876C872, 2, p0, p1);
	}
	Any _0xA6C68693(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA6C68693, 2, p0, p1);
	}
	Any _0xA92C1AF4(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA92C1AF4, 2, p0, p1);
	}
	Any _0x942160EC(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x942160EC, 2, p0, p1);
	}
	Vector3 _0xE84A127A(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0xE84A127A, 2, p0, p1);
	}
	Any _0xC9C13D8D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC9C13D8D, 2, p0, p1);
	}
	Any _0x1F2F7D00(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1F2F7D00, 2, p0, p1);
	}
	Any _0x2678342A(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2678342A, 2, p0, p1);
	}
	void _0x08174B90(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x08174B90, 2, p0, p1);
	}
	void _0xF29C0B36(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF29C0B36, 2, p0, p1);
	}
	void _0xE4302123(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE4302123, 2, p0, p1);
	}
	void _0xF3C01350(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF3C01350, 2, p0, p1);
	}
	void _0x16F464B6(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x16F464B6, 4, p0, p1, p2, p3);
	}
	Any _0xC174C71B(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC174C71B, 1, p0);
	}
	Any _0xA2E5F921(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA2E5F921, 2, p0, p1);
	}
	Any _0xBB120CFC(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBB120CFC, 2, p0, p1);
	}
	Any focus_use_spline(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x08AD2CC2, 2, p0, p1);
	}
	Any overide_texturenames(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x93F985A6, 2, p0, p1);
	}
	Vector3 _0x80E3DA55(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x80E3DA55, 2, p0, p1);
	}
	Any _0xECE81278(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xECE81278, 2, p0, p1);
	}
	Any _0xA8A21766(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA8A21766, 1, p0);
	}

	Any start_script_fire(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE7529357, 5, p0, p1, p2, p3, p4);
	}
	void remove_script_fire(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6B21FE26, 1, p0);
	}
	Any start_entity_fire(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8928428E, 1, p0);
	}
	void stop_entity_fire(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCE8C9066, 1, p0);
	}
	BOOL is_entity_on_fire(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x8C73E64F, 1, p0);
	}
	Any get_number_of_fires_in_range(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x654D93B7, 4, p0, p1, p2, p3);
	}
	void stop_fire_in_range(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x725C7205, 4, p0, p1, p2, p3);
	}
	Any get_closest_fire_pos(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC4977B47, 4, p0, p1, p2, p3);
	}
	void add_explosion(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x10AF5258, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void add_owned_explosion(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x27EE0D67, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void _0xCF358946(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCF358946, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	BOOL is_explosion_in_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xFB40075B, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	BOOL is_explosion_in_sphere(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xD455A7F3, 5, p0, p1, p2, p3, p4);
	}
	BOOL is_explosion_in_angled_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x0128FED9, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	Any _0xAEC0D176(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAEC0D176, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}

	void set_decision_maker(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x19CEAC9E, 2, p0, p1);
	}
	void clear_decision_maker_event_response(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x07ABD94D, 2, p0, p1);
	}
	void _0x57506EA6(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x57506EA6, 2, p0, p1);
	}
	void _0x62A3161D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x62A3161D, 2, p0, p1);
	}
	Any add_shocking_event_at_position(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0B30F779, 5, p0, p1, p2, p3, p4);
	}
	Any add_shocking_event_for_entity(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA81B5B71, 3, p0, p1, p2);
	}
	BOOL is_shocking_event_in_sphere(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x2F98823E, 5, p0, p1, p2, p3, p4);
	}
	Any remove_shocking_event(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF82D5A87, 1, p0);
	}
	void remove_all_shocking_events(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x64DF6282, 1, p0);
	}
	void _0xA0CE89C8()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA0CE89C8, 0);
	}
	void _0x4CC674B5()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4CC674B5, 0);
	}
	void _0xA0FDCB82(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA0FDCB82, 1, p0);
	}
	void _0x80340396()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x80340396, 0);
	}

	Any get_zone_at_coords(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC9018181, 3, p0, p1, p2);
	}
	Any _0x8EC68304(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8EC68304, 1, p0);
	}
	Any get_zone_popschedule(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x20AB2FC9, 1, p0);
	}
	Any get_name_of_zone(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7875CE91, 3, p0, p1, p2);
	}
	void set_zone_enabled(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x04E21B03, 2, p0, p1);
	}
	Any get_zone_scumminess(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB2FB5C4C, 1, p0);
	}
	void _0x3F0A3680(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3F0A3680, 2, p0, p1);
	}
	void _0x7A72A24E(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7A72A24E, 1, p0);
	}
	Any _0xB5C5C99B(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB5C5C99B, 3, p0, p1, p2);
	}

	Any add_rope(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA592EC74, 17, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16);
	}
	void delete_rope(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x748D72AF, 1, p0);
	}
	void delete_child_rope(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB19B4706, 1, p0);
	}
	BOOL does_rope_exist(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x66E4A3AC, 1, p0);
	}
	void _0x51523B8C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x51523B8C, 2, p0, p1);
	}
	void load_rope_data(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9E8F1644, 2, p0, p1);
	}
	void pin_rope_vertex(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAE1D101B, 5, p0, p1, p2, p3, p4);
	}
	void unpin_rope_vertex(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB30B552F, 2, p0, p1);
	}
	Any get_rope_vertex_count(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5131CD2C, 1, p0);
	}
	void attach_entities_to_rope(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7508668F, 14, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
	}
	void attach_rope_to_entity(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB25D9536, 6, p0, p1, p2, p3, p4, p5);
	}
	void detach_rope_from_entity(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3E720BEE, 2, p0, p1);
	}
	void _0xEAF291A0(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEAF291A0, 1, p0);
	}
	void _0x80DB77A7(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x80DB77A7, 2, p0, p1);
	}
	void _0xC67D5CF6(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC67D5CF6, 2, p0, p1);
	}
	Any _0x7A18BB9C(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7A18BB9C, 1, p0);
	}
	Vector3 get_rope_last_vertex_coord(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x91F6848B, 1, p0);
	}
	Vector3 get_rope_vertex_coord(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x84374452, 2, p0, p1);
	}
	void _0x5187BED3(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5187BED3, 1, p0);
	}
	void _0x46826B53(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x46826B53, 1, p0);
	}
	void _0xFC0DB4C3(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFC0DB4C3, 1, p0);
	}
	void _0x2EEDB18F(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2EEDB18F, 1, p0);
	}
	void _0x43E92628(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x43E92628, 1, p0);
	}
	void rope_load_textures()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBA97CE91, 0);
	}
	Any _0x5FDC1047()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5FDC1047, 0);
	}
	void rope_unload_textures()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x584463E0, 0);
	}
	Any _0x67522E25(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x67522E25, 1, p0);
	}
	void _0x106BA127(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x106BA127, 14, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
	}
	void _0x7C6F7668(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7C6F7668, 3, p0, p1, p2);
	}
	void _0x686672DD(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x686672DD, 2, p0, p1);
	}
	Any _0xFD309DC8(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFD309DC8, 1, p0);
	}
	void rope_force_length(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xABF3130F, 2, p0, p1);
	}
	void rope_reset_length(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC8A423A3, 2, p0, p1);
	}
	void _0xA2A5C9FE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA2A5C9FE, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void set_damping(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCFB37773, 3, p0, p1, p2);
	}
	void activate_physics(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x031711B8, 1, p0);
	}
	void _0x59910AB2(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x59910AB2, 4, p0, p1, p2, p3);
	}
	Vector3 _0x49A11F0D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Vector3>(0x49A11F0D, 1, p0);
	}
	void _0xA5B55421(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA5B55421, 1, p0);
	}
	void break_entity_glass(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD0E0402F, 11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	void set_disable_breaking(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEE77C326, 2, p0, p1);
	}
	void _0x97269DC8(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x97269DC8, 2, p0, p1);
	}

	BOOL get_water_height(float x, float y, float z, float *h)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xD864E17C, 4, float_int(x), float_int(y), float_int(z), h);
	}
	BOOL get_water_height_no_waves(float x, float y, float z, float *h)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x262017F8, 4, float_int(x), float_int(y), float_int(z), h);
	}
	Any _0xAA4AE00C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAA4AE00C, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	Any _0x4A962D55(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4A962D55, 8, p0, p1, p2, p3, p4, p5, p6, p7);
	}
	Any _0x4C71D143(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4C71D143, 5, p0, p1, p2, p3, p4);
	}
	void modify_water(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC49E005A, 4, p0, p1, p2, p3);
	}

	Any _0xEFAF4BA6(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEFAF4BA6, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	Any _0x8251485D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8251485D, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	Any _0xCEEAD94B(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCEEAD94B, 3, p0, p1, p2);
	}
	Any _0x249BC876(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x249BC876, 13, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
	}
	Any _0x13BC46C0(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x13BC46C0, 3, p0, p1, p2);
	}
	Any _0x591EA833(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x591EA833, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	Any _0x4559460A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4559460A, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	Any _0xF3C2875A(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF3C2875A, 5, p0, p1, p2, p3, p4);
	}
	Any _0x4301E10C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4301E10C, 6, p0, p1, p2, p3, p4, p5);
	}

	Any network_is_signed_in()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xADD0B40F, 0);
	}
	Any network_is_signed_online()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6E5BDCE2, 0);
	}
	Any _0x3FB40673()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3FB40673, 0);
	}
	Any network_is_cloud_available()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC7FF5AFC, 0);
	}
	Any _0x66EC713F()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x66EC713F, 0);
	}
	Any _0x358D1D77()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x358D1D77, 0);
	}
	Any network_is_host()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE46AC10F, 0);
	}
	Any network_is_rockstar_dev()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3A59BC68, 0);
	}
	Any network_have_online_privileges()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEF63BFDF, 0);
	}
	// 0x484AE841 -- no params/results data
	Any _0x1F88819D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1F88819D, 1, p0);
	}
	Any _0x2D817A5E(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2D817A5E, 1, p0);
	}
	Any _0xBB54AA3D(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBB54AA3D, 3, p0, p1, p2);
	}
	Any _0xA79E5B05(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA79E5B05, 3, p0, p1, p2);
	}
	Any _0xEB864288()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEB864288, 0);
	}
	Any _0xAB07CBBE()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAB07CBBE, 0);
	}
	Any _0x60E1FEDF()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x60E1FEDF, 0);
	}
	void network_bail()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x87D79A04, 0);
	}
	Any _0xA520B982(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA520B982, 1, p0);
	}
	Any _0x05518C0F()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x05518C0F, 0);
	}
	Any network_can_enter_multiplayer()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4A23B9C9, 0);
	}
	Any network_session_enter(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x543CD2BE, 6, p0, p1, p2, p3, p4, p5);
	}
	Any _0x4E53202A(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4E53202A, 4, p0, p1, p2, p3);
	}
	Any _0xD7624E6B(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD7624E6B, 5, p0, p1, p2, p3, p4);
	}
	Any _0x3F75CC38(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3F75CC38, 4, p0, p1, p2, p3);
	}
	Any network_session_host(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6716460F, 3, p0, p1, p2);
	}
	Any _0x8AC9EA19(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8AC9EA19, 2, p0, p1);
	}
	Any network_session_host_friends_only(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x26864403, 2, p0, p1);
	}
	Any network_session_end(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBCACBEA2, 2, p0, p1);
	}
	void network_session_kick_player(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1E20138A, 1, p0);
	}
	Any _0x8A559D26(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8A559D26, 1, p0);
	}
	void _0x3C3E2AB6(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3C3E2AB6, 1, p0);
	}
	void _0x5F29A7E0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5F29A7E0, 2, p0, p1);
	}
	void _0x5BE529F7(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5BE529F7, 1, p0);
	}
	void _0x454C7B67(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x454C7B67, 1, p0);
	}
	// 0x1AFD9335 -- no params/results data
	// 0xB503AEC7 -- no params/results data
	void _0xE5961511(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE5961511, 1, p0);
	}
	void _0xAE396263(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAE396263, 1, p0);
	}
	void _0x913FD7D6(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x913FD7D6, 1, p0);
	}
	void _0xB3D9A67F(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB3D9A67F, 1, p0);
	}
	void _0x57F9BC83()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x57F9BC83, 0);
	}
	void _0xF3768F90(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF3768F90, 1, p0);
	}
	void _0x74E8C53E(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x74E8C53E, 3, p0, p1, p2);
	}
	void _0x959E43A3(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x959E43A3, 1, p0);
	}
	Any _0x7771AB83(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7771AB83, 1, p0);
	}
	Any _0xA13045D4(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA13045D4, 4, p0, p1, p2, p3);
	}
	Any network_is_finding_gamers()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA6DAA79F, 0);
	}
	Any _0xBEDC4503()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBEDC4503, 0);
	}
	Any network_get_num_found_gamers()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF4B80C7E, 0);
	}
	Any network_get_found_gamer(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA08C9141, 2, p0, p1);
	}
	void network_clear_found_gamers()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6AA9A154, 0);
	}
	Any _0x42BD0780(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x42BD0780, 1, p0);
	}
	Any _0xBEB98840()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBEB98840, 0);
	}
	Any _0x08029970()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x08029970, 0);
	}
	Any _0xC871E745()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC871E745, 0);
	}
	Any _0xB5ABC4B4(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB5ABC4B4, 2, p0, p1);
	}
	void _0x3F7EDBBD()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3F7EDBBD, 0);
	}
	void network_is_player_animation_drawing_synchronized()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3D6360B5, 0);
	}
	void network_session_cancel_invite()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x20317535, 0);
	}
	Any network_has_pending_invite()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0C207D6E, 0);
	}
	Any _0xFBBAC350()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFBBAC350, 0);
	}
	Any _0x0907A6BF()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0907A6BF, 0);
	}
	Any _0x6A0BEA60()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6A0BEA60, 0);
	}
	void network_session_get_inviter(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE9C6B3FD, 1, p0);
	}
	Any _0x3EA9D44C()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3EA9D44C, 0);
	}
	void network_suppress_invite(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x323DC78C, 1, p0);
	}
	void network_block_invites(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD156FD1A, 1, p0);
	}
	void _0x32B7A076()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x32B7A076, 0);
	}
	void _0x0FCE995D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0FCE995D, 1, p0);
	}
	void _0xA639DCA2(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA639DCA2, 1, p0);
	}
	Any _0x70ED476A()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x70ED476A, 0);
	}
	void _0x50507BED()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x50507BED, 0);
	}
	void network_session_host_single_player(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF3B1CA85, 1, p0);
	}
	void network_session_leave_single_player()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC692F86A, 0);
	}
	BOOL network_is_game_in_progress()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x09B88E3E, 0);
	}
	Any network_is_session_active()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x715CB8C4, 0);
	}
	Any network_is_in_session()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4BC4105E, 0);
	}
	Any network_is_session_started()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9D854A37, 0);
	}
	Any network_is_session_busy()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8592152D, 0);
	}
	Any network_can_session_end()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE1FCCDBA, 0);
	}
	// NETWORK_IS_UNLOCKED -- no params/results data
	void _0xE6EEF8AF(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE6EEF8AF, 1, p0);
	}
	void _0x6BB93227(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6BB93227, 2, p0, p1);
	}
	Any _0xE642F2FD()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE642F2FD, 0);
	}
	void network_session_voice_host()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x345C2980, 0);
	}
	void network_session_voice_leave()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE566C7DA, 0);
	}
	void _0x9DFD89E6(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9DFD89E6, 1, p0);
	}
	void network_set_keep_focuspoint(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x075321B5, 2, p0, p1);
	}
	void _0x6EFC2FD0(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6EFC2FD0, 1, p0);
	}
	Any _0x60AA4AA1()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x60AA4AA1, 0);
	}
	Any _0x132CA01E()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x132CA01E, 0);
	}
	void network_set_activity_spectator(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFC9AD060, 1, p0);
	}
	Any network_is_activity_spectator()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAF329720, 0);
	}
	void network_set_activity_spectator_max(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x74E0BC0A, 1, p0);
	}
	Any network_get_activity_player_max(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB98F7056, 1, p0);
	}
	Any network_get_activity_player_num(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x31F951FD, 1, p0);
	}
	Any network_is_activity_spectator_from_handle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x58F1DF7D, 1, p0);
	}
	Any network_host_transition(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x146764FB, 6, p0, p1, p2, p3, p4, p5);
	}
	Any _0x2FF65C0B(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2FF65C0B, 4, p0, p1, p2, p3);
	}
	Any network_invite_gamer_to_transition(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB8886E39, 1, p0);
	}
	Any network_invite_gamers_to_transition(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5332E645, 2, p0, p1);
	}
	void network_set_gamer_invited_to_transition(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x17F1C69D, 1, p0);
	}
	Any network_leave_transition()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3A3599B7, 0);
	}
	Any network_launch_transition()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE3570BA2, 0);
	}
	void _0xB59D74CA()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB59D74CA, 0);
	}
	Any network_do_transition_to_game(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1B2114D2, 2, p0, p1);
	}
	Any network_do_transition_to_new_game(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x58AFBE63, 3, p0, p1, p2);
	}
	// 0x145BCA28 -- no params/results data
	Any network_do_transition_to_freemode(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC7CB8ADF, 4, p0, p1, p2, p3);
	}
	Any network_do_transition_to_new_freemode(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAD13375E, 4, p0, p1, p2, p3);
	}
	Any network_is_transition_to_game()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x17146B2B, 0);
	}
	Any network_get_transition_members(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x31F19263, 2, p0, p1);
	}
	void _0xCEE79711(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCEE79711, 2, p0, p1);
	}
	void _0xE0C28DB5(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE0C28DB5, 3, p0, p1, p2);
	}
	Any network_send_transition_gamer_instruction(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x468B0884, 5, p0, p1, p2, p3, p4);
	}
	Any network_mark_transition_gamer_as_fully_joined(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x03383F57, 1, p0);
	}
	Any network_is_transition_host()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0C0900BC, 0);
	}
	Any network_is_transition_host_from_handle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0E2854C4, 1, p0);
	}
	Any network_get_transition_host(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x73098D40, 1, p0);
	}
	Any network_is_in_transition()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC3CDB626, 0);
	}
	Any network_is_transition_started()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7917E111, 0);
	}
	Any network_is_transition_busy()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA357A2C6, 0);
	}
	void _0xC71E607B()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC71E607B, 0);
	}
	void _0x82D32D07()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x82D32D07, 0);
	}
	Any _0xC901AA9F()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC901AA9F, 0);
	}
	void _0xCCA9C022(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCCA9C022, 1, p0);
	}
	void _0x1E5F6AEF(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1E5F6AEF, 2, p0, p1);
	}
	void _0x0532DDD2(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0532DDD2, 1, p0);
	}
	Any network_has_player_started_transition(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4ABD1E59, 1, p0);
	}
	Any _0xCDEBCCE7(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCDEBCCE7, 1, p0);
	}
	Any network_join_transition(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB054EC4B, 1, p0);
	}
	void network_set_transition_creator_handle(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1DD01FE7, 1, p0);
	}
	void network_clear_transition_creator_handle()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8BB336F7, 0);
	}
	Any network_is_activity_session()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x577DAA8A, 0);
	}
	Any _0x54739CDB()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x54739CDB, 0);
	}
	void _0x18F03AFD(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x18F03AFD, 1, p0);
	}
	Any _0x8B99B72B(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8B99B72B, 4, p0, p1, p2, p3);
	}
	Any _0x877C0E1C(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x877C0E1C, 4, p0, p1, p2, p3);
	}
	Any _0x5E832444(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5E832444, 1, p0);
	}
	Any _0x3FDA00F3()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3FDA00F3, 0);
	}
	Any network_accept_presence_invite(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE5DA4CED, 1, p0);
	}
	Any _0x93C665FA(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x93C665FA, 1, p0);
	}
	Any _0xD50DF46C(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD50DF46C, 1, p0);
	}
	Any _0x19EC65D9(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x19EC65D9, 1, p0);
	}
	Any network_get_presence_invite_handle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB2451429, 2, p0, p1);
	}
	Any _0xA4302183(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA4302183, 1, p0);
	}
	Any _0x51B2D848(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x51B2D848, 1, p0);
	}
	Any _0x4677C656(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4677C656, 1, p0);
	}
	Any _0xF5E3401C(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF5E3401C, 1, p0);
	}
	Any _0x7D593B4C(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7D593B4C, 1, p0);
	}
	// NETWORK_REMOVE_ALL_INVITES -- no params/results data
	void _0x9773F36A()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9773F36A, 0);
	}
	void network_remove_transition_invite(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFDE84CB7, 1, p0);
	}
	void _0xF7134E73()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF7134E73, 0);
	}
	void _0xC47352E7()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC47352E7, 0);
	}
	Any network_invite_gamer(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8D9D373C, 1, p0);
	}
	Any network_invite_gamers(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x52FB8074, 4, p0, p1, p2, p3);
	}
	Any network_get_currently_selected_gamer_handle_from_invite_menu(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x72BA00CE, 1, p0);
	}
	Any network_set_currently_selected_gamer_handle_from_invite_menu(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFD95899E, 1, p0);
	}
	void _0x0808D4CC(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0808D4CC, 2, p0, p1);
	}
	Any fillout_pm_player_list(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCE40F423, 3, p0, p1, p2);
	}
	Any fillout_pm_player_list_with_names(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB8DF604E, 4, p0, p1, p2, p3);
	}
	Any using_network_weapontype(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF49C1533, 1, p0);
	}
	Any _0x08DC74F2()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x08DC74F2, 0);
	}
	Any _0xA812B6CB()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA812B6CB, 0);
	}
	Any _0xF30E5814(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF30E5814, 2, p0, p1);
	}
	Any _0xC6609191()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC6609191, 0);
	}
	Any network_is_in_party()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF9D7D67D, 0);
	}
	Any network_is_party_member(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1D0C929D, 1, p0);
	}
	BOOL is_gamertag_cache_reloaded(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x3742F25D, 1, p0);
	}
	Any network_player_is_cheater()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA51DC214, 0);
	}
	Any _0x1720ABA6()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1720ABA6, 0);
	}
	Any _0xA19708E3()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA19708E3, 0);
	}
	Any _0xF9A51B92(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF9A51B92, 3, p0, p1, p2);
	}
	Any _0xB6F7E208(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB6F7E208, 2, p0, p1);
	}
	// 0x1EE2F612 -- no params/results data
	Any _0x4C2C6B6A(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4C2C6B6A, 3, p0, p1, p2);
	}
	void _0x4818ACD0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4818ACD0, 2, p0, p1);
	}
	void network_set_this_script_is_network_script(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x470810ED, 3, p0, p1, p2);
	}
	Any network_get_this_script_is_network_script()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD9BF6549, 0);
	}
	Any _0xCCD8C02D()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCCD8C02D, 0);
	}
	Any _0x3E25A3C5()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3E25A3C5, 0);
	}
	Any network_get_script_status()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2BE9235A, 0);
	}
	void network_register_host_broadcast_variables(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDAF3B0AE, 2, p0, p1);
	}
	void network_register_player_broadcast_variables(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBE3D32B4, 2, p0, p1);
	}
	void _0xA71A1D2A()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA71A1D2A, 0);
	}
	Any _0x0B739F53()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0B739F53, 0);
	}
	Any network_get_player_index(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBE1C1506, 1, p0);
	}
	Any network_get_participant_index(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC4D91094, 1, p0);
	}
	Any _0x40DBF464(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x40DBF464, 1, p0);
	}
	Any network_get_num_connected_players()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF7952E62, 0);
	}
	Any network_is_player_connected(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x168EE2C2, 1, p0);
	}
	Any _0xF4F13B06()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF4F13B06, 0);
	}
	Any network_is_participant_active(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4E2C348B, 1, p0);
	}
	Any network_is_player_active(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x43657B17, 1, p0);
	}
	Any network_is_player_a_participant(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB08B6992, 1, p0);
	}
	BOOL network_is_host_of_this_script()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x6970BA94, 0);
	}
	Any network_get_host_of_this_script()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x89EA7B54, 0);
	}
	Any network_get_host_of_script(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9C95D0BB, 3, p0, p1, p2);
	}
	void network_set_mission_finished()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3083FAD7, 0);
	}
	Any network_is_script_active(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4A65250C, 4, p0, p1, p2, p3);
	}
	Any _0x8F7D9F46(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8F7D9F46, 3, p0, p1, p2);
	}
	Any _0xDB8B5D71()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDB8B5D71, 0);
	}
	Any _0xCEA55F4C(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCEA55F4C, 3, p0, p1, p2);
	}
	void _0x8DCFE77D()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8DCFE77D, 0);
	}
	void _0x331D9A27()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x331D9A27, 0);
	}
	Any participant_id()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9C35A221, 0);
	}
	Any participant_id_to_int()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x907498B0, 0);
	}
	Any network_get_killer_of_player(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9809FB6F, 2, p0, p1);
	}
	Any network_get_destroyer_of_network_id(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4FCA6436, 2, p0, p1);
	}
	Any _0x28A45454(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x28A45454, 3, p0, p1, p2);
	}
	Any network_get_entity_killer_of_player(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA7E7E04F, 2, p0, p1);
	}
	void network_resurrect_local_player(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF1F9D4B4, 6, p0, p1, p2, p3, p4, p5);
	}
	void network_set_local_player_invincible_time(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFEA9B85C, 1, p0);
	}
	Any network_is_local_player_invincible()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8DE13B36, 0);
	}
	void _0x8D27280E(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8D27280E, 2, p0, p1);
	}
	void _0xB72F086D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB72F086D, 1, p0);
	}
	Any _0xEDA68956(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEDA68956, 1, p0);
	}
	Any network_get_network_id_from_entity(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9E35DAB6, 1, p0);
	}
	Any network_get_entity_from_network_id(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5B912C3F, 1, p0);
	}
	Any _0xD7F934F4(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD7F934F4, 1, p0);
	}
	Any network_get_entity_is_local(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x813353ED, 1, p0);
	}
	void _0x31A630A4(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x31A630A4, 1, p0);
	}
	Any network_does_network_id_exist(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB8D2C99E, 1, p0);
	}
	Any network_does_entity_exist_with_network_id(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1E2E3177, 1, p0);
	}
	Any network_request_control_of_network_id(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9262A60A, 1, p0);
	}
	Any network_has_control_of_network_id(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x92E77D21, 1, p0);
	}
	Any network_request_control_of_entity(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA05FEBD7, 1, p0);
	}
	Any network_request_control_of_door(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF60DAAF6, 1, p0);
	}
	Any network_has_control_of_entity(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x005FD797, 1, p0);
	}
	Any network_has_control_of_pickup(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF7784FC8, 1, p0);
	}
	Any network_has_control_of_door(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x136326EC, 1, p0);
	}
	Any veh_to_net(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF17634EB, 1, p0);
	}
	Any ped_to_net(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x86A0B759, 1, p0);
	}
	Any obj_to_net(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1E05F29F, 1, p0);
	}
	Any net_to_veh(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7E02FAEA, 1, p0);
	}
	Any net_to_ped(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x87717DD4, 1, p0);
	}
	Any net_to_obj(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x27AA14D8, 1, p0);
	}
	Any net_to_ent(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5E149683, 1, p0);
	}
	void network_get_local_handle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x08023B16, 2, p0, p1);
	}
	void network_handle_from_user_id(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x74C2C1B7, 3, p0, p1, p2);
	}
	void network_handle_from_member_id(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9BFC9FE2, 3, p0, p1, p2);
	}
	void network_handle_from_player(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD3498917, 3, p0, p1, p2);
	}
	void network_handle_from_friend(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3B0BB3A3, 3, p0, p1, p2);
	}
	Any network_gamertag_from_handle_start(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEBA00C2A, 1, p0);
	}
	Any network_gamertag_from_handle_pending()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF000828E, 0);
	}
	Any network_gamertag_from_handle_succeeded()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x89C2B5EA, 0);
	}
	Any network_get_gamertag_from_handle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA18A1B26, 1, p0);
	}
	Any network_are_handles_the_same(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x45975AE3, 2, p0, p1);
	}
	Any network_is_handle_valid(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF0996C6E, 2, p0, p1);
	}
	Any network_get_player_from_gamer_handle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2E96EF1E, 1, p0);
	}
	Any network_member_id_from_gamer_handle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x62EF0A63, 1, p0);
	}
	Any network_is_gamer_in_my_session(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x59127716, 1, p0);
	}
	void network_show_profile_ui(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF00A20B0, 1, p0);
	}
	Any network_get_game_region()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEE4D173E, 0);
	}
	Any network_player_get_name(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCE48F260, 1, p0);
	}
	Any _0x4EC0D983(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4EC0D983, 2, p0, p1);
	}
	Any network_player_is_rockstar_dev(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF6659045, 1, p0);
	}
	Any _0xD265B049(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD265B049, 1, p0);
	}
	Any network_is_inactive_profile(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x95481343, 1, p0);
	}
	Any network_get_max_friends()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x048171BC, 0);
	}
	Any network_get_friend_count()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA396ACDE, 0);
	}
	Any network_get_friend_name(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x97420B6D, 1, p0);
	}
	Any network_is_friend_online(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE0A42430, 1, p0);
	}
	Any network_is_friend_in_same_title(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC54365C2, 1, p0);
	}
	Any network_is_friend_in_multiplayer(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x400BDDD9, 1, p0);
	}
	Any network_is_friend(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2DA4C282, 1, p0);
	}
	Any network_is_pending_friend(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5C85FF81, 1, p0);
	}
	Any network_is_adding_friend()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBB7EC8C4, 0);
	}
	Any network_add_friend(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x20E5B3EE, 2, p0, p1);
	}
	Any clear_player_bailed_from_playericle(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x94AE7172, 1, p0);
	}
	Any get_obj_entity(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB802B671, 1, p0);
	}
	Any network_can_set_waypoint()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x009E68F3, 0);
	}
	Any _0x5C0AB2A9(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5C0AB2A9, 1, p0);
	}
	Any network_has_headset()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA7DC5657, 0);
	}
	void _0x5C05B7E1(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5C05B7E1, 1, p0);
	}
	Any vehicle_net_attach_char_to_char_physically()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAC00A5BE, 0);
	}
	Any network_gamer_has_headset(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD036DA4A, 1, p0);
	}
	Any network_is_gamer_talking(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x99B58DBC, 1, p0);
	}
	Any network_can_communicate_with_gamer(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD05EB7F6, 1, p0);
	}
	Any network_is_gamer_muted_by_me(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x001B4046, 1, p0);
	}
	Any _0x7685B333(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7685B333, 1, p0);
	}
	Any _0x3FDCC8D7(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3FDCC8D7, 1, p0);
	}
	Any _0xD19B312C(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD19B312C, 1, p0);
	}
	Any network_is_player_talking(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDA9FD9DB, 1, p0);
	}
	Any network_player_has_headset(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x451FB6B6, 1, p0);
	}
	Any network_set_player_muted(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCE451908, 2, p0, p1);
	}
	Any network_is_player_muted_by_me(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7A21050E, 1, p0);
	}
	Any network_am_i_muted_by_player(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE128F2B0, 1, p0);
	}
	Any network_is_player_blocked_by_me(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAE4F4560, 1, p0);
	}
	Any network_am_i_blocked_by_player(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x953EF45E, 1, p0);
	}
	Any network_get_player_loudness(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF2F67014, 1, p0);
	}
	void network_set_talker_proximity(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x67555C66, 1, p0);
	}
	Any network_get_talker_proximity()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x19991ADD, 0);
	}
	void network_set_voice_active(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8011247F, 1, p0);
	}
	void _0xCAB21090(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCAB21090, 1, p0);
	}
	void network_set_team_only_chat(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3813019A, 1, p0);
	}
	void _0xC8CC9E75(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC8CC9E75, 2, p0, p1);
	}
	void network_set_override_spectator_mode(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA0FD42D3, 1, p0);
	}
	void _0xC9DDA85B(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC9DDA85B, 1, p0);
	}
	void _0xD33AFF79(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD33AFF79, 1, p0);
	}
	void _0x4FFEFE43(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4FFEFE43, 1, p0);
	}
	void _0x74EE2D8B(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x74EE2D8B, 2, p0, p1);
	}
	void _0x2F98B405(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2F98B405, 1, p0);
	}
	void _0x95F1C60D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x95F1C60D, 2, p0, p1);
	}
	void _0x6BEE48AA(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6BEE48AA, 2, p0, p1);
	}
	void network_set_voice_channel(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3974879F, 1, p0);
	}
	void _0x9ECF722A()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9ECF722A, 0);
	}
	void is_network_vehicle_been_damaged_by_any_object(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF1E84832, 3, p0, p1, p2);
	}
	void _0x7F9B9052()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7F9B9052, 0);
	}
	void _0x7BBEA8CF(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7BBEA8CF, 1, p0);
	}
	void _0xE797A4B6(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE797A4B6, 1, p0);
	}
	void _0x92268BB5(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x92268BB5, 3, p0, p1, p2);
	}
	void shutdown_and_launch_single_player_game()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x92B7351C, 0);
	}
	void network_set_friendly_fire_option(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x6BAF95FA, 1, p0);
	}
	void network_set_rich_presence(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x932A6CED, 4, p0, p1, p2, p3);
	}
	void _0x017E6777(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x017E6777, 2, p0, p1);
	}
	void _0xBE6A30C3(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBE6A30C3, 6, p0, p1, p2, p3, p4, p5);
	}
	void _0x22E03AD0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x22E03AD0, 2, p0, p1);
	}
	Any _0xF5F4BD95()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF5F4BD95, 0);
	}
	Any network_clan_player_is_active(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAB8319A3, 1, p0);
	}
	Any network_clan_player_get_desc(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6EE4A282, 3, p0, p1, p2);
	}
	Any _0x54E79E9C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x54E79E9C, 2, p0, p1);
	}
	void _0xF633805A(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF633805A, 3, p0, p1, p2);
	}
	Any _0x807B3450()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x807B3450, 0);
	}
	Any _0x3369DD1F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3369DD1F, 2, p0, p1);
	}
	Any network_clan_download_membership(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8E8CB520, 1, p0);
	}
	Any network_clan_download_membership_pending(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1FDB590F, 1, p0);
	}
	Any _0x83ED8E08()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x83ED8E08, 0);
	}
	Any _0x40202867(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x40202867, 1, p0);
	}
	Any network_clan_get_membership_count(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x25924010, 1, p0);
	}
	Any network_clan_get_membership_valid(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x48914F6A, 2, p0, p1);
	}
	Any network_clan_get_membership(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCDC4A590, 3, p0, p1, p2);
	}
	Any network_clan_join(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x79C916C5, 1, p0);
	}
	Any _0xBDA90BAC(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBDA90BAC, 2, p0, p1);
	}
	Any _0x8E952B12(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8E952B12, 2, p0, p1);
	}
	Any _0x966C90FD()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x966C90FD, 0);
	}
	Any _0xBA672146(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBA672146, 2, p0, p1);
	}
	void set_network_id_can_migrate(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x47C8E5FF, 2, p0, p1);
	}
	void set_network_id_exists_on_all_machines(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x68D486B2, 2, p0, p1);
	}
	void _0x4D15FDB1(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4D15FDB1, 3, p0, p1, p2);
	}
	void network_set_entity_can_blend(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDE8C0DB8, 2, p0, p1);
	}
	void _0x09CBC4B0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x09CBC4B0, 2, p0, p1);
	}
	void set_network_id_visible_in_cutscene(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x199E75EF, 3, p0, p1, p2);
	}
	void _0x00AE4E17(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x00AE4E17, 2, p0, p1);
	}
	Any _0xEA5176C0(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEA5176C0, 1, p0);
	}
	void set_local_player_visible_in_cutscene(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x59F3479B, 2, p0, p1);
	}
	void set_local_player_invisible_locally(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x764F6222, 1, p0);
	}
	void set_local_player_visible_locally()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x324B56DB, 0);
	}
	void set_player_invisible_locally(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x18227209, 1, p0);
	}
	void set_player_visible_locally(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBA2BB4B4, 2, p0, p1);
	}
	void fade_out_local_player(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8FA7CEBD, 1, p0);
	}
	void network_fade_out_entity(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x47EDEE56, 3, p0, p1, p2);
	}
	void network_fade_in_entity(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9B9FCD02, 2, p0, p1);
	}
	BOOL is_player_in_cutscene(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xE0A619BD, 1, p0);
	}
	void set_entity_visible_in_cutscene(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDBFB067B, 3, p0, p1, p2);
	}
	void set_entity_locally_invisible(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x51ADCC5F, 1, p0);
	}
	void set_entity_locally_visible(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x235A57B3, 1, p0);
	}
	BOOL is_damage_tracker_active_on_network_id(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x597063BA, 1, p0);
	}
	void activate_damage_tracker_on_network_id(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x95D07BA5, 2, p0, p1);
	}
	BOOL is_sphere_visible_to_another_machine(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x23C5274E, 4, p0, p1, p2, p3);
	}
	BOOL is_sphere_visible_to_player(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xE9FCFB32, 5, p0, p1, p2, p3, p4);
	}
	void reserve_network_mission_objects(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x391DF4F3, 1, p0);
	}
	void reserve_network_mission_peds(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x54998C37, 1, p0);
	}
	void reserve_network_mission_vehicles(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5062875E, 1, p0);
	}
	BOOL can_register_mission_objects(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x7F85DFDE, 1, p0);
	}
	BOOL can_register_mission_peds(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0xCCAA5CE9, 1, p0);
	}
	BOOL can_register_mission_vehicles(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x818B6830, 1, p0);
	}
	BOOL can_register_mission_entities(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x83794008, 4, p0, p1, p2, p3);
	}
	Any get_num_reserved_mission_objects(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x16A80CD6, 1, p0);
	}
	Any get_num_reserved_mission_peds(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6C25975C, 1, p0);
	}
	Any get_num_reserved_mission_vehicles(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA9A308F3, 1, p0);
	}
	Any _0x603FA104(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x603FA104, 1, p0);
	}
	Any _0xD8FEC4F8(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD8FEC4F8, 1, p0);
	}
	Any _0x20527695(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x20527695, 1, p0);
	}
	Any _0x8687E285()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8687E285, 0);
	}
	Any _0x744AC008()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x744AC008, 0);
	}
	Any _0xC3A12135()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC3A12135, 0);
	}
	Any _0x6A036061()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6A036061, 0);
	}
	Any get_network_time()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x998103C2, 0);
	}
	Any _0x98AA48E5()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x98AA48E5, 0);
	}
	Any get_time_offset(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2E079AE6, 2, p0, p1);
	}
	Any _0x50EF8FC6(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x50EF8FC6, 2, p0, p1);
	}
	Any _0xBBB6DF61(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBBB6DF61, 2, p0, p1);
	}
	Any _0x8B4D1C06(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8B4D1C06, 2, p0, p1);
	}
	Any get_time_difference(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5666A837, 2, p0, p1);
	}
	Any _0xF2FDF2E0()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF2FDF2E0, 0);
	}
	void network_set_in_spectator_mode(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5C4C8458, 2, p0, p1);
	}
	void _0x54058F5F(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x54058F5F, 3, p0, p1, p2);
	}
	void _0xA7E36020(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA7E36020, 1, p0);
	}
	void _0x64235620(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x64235620, 2, p0, p1);
	}
	Any network_is_in_spectator_mode()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3EAD9DB8, 0);
	}
	void network_set_in_mp_cutscene(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8434CB43, 2, p0, p1);
	}
	Any network_is_in_mp_cutscene()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4BB33316, 0);
	}
	Any network_is_player_in_mp_cutscene(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x56F961E4, 1, p0);
	}
	void set_network_vehicle_respot_timer(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2C30912D, 2, p0, p1);
	}
	void use_player_colour_instead_of_team_colour(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4DD46DAE, 1, p0);
	}
	Any network_create_synchronised_scene(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB06FE3FE, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void network_add_ped_to_synchronised_scene(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB386713E, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void network_add_entity_to_synchronised_scene(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x10DD636C, 7, p0, p1, p2, p3, p4, p5, p6);
	}
	void _0xBFFE8B5C(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBFFE8B5C, 3, p0, p1, p2);
	}
	void network_attach_synchronised_scene_to_entity(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3FE5B222, 3, p0, p1, p2);
	}
	void network_start_synchronised_scene(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA9DFDC40, 1, p0);
	}
	void network_stop_synchronised_scene(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x97B1CDF6, 1, p0);
	}
	Any _0x16AED87B(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x16AED87B, 1, p0);
	}
	Any _0x0679CE71(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0679CE71, 2, p0, p1);
	}
	Any _0xC62E77B3(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC62E77B3, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	Any _0x74D6B13C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x74D6B13C, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	Any _0x90700C7D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x90700C7D, 1, p0);
	}
	void _0x44BFB619()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x44BFB619, 0);
	}
	void network_get_respawn_result(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDDFE9FBC, 3, p0, p1, p2);
	}
	Any _0x03287FD2(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x03287FD2, 1, p0);
	}
	void _0x408A9436()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x408A9436, 0);
	}
	void _0xFFB2ADA1(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xFFB2ADA1, 2, p0, p1);
	}
	void network_end_tutorial_session()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBA57E53E, 0);
	}
	Any network_is_in_tutorial_session()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x34DD7B28, 0);
	}
	Any _0x755A2B3E()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x755A2B3E, 0);
	}
	Any _0xA003C40B()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA003C40B, 0);
	}
	Any _0x5E1020CC(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5E1020CC, 1, p0);
	}
	Any _0xE66A0B40(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE66A0B40, 2, p0, p1);
	}
	void _0x72052DB3(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x72052DB3, 2, p0, p1);
	}
	Any _0xB0313590(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB0313590, 1, p0);
	}
	void network_override_clock_time(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC077BCD6, 3, p0, p1, p2);
	}
	void _0xC4AEAF49()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC4AEAF49, 0);
	}
	Any network_add_entity_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x51030E5B, 6, p0, p1, p2, p3, p4, p5);
	}
	Any network_remove_entity_area(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEAB97F25, 1, p0);
	}
	Any _0x69956127(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x69956127, 1, p0);
	}
	Any _0xCB1CD6D3(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCB1CD6D3, 1, p0);
	}
	Any _0xC6D53AA0(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC6D53AA0, 1, p0);
	}
	void _0x155465EE(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x155465EE, 2, p0, p1);
	}
	void _0xD760CAD5()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xD760CAD5, 0);
	}
	Any _0x231CFD12()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x231CFD12, 0);
	}
	Any network_does_tunable_exist(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9FCE9C9A, 2, p0, p1);
	}
	Any _0xE4B3726A(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE4B3726A, 3, p0, p1, p2);
	}
	Any _0x41E8912A(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x41E8912A, 3, p0, p1, p2);
	}
	Any _0x8A04E1FE(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8A04E1FE, 2, p0, p1);
	}
	// 0x05265449 -- no params/results data
	// 0x83B1E50D -- no params/results data
	// 0x9ED9FD04 -- no params/results data
	Any _0x053BB329()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x053BB329, 0);
	}
	void network_reset_body_tracker()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3914463F, 0);
	}
	Any _0x17CBC608()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x17CBC608, 0);
	}
	Any _0xBFAA349B(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBFAA349B, 1, p0);
	}
	Any _0xBEB7281A(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBEB7281A, 2, p0, p1);
	}
	Any _0x1877D451(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1877D451, 2, p0, p1);
	}
	Any network_explode_vehicle(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0E1B38AE, 4, p0, p1, p2, p3);
	}
	void _0x644141C5(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x644141C5, 5, p0, p1, p2, p3, p4);
	}
	// 0x9F82917F -- no params/results data
	void network_set_property_id(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5A74E873, 1, p0);
	}
	void _0x38BC35C8()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x38BC35C8, 0);
	}
	Any _0x965EA007()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x965EA007, 0);
	}
	Any _0xEEFC8A55()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEEFC8A55, 0);
	}
	void _0x866D1B67(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x866D1B67, 1, p0);
	}
	Any _0xED4A272F()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xED4A272F, 0);
	}
	Any _0x4ACF110C(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4ACF110C, 1, p0);
	}
	Any _0x1AA3A0D5(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1AA3A0D5, 1, p0);
	}
	Any _0x37877757(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x37877757, 1, p0);
	}
	Any _0x1CF89DA5(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1CF89DA5, 1, p0);
	}
	Any _0x16E53875(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x16E53875, 2, p0, p1);
	}
	void _0x365C50EE(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x365C50EE, 2, p0, p1);
	}
	Any _0x25E2DBA9()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x25E2DBA9, 0);
	}
	void set_store_enabled(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC1F6443B, 1, p0);
	}
	Any _0x1FDC75DC(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1FDC75DC, 1, p0);
	}
	void _0xCA7A0A49()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCA7A0A49, 0);
	}
	Any _0x44A58B0A(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x44A58B0A, 1, p0);
	}
	Any _0xD32FA11F()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD32FA11F, 0);
	}
	void _0xA7FA70AE()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA7FA70AE, 0);
	}
	Any _0x70F6D3AD()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x70F6D3AD, 0);
	}
	Any cloud_request_member_file(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB9B3B4D9, 3, p0, p1, p2);
	}
	Any _0x2B7B57B3(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2B7B57B3, 1, p0);
	}
	Any _0xBAF52DD8(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBAF52DD8, 1, p0);
	}
	Any _0x9B9AFFF1(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9B9AFFF1, 1, p0);
	}
	Any _0x08243B79(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x08243B79, 2, p0, p1);
	}
	Any _0x798D6C27()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x798D6C27, 0);
	}
	Any _0xE69E8D0D()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE69E8D0D, 0);
	}
	Any _0x742075FE()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x742075FE, 0);
	}
	Any _0xCE569932()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCE569932, 0);
	}
	Any _0x82146BE9()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x82146BE9, 0);
	}
	void _0x133FF2D5()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x133FF2D5, 0);
	}
	Any _0x4609D596(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4609D596, 3, p0, p1, p2);
	}
	Any _0x4C2C0D1F(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4C2C0D1F, 3, p0, p1, p2);
	}
	Any _0x6B99ACFD(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6B99ACFD, 3, p0, p1, p2);
	}
	Any _0xA4351C31(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA4351C31, 3, p0, p1, p2);
	}
	Any _0x9EFBD5D1(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9EFBD5D1, 3, p0, p1, p2);
	}
	Any _0xA6D8B798(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA6D8B798, 4, p0, p1, p2, p3);
	}
	Any _0x67E74842(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x67E74842, 4, p0, p1, p2, p3);
	}
	Any set_balance_add_machine(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE123C7AC, 2, p0, p1);
	}
	Any set_balance_add_machines(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x22C33603, 3, p0, p1, p2);
	}
	Any _0x37F5BD93(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x37F5BD93, 3, p0, p1, p2);
	}
	Any _0x1CFB3F51(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1CFB3F51, 3, p0, p1, p2);
	}
	Any _0x87D1E6BD(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x87D1E6BD, 3, p0, p1, p2);
	}
	void _0x021D5A94()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x021D5A94, 0);
	}
	Any _0x4908A514()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4908A514, 0);
	}
	Any _0x50296140()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x50296140, 0);
	}
	Any _0x3970B0DA()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3970B0DA, 0);
	}
	Any _0xC1487110()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC1487110, 0);
	}
	Any _0xCC2356E3()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCC2356E3, 0);
	}
	Any _0x2DE69817()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2DE69817, 0);
	}
	Any _0x81BD8D3B()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x81BD8D3B, 0);
	}
	Any _0x8E1D8F78()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8E1D8F78, 0);
	}
	void _0x0D35DD93()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0D35DD93, 0);
	}
	Any _0x8F3137E6(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8F3137E6, 1, p0);
	}
	Any _0xB9137BA7(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB9137BA7, 1, p0);
	}
	Any _0x5E8A7559(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5E8A7559, 1, p0);
	}
	Any _0x331AEABF(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x331AEABF, 1, p0);
	}
	Any _0xA5A0C695(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA5A0C695, 1, p0);
	}
	Any _0x0303EC6E(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0303EC6E, 1, p0);
	}
	Any _0x91534C6E(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x91534C6E, 1, p0);
	}
	Any _0x744A9EA5(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x744A9EA5, 2, p0, p1);
	}
	void _0xA19A238D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA19A238D, 2, p0, p1);
	}
	Any _0xFF7D44E6(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFF7D44E6, 2, p0, p1);
	}
	Any _0xA2C5BD9D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA2C5BD9D, 1, p0);
	}
	// 0xF6E62C83 -- no params/results data
	Any _0xA850DDE1(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA850DDE1, 1, p0);
	}
	Any _0x8F6754AE(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8F6754AE, 1, p0);
	}
	Any _0x1E34953F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1E34953F, 2, p0, p1);
	}
	Any _0x771FE190(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x771FE190, 2, p0, p1);
	}
	Any _0x3276D9D3(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3276D9D3, 2, p0, p1);
	}
	Any _0x41A0FB02(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x41A0FB02, 2, p0, p1);
	}
	Any _0x11DC0F27(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x11DC0F27, 1, p0);
	}
	Any _0x0DEB3F5A(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0DEB3F5A, 1, p0);
	}
	Any _0x84315226(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x84315226, 2, p0, p1);
	}
	Any _0x38FC2EEB(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x38FC2EEB, 5, p0, p1, p2, p3, p4);
	}
	Any _0x899E468D(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x899E468D, 3, p0, p1, p2);
	}
	Any _0x1C4F9FDB(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1C4F9FDB, 1, p0);
	}
	Any _0xA69AE16C(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA69AE16C, 1, p0);
	}
	Any _0xF50BC67A(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF50BC67A, 1, p0);
	}
	Any _0xB3BBD241(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB3BBD241, 1, p0);
	}
	Any _0x70A2845C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x70A2845C, 2, p0, p1);
	}
	Any _0x346B506C(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x346B506C, 1, p0);
	}
	void _0x0095DB71()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0095DB71, 0);
	}
	Any _0xAD334B40(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAD334B40, 3, p0, p1, p2);
	}
	Any _0x980D45D7(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x980D45D7, 3, p0, p1, p2);
	}
	Any _0x48CCC328(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x48CCC328, 3, p0, p1, p2);
	}
	Any _0x983D1B97(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x983D1B97, 3, p0, p1, p2);
	}
	Any _0x8E664EFD()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8E664EFD, 0);
	}
	Any _0x611E0BE2()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x611E0BE2, 0);
	}
	Any _0xF0211AC1()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF0211AC1, 0);
	}
	Any _0x1F0DD8AF()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1F0DD8AF, 0);
	}
	Any _0x094852B0()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x094852B0, 0);
	}
	void _0x405ECA16()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x405ECA16, 0);
	}
	Any _0x9567392B(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9567392B, 2, p0, p1);
	}
	Any _0xF79FFF3C()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF79FFF3C, 0);
	}
	Any _0xA7F3F82B()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA7F3F82B, 0);
	}
	void _0x0D4F845D(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0D4F845D, 1, p0);
	}
	void _0xE13C1F7F()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE13C1F7F, 0);
	}
	void _0x213C6D36(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x213C6D36, 1, p0);
	}
	void _0x511E6F50(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x511E6F50, 1, p0);
	}
	Any _0x774F349D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x774F349D, 1, p0);
	}
	Any _0x30B51753(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x30B51753, 3, p0, p1, p2);
	}
	Any _0x02DAD93F()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x02DAD93F, 0);
	}
	Any _0x2D947814(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2D947814, 1, p0);
	}
	Any _0x37A28C26()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x37A28C26, 0);
	}
	Any _0x11E8B5CD()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x11E8B5CD, 0);
	}
	Any _0x429AEAB3()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x429AEAB3, 0);
	}
	Any texture_download_request(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAD546CC3, 4, p0, p1, p2, p3);
	}
	Any _0x1856D008(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1856D008, 3, p0, p1, p2);
	}
	Any _0x68C9AF69(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x68C9AF69, 3, p0, p1, p2);
	}
	void texture_download_release(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEE8D9E70, 1, p0);
	}
	Any _0xE4547765(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE4547765, 1, p0);
	}
	Any texture_download_get_name(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA40EF65A, 1, p0);
	}
	Any _0x03225BA3(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x03225BA3, 1, p0);
	}
	Any _0x4DEBC227()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4DEBC227, 0);
	}
	Any _0x0CA1167F()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0CA1167F, 0);
	}
	Any _0x424C6E27()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x424C6E27, 0);
	}
	Any _0xD3BBE42F()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD3BBE42F, 0);
	}
	Any _0xBDBB5948()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBDBB5948, 0);
	}
	Any _0x97287D68()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x97287D68, 0);
	}
	Any _0xC6EA802E()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC6EA802E, 0);
	}
	// 0x20EEBE9C -- no params/results data
	void _0x273C6180()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x273C6180, 0);
	}
	// 0xB82E9346 -- no params/results data
	void _0x371BBA08()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x371BBA08, 0);
	}
	// 0xA100CC97 -- no params/results data
	// 0xC302E4FA -- no params/results data

	// NETWORK_CHECK_GIVE_PLAYER_CASH -- no params/results data
	Any network_check_receive_player_cash(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD6B69D67, 5, p0, p1, p2, p3, p4);
	}
	void network_give_player_jobshare_cash(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC6047FDB, 2, p0, p1);
	}
	void network_receive_player_jobshare_cash(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4ED71C1A, 2, p0, p1);
	}
	void network_earn_from_bounty(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x127F2DAE, 4, p0, p1, p2, p3);
	}
	void network_buy_item(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA07B6368, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void network_spent_buy_wantedlevel(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE7CB4F95, 3, p0, p1, p2);
	}
	void network_spent_pay_vehicle_insurance_premium(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4E665BB2, 5, p0, p1, p2, p3, p4);
	}
	void network_spent_call_player(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1A89B5FC, 4, p0, p1, p2, p3);
	}
	void network_spent_bounty(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x3401FC96, 3, p0, p1, p2);
	}
	Any _0x8B755993(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8B755993, 1, p0);
	}
	Any _0x8F266745(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8F266745, 1, p0);
	}
	Any _0x531E4892(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x531E4892, 1, p0);
	}
	Any _0xB96C7ABE(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xB96C7ABE, 1, p0);
	}
	void _0x66DA9935(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x66DA9935, 1, p0);
	}
	void network_delete_character(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA9F7E9C3, 1, p0);
	}
	Any _0x63F093A6()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x63F093A6, 0);
	}
	void _0x19F0C471(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x19F0C471, 1, p0);
	}
	void _0x07C92F21(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x07C92F21, 4, p0, p1, p2, p3);
	}
	Any _0xE3802533(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE3802533, 1, p0);
	}
	// 0xC4CD928D -- no params/results data
	void network_earn_from_pickup(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x70A0ED62, 1, p0);
	}
	void _0x30B3EC0A(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x30B3EC0A, 1, p0);
	}
	void _0xC7A825EB(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC7A825EB, 1, p0);
	}
	void _0xED618DA9(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xED618DA9, 2, p0, p1);
	}
	void _0xEAF04923(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xEAF04923, 1, p0);
	}
	void network_earn_from_betting(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA0F7F07C, 2, p0, p1);
	}
	void network_earn_from_job(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0B6997FC, 2, p0, p1);
	}
	void _0x2BEFB6C4(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2BEFB6C4, 3, p0, p1, p2);
	}
	void _0xF11FC458(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF11FC458, 2, p0, p1);
	}
	void network_earn_from_holdups(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE6B90E9C, 1, p0);
	}
	void network_earn_from_property(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x9BE4F7E1, 2, p0, p1);
	}
	void _0x866004A8(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x866004A8, 1, p0);
	}
	void _0xCC068380(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCC068380, 1, p0);
	}
	// 0xAEF6244B -- no params/results data
	void network_earn_from_rockstar(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5A3733CC, 1, p0);
	}
	void network_earn_from_vehicle(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF803589D, 2, p0, p1);
	}
	// NETWORK_EARN_FROM_BANK_INTEREST -- no params/results data
	void network_spent_taxi(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1F3DB3E3, 2, p0, p1);
	}
	void _0xBE70849B(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xBE70849B, 2, p0, p1);
	}
	void _0x451A2644(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x451A2644, 2, p0, p1);
	}
	void _0x224A3488(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x224A3488, 3, p0, p1, p2);
	}
	void network_spent_betting(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF8A07513, 3, p0, p1, p2);
	}
	void _0x8957038E(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8957038E, 3, p0, p1, p2);
	}
	void network_buy_healthcare(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x832150E5, 2, p0, p1);
	}
	void network_buy_airstrike(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x40470683, 2, p0, p1);
	}
	void _0x2AD2EC51(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2AD2EC51, 3, p0, p1, p2);
	}
	void _0x047547D4(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x047547D4, 2, p0, p1);
	}
	void network_spent_ammo_drop(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x4B643076, 2, p0, p1);
	}
	void network_buy_bounty(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xCB89CBE0, 3, p0, p1, p2);
	}
	void network_buy_property(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7D479AAB, 3, p0, p1, p2);
	}
	void network_buy_smokes(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC0AB03EB, 2, p0, p1);
	}
	void network_spent_heli_pickup(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x27EEBCAB, 2, p0, p1);
	}
	void network_spent_boat_pickup(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB241CABD, 2, p0, p1);
	}
	void _0xDE7D398C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDE7D398C, 2, p0, p1);
	}
	void network_spent_cash_drop(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x87BD1D11, 1, p0);
	}
	void _0xE792C4A5(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE792C4A5, 2, p0, p1);
	}
	void _0xE6AAA0D5(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE6AAA0D5, 2, p0, p1);
	}
	void _0x99CF02C4(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x99CF02C4, 2, p0, p1);
	}
	void _0x20DDCF2F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x20DDCF2F, 2, p0, p1);
	}
	void _0x2F7836E2(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2F7836E2, 2, p0, p1);
	}
	void network_spent_carwash(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x8283E028, 4, p0, p1, p2, p3);
	}
	void network_spent_cinema(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1100CAF5, 3, p0, p1, p2);
	}
	void network_spent_telescope(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xAE7FF044, 2, p0, p1);
	}
	void network_spent_holdups(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1B3803B1, 2, p0, p1);
	}
	void _0x7E97C92C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7E97C92C, 2, p0, p1);
	}
	// NETWORK_SPENT_BANK_INTEREST -- no params/results data
	void _0x78436D07(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x78436D07, 3, p0, p1, p2);
	}
	void _0x5AEE2FC1(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5AEE2FC1, 3, p0, p1, p2);
	}
	void _0x54198922(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x54198922, 3, p0, p1, p2);
	}
	Any _0x16184FB5()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x16184FB5, 0);
	}
	Any _0x4F5B781C(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4F5B781C, 1, p0);
	}
	Any _0xADF8F882()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xADF8F882, 0);
	}
	// 0xF1EDB7F4 -- no params/results data
	// 0x56485B56 -- no params/results data
	// 0xC1A11435 -- no params/results data
	// 0xAA7EA3BD -- no params/results data
	// 0x7D4FD28C -- no params/results data
	Any _0x0EA2188C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x0EA2188C, 2, p0, p1);
	}
	// 0xABED6020 -- no params/results data
	// 0xCA23FD25 -- no params/results data
	// 0xC670C814 -- no params/results data
	// 0x03461981 -- no params/results data
	Any network_can_receive_player_cash(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x41F5F10E, 4, p0, p1, p2, p3);
	}
	// 0xA9021211 -- no params/results data

	Any _0x71D0CF3E(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x71D0CF3E, 1, p0);
	}
	Any _0x2E9D628C(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2E9D628C, 3, p0, p1, p2);
	}
	void init_shop_ped_component(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB818C7FC, 1, p0);
	}
	void init_shop_ped_prop(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xF5659E50, 1, p0);
	}
	Any _0xC937FF3D(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC937FF3D, 4, p0, p1, p2, p3);
	}
	Any _0x594E862C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x594E862C, 6, p0, p1, p2, p3, p4, p5);
	}
	void get_shop_ped_query_component(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC0718904, 2, p0, p1);
	}
	void get_shop_ped_component(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xB39677C5, 2, p0, p1);
	}
	void get_shop_ped_query_prop(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x1D3C1466, 2, p0, p1);
	}
	void get_shop_ped_prop(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xDB0A7A58, 2, p0, p1);
	}
	Any _0xC8A4BF12(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC8A4BF12, 4, p0, p1, p2, p3);
	}
	Any _0x7D876DC0(Any p0, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7D876DC0, 4, p0, p1, p2, p3);
	}
	Any _0x159751B4(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x159751B4, 1, p0);
	}
	// 0x69E2F5BB -- no params/results data
	void _0xE4FF7103(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xE4FF7103, 5, p0, p1, p2, p3, p4);
	}
	// 0xB84DCC79 -- no params/results data
	Any _0xCE70F183(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCE70F183, 1, p0);
	}
	// 0xC560D7C0 -- no params/results data
	void get_forced_component(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x382C70BE, 5, p0, p1, p2, p3, p4);
	}
	// GET_FORCED_PROP -- no params/results data
	Any _0x8E2C7FD5(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8E2C7FD5, 3, p0, p1, p2);
	}
	// 0xA79BC686 -- no params/results data
	// 0x1900628D -- no params/results data
	Any _0x1ECD23E7(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1ECD23E7, 2, p0, p1);
	}
	void get_shop_ped_query_outfit(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2F8013A1, 2, p0, p1);
	}
	Any get_shop_ped_outfit_prop(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6C767148, 2, p0, p1);
	}
	Any get_shop_ped_outfit_component(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x99EE4570, 2, p0, p1);
	}
	Any _0x8EAF9CF6()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8EAF9CF6, 0);
	}
	Any get_dlc_vehicle_model(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA2201E09, 1, p0);
	}
	Any get_dlc_vehicle_data(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCF428FA4, 2, p0, p1);
	}
	Any get_dlc_vehicle_flags(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAB12738C, 1, p0);
	}
	Any _0x2B757E6C()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2B757E6C, 0);
	}
	Any get_dlc_weapon_data(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD88EC8EA, 2, p0, p1);
	}
	Any _0x476B23A9(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x476B23A9, 1, p0);
	}
	Any get_dlc_weapon_component_data(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4B83FCAF, 3, p0, p1, p2);
	}
	Any _0x06396058(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x06396058, 1, p0);
	}
	// 0x38F030D8 -- no params/results data
	// 0x53B1C2C2 -- no params/results data
	// 0x4549A9A4 -- no params/results data
	// 0x92ED22D2 -- no params/results data

	BOOL is_dlc_present(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<BOOL>(0x1F321943, 1, p0);
	}
	Any _0x881B1FDB()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x881B1FDB, 0);
	}
	// 0x11427401 -- no params/results data
	// 0x3BD3F458 -- no params/results data
	Any _0xF79A97F5()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xF79A97F5, 0);
	}
	Any _0x517B601B()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x517B601B, 0);
	}
	Any _0x6087C10C(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6087C10C, 2, p0, p1);
	}

	void wait(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7715C03B, 1, p0);
	}
	// WAITUNWARPED -- no params/results data
	// WAITUNPAUSED -- no params/results data
	int start_new_script(char* name, int stack)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0x3F166D0E, 2, name, stack);
	}
	int start_new_script_with_args(char* name, Any p1, Any p2, Any p3)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<int>(0x4A2100E4, 4, name, p1, p2, p3);
	}
	Any timera()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x45C8C188, 0);
	}
	Any timerb()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x330A9C0C, 0);
	}
	void settimera(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x35785333, 1, p0);
	}
	void settimerb(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x27C1B7C6, 1, p0);
	}
	Any timestep()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x50597EE2, 0);
	}
	Any sin(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBF987F58, 1, p0);
	}
	Any cos(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x00238FE9, 1, p0);
	}
	Any sqrt(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x145C7701, 1, p0);
	}
	Any pow(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x85D134F8, 2, p0, p1);
	}
	Any vmag(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1FCF1ECD, 3, p0, p1, p2);
	}
	Any vmag2(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE796E629, 3, p0, p1, p2);
	}
	Any vdist(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3C08ECB7, 6, p0, p1, p2, p3, p4, p5);
	}
	Any vdist2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC85DEF1F, 6, p0, p1, p2, p3, p4, p5);
	}
	Any shift_left(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x314CC6CD, 2, p0, p1);
	}
	Any shift_right(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x352633CA, 2, p0, p1);
	}
	Any floor(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x32E9BE04, 1, p0);
	}
	Any ceil(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD536A1DF, 1, p0);
	}
	Any round(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x323B0E24, 1, p0);
	}
	float to_float(int p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<float>(0x67116627, 1, p0);
	}
	void clear_text_label(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xA66AAE8F, 1, p0);
	}

	Any _0xBBAEEF94(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xBBAEEF94, 3, p0, p1, p2);
	}
	Any _0x8E101F5C(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8E101F5C, 3, p0, p1, p2);
	}
	Any _0xDB718B21(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDB718B21, 3, p0, p1, p2);
	}
	Any _0xDBCE51E0(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDBCE51E0, 2, p0, p1);
	}
	Any _0xDDDE59B5(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDDDE59B5, 2, p0, p1);
	}
	Any _0x74EF9C40(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x74EF9C40, 2, p0, p1);
	}
	Any _0xE0E2640B(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE0E2640B, 2, p0, p1);
	}
	void _0x68BD42A9(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x68BD42A9, 2, p0, p1);
	}
	Any _0x7CF0971D(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x7CF0971D, 2, p0, p1);
	}
	void _0x7F3F1C02()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7F3F1C02, 0);
	}

	Any _0x6BE5DF29()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6BE5DF29, 0);
	}
	Any _0x5ECF955D(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x5ECF955D, 1, p0);
	}
	Any _0xD1ED1D48(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD1ED1D48, 1, p0);
	}
	Any _0x19EE0CCB(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x19EE0CCB, 1, p0);
	}
	Any sc_inbox_message_get_data_int(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x88068C7C, 3, p0, p1, p2);
	}
	Any sc_inbox_message_get_data_float(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6A67FC31, 3, p0, p1, p2);
	}
	Any sc_inbox_message_get_data_string(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x15607620, 3, p0, p1, p2);
	}
	Any _0xEBE420A4(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xEBE420A4, 1, p0);
	}
	Any _0x2C959AF9(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x2C959AF9, 1, p0);
	}
	void _0x0B9A3512(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x0B9A3512, 1, p0);
	}
	void _0x75324674(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x75324674, 1, p0);
	}
	Any sc_inbox_message_get_ugcdata(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x88CA3BFC, 2, p0, p1);
	}
	Any _0xCABD136A(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCABD136A, 3, p0, p1, p2);
	}
	Any _0x628F489B(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x628F489B, 1, p0);
	}
	Any _0xAB3346B5(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAB3346B5, 2, p0, p1);
	}
	void _0x2FB9F53C(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x2FB9F53C, 1, p0);
	}
	Any _0x6C5738AB()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x6C5738AB, 0);
	}
	Any _0x468668F0()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x468668F0, 0);
	}
	Any _0x90C74343(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x90C74343, 2, p0, p1);
	}
	// 0x94BF0D35 -- no params/results data
	Any _0x3ACE6D6B(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x3ACE6D6B, 2, p0, p1);
	}
	// 0x85488C49 -- no params/results data
	// 0x467F4CAA -- no params/results data
	// 0xEB2D93B3 -- no params/results data
	Any _0x579B4510(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x579B4510, 2, p0, p1);
	}
	// 0xF8BDA989 -- no params/results data
	// 0x515AF67C -- no params/results data
	Any _0xDF45B2A7(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDF45B2A7, 1, p0);
	}
	// 0x2AE35169 -- no params/results data
	// 0x2C2B0C46 -- no params/results data
	// 0xFC50151C -- no params/results data
	Any _0xDF084A6B(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xDF084A6B, 2, p0, p1);
	}
	Any _0xFFED3676(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xFFED3676, 1, p0);
	}
	Any _0xA796D7A7(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA796D7A7, 1, p0);
	}
	Any _0x09497F31(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x09497F31, 1, p0);
	}
	Any _0x4D8A6521(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4D8A6521, 1, p0);
	}
	Any _0xC96456BA()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xC96456BA, 0);
	}
	// 0xC5E08B66 -- no params/results data
	// 0x04EE74A3 -- no params/results data
	// 0x8DA93C3D -- no params/results data
	// 0x37DD48B5 -- no params/results data
	// 0xF929F61D -- no params/results data
	// 0x0572EB5E -- no params/results data
	Any _0x8E7AEEB7(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8E7AEEB7, 1, p0);
	}
	// 0x28C57FA0 -- no params/results data
	// 0x59394583 -- no params/results data
	// 0x92452C0E -- no params/results data
	// 0xBBA8D34D -- no params/results data
	// 0xB21288FA -- no params/results data
	Any _0xE778B2A7(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xE778B2A7, 3, p0, p1, p2);
	}
	// 0x7E24BD6E -- no params/results data
	Any _0xCE7D50A8(Any p0, Any p1, Any p2)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xCE7D50A8, 3, p0, p1, p2);
	}
	Any _0xD26CCA46(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD26CCA46, 2, p0, p1);
	}
	Any _0xA3EFE4A1(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xA3EFE4A1, 1, p0);
	}
	Any _0x24D84334(Any p0)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x24D84334, 1, p0);
	}
	Any _0x8A023024(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x8A023024, 2, p0, p1);
	}
	Any _0x1C65B038()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x1C65B038, 0);
	}
	Any _0x4D4C37B3()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x4D4C37B3, 0);
	}
	Any _0xAED95A6F(Any p0, Any p1)
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xAED95A6F, 2, p0, p1);
	}
	// 0xF1D464E5 -- no params/results data
	// 0xEFB078AA -- no params/results data
	void _0x486867E6()
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x486867E6, 0);
	}

	Any _0x106C8317()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x106C8317, 0);
	}
	Any _0xD87F3A9E()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0xD87F3A9E, 0);
	}
	void _0xC0B971EA(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0xC0B971EA, 1, p0);
	}
	Any _0x94BCAC7C()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x94BCAC7C, 0);
	}
	void _0x7D90EEE5(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x7D90EEE5, 1, p0);
	}
	void _0x5C350D78(Any p0)
	{
		NativeCall l_NativeCall;
		l_NativeCall.Invoke<Void>(0x5C350D78, 1, p0);
	}
	Any _0x9451EFE7()
	{
		NativeCall l_NativeCall;
		return l_NativeCall.Invoke<Any>(0x9451EFE7, 0);
	}
