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
//#include "ScriptMachine\scrThread.h"


//#include "ThreadArray.h"



#include <cstdlib>
#include <string.h>

static void* malloc(uint32_t a_uiSize) { return std::malloc(a_uiSize); }
static void free(void* a_Addr) { std::free(a_Addr); }

extern int float_int(float f);

#endif