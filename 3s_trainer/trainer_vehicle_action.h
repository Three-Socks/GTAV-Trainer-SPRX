#ifndef __VEHICLE_ACTION_H__
#define __VEHICLE_ACTION_H__

Vehicle trainer_get_vehicle();
void trainer_error_vehicle( int menu_level_back );
void trainer_vehicle_spawn_action();
void trainer_spawn_veh( Hash vehicle_hash );
void trainer_vehicle_repair_action();
void trainer_vehicle_max();
void trainer_vehicle_min();
void trainer_vehicle_customize_action();
void trainer_vehicle_extra_action();
void trainer_vehicle_colour_action();
void trainer_vehicle_multipliers_action();

#endif