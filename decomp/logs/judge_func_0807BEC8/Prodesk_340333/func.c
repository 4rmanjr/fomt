#include "common.h"
/* Warning: missing "bx $lr" in last block of func_0807BEC8 (.L0807C10A). */

void *__builtin_new(s32);                           /* extern */
s32 free();                                           /* extern */
s32 func_08008724();                                  /* extern */
void *func_08008910(void *);                        /* extern */
void *func_08008918(void *);                        /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008F0C(s32 *, void *, s32, s32);             /* extern */
s32 func_08009300(void *, void *);                    /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E958(s32, void *, s32, s32);             /* extern */
s32 func_08075C88(s32, s16);                          /* extern */
s32 func_08075E24(s32, s16);                          /* extern */
s32 func_0807B188(void *);                          /* extern */
s32 func_0807B920(void *, s32);                       /* extern */
s32 func_080C85A0(void *);                            /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern s32 .L0807C1CC;
extern s32 .L0807C1D0;
extern ? gUnk_080FD988;

void func_0807BEC8(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    void *spC;
s32 sp20;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 *sp8C;
    s32 sp90;
    s32 *sp98;
    s32 *sp9C;
    void *spA0;
    s32 *temp_r2;
    s32 *temp_r2_2;
    s32 *temp_r2_3;
    s32 *temp_r2_4;
    s32 *var_r0;
    s32 temp_r0_5;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r8;
    s32 var_sl;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 var_sb;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r2_5;
    void *temp_r4_3;
    void *temp_r5_3;
    void *temp_r6;
    void *var_ip;
    void *var_r0_2;
    void *var_r1;
    void *var_r2;
    void *var_r2_2;
    void *var_r5;

    func_08008724();
    func_080C85A0(arg0);
    temp_r0 = arg0->unk2A4;
    if (temp_r0 <= 0x27U) {
        temp_r2 = arg0 + 0x2A4 + ((temp_r0 * 4) + 4);
        if (temp_r2 != 0) {
            *temp_r2 = 0;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_2 = arg0->unk2A4;
    if (temp_r0_2 <= 0x27U) {
        temp_r2_2 = arg0 + 0x2A4 + ((temp_r0_2 * 4) + 4);
        if (temp_r2_2 != 0) {
            *temp_r2_2 = 1;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_3 = arg0->unk2A4;
    if (temp_r0_3 <= 0x27U) {
        temp_r2_3 = arg0 + 0x2A4 + ((temp_r0_3 * 4) + 4);
        if (temp_r2_3 != 0) {
            *temp_r2_3 = 2;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_4 = arg0->unk2A4;
    if (temp_r0_4 <= 0x27U) {
        temp_r2_4 = arg0 + 0x2A4 + ((temp_r0_4 * 4) + 4);
        if (temp_r2_4 != 0) {
            *temp_r2_4 = 3;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    var_sb = 0;
    sp9C = &sp0 + 0x6C;
    sp98 = &sp0 + 0x20;
loop_17:
    temp_r1 = (var_sb * 0x14) + &gUnk_080FD988;
    spC.unk0 = temp_r1->unk0;
    spC.unk4 = (s32) temp_r1->unk4;
    spC.unk8 = (s32) temp_r1->unk8;
    spC.unkC = (s32) temp_r1->unkC;
    (&spC + 0xC)->unk4 = (s32) (temp_r1 + 0xC)->unk4;
    temp_r5 = var_sb * 0x304;
    sp6C = 0xC;
    sp9C->unk2 = 2;
    func_0804E7A0(sp6C, temp_r5 + arg0 + 0x710 + 4, 0);
    if (var_sb > 1U) {
        sp70.unk0 = 0xC;
        sp70.unk2 = 2;
        sp0 = sp10;
        sp4 = 0;
        sp8 = 1;
        func_0804E958(sp70, temp_r5 + arg0 + 0x714, 0, 0);
    }
    temp_r6 = func_08008910(arg0);
    func_08008F0C(&sp20, temp_r5 + arg0 + 0x710 + 4, (((var_sb * 0x18) + 0xD0) << 5) + 0x06000000, 0x300);
    sp8C = sp98;
    temp_r1_2 = temp_r6->unk4;
    if (temp_r1_2 != temp_r6->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) sp8C->unk0;
            temp_r1_2->unk4 = (s32) sp8C->unk4;
            temp_r1_2->unk8 = (s32) sp8C->unk8;
            temp_r1_2->unkC = (s32) sp8C->unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
        var_sb += 1;
    } else {
        sp78 = 1;
        temp_r4 = (s32) (temp_r1_2 - temp_r6->unk0) >> 4;
        sp74 = temp_r4;
        var_r0 = &sp74;
        if ((u32) temp_r4 < 1U) {
            var_r0 = &sp78;
        }
        temp_r0_5 = temp_r4 + *var_r0;
        if (temp_r0_5 != 0) {
            temp_r4_2 = temp_r0_5 * 0x10;
            var_r0_2 = malloc(temp_r4_2);
            var_sl = temp_r4_2;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sl);
            }
        } else {
            var_r0_2 = 0;
            var_sl = 0;
        }
        spA0 = var_r0_2;
        var_r2 = temp_r6->unk0;
        var_ip = var_r0_2;
        var_sb += 1;
        if (var_r2 != temp_r1_2) {
            do {
                if (var_ip != 0) {
                    var_ip->unk0 = (s32) var_r2->unk0;
                    var_ip->unk4 = (s32) var_r2->unk4;
                    var_ip->unk8 = (s32) var_r2->unk8;
                    var_ip->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_ip += 0x10;
            } while (var_r2 != temp_r1_2);
        }
        if (sp78 == 1) {
            if (var_ip != 0) {
                var_ip->unk0 = (s32) sp8C->unk0;
                var_ip->unk4 = (s32) sp8C->unk4;
                var_ip->unk8 = (s32) sp8C->unk8;
                var_ip->unkC = (s32) sp8C->unkC;
            }
            var_r5 = var_ip + 0x10;
        } else {
            var_r8 = sp78;
            var_r2_2 = var_ip;
            if (sp78 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp8C->unk0;
                        var_r2_2->unk4 = (s32) sp8C->unk4;
                        var_r2_2->unk8 = (s32) sp8C->unk8;
                        var_r2_2->unkC = (s32) sp8C->unkC;
                    }
                    var_r8 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r8 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2_5 = temp_r6->unk4;
        temp_r0_6 = temp_r6->unk0;
        var_r1 = temp_r0_6;
        if (temp_r0_6 != temp_r2_5) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2_5);
        }
        if (temp_r0_6 != 0) {
            free();
        }
        temp_r6->unk0 = spA0;
        temp_r6->unk4 = var_r5;
        temp_r6->unkC = (void *) (spA0 + var_sl);
    }
    if (var_sb <= 4U) {
        goto loop_17;
    }
    temp_r5_2 = func_0807B188(arg0);
    func_08075C88(arg0->unk1C, arg0->unkC);
    func_08075E24(arg0->unk1C, (s16) ((temp_r5_2 + 8) * 8));
    func_0807B920(arg0, ((arg0->unk10 * 4) + arg0)->unk2A8);
    temp_r0_7 = func_08008918(arg0);
    spC.unk0 = 0x3F;
    temp_r0_7->unk50 = 0x3F;
    temp_r4_3 = __builtin_new(0x10);
    temp_r1_3 = func_08008918(arg0);
    temp_r4_3->unk0 = 0;
    temp_r4_3->unk4 = 0;
    temp_r4_3->unk8 = (s32) .L0807C1CC;
    temp_r5_3 = temp_r4_3 + 0xC;
    func_08009300(temp_r5_3, temp_r1_3);
    spC = temp_r4_3;
    func_0800934C(temp_r5_3, .L0807C1D0, 1, 1);
    temp_r0_8 = func_08008940(arg0);
    temp_r0_8->unk8->unk10(temp_r0_8, spC);
    sp90 = 0;
}

