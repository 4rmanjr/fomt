? **__builtin_new(s32);                             /* extern */
? **func_08082CEC(s32);                             /* extern */
extern ? vtable_unk_080E7CF4;

? ***func_08083B2C(s32 ***arg0, void *arg1) {
    ? **sp0;
    s32 sp4;
    ? ***sp8;
    ? **spC;
    ? ***sp10;
    ? **sp14;
    ? **temp_r0;
    ? **temp_r0_2;
    ? **temp_r0_3;
    ? **temp_r0_4;
    ? **temp_r4;
    ? **temp_r5;

    temp_r0 = func_08082CEC(arg1->unk4);
    if (temp_r0 == 0) {
        temp_r0_2 = arg1->unk8;
        arg1->unk8 = temp_r0;
        *arg0 = temp_r0_2;
    } else if (temp_r0 == (s32 **)1) {
        temp_r0_3 = __builtin_new(0x10);
        temp_r4 = arg1->unk8;
        arg1->unk8 = 0;
        temp_r0_3->unk0 = &vtable_unk_080E7CF4;
        sp4 = 0;
        temp_r0_3->unk4 = temp_r4;
        temp_r0_3->unk8 = (s32) arg1->unk1C;
        temp_r0_3->unkC = 0;
        sp0 = temp_r0_3;
        sp8 = &sp0;
        spC = temp_r0_3;
        sp0 = 0;
        *arg0 = temp_r0_3;
        if (sp0 != 0) {
            (*sp0)->unk8(sp0, 3);
        }
    } else {
        temp_r0_4 = __builtin_new(0x10);
        temp_r5 = arg1->unk8;
        arg1->unk8 = 0;
        temp_r0_4->unk0 = &vtable_unk_080E7CF4;
        sp4 = 0;
        temp_r0_4->unk4 = temp_r5;
        temp_r0_4->unk8 = (s32) arg1->unk1C;
        temp_r0_4->unkC = 1;
        sp0 = temp_r0_4;
        sp10 = &sp0;
        sp14 = temp_r0_4;
        sp0 = 0;
        *arg0 = temp_r0_4;
        if (sp0 != 0) {
            (*sp0)->unk8(sp0, 3);
        }
    }
    return arg0;
}
