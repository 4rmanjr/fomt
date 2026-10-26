#include "common.h"
s32 Unpack(s32, u16 *);                               /* extern */
s32 free(u16 *);                                      /* extern */
u16 *func_080D3BC0(s32);                            /* extern */
u16 *malloc(s32);                                   /* extern */

void func_0806EB70(s32 arg1, s32 arg2) {
    u16 *sp0;
    u16 *sp4;
s32 sp8;
    u16 *spC;
    u16 sp14;
    s32 var_r2;
    u16 *temp_ip;
    u16 *var_r1;
    u16 *var_r3;
    u32 var_r1_2;
    u32 var_r2_2;

    if (arg2 != 0) {
        sp0 = 0;
        sp4 = 0;
        sp8.unk4 = 0;
        var_r1 = malloc(0x1600);
        if (var_r1 == 0) {
            var_r1 = func_080D3BC0(0x1600);
        }
        sp0 = var_r1;
        sp4 = var_r1;
        spC = var_r1 + 0x1600;
        sp14 = 0;
        var_r2 = 0xB00;
        do {
            *var_r1 = sp14;
            var_r2 -= 1;
            var_r1 += 2;
        } while (var_r2 != 0);
        sp0.unk4 = var_r1;
        Unpack(arg2, sp0);
        var_r3 = sp0;
        var_r1_2 = 0;
        temp_ip = var_r3;
        do {
            var_r2_2 = 0;
loop_7:
            *(((((var_r1_2 >> 5) * 2) + (var_r2_2 >> 5) + arg1) << 0xB) + (((var_r1_2 & 0x1F) << 6) + 0x06000000) + ((var_r2_2 & 0x1F) * 2)) = *var_r3;
            var_r3 += 2;
            var_r2_2 += 1;
            if (var_r2_2 <= 0x3FU) {
                goto loop_7;
            }
            var_r1_2 += 1;
        } while (var_r1_2 <= 0x2BU);
        if (temp_ip != 0) {
            free(temp_ip);
        }
    }
}

