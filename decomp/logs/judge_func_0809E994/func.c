#include "common.h"
extern s32 memory;
void func_0809E994(s32 arg0, s32 arg1) {
    u8 buf[8];
    u32 *b = (u32 *)buf;
    arg1 <<= 3;
    /* buf[0] &= ~0x10 (hand-asm: ldrb/movs/negs/ands/strb) */
    __asm__ volatile (
        "mov r4, sp\n\tldrb r3, [r4]\n\tmov r2, #0x10\n\tneg r2, r2\n\tand r2, r3\n\tstrb r2, [r4]"
        : : : "r2", "r3", "r4", "memory");
    arg1 += arg0;
    __asm__ volatile ("ldm %0!, {r2, r3}\n\tstm %1!, {r2, r3}" : "+l" (b), "+l" (arg1) : : "r2", "r3", "memory");
}

