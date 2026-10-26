s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088DC(void *);                          /* extern */
s16 *func_08008918(void *);                         /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_0800894C(void *);                          /* extern */
s32 func_0804EC84(u8, ? *, s32);                      /* extern */
s32 func_08050D34(s32);                             /* extern */
u32 func_08050D3C(s32, s32, s32, s16 *, s32, s32, void *); /* extern */
s32 func_08050D5C(s32);                               /* extern */
s32 func_08050D74(s32);                               /* extern */
s32 func_08050D8C(s32, s32 *);                        /* extern */
s32 func_08050DD8(s32);                               /* extern */
s32 func_08050DE4(s32);                               /* extern */
s32 func_08050E5C(s32);                               /* extern */
s32 func_080BDF40(void *);                            /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
s32 strcat(s32 *, ? *);                               /* extern */
extern ? gUnk_08107F60;
extern ? gUnk_08107F68;
extern ? gUnk_08107F78;

void func_080BF0EC(void *arg0) {
s32 spC;
s32 sp10;
s32 sp18;
s32 sp28;
    s32 sp34;
    s16 sp58;
    s32 sp5C;
    s32 sp60;
    s16 *temp_r0;
    s16 *temp_r5;
    s16 *temp_r6;
    s32 *var_r0;
    s32 temp_r2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r6_2;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 temp_sb;
    s32 temp_sb_2;
    s32 temp_sl;
    s32 temp_sl_2;
    u32 temp_r0_2;

    func_0804EC84(arg0->unk600, &spC, 0);
    memcpy(&sp10, &gUnk_08107F60, 6);
    memcpy(&sp18, &gUnk_08107F68, 0xF);
    memcpy(&sp28, &gUnk_08107F78, 0xA);
    sp34 = gUnk_08107F60.unk0;
    sp34.unk4 = (u16) gUnk_08107F60.unk4;
    sp34 = gUnk_08107F60.unk0;
    sp34.unk4 = (u16) gUnk_08107F60.unk4;
    strcat(&sp34, &gUnk_08107F68);
    strcat(&sp34, &spC);
    strcat(&sp34, &gUnk_08107F78);
    sp5C = 1;
    sp60 = 0;
    temp_r0 = func_08008918(arg0);
    sp58 = 0x1740;
    *temp_r0 = 0x1740;
    func_08050E5C(arg0->unk418);
    temp_sl = arg0->unk418;
    temp_sb = func_080088DC(arg0);
    temp_r8 = func_08008920(arg0);
    temp_r6 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    func_08050D3C(temp_sl, temp_sb, temp_r8, temp_r6, temp_r4, func_0800894C(arg0), arg0 + 0x57C);
    func_080BDF40(arg0);
    var_r0 = arg0 + 0x5A0;
loop_12:
    if (*var_r0 == 1) {
        func_080087C8(arg0);
        func_080088B8(arg0);
        temp_sl_2 = func_08050D34(arg0->unk418);
        temp_sb_2 = arg0->unk418;
        temp_r8_2 = func_080088DC(arg0);
        temp_r6_2 = func_08008920(arg0);
        temp_r5 = func_08008918(arg0);
        temp_r4_2 = func_08008940(arg0);
        temp_r0_2 = func_08050D3C(temp_sb_2, temp_r8_2, temp_r6_2, temp_r5, temp_r4_2, func_0800894C(arg0), arg0 + 0x57C);
        switch (temp_r0_2) {
        case 1:
        case 2:
        case 4:
        case 5:
        case 6:
            break;
        case 0:
            if (sp5C == 0) {
                arg0->unk5A0 = 2;
            } else {
                func_08050D5C(arg0->unk418);
            }
            break;
        case 3:
            if (temp_sl_2 == 1) {
                func_08050D8C(arg0->unk418, &sp34);
                func_08050DD8(arg0->unk418);
                sp5C = 0;
            }
            break;
        }
        if (sp5C == 0) {
            temp_r2 = sp60 + 1;
            sp60 = temp_r2;
            if (temp_r2 > 0x78) {
                func_08050DE4(arg0->unk418);
                func_08050D74(arg0->unk418);
            }
        }
        func_080BDF40(arg0);
        var_r0 = arg0 + 0x5A0;
        goto loop_12;
    }
}
