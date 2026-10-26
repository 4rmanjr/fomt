#include "common.h"
s32 func_080CFEA8(s32, s32, s32, s32, s32);           /* extern */
s32 method_0800AF5C__C9FieldPlotPC9FieldPlotT1(s32, s32, s32); /* extern */

void func_080CFFC0(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 sp4;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r7;
    s32 var_r0;
    s32 var_r0_10;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r0_8;
    s32 var_r0_9;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r4;

    temp_r2 = arg0 + 0x94;
    *(temp_r2 + ((arg1 + (arg2 * 0xC)) * 4)) = *arg3;
    temp_r1 = arg2 - 1;
    var_r0 = 0;
    if ((arg1 >= 0) && (temp_r1 >= 0) && (arg1 <= 0xB) && (temp_r1 <= 6)) {
        var_r0 = 1;
    }
    if (var_r0 != 0) {
        var_r0_2 = temp_r2 + ((arg1 + (temp_r1 * 0xC)) * 4);
    } else {
        var_r0_2 = 0;
    }
    temp_r7 = arg0 + 0x94;
    temp_r1_2 = arg2 - 1;
    var_r4 = arg1 * 2;
    if (var_r0_2 != 0) {
        temp_r0 = ((arg1 + (temp_r1_2 * 0xC)) * 4) + temp_r7;
        var_r0_3 = 0;
        if ((arg1 >= 0) && (arg2 >= 0) && (arg1 <= 0xB) && (arg2 <= 6)) {
            var_r0_3 = 1;
        }
        if (var_r0_3 != 0) {
            var_r1 = temp_r7 + ((arg1 + (arg2 * 0xC)) * 4);
        } else {
            var_r1 = 0;
        }
        temp_r3 = temp_r1_2 - 1;
        var_r0_4 = 0;
        if ((arg1 >= 0) && (temp_r3 >= 0) && (arg1 <= 0xB) && (temp_r3 <= 6)) {
            var_r0_4 = 1;
        }
        if (var_r0_4 != 0) {
            var_r2 = temp_r7 + ((arg1 + (temp_r3 * 0xC)) * 4);
        } else {
            var_r2 = 0;
        }
        var_r4 = arg1 * 2;
        func_080CFEA8(arg0, var_r4, (temp_r1_2 * 2) + 7, temp_r0, method_0800AF5C__C9FieldPlotPC9FieldPlotT1(temp_r0, var_r1, var_r2));
    }
    temp_r0_2 = ((arg1 + (arg2 * 0xC)) * 4) + temp_r7;
    temp_r2_2 = arg2 + 1;
    var_r0_5 = 0;
    sp4 = arg2 * 2;
    if ((arg1 >= 0) && (temp_r2_2 >= 0) && (arg1 <= 0xB) && (temp_r2_2 <= 6)) {
        var_r0_5 = 1;
    }
    if (var_r0_5 != 0) {
        var_r1_2 = temp_r7 + ((arg1 + (temp_r2_2 * 0xC)) * 4);
    } else {
        var_r1_2 = 0;
    }
    var_r0_6 = 0;
    if ((arg1 >= 0) && (temp_r1_2 >= 0) && (arg1 <= 0xB) && (temp_r1_2 <= 6)) {
        var_r0_6 = 1;
    }
    if (var_r0_6 != 0) {
        var_r2_2 = temp_r7 + ((arg1 + (temp_r1_2 * 0xC)) * 4);
    } else {
        var_r2_2 = 0;
    }
    func_080CFEA8(arg0, var_r4, sp4 + 7, temp_r0_2, method_0800AF5C__C9FieldPlotPC9FieldPlotT1(temp_r0_2, var_r1_2, var_r2_2));
    var_r0_7 = 0;
    if ((arg1 >= 0) && (temp_r2_2 >= 0) && (arg1 <= 0xB) && (temp_r2_2 <= 6)) {
        var_r0_7 = 1;
    }
    if (var_r0_7 != 0) {
        var_r0_8 = temp_r7 + ((arg1 + (temp_r2_2 * 0xC)) * 4);
    } else {
        var_r0_8 = 0;
    }
    if (var_r0_8 != 0) {
        temp_r0_3 = ((arg1 + (temp_r2_2 * 0xC)) * 4) + temp_r7;
        temp_r1_3 = temp_r2_2 + 1;
        var_r0_9 = 0;
        if ((arg1 >= 0) && (temp_r1_3 >= 0) && (arg1 <= 0xB) && (temp_r1_3 <= 6)) {
            var_r0_9 = 1;
        }
        if (var_r0_9 != 0) {
            var_r1_3 = temp_r7 + ((arg1 + (temp_r1_3 * 0xC)) * 4);
        } else {
            var_r1_3 = 0;
        }
        temp_r3_2 = temp_r2_2 - 1;
        var_r0_10 = 0;
        if ((arg1 >= 0) && (temp_r3_2 >= 0) && (arg1 <= 0xB) && (temp_r3_2 <= 6)) {
            var_r0_10 = 1;
        }
        if (var_r0_10 != 0) {
            var_r2_3 = temp_r7 + ((arg1 + (temp_r3_2 * 0xC)) * 4);
        } else {
            var_r2_3 = 0;
        }
        func_080CFEA8(arg0, var_r4, (temp_r2_2 * 2) + 7, temp_r0_3, method_0800AF5C__C9FieldPlotPC9FieldPlotT1(temp_r0_3, var_r1_3, var_r2_3));
    }
}

