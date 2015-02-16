#ifndef __MAIN_H__
#define __MAIN_H__

#include <cellstatus.h>
#include <sys/prx.h>

#include <sys/ppu_thread.h>

//#include <math.h>
#include <fastmath.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <sys/memory.h>
#include <sys/timer.h>
#include <sys/types.h>
#include <vector>

#include "memory.h"

// ScriptMachine
#include "ScriptMachine\Natives.h"
#include "ScriptMachine\NativeArg.h"
#include "ScriptMachine\NativeCall.h"
#include "ScriptMachine\scrThread.h"


#include "ThreadArray.h"

typedef void (*CallbackType)();

#include "globals.h"
#include "menu_base.h"

#include "trainer_player.h"
#include "trainer_player_action.h"
#include "trainer_vehicle.h"
#include "trainer_vehicle_action.h"


#include <cstdlib>
#include <string>

static void* malloc(uint32_t a_uiSize) { return std::malloc(a_uiSize); }
static void free(void* a_Addr) { std::free(a_Addr); }

//extern uint32_t float_int(float f);
//extern uint16_t ConvertFloatToHalf(const float val);

extern void trainer_loop_checks();
extern void trainer_load_pressed();
extern void trainer_catch_load_button_press();

extern void menu_set();
extern void trainer_level_0();
extern void trainer_level_1();
extern void trainer_level_2();
extern void trainer_level_3();
extern void trainer_toggle_bool();
extern void trainer_main_action_level_1();
extern void trainer_main_2_action_level_2();
extern void trainer_main_3_action_level_2();
extern void trainer_catch_button_press();
extern void trainer_setup();
extern void project_close();
extern void CallNativesHere();
extern void MainThread(uint64_t);
extern "C" int FakeExportFunction();
extern "C" int EntryPoint();

#endif