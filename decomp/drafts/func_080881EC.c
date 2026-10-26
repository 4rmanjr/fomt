? **__builtin_new(s32);                             /* extern */
s32 func_08085EEC(s32);                             /* extern */
s8 func_08086A08(s32);                              /* extern */
extern ? vtable_unk_080E5C64;
extern ? vtable_unk_080E5D94;

? ***func_080881EC(s32 ***arg0, void *arg1) {
    ? **sp0;
    ? **sp4;
    s32 sp8;
    ? ***spC;
    ? **sp10;
    ? **temp_r0_3;
    ? **temp_r1;
    ? **temp_r2;
    ? **temp_r3;
    ? **temp_r3_2;
    s32 temp_r0_2;
    s32 var_r7;
    s32 var_sl;
    s8 temp_r0;

    temp_r0 = func_08086A08(arg1->unk4);
    if (temp_r0 != -1) {
        temp_r0_2 = func_08085EEC(arg1->unk4);
        var_sl = 1;
        if (temp_r0_2 != 0) {
            var_sl = 2;
        }
        temp_r2 = __builtin_new(0x10);
        temp_r3 = arg1->unk8;
        arg1->unk8 = 0;
        sp4 = temp_r3;
        var_r7 = 1;
        if (temp_r0_2 != 0) {
            var_r7 = 2;
        }
        temp_r2->unk0 = &vtable_unk_080E5D94;
        sp4 = 0;
        temp_r2->unk4 = temp_r3;
        temp_r2->unk8 = (s32) arg1->unk10;
        temp_r2->unkC = var_r7;
        sp0 = temp_r2;
        temp_r0_3 = __builtin_new(0x14);
        temp_r3_2 = sp0;
        sp0 = 0;
        temp_r0_3->unk0 = &vtable_unk_080E5C64;
        sp8 = 0;
        temp_r0_3->unk4 = temp_r3_2;
        temp_r0_3->unk8 = (s32) arg1->unk10;
        temp_r0_3->unkC = var_sl;
        temp_r0_3->unk10 = temp_r0;
        spC = &sp4;
        sp10 = temp_r0_3;
        sp4 = 0;
        *arg0 = temp_r0_3;
        if (sp0 != 0) {
            (*sp0)->unk8(sp0, 3);
        }
    } else {
        temp_r1 = arg1->unk8;
        arg1->unk8 = 0;
        *arg0 = temp_r1;
    }
    return arg0;
}
