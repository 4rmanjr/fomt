s32 func_0805DF68(?, s32, s32, s32, s32);             /* extern */

void func_0805DEC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 sp4;
    s32 temp_r0;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;

    var_r6 = arg1;
    sp4 = arg2;
    var_r8 = arg4;
    if (arg5 > 1) {
        var_r4 = arg5 - 1;
        var_r5 = 0xA;
        if (var_r4 > 1) {
            do {
                var_r5 *= 0xA;
                var_r4 -= 1;
            } while (var_r4 > 1);
        }
        var_r4_2 = var_r5;
    } else {
        var_r4_2 = 1;
    }
    var_r7 = 0;
    if (var_r4_2 > 0) {
        do {
            if (var_r4_2 == 1) {
                var_r7 = 1;
            }
            temp_r0 = var_r8 / var_r4_2;
            if ((temp_r0 != 0) || (var_r7 != 0)) {
                func_0805DF68(arg0, var_r6, sp4, temp_r0, arg3);
                var_r7 = 1;
            }
            var_r6 += 8;
            var_r8 -= var_r4_2 * temp_r0;
            var_r4_2 = var_r4_2 / 10;
        } while (var_r4_2 > 0);
    }
    if (arg6 != 0) {
        func_0805DF68(arg0, var_r6, sp4, arg6, arg3);
    }
}
