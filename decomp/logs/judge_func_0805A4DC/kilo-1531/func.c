#include "common.h"
s32 func_0805A63C(void *, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_0805A6E4(void *, s32, s32, s32, s32);        /* extern */

void func_0805A4DC(void *arg0, s32 arg1) {
    s32 var_r4;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r7;
    void *var_r4_2;

    arg0->unkBD8 = 0;
    if (arg1 == 0) {
        func_0805A6E4(arg0, 0x10, 4, 0x18, 1);
        func_0805A63C(arg0, 0x28, 4, 1, arg0->unk1414, 0xA, 0xC);
    } else {
        var_r4 = 0;
        var_r6 = 8;
        do {
            func_0805A6E4(arg0, var_r6, 4, var_r4 + 0xD, 1);
            var_r6 += 8;
            var_r4 += 1;
        } while (var_r4 <= 0xA);
        func_0805A63C(arg0, 0x88, 4, 1, arg0->unk1418, 5, 0xA);
        func_0805A63C(arg0, 0xA0, 0x78, 2, (s32) arg0->unk141E, 4, 0xA);
        func_0805A6E4(arg0, 0, (arg0->unk13FE * 0x10) + 0x30, 0x18, 2);
    }
    func_0805A63C(arg0, 0x20, 0x20, 2, arg0->unk141C + 1, 1, 0);
    var_r4_2 = arg0 + 0x142C;
    var_r6_2 = 0x30;
    var_r7 = 3;
    do {
        func_0805A6E4(arg0, 0x88, var_r6_2, 0xB, 2);
        func_0805A63C(arg0, 0x90, var_r6_2, 2, (s32) var_r4_2->unk28, 2, 0xA);
        func_0805A63C(arg0, 0xC0, var_r6_2, 2, (s32) var_r4_2->unk2A, 2, 0xA);
        var_r6_2 += 0x10;
        var_r7 -= 1;
        var_r4_2 += 0x2C;
    } while (var_r7 >= 0);
}

