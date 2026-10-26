s32 func_080D6EAC(void *);                            /* extern */
s32 func_080D6F7C(void *, u32, u32);                  /* extern */

void func_080D7014(void *arg0, u32 arg1, u32 arg2) {
    u32 sp0;
    u32 sp4;
    u32 *var_r2;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 var_r1;
    u32 var_r1_2;

    sp0 = arg2;
    if ((arg1 <= 0x7FU) && (arg2 != 0)) {
        if ((arg1 == 0) && (arg2 > 0x7FU)) {
            func_080D6EAC(arg0);
            return;
        }
        if (arg1 <= 0x3FU) {
            temp_r0 = 0x40 - arg1;
            sp4 = temp_r0;
            var_r2 = &sp0;
            if (sp0 > temp_r0) {
                var_r2 = &sp4;
            }
            func_080D6F7C(arg0 + 4, arg1, *var_r2);
        }
        temp_r0_2 = arg1 + sp0;
        if (temp_r0_2 > 0x40U) {
            var_r1 = 0;
            if (arg1 > 0x3FU) {
                var_r1 = arg1 - 0x40;
            }
            func_080D6F7C(arg0 + 0x10, var_r1, (temp_r0_2 - 0x40) - var_r1);
        }
        var_r1_2 = 0;
        if (arg0->unk4 != 0) {
            var_r1_2 = (u32) (0 - arg0->unk10) >> 0x1F;
        }
        arg0->unk0 = (s8) var_r1_2;
        arg0->unk1 = 0;
    }
}
