void *func_080E2354(void *);                        /* extern */
s32 func_080E54F0(void **, void *, void *, void *, u32 *, s32); /* extern */

void *func_080E55B0(void *arg0, void *arg1, u32 *arg2) {
    void *sp8;
    void *spC;
    void *sp10;
    s32 var_r0;
    s32 var_r1;
    s32 var_r1_2;
    s8 var_r3;
    void *temp_r0;
    void *var_r0_2;
    void *var_r4;
    void *var_r5;

    var_r4 = arg1->unk4;
    var_r5 = var_r4->unk4;
    var_r0 = 1;
    if (var_r5 != 0) {
        do {
            var_r4 = var_r5;
            var_r1 = 0;
            if ((u32) *arg2 < (u32) var_r4->unk10) {
                var_r1 = 1;
            }
            var_r0 = var_r1;
            if (var_r0 != 0) {
                var_r5 = var_r4->unk8;
            } else {
                var_r5 = var_r4->unkC;
            }
        } while (var_r5 != 0);
    }
    sp8 = var_r4;
    if (var_r0 != 0) {
        temp_r0 = arg1->unk4->unk8;
        spC = temp_r0;
        var_r1_2 = 0;
        if (var_r4 == temp_r0) {
            var_r1_2 = 1;
        }
        if (var_r1_2 != 0) {
            func_080E54F0(&sp10, arg1, var_r5, var_r4, arg2, 0);
            var_r0_2 = sp10;
            goto block_18;
        }
        sp8 = func_080E2354(var_r4);
        goto block_14;
    }
block_14:
    var_r3 = 0;
    if ((u32) sp8->unk10 < (u32) *arg2) {
        var_r3 = 1;
    }
    if (var_r3 != 0) {
        func_080E54F0(&spC, arg1, var_r5, var_r4, arg2, 0);
        var_r0_2 = spC;
block_18:
        arg0->unk0 = var_r0_2;
        arg0->unk4 = 1;
    } else {
        arg0->unk0 = sp8;
        arg0->unk4 = var_r3;
    }
    return arg0;
}
