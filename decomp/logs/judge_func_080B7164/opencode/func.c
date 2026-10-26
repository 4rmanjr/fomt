#include "common.h"
s32 Unpack(s32 *, s32);                                 /* extern */
s32 free();                                           /* extern */
s32 func_08008724();                                  /* extern */
void *func_08008910(s32);                           /* extern */
s16 *func_08008918(s32);                            /* extern */
s32 func_08008E64(s32 *, s32, s32);                     /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_08008F0C(s32 *, s32, s32, s32);                /* extern */
s32 func_0804E7A0(s32, s32, s32);                     /* extern */
s32 func_0804E958(s32, s32, s32, s32);                /* extern */
s32 func_080BC254(s32, s32, s32, s32);              /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern ? gUnk_0872D5CC;
extern ? gUnk_0872D630;
extern ? gUnk_0872D6D8;
extern ? gUnk_0872DDE4;

void func_080B7164(s32 arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
s32 spC;
s32 sp10;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 *sp44;
    s32 sp48;
    s32 sp4C;
    s32 *sp50;
    s32 *sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 *sp64;
    s32 *sp68;
    void *sp6C;
    void *sp70;
    void *sp74;
    void *sp78;
    s16 *temp_r0;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r0_4;
    s16 *temp_r0_5;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 temp_r0_6;
    s32 temp_r0_8;
    s32 temp_r2;
    s32 temp_r2_3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r3_2;
    s32 var_r3_4;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_sl;
    void *temp_r0_7;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r2_2;
    void *temp_r2_4;
    void *temp_r6_2;
    void *temp_r7;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r1;
    void *var_r1_2;
    void *var_r2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r3;
    void *var_r3_3;
    void *var_r4;
    void *var_r5;

    sp40 = arg1;
    func_08008724();
    Unpack(&gUnk_0872D5CC, 0x0600F000);
    Unpack(&gUnk_0872D630, 0x0600F800);
    Unpack(&gUnk_0872D6D8, 0x06000000);
    func_08008EB8(0, 0x0600BFE0, 0x20);
    func_08008E64(&gUnk_0872DDE4, 0x05000000, 0x200);
    temp_r0 = func_08008918(arg0);
    spC.unk0 = 0x1640;
    *temp_r0 = 0x1640;
    temp_r0_2 = func_08008918(arg0);
    spC.unk0 = 0x1F41;
    temp_r0_2->unkA = 0x1F41;
    temp_r0_3 = func_08008918(arg0);
    spC.unk0 = 0x1E42;
    temp_r0_3->unkC = 0x1E42;
    temp_r0_4 = func_08008918(arg0);
    spC.unk0 = 0;
    temp_r0_4->unk14 = 0;
    temp_r0_5 = func_08008918(arg0);
    spC.unk0 = 0;
    temp_r0_5->unk16 = 0;
    (void *)0x05000200->unk0 = 0x3E0;
    (void *)0x05000200->unk2 = 0xFFFE;
    ((void *)0x05000200 + 2)->unk2 = 0x7F34;
    var_sl = 0;
    sp50 = &sp0 + 0x20;
    sp54 = &sp0 + 0x24;
    sp64 = &sp0 + 0x30;
    sp68 = &sp0 + 0x34;
    sp44 = &sp0 + 0x10;
loop_1:
    temp_r4 = var_sl * 0x104;
    sp20 = 4;
    sp50->unk2 = 2;
    func_0804E7A0(sp20, temp_r4 + arg0 + 0xF0, 0);
    temp_r6 = var_sl * 2;
    temp_r2 = func_080BC254(arg0, 2, temp_r6, arg0 + 0x9E);
    sp24 = 4;
    sp54->unk2 = 2;
    sp0 = temp_r2;
    sp4 = 0;
    sp8 = 1;
    func_0804E958(sp24, temp_r4 + arg0 + 0xF0, 0, 0);
    temp_r5 = var_sl * 8;
    temp_r7 = func_08008910(arg0);
    func_08008F0C(&sp10, temp_r4 + arg0 + 0xF0, ((temp_r5 + sp40) << 5) + 0x06010000, 0x100);
    temp_r1 = temp_r7->unk4;
    sp60 = var_sl << 6;
    sp58 = temp_r6;
    sp5C = temp_r5;
    if (temp_r1 != temp_r7->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) sp44->unk0;
            temp_r1->unk4 = (s32) sp44->unk4;
            temp_r1->unk8 = (s32) sp44->unk8;
            temp_r1->unkC = (s32) sp44->unkC;
        }
        temp_r7->unk4 = (void *) (temp_r7->unk4 + 0x10);
        sp48 = arg0 + 0xDE;
        sp4C = var_sl + 1;
    } else {
        sp6C = temp_r1;
        sp2C = 1;
        temp_r4_2 = (s32) (temp_r1 - temp_r7->unk0) >> 4;
        sp28 = temp_r4_2;
        var_r0 = &sp28;
        if ((u32) temp_r4_2 < 1U) {
            var_r0 = &sp2C;
        }
        temp_r0_6 = temp_r4_2 + *var_r0;
        if (temp_r0_6 != 0) {
            temp_r4_3 = temp_r0_6 * 0x10;
            var_r0_2 = malloc(temp_r4_3);
            var_r8 = temp_r4_3;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_2 = 0;
            var_r8 = 0;
        }
        sp70 = var_r0_2;
        var_r2 = temp_r7->unk0;
        var_r3 = var_r0_2;
        sp48 = arg0 + 0xDE;
        sp4C = var_sl + 1;
        if (var_r2 != sp6C) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != sp6C);
        }
        if (sp2C == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) sp44->unk0;
                var_r3->unk4 = (s32) sp44->unk4;
                var_r3->unk8 = (s32) sp44->unk8;
                var_r3->unkC = (s32) sp44->unkC;
            }
            var_r4 = var_r3 + 0x10;
        } else {
            var_r3_2 = sp2C;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp44->unk0;
                        var_r2_2->unk4 = (s32) sp44->unk4;
                        var_r2_2->unk8 = (s32) sp44->unk8;
                        var_r2_2->unkC = (s32) sp44->unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r4 = var_r2_2;
        }
        temp_r2_2 = temp_r7->unk4;
        temp_r0_7 = temp_r7->unk0;
        var_r1 = temp_r0_7;
        if (temp_r0_7 != temp_r2_2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2_2);
        }
        if (temp_r0_7 != 0) {
            free();
        }
        temp_r7->unk0 = sp70;
        temp_r7->unk4 = var_r4;
        temp_r7->unkC = (void *) (sp70 + var_r8);
    }
    temp_r4_4 = (sp60 + var_sl) * 4;
    sp30 = 4;
    sp64->unk2 = 2;
    func_0804E7A0(sp30, temp_r4_4 + arg0 + 0x3F8 + 4, 0);
    temp_r2_3 = func_080BC254(arg0, 2, sp58, sp48);
    sp34 = 4;
    sp68->unk2 = 2;
    sp0 = temp_r2_3;
    sp4 = 0;
    sp8 = 1;
    func_0804E958(sp34, temp_r4_4 + arg0 + 0x3F8 + 4, 0, 0);
    temp_r6_2 = func_08008910(arg0);
    func_08008F0C(&spC, temp_r4_4 + arg0 + 0x3F8 + 4, ((sp5C + sp40) << 5) + 0x06010300, 0x100);
    temp_r1_2 = temp_r6_2->unk4;
    if (temp_r1_2 != temp_r6_2->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) spC.unk0;
            temp_r1_2->unk4 = (s32) spC.unk4;
            temp_r1_2->unk8 = (s32) spC.unk8;
            temp_r1_2->unkC = (s32) spC.unkC;
        }
        temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
    } else {
        sp74 = temp_r1_2;
        sp3C = 1;
        temp_r4_5 = (s32) (temp_r1_2 - temp_r6_2->unk0) >> 4;
        sp38 = temp_r4_5;
        var_r0_3 = &sp38;
        if ((u32) temp_r4_5 < 1U) {
            var_r0_3 = &sp3C;
        }
        temp_r0_8 = temp_r4_5 + *var_r0_3;
        if (temp_r0_8 != 0) {
            temp_r4_6 = temp_r0_8 * 0x10;
            var_r0_4 = malloc(temp_r4_6);
            var_r8_2 = temp_r4_6;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_r8_2);
            }
        } else {
            var_r0_4 = 0;
            var_r8_2 = 0;
        }
        sp78 = var_r0_4;
        var_r2_3 = temp_r6_2->unk0;
        var_r3_3 = var_r0_4;
