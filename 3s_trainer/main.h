#ifndef __MAIN_H__
#define __MAIN_H__

#include <cellstatus.h>
#include <sys/prx.h>

#include <sys/ppu_thread.h>

// for native hook
#include <sys/syscall.h>
#include <sys/ppu_thread.h>
#include <cell/sysmodule.h>
#include <sys/ss_get_open_psid.h>
#pragma comment(lib, "sysmodule_stub")

#pragma comment(lib, "c")
//

#include <cell/cell_fs.h>
#pragma comment(lib, "fs_stub")
#include <fastmath.h>

#include <sys/process.h>
#include <ppu_intrinsics.h>

#include <math.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <sys/memory.h>
#include <sys/timer.h>
#include <vector>

#include "memory.h"

// ScriptMachine
#include "ScriptMachine\Natives.h"
#include "ScriptMachine\NativeArg.h"
#include "ScriptMachine\NativeCall.h"

typedef void (*CallbackType)();

#include "globals.h"
#include "menu_base.h"

#include "trainer_player.h"
#include "trainer_player_action.h"
#include "trainer_vehicle.h"
#include "trainer_vehicle_action.h"


#include <cstdlib>
#include <string>

#define Sleep(milliseconds)		sys_timer_usleep(milliseconds * 1000)
typedef void* PVOID;

static void* malloc(uint32_t a_uiSize) { return std::malloc(a_uiSize); }
static void free(void* a_Addr) { std::free(a_Addr); }

extern int float_int(float f);

extern int Memcpy(PVOID destination, const PVOID source, size_t size);
extern void HookNative(int native, int Destination);

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
extern void hook_func();
extern void MainThread(uint64_t);
extern "C" int FakeExportFunction();
extern "C" int EntryPoint();

#endif