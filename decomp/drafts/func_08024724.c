u8 func_080AC070(s32, s32 *);                         /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk6;
} GenObj;
void *func_08024724(GenObj *arg0, s32 arg1, GenObj *arg2) {
s32 sp0;
s32 sp8;
s32 sp10;
s32 sp18;
s32 sp20;
s32 sp28;
s32 sp30;
s32 sp38;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s16 temp_r4;
    s16 temp_r5;
    s32 *var_r5;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r2;
    u8 temp_r0_4;
    u8 temp_r5_2;
    u8 temp_r5_3;
    u8 var_r0;

    sp40 = arg1;
    var_r0 = func_080AC070(arg1, arg2);
    if (var_r0 == 0) {
        goto block_19;
    }
    temp_r4 = arg2->unk6;
    temp_r0 = ~((temp_r4 - 1) & 7);
    sp44 = temp_r0;
    temp_r0_2 = 8 - (7 & arg2->unk2);
    sp4C = temp_r0_2;
    sp48 = temp_r0_2;
    temp_r5 = arg2->unk4;
    temp_r0_3 = ~((temp_r5 - 1) & 7);
    sp50 = temp_r0_3;
    temp_r2 = 8 - (7 & arg2->unk0);
    sp54 = temp_r2;
    sp0 = (s16) arg2->unk0;
    sp0.unk2 = (s16) ((s16) arg2->unk2 + temp_r0);
    sp0.unk4 = temp_r5;
    sp0.unk6 = (s16) (temp_r4 + temp_r0);
    temp_r5_2 = func_080AC070(sp40, &sp0) ^ 1;
    if (temp_r5_2 != 0) {
        arg0->unk0 = 0;
        arg0->unk2 = (u16) temp_r0;
    } else {
        sp8 = (s16) arg2->unk0;
        sp8.unk2 = (s16) (sp4C + (s16) arg2->unk2);
        sp8.unk4 = (s16) arg2->unk4;
        sp8.unk6 = (s16) (sp4C + arg2->unk6);
        temp_r0_4 = func_080AC070(sp40) ^ 1;
        sp58 = (s32) temp_r0_4;
        if (temp_r0_4 != 0) {
            arg0->unk0 = (s16) temp_r5_2;
            arg0->unk2 = (u16) sp4C;
        } else {
            sp10 = (s16) ((s16) arg2->unk0 + temp_r0_3);
            sp10.unk2 = (s16) arg2->unk2;
            sp10.unk4 = (s16) (arg2->unk4 + temp_r0_3);
            sp10.unk6 = (s16) arg2->unk6;
            temp_r5_3 = func_080AC070(sp40) ^ 1;
            if (temp_r5_3 != 0) {
                arg0->unk0 = (s16) temp_r0_3;
                var_r0 = (u8) sp58;
                goto block_20;
            }
            sp18 = (s16) ((s16) arg2->unk0 + temp_r2);
            sp18.unk2 = (s16) arg2->unk2;
            sp18.unk4 = (s16) (arg2->unk4 + temp_r2);
            sp18.unk6 = (s16) arg2->unk6;
            if (((func_080AC070(sp40) ^ 1) << 0x18) != 0) {
                arg0->unk0 = (s16) temp_r2;
                arg0->unk2 = (u16) temp_r5_3;
            } else {
                sp20 = (s16) ((s16) arg2->unk0 + temp_r0_3);
                sp20.unk2 = (s16) ((s16) arg2->unk2 + temp_r0);
                sp20.unk4 = (s16) (arg2->unk4 + temp_r0_3);
                sp20.unk6 = (s16) (arg2->unk6 + temp_r0);
                if (((func_080AC070(sp40) ^ 1) << 0x18) != 0) {
                    arg0->unk0 = (s16) temp_r0_3;
                    var_r0 = (u8) temp_r0;
                    goto block_20;
                }
                sp28 = (s16) ((s16) arg2->unk0 + temp_r2);
                sp28.unk2 = (s16) (sp44 + (s16) arg2->unk2);
                sp28.unk4 = (s16) (arg2->unk4 + temp_r2);
                sp28.unk6 = (s16) (sp44 + arg2->unk6);
                if (((func_080AC070(sp40) ^ 1) << 0x18) != 0) {
                    arg0->unk0 = (s16) temp_r2;
                    arg0->unk2 = (u16) sp44;
                } else {
                    sp30 = (s16) (sp50 + (s16) arg2->unk0);
                    sp30.unk2 = (s16) (sp4C + (s16) arg2->unk2);
                    sp30.unk4 = (s16) (sp50 + arg2->unk4);
                    sp30.unk6 = (s16) (sp4C + arg2->unk6);
                    if (((func_080AC070(sp40) ^ 1) << 0x18) != 0) {
                        arg0->unk0 = (s16) sp50;
                        var_r5 = &sp4C;
                        goto block_18;
                    }
                    sp38 = (s16) (sp54 + (s16) arg2->unk0);
                    sp38.unk2 = (s16) (sp48 + (s16) arg2->unk2);
                    sp38.unk4 = (s16) (sp54 + arg2->unk4);
                    sp38.unk6 = (s16) (sp48 + arg2->unk6);
                    var_r0 = func_080AC070(sp40) ^ 1;
                    if (var_r0 != 0) {
                        arg0->unk0 = (s16) sp54;
                        var_r5 = &sp48;
block_18:
                        arg0->unk2 = (u16) *var_r5;
                    } else {
block_19:
                        arg0->unk0 = (s16) var_r0;
block_20:
                        arg0->unk2 = (u16) var_r0;
                    }
                }
            }
        }
    }
    return arg0;
}
