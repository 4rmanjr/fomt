void *func_080E2354(void *);                        /* extern */
s32 func_080E2EA4(void **, void *, void *, void *, void *, s32); /* extern */

void *func_080E2F74(void *arg0, void *arg1, void *arg2) {
    void *sp8;
    void *spC;
    void *sp10;
    s32 var_r0;
    s32 var_r1;
    s32 var_r3;
    s8 var_sb;
    u8 temp_r0;
    u8 temp_r1;
    u8 temp_r2;
    u8 temp_r2_2;
    void *temp_r0_2;
    void *var_r0_2;
    void *var_r4;
    void *var_r5;

    var_r5 = arg1->unk4;
    var_r4 = var_r5->unk4;
    var_r0 = 1;
    if (var_r4 != 0) {
        temp_r2 = arg2->unk0;
        do {
            var_r5 = var_r4;
            var_r3 = 0;
            temp_r0 = var_r5->unk10;
            if (((u32) temp_r2 < (u32) temp_r0) || (((u32) temp_r0 >= (u32) temp_r2) && ((u32) arg2->unk1 < (u32) (var_r5 + 0x10)->unk1))) {
                var_r3 = 1;
            }
            var_r0 = var_r3;
            if (var_r0 != 0) {
                var_r4 = var_r4->unk8;
            } else {
                var_r4 = var_r4->unkC;
            }
        } while (var_r4 != 0);
    }
    sp8 = var_r5;
    if (var_r0 != 0) {
        temp_r0_2 = arg1->unk4->unk8;
        spC = temp_r0_2;
        var_r1 = 0;
        if (var_r5 == temp_r0_2) {
            var_r1 = 1;
        }
        if (var_r1 != 0) {
            func_080E2EA4(&sp10, arg1, var_r4, var_r5, arg2, 0);
            var_r0_2 = sp10;
            goto block_22;
        }
        sp8 = func_080E2354(var_r5);
        goto block_16;
    }
block_16:
    var_sb = 0;
    temp_r2_2 = sp8->unk10;
    temp_r1 = arg2->unk0;
    if (((u32) temp_r2_2 < (u32) temp_r1) || (((u32) temp_r1 >= (u32) temp_r2_2) && ((u32) (sp8 + 0x10)->unk1 < (u32) arg2->unk1))) {
        var_sb = 1;
    }
    if (var_sb != 0) {
        func_080E2EA4(&spC, arg1, var_r4, var_r5, arg2, 0);
        var_r0_2 = spC;
block_22:
        arg0->unk0 = var_r0_2;
        arg0->unk4 = 1;
    } else {
        arg0->unk0 = sp8;
        arg0->unk4 = var_sb;
    }
    return arg0;
}
