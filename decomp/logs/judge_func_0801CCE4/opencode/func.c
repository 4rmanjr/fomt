#include "common.h"
s32 func_080AA6D0(s32, s32, s32, s32, s32);           /* extern */
s32 method_0800A33C__9FieldPloti(s32, s32);         /* extern */
s32 method_0800AF5C__C9FieldPlotPC9FieldPlotT1(s32, s32, s32); /* extern */

s32 func_0801CCE4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp4;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r3;
    s32 temp_r6;
    s32 temp_sl;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r2;

    temp_r6 = (arg1 + (0x2B * arg2)) * 4;
    temp_r2 = arg0->unk1038 + 0x9DC + temp_r6;
    sp4 = method_0800A33C__9FieldPloti(temp_r2, arg3);
    if (arg0->unk0->unk14(arg0) == 2) {
        temp_sl = arg0->unk4;
        temp_r2_2 = arg0->unk1038 + 0x9DC;
        temp_r1 = arg2 + 1;
        var_r0 = 0;
        if ((arg1 >= 0) && (temp_r1 >= 0) && (arg1 <= 0x2A) && (temp_r1 <= 0x18)) {
            var_r0 = 1;
        }
        if (var_r0 != 0) {
            var_r1 = temp_r2_2 + ((arg1 + (temp_r1 * 0x2B)) * 4);
        } else {
            var_r1 = 0;
        }
        temp_r3 = arg2 - 1;
        var_r0_2 = 0;
        if ((arg1 >= 0) && (temp_r3 >= 0) && (arg1 <= 0x2A) && (temp_r3 <= 0x18)) {
            var_r0_2 = 1;
        }
        if (var_r0_2 != 0) {
            var_r2 = temp_r2_2 + ((arg1 + (temp_r3 * 0x2B)) * 4);
        } else {
            var_r2 = 0;
        }
        func_080AA6D0(temp_sl, (arg1 * 2) + 0x22, (arg2 * 2) + 0x16, temp_r2, method_0800AF5C__C9FieldPlotPC9FieldPlotT1(temp_r2_2 + temp_r6, var_r1, var_r2));
    }
    return sp4;
}

