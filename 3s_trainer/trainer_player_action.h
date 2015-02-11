#ifndef __PLAYER_ACTION_H__
#define __PLAYER_ACTION_H__

void trainer_player_variation_action();
void trainer_player_prop_action();
void trainer_player_wanted_action();
void trainer_player_health_action();
void trainer_player_weapons_action();
void trainer_give_all_weapons( Ped player_ped );
void trainer_player_special_action();
void trainer_player_settings_action();
void trainer_ped_clone( Ped player_ped, bool clone_all_weapons, bool clone_group, bool clone_group_invincible );
void trainer_set_relationships( Hash *group_hash );
void trainer_player_weapons_give_action();
void trainer_player_weapons_explosion_action();
void trainer_player_variation_set_action();

#endif