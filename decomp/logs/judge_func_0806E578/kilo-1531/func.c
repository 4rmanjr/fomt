#include "common.h"
s32 func_0806E78C(void *, s32, s32, s32, s32);        /* extern */

void func_0806E578(void *arg0) {
    s32 sp4;
    s32 sp18;
    s32 sp20;
    s32 *var_r0;
    s32 *var_r0_2;
    s32 *var_r0_3;
    s32 *var_r0_4;
    s32 *var_r7;
    s32 temp_r3;
    s32 temp_r5;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r1_5;
    s32 var_r4;
    s32 var_r4_3;
    s32 var_r4_4;
    s32 var_r4_5;
    s32 var_r4_6;
    s32 var_r4_7;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r5_3;
    s32 var_r5_4;
    s32 var_r5_5;
    s32 var_r7_2;
    s32 var_r8;
    s32 var_sb;
    s8 temp_r0;
    s8 var_r0_5;
    u32 var_r4_2;

    arg0->unk446 = 0;
    temp_r0 = (s8) arg0->unk449;
    switch (temp_r0) {                              /* irregular */
    case 0:
        var_r1 = 0xF;
        var_r0 = &sp18;
        do {
            *var_r0 = var_r1;
            var_r1 -= 1;
            var_r0 -= 4;
        } while ((s32) var_r0 >= (s32) &sp4);
        break;
    case 4:
        var_r1_2 = 0x15;
        var_r0_2 = &sp18;
        do {
            *var_r0_2 = var_r1_2;
            var_r1_2 -= 1;
            var_r0_2 -= 4;
        } while ((s32) var_r0_2 >= (s32) &sp4);
        break;
    case 8:
        var_r1_3 = 0x1B;
        var_r0_3 = &sp18;
        do {
            *var_r0_3 = var_r1_3;
            var_r1_3 -= 1;
            var_r0_3 -= 4;
        } while ((s32) var_r0_3 >= (s32) &sp4);
        break;
    default:
        var_r1_4 = 0x21;
        var_r0_4 = &sp18;
        do {
            *var_r0_4 = var_r1_4;
            var_r1_4 -= 1;
            var_r0_4 -= 4;
        } while ((s32) var_r0_4 >= (s32) &sp4);
        break;
    }
    var_r0_5 = (s8) ((s8) arg0->unk44A / 10);
    if (var_r0_5 == 0) {
        var_r0_5 = 0x1A;
    }
    sp4.unk18 = (s32) var_r0_5;
    sp20 = (s32) (s8) ((s8) arg0->unk44A % 10);
    var_r7 = &sp4;
    var_r5 = 0x78;
    var_r4 = 5;
    do {
        temp_r3 = *var_r7;
        var_r7 += 4;
        func_0806E78C(arg0, var_r5, 8, temp_r3, 1);
        var_r5 += 8;
        var_r4 -= 1;
    } while (var_r4 >= 0);
    var_r4_2 = 1;
    func_0806E78C(arg0, 0xC0, 8, sp1C, 1);
    func_0806E78C(arg0, 0xC8, 8, sp20, 1);
    var_r1_5 = 0;
    do {
        var_sb = 0;
        temp_r5 = var_r1_5 * 0x12;
        var_r8 = 0x18;
        var_r7_2 = 0x10;
loop_23:
        if (var_r4_2 > 9U) {
            func_0806E78C(arg0, var_r7_2, temp_r5 + 0x40, (s32) (u8) (var_r4_2 / 10U), 3);
        }
        func_0806E78C(arg0, var_r8, temp_r5 + 0x40, (s32) (u8) (var_r4_2 % 10U), 3);
        var_r4_2 = (u32) (u8) (var_r4_2 + 1);
        if (var_r4_2 <= 0x1EU) {
            var_r8 += 0x20;
            var_r7_2 += 0x20;
            var_sb += 1;
            if (var_sb <= 6) {
                goto loop_23;
            }
        }
        var_r1_5 += 1;
    } while (var_r1_5 <= 4);
    var_r4_3 = 0;
    do {
        func_0806E78C(arg0, var_r4_3 * 8, 0x28, var_r4_3 + 0xA, 3);
        var_r4_3 += 1;
    } while (var_r4_3 <= 5);
    var_r4_4 = 0;
    var_r5_2 = 0x40;
    do {
        func_0806E78C(arg0, var_r5_2, 0x28, var_r4_4 + 0x10, 3);
        var_r5_2 += 8;
        var_r4_4 += 1;
    } while (var_r4_4 <= 5);
    var_r4_5 = 0;
    var_r5_3 = 0x80;
    do {
        func_0806E78C(arg0, var_r5_3, 0x28, var_r4_5 + 0x16, 3);
        var_r5_3 += 8;
        var_r4_5 += 1;
    } while (var_r4_5 <= 5);
    var_r4_6 = 0;
    var_r5_4 = 0xC0;
    do {
        func_0806E78C(arg0, var_r5_4, 0x28, var_r4_6 + 0x1C, 3);
        var_r5_4 += 8;
        var_r4_6 += 1;
    } while (var_r4_6 <= 5);
    var_r4_7 = 0;
    var_r5_5 = 8;
    do {
        func_0806E78C(arg0, var_r5_5, 8, var_r4_7 + 0x23, 3);
        var_r5_5 += 8;
        var_r4_7 += 1;
    } while (var_r4_7 <= 7);
}

