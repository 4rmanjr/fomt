s32 __builtin_new(s32);                             /* extern */
s32 func_0803AEA0(s32, void *, s32, s32, s32);      /* extern */
s32 func_0803B0A8(s32, s32);                          /* extern */

void func_0801FAC8(void *arg0, s32 arg1) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r5;
    s32 var_r7;
    s32 var_r8;
    u32 var_r3;
    void **var_r1;
    void *temp_r0;
    void *temp_r2;

    var_r8 = 0;
    if (arg1 != 0) {
        if (arg1 == 1) {
            var_r8 = arg0 + 0xED4;
        }
    } else {
        var_r8 = arg0 + 0xEA4;
    }
    if (var_r8 != 0) {
        var_r7 = 0x20;
        temp_r5 = *arg0->unk4;
        if (temp_r5 == 2) {
            var_r3 = 0;
            var_r1 = arg0 + 8;
            temp_r2 = arg0 + 0x198;
            if (var_r1 != temp_r2) {
                do {
                    temp_r0 = *var_r1;
                    if ((temp_r0 != 0) && (temp_r0->unk4 == temp_r5)) {
                        var_r3 += 1;
                    }
                    var_r1 += 4;
                } while (var_r1 != temp_r2);
            }
            if ((u32) (var_r3 + 0xA) > 0xAU) {
                if (var_r3 <= 0x15U) {
                    var_r7 = 0x20 - var_r3;
                } else {
                    var_r7 = 0xA;
                }
            }
        }
        temp_r0_2 = func_0803AEA0(__builtin_new(0x46C), arg0, var_r8, arg1, var_r7);
        temp_r0_3 = arg0->unk107C;
        if ((temp_r0_2 != temp_r0_3) && (temp_r0_3 != 0)) {
            func_0803B0A8(temp_r0_3, 3);
        }
        arg0->unk107C = temp_r0_2;
    }
}
