u32 func_0800E958(s32);                             /* extern */
s32 func_0800ED8C(s32);                               /* extern */

void func_0802AD80(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 sp10;
    s32 sp18;
    s32 sp20;
    s32 sp28;
    ? (**var_r2)(void **, s32 *, s32);
    ? (*var_r3)(void **, s32 *, s32);
    s32 *var_r1;
    u32 temp_r0;
    u32 temp_r4;
    void **temp_r0_2;

    temp_r4 = func_0800E958(arg0->unk38);
    func_0800ED8C(arg0->unk38);
    if (temp_r4 == func_0800E958(arg0->unk38)) {
        return;
    }
    temp_r0 = func_0800E958(arg0->unk38);
    switch (temp_r0) {                              /* irregular */
    case 0x2710:
        sp0 = 0x336;
        sp4 = 0;
        var_r3 = (*arg0->unk0)->unk140;
        var_r1 = &sp0;
block_19:
        var_r3(arg0->unk0, var_r1, 1);
        return;
    case 0x186A0:
        var_r2 = *arg0->unk0 + 0x140;
        var_r1 = &sp8;
        sp8 = 0x337;
block_18:
        var_r1->unk4 = 0;
        var_r3 = *var_r2;
        goto block_19;
    case 0xF4240:
        var_r2 = *arg0->unk0 + 0x140;
        var_r1 = &sp10;
        sp10 = 0x338;
        goto block_18;
    case 0x989680:
        var_r2 = *arg0->unk0 + 0x140;
        var_r1 = &sp18;
        sp18 = 0x339;
        goto block_18;
    case 0x5F5E100:
        var_r2 = *arg0->unk0 + 0x140;
        var_r1 = &sp20;
        sp20 = 0x33A;
        goto block_18;
    case 0x3B9ACA00:
        temp_r0_2 = arg0->unk0;
        sp28 = 0x33B;
        sp28.unk4 = 0;
        (*temp_r0_2)->unk140(temp_r0_2, &sp28, 1);
        return;
    }
}
