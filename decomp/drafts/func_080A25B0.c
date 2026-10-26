void *__builtin_new(s32);                           /* extern */
s32 func_08008724(void *);                            /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088CC(void *);                          /* extern */
s32 func_080088D4(void *);                          /* extern */
void *func_08008918(void *);                        /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08009300(void *, void *);                    /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_080A2940(void *);                            /* extern */
s32 func_080A2BA4(void *);                            /* extern */
s32 func_080A303C(void *);                            /* extern */
s32 func_080A32A4(void *);                            /* extern */
extern ? vtable_unk_080E5B80;

s32 *func_080A25B0(s32 *arg0, void *arg1) {
    s16 sp0;
    void *sp4;
    void **sp8;
    void ***spC;
    s16 *sp14;
    s16 *var_r1;
    s16 temp_r0_3;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 var_r2;
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    s32 var_r8;
    s8 *var_r0;
    s8 var_r1_2;
    u8 temp_r0_10;
    u8 temp_r0_11;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r0_6;
    u8 temp_r0_7;
    u8 temp_r0_8;
    u8 temp_r0_9;
    u8 var_r1_3;
    void *temp_r0;
    void *temp_r0_12;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r4;
    void *temp_r5;
    void *var_r1_4;

    func_08008724(arg1);
    func_080A2BA4(arg1);
    func_080A303C(arg1);
    temp_r0 = func_08008918(arg1);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg1);
    temp_r4->unk0 = 0;
    temp_r4->unk4 = 0;
    temp_r4->unk8 = &vtable_unk_080E5B80;
    temp_r5 = temp_r4 + 0xC;
    func_08009300(temp_r5, temp_r1);
    sp4 = temp_r4;
    func_0800934C(temp_r5, 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg1);
    temp_r0_2->unk8->unk10(temp_r0_2, sp4);
    arg1->unk216 = 2U;
    arg1->unk214 = 0;
    var_r8 = 0;
    sp14 = &sp0 + 0xC;
loop_1:
    func_080087C8(arg1);
    func_080088B8(arg1);
    temp_r0_3 = arg1->unk214;
    switch ((u32) temp_r0_3) {                      /* irregular */
    case 0:
        temp_r1_2 = sp4->unk0;
        if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {

        } else {
            var_r1 = arg1 + 0x214;
block_50:
            *var_r1 = 1;
        }
        break;
    case 1:
        var_r5 = 0;
loop_9:
        if (func_080088D4(arg1) & 0x10) {
            temp_r0_4 = arg1->unk1E4;
            if ((u32) temp_r0_4 <= 5U) {
                temp_r0_5 = temp_r0_4 + 1;
                arg1->unk1E4 = temp_r0_5;
                var_r1_2 = 0xFF & temp_r0_5;
            } else {
                var_r1_2 = 0;
            }
            var_r2 = 0x1E4;
            goto block_24;
        }
        if (func_080088D4(arg1) & 0x20) {
            temp_r0_6 = arg1->unk1E4;
            if (temp_r0_6 != 0) {
                temp_r0_7 = temp_r0_6 - 1;
                arg1->unk1E4 = temp_r0_7;
                var_r1_2 = 0xFF & temp_r0_7;
            } else {
                var_r1_2 = 6;
            }
            var_r0 = arg1 + 0x1E4;
            goto block_25;
        }
        if (func_080088D4(arg1) & 0x80) {
            temp_r0_8 = arg1->unk1E5;
            if ((u32) temp_r0_8 <= 4U) {
                temp_r0_9 = temp_r0_8 + 1;
                arg1->unk1E5 = temp_r0_9;
                var_r1_2 = 0xFF & temp_r0_9;
            } else {
                var_r1_2 = 0;
            }
            var_r2 = 0x1E5;
block_24:
            var_r0 = arg1 + var_r2;
block_25:
            *var_r0 = var_r1_2;
            func_08008B6C(arg1 + 0x1C, 0xCB);
        } else if (func_080088D4(arg1) & 0x40) {
            temp_r0_10 = arg1->unk1E5;
            if (temp_r0_10 != 0) {
                temp_r0_11 = temp_r0_10 - 1;
                arg1->unk1E5 = temp_r0_11;
                var_r1_3 = 0xFF & temp_r0_11;
            } else {
                var_r1_3 = 5;
            }
            arg1->unk1E5 = var_r1_3;
            func_08008B6C(arg1 + 0x1C, 0xCB);
        }
        if (*(arg1 + 0x1B4 + ((arg1->unk1E5 * 7) + arg1->unk1E4)) != 0) {
            var_r5 = 1;
        }
        if (var_r5 == 0) {
            goto loop_9;
        }
        if (func_080088CC(arg1) & 1) {
            arg1->unk218 = 0x63;
            var_r3 = 1;
            var_r1_4 = arg1 + 4;
loop_37:
            if ((var_r1_4->unk1EC != -1) && (((u8) var_r1_4->unk1EE >> 4) == arg1->unk1E4) && (((u32) (var_r1_4->unk1EF << 0x1C) >> 0x1C) == arg1->unk1E5)) {
                arg1->unk220 = (u8) var_r1_4->unk1ED;
                arg1->unk221 = (s8) arg1->unk1E2;
                arg1->unk218 = (s16) var_r1_4->unk1EC;
            } else {
                var_r1_4 += 4;
                var_r3 += 1;
                if (var_r3 <= 9) {
                    goto loop_37;
                }
            }
            arg1->unk216 = 0U;
            arg1->unk214 = 2;
        } else {
            var_r4 = 0;
            if ((func_080088CC(arg1) & 2) || (func_080088CC(arg1) & 8)) {
                var_r4 = 1;
            }
            if (var_r4 != 0) {
                arg1->unk214 = 3;
            }
        }
        break;
    case 2:
        if ((s8) arg1->unk216 == 2) {
            var_r1 = arg1 + 0x214;
            goto block_50;
        }
        break;
    case 3:
        func_08009378(sp4 + 0xC, 0x889, 1, 1);
        temp_r0_12 = func_08008940(arg1);
        temp_r0_12->unk8->unk10(temp_r0_12, sp4);
        arg1->unk214 = 4;
        break;
    case 4:
        temp_r1_3 = sp4->unk0;
        if ((s32) ((0 - temp_r1_3) | temp_r1_3) >= 0) {
            var_r8 = 1;
        }
        break;
    }
    func_080A2940(arg1);
    func_080A32A4(arg1);
    if (var_r8 == 0) {
        goto loop_1;
    }
    sp8 = 0;
    spC = &sp8;
    sp14->unk4 = 0;
    sp8 = 0;
    *arg0 = 0;
    if (sp8 != 0) {
        (*sp8)->unk8(sp8, 3);
    }
    if (sp4 != 0) {
        sp4->unk8->unkC(sp4, 3);
    }
    return arg0;
}