loop_43:
        if (var_r2_3 != sp74) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = (s32) var_r2_3->unk0;
                var_r3_3->unk4 = (s32) var_r2_3->unk4;
                var_r3_3->unk8 = (s32) var_r2_3->unk8;
                var_r3_3->unkC = (s32) var_r2_3->unkC;
            }
            var_r2_3 += 0x10;
            var_r3_3 += 0x10;
            goto loop_43;
        }
        if (sp3C == 1) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = (s32) spC.unk0;
                var_r3_3->unk4 = (s32) spC.unk4;
                var_r3_3->unk8 = (s32) spC.unk8;
                var_r3_3->unkC = (s32) spC.unkC;
            }
            var_r5 = var_r3_3 + 0x10;
        } else {
            var_r3_4 = sp3C;
            var_r2_4 = var_r3_3;
            if (var_r3_4 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) spC.unk0;
                        var_r2_4->unk4 = (s32) spC.unk4;
                        var_r2_4->unk8 = (s32) spC.unk8;
                        var_r2_4->unkC = (s32) spC.unkC;
                    }
                    var_r3_4 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_4 != 0);
            }
            var_r5 = var_r2_4;
        }
        temp_r2_4 = temp_r6_2->unk4;
        temp_r0_9 = temp_r6_2->unk0;
        var_r1_2 = temp_r0_9;
        if (temp_r0_9 != temp_r2_4) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_4);
        }
        if (temp_r0_9 != 0) {
            free();
        }
        temp_r6_2->unk0 = sp78;
        temp_r6_2->unk4 = var_r5;
        temp_r6_2->unkC = (void *) (sp78 + var_r8_2);
    }
    var_sl = sp4C;
    if (sp4C <= 2) {
        goto loop_1;
    }
}

