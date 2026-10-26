#include "common.h"
extern s32 memory;
void func_080D0EBC(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    __asm__ volatile ("stm %0!, {r0, r1, r2}" : "+l" (arg3) : : "memory");
}

