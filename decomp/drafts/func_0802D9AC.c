s32 GetFatigueGain__C4Food(s32 *);                    /* extern */
s32 GetStaminaGain__C4Food(s32 *);                    /* extern */
s32 IsDrink__C4Food(s32 *);                           /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_0800F204(s32);                             /* extern */
s32 func_0800F20C(s32 *, s32);                          /* extern */
s32 func_0800F388(s32);                             /* extern */
s32 func_0800F390(s32);                               /* extern */
s32 func_080257D0(void *, s32);                       /* extern */
s32 func_08025838(void *, s32);                       /* extern */
s32 func_08025A40(void *, s32);                       /* extern */
s32 func_0802A7D8(void *);                            /* extern */

void func_0802D9AC(void *arg0, void *arg1) {
s32 sp0;
    s32 sp4;
    s32 spC;
    s32 sp14;
    s32 sp18;
    ? (**var_r3_2)(void **, s32 *, s32);
    s32 *var_r1;
    s32 *var_r4;
    s32 *var_r4_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 var_r0;
    s32 var_r0_2;
    u16 var_r3;
    u8 temp_r1;
    u8 temp_r3;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r5;

    sp14 = 0;
    sp18 = 0;
    var_r3 = 0;
    if (arg1 != 0) {
        sp14 = (s32) arg1->unk0;
        sp18 = (s32) arg1->unk4;
        var_r3 = arg1->unk8;
    }
    if (arg0->unkC3 != 0) {
        arg0->unk3C = 0U;
        return;
    }
    temp_r1 = ((u32) (sp14 << 0x1F) >> 0x1F) | ((u32) (sp14 << 0x16) >> 0x1F);
    if (temp_r1 == 0) {
        arg0->unk3C = temp_r1;
    } else {
        if ((((u32) (var_r3 << 0x19) >> 0x1F) | ((u32) (var_r3 << 0x1A) >> 0x1F)) != 0) {
            if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
                func_080257D0(arg0, 1);
                return;
            }
            func_08025838(arg0, 1);
            return;
        }
        temp_r4 = ((u32) (sp18 << 0x16) >> 0x1F) | (((u32) (sp18 << 0x1F) >> 0x1F) | (((u32) (var_r3 << 0x18) >> 0x1F) | ((u32) (var_r3 << 0x1B) >> 0x1F)));
        if (temp_r4 != 0) {
            if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
                func_080257D0(arg0, 0);
                return;
            }
            func_08025838(arg0, 0);
            return;
        }
        temp_r3 = 2 & sp18.unk0;
        if (temp_r3 == 0) {
            if (1 & sp18.unk1) {
                arg0->unk3C = temp_r3;
                return;
            }
            return;
        }
        if ((0x201 & sp14.unk0) == 0x201) {
            var_r3_2 = *arg0->unk0 + 0x140;
            var_r1 = &sp4;
            sp4 = 0x3CE;
            goto block_20;
        }
        if (1 & (u8) sp14.unk0) {
            var_r3_2 = *arg0->unk0 + 0x140;
            var_r1 = &spC;
            spC = 0x3CE;
block_20:
            var_r1->unk4 = temp_r4;
            *var_r3_2(arg0->unk0, var_r1, 0);
            arg0->unk3C = (u8) temp_r4;
            return;
        }
        if (!(2 & sp14.unk1)) {
            return;
        }
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
            if (((func_0800F388(arg0->unk38 + 0x54) << 0x18) == 0) && (func_0800F204(arg0->unk38 + 0x54) == 0)) {
                func_0800F20C(&sp0, arg0->unk38 + 0x54);
                temp_r5 = arg0->unk14;
                temp_r4_2 = GetStaminaGain__C4Food(&sp0);
                temp_r5->unk64(arg0, temp_r4_2, GetFatigueGain__C4Food(&sp0));
                if (IsDrink__C4Food(&sp0) == 0) {
                    arg0->unk3C = 0xFU;
                    temp_r0 = (*arg0->unk0)->unk14C();
                    var_r4 = temp_r0->unk0;
                    temp_r5_2 = temp_r0->unk4;
                    if (var_r4 != temp_r5_2) {
loop_29:
                        if ((func_08008CD0(*var_r4) << 0x18) != 0) {
                            var_r4 += 4;
                            if (var_r4 == temp_r5_2) {
                                goto block_31;
                            }
                            goto loop_29;
                        }
                        var_r0 = *var_r4;
                    } else {
block_31:
                        var_r0 = *(temp_r5_2 - 4);
                    }
                    func_08008B6C(var_r0, 0x65);
                } else {
                    arg0->unk3C = 0x10U;
                    temp_r0_2 = (*arg0->unk0)->unk14C();
                    var_r4_2 = temp_r0_2->unk0;
                    temp_r5_3 = temp_r0_2->unk4;
                    if (var_r4_2 != temp_r5_3) {
loop_35:
                        if ((func_08008CD0(*var_r4_2) << 0x18) != 0) {
                            var_r4_2 += 4;
                            if (var_r4_2 == temp_r5_3) {
                                goto block_37;
                            }
                            goto loop_35;
                        }
                        var_r0_2 = *var_r4_2;
                    } else {
block_37:
                        var_r0_2 = *(temp_r5_3 - 4);
                    }
                    func_08008B6C(var_r0_2, 0x66);
                }
                func_0802A7D8(arg0);
                func_0800F390(arg0->unk38 + 0x54);
                return;
            }
            arg0->unk3C = 0U;
            return;
        }
        func_08025A40(arg0, 0);
    }
}
