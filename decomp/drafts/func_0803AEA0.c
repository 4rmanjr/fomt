s32 func_08007874(s32 *, s32);                          /* extern */
s32 func_080079E8(s32 *, s32);                          /* extern */
s32 func_08007B54(s32 *, s32);                        /* extern */
s32 func_08007C28(s32 *, s32);                          /* extern */
s32 func_08007CD8(s32 *, s32);                        /* extern */
s32 func_0803B454(s32 *, ? *, s32, s32);                /* extern */
s32 func_0805E824(s32 *, void **, s32, s32);            /* extern */
s32 func_0805E8F0(s32 *);                               /* extern */
u32 rand();                                         /* extern */

void *func_0803AEA0(void *arg0, void **arg1, void **arg2, s32 arg3, u32 arg4) {
s32 sp0;
s32 sp14;
s32 sp20;
s32 sp28;
    void *sp48;
    s32 sp50;
    u32 sp54;
    void *sp58;
    s32 sp5C;
    u32 *sp60;
    u32 sp64;
    ? *temp_r4_2;
    s16 temp_r4_4;
    s32 temp_sb;
    s32 var_r1_2;
    s8 *temp_r0_4;
    s8 temp_r2;
    u16 var_r1;
    u32 temp_r0_3;
    u32 temp_r1_3;
    u32 temp_r1_6;
    u32 temp_r3;
    u32 temp_r4_3;
    u32 var_r0;
    u32 var_r2;
    u32 var_r8;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_7;
    void *temp_r4;
    void *var_r1_3;

    sp50 = arg3;
    arg0->unk0 = arg1;
    arg0->unk4 = 0U;
    arg0->unkD0 = 0;
    arg0->unkE4 = (u8) sp50;
    arg0->unkE5 = 1;
    arg0->unkE6 = 0;
    (arg0 + 0xE6)->unk2 = 0;
    (*arg2)->unkC(&sp48, arg2, 0);
    var_r1 = 0;
    if (sp48 != 0) {
        var_r1 = sp48.unk4;
    }
    sp54 = (u32) var_r1;
    sp64 = 0;
    sp60 = arg0 + 0xD0;
    if ((u32) var_r1 > 0U) {
        sp58 = arg0 + 4;
        do {
            (*arg2)->unk10(&sp28, arg2, *(sp48 + (sp64 * 4)));
            temp_r0 = &sp28 + 0xC;
            sp0.unk0 = (s32) sp28.unk0;
            sp0.unk4 = (s32) sp28.unk4;
            sp0.unk8 = (s32) sp28.unk8;
            temp_r1 = &sp0 + 0xC;
            sp0.unkC = (s32) sp28.unkC;
            temp_r1->unk4 = (s32) temp_r0->unk4;
            temp_r1->unk8 = (s32) temp_r0->unk8;
            temp_r1_2 = temp_r1 + 0xC;
            temp_r1->unkC = (s32) temp_r0->unkC;
            temp_r1_2->unk4 = (s32) (temp_r0 + 0xC)->unk4;
            func_08007874(&sp20, temp_r1_2 + 8);
            sp20.unk4 = func_08007B54(&sp20, 0);
            temp_r1_3 = arg0->unk4;
            if (temp_r1_3 <= 4U) {
                temp_r4 = sp58 + ((temp_r1_3 * 0x28) + 4);
                if (temp_r4 != 0) {
                    temp_r0_2 = &sp0 + 0xC;
                    temp_r4->unk0 = (s32) sp0.unk0;
                    temp_r4->unk4 = (s32) sp0.unk4;
                    temp_r4->unk8 = (s32) sp0.unk8;
                    temp_r1_4 = temp_r4 + 0xC;
                    temp_r4->unkC = (s32) sp0.unkC;
                    temp_r1_4->unk4 = (s32) temp_r0_2->unk4;
                    temp_r1_4->unk8 = (s32) temp_r0_2->unk8;
                    temp_r1_5 = temp_r1_4 + 0xC;
                    temp_r1_4->unkC = (s32) temp_r0_2->unkC;
                    temp_r1_5->unk4 = (s32) (temp_r0_2 + 0xC)->unk4;
                    temp_r4_2 = temp_r4 + 0x20;
                    func_08007874(temp_r4_2, temp_r1_5 + 8);
                    temp_r4_2->unk4 = func_08007CD8(temp_r4_2, sp20.unk4);
                }
                arg0->unk4 = (u32) (arg0->unk4 + 1);
            }
            func_08007C28(&sp20, sp20.unk4);
            func_080079E8(&sp20, 2);
            temp_r3 = sp64 + 1;
            sp64 = temp_r3;
        } while (temp_r3 < sp54);
    }
    if ((sp50 == 0) || (sp50 != 1)) {
        var_r1_2 = 0x10;
    } else {
        var_r1_2 = 0x11;
    }
    temp_r2 = (*arg1)->unk48(arg1, var_r1_2);
    temp_r0_3 = *sp60;
    if (temp_r0_3 <= 0xFU) {
        temp_r0_4 = sp60 + (temp_r0_3 + 4);
        if (temp_r0_4 != 0) {
            *temp_r0_4 = temp_r2;
        }
        *sp60 += 1;
    }
    var_r8 = 0;
    var_r2 = 0;
    if (sp54 > 0U) {
        var_r1_3 = sp48;
        do {
            var_r8 += var_r1_3->unk2;
            var_r1_3 += 4;
            var_r2 += 1;
        } while (var_r2 < sp54);
    }
    sp5C = (*arg1)->unk18(arg1);
    temp_sb = (*arg1)->unk1C(arg1);
    sp64 = 0;
    if (arg4 > 0U) {
        do {
            func_0805E824(&sp0, arg2, 0, 0x100);
            if (var_r8 != 0) {
                var_r0 = rand() % var_r8;
            } else {
                var_r0 = 0;
            }
            if (var_r0 != 0) {
                temp_r4_4 = sp0.unk10;
                sp0.unk10 = (s16) (var_r0 << 8);
                func_0805E8F0(&sp0);
                sp0.unk10 = temp_r4_4;
            }
            func_0803B454(&sp14, &sp0, sp5C, temp_sb);
            temp_r1_6 = arg0->unkE8;
            if (temp_r1_6 <= 0x1FU) {
                temp_r0_5 = arg0 + 0xE8 + ((temp_r1_6 * 0x1C) + 4);
                if (temp_r0_5 != 0) {
                    temp_r1_7 = &sp14 + 0xC;
                    temp_r0_5->unk0 = (s32) sp14.unk0;
                    temp_r0_5->unk4 = (s32) sp14.unk4;
                    temp_r0_5->unk8 = (s32) sp14.unk8;
                    temp_r0_6 = temp_r0_5 + 0xC;
                    temp_r0_5->unkC = (s32) sp14.unkC;
                    temp_r0_6->unk4 = (s32) temp_r1_7->unk4;
                    temp_r0_6->unk8 = (s32) temp_r1_7->unk8;
                    temp_r0_6->unkC = sp2C;
                }
                arg0->unkE8 = (u32) (arg0->unkE8 + 1);
            }
            temp_r4_3 = sp64 + 1;
            sp64 = temp_r4_3;
        } while (temp_r4_3 < arg4);
    }
    return arg0;
}
