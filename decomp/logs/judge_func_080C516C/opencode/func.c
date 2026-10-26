#include "common.h"
s32 func_080087C8(void *);                            /* extern */
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
s32 func_080C2D54(void *);                            /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
s32 strcat(s32 *, ? *);                               /* extern */
extern ? gUnk_08108218;
extern ? gUnk_08108220;
extern ? gUnk_08108230;

void func_080C516C(void *arg0) {
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
    s16 *temp_r5_2;
    s32 temp_r2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 temp_sb;
    s32 temp_sb_2;
    s32 temp_sl;
    s32 var_r1;
    u32 temp_r0_2;
    void *var_r0;

    func_0804EC84(arg0->unk97C, &spC, 0);
    memcpy(&sp10, &gUnk_08108218, 6);
    memcpy(&sp18, &gUnk_08108220, 0xF);
    memcpy(&sp28, &gUnk_08108230, 0xA);
    sp34 = gUnk_08108218.unk0;
    sp34.unk4 = (u16) gUnk_08108218.unk4;
    sp34 = gUnk_08108218.unk0;
    sp34.unk4 = (u16) gUnk_08108218.unk4;
    strcat(&sp34, &gUnk_08108220);
    strcat(&sp34, &spC);
    strcat(&sp34, &gUnk_08108230);
    sp5C = 0;
    var_r0 = arg0 + 0x904;
    var_r1 = 0x18;
    do {
        var_r0->unk0 = 0;
        var_r0->unk1 = 0;
        var_r0 += 4;
        var_r1 -= 1;
    } while (var_r1 >= 0);
    sp60 = 1;
    temp_r0 = func_08008918(arg0);
    sp58 = 0x1740;
    *temp_r0 = 0x1740;
    func_08050E5C(arg0->unk51C);
    temp_sb = arg0->unk51C;
    temp_r8 = func_080088DC(arg0);
    temp_r6 = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    func_08050D3C(temp_sb, temp_r8, temp_r6, temp_r5, temp_r4, func_0800894C(arg0), arg0 + 0x814);
loop_12:
    func_080C2D54(arg0);
    if (arg0->unk89C == 1) {
        func_080087C8(arg0);
        temp_sl = func_08050D34(arg0->unk51C);
        temp_sb_2 = arg0->unk51C;
        temp_r8_2 = func_080088DC(arg0);
        temp_r6_2 = func_08008920(arg0);
        temp_r5_2 = func_08008918(arg0);
        temp_r4_2 = func_08008940(arg0);
        temp_r0_2 = func_08050D3C(temp_sb_2, temp_r8_2, temp_r6_2, temp_r5_2, temp_r4_2, func_0800894C(arg0), arg0 + 0x814);
        switch (temp_r0_2) {
        case 0:
            if (sp60 == 0) {
                arg0->unk89C = 2;
            } else {
                func_08050D5C(arg0->unk51C);
            }
            break;
        case 3:
            if (temp_sl == 1) {
                func_08050D8C(arg0->unk51C, &sp34);
                func_08050DD8(arg0->unk51C);
                sp60 = 0;
            }
            /* fallthrough */
        case 1:
        case 2:
        case 4:
        case 5:
        case 6:
            temp_r2 = sp5C + 1;
            sp5C = temp_r2;
            if (temp_r2 > 0x78) {
                func_08050DE4(arg0->unk51C);
                func_08050D74(arg0->unk51C);
            }
            break;
        }
        goto loop_12;
    }
}

