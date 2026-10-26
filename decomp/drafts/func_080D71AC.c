s32 func_080D6F0C();                                  /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk4;
    s32 unk8;
} GenObj;
void func_080D71AC(GenObj *arg0, u32 arg1, u32 arg2) {
    u32 sp0;
    u32 sp4;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r2;
    s8 var_r2_2;
    u32 *var_r5;
    u32 temp_r0;
    u32 temp_r0_2;

    sp0 = arg2;
    if ((arg1 <= 0x3FU) && (arg2 != 0)) {
        if ((arg1 == 0) && (arg2 > 0x3FU)) {
            func_080D6F0C();
            return;
        }
        if (arg1 <= 0x1FU) {
            temp_r0 = 0x20 - arg1;
            sp4 = temp_r0;
            var_r5 = &sp0;
            if (arg2 > temp_r0) {
                var_r5 = &sp4;
            }
            arg0->unk4 = (s32) (arg0->unk4 & ~(((1 << *var_r5) - 1) << arg1));
        }
        temp_r0_2 = arg1 + arg2;
        if (temp_r0_2 > 0x20U) {
            var_r2 = 0;
            if (arg1 > 0x1FU) {
                var_r2 = arg1 - 0x20;
            }
            arg0->unk8 = (s32) (arg0->unk8 & ~(((1 << ((temp_r0_2 - 0x20) - var_r2)) - 1) << var_r2));
        }
        arg0->unk0 = 0;
        var_r2_2 = 0;
        var_r1 = 0;
        if (arg0->unk4 == 0) {
            var_r1 = 1;
        }
        if (var_r1 != 0) {
            var_r1_2 = 0;
            if (arg0->unk8 == 0) {
                var_r1_2 = 1;
            }
            if (var_r1_2 != 0) {
                var_r2_2 = 1;
            }
        }
        arg0->unk1 = var_r2_2;
    }
}
