#include "common.h"
s32 free();                                           /* extern */
s32 func_08008F60(s32 *, u16, s32, s32);                /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

void func_080146FC(void *arg0, u16 arg1) {
s32 sp0;
s32 sp4;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 *sp2C;
    s8 *sp30;
    s8 *sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s16 *sp44;
    s16 *sp48;
    void *sp4C;
    void *sp50;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 *var_r0_5;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 temp_r1_3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 var_r3_2;
    s32 var_r3_4;
    s32 var_r3_6;
    s32 var_r8;
    s32 var_sb;
    s32 var_sl;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r0_6;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_4;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r5;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r1;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r2_5;
    void *var_r2_6;
    void *var_r3;
    void *var_r3_3;
    void *var_r3_5;
    void *var_r4;
    void *var_r4_2;
    void *var_r4_3;

    temp_r5 = arg0->unk4;
    temp_r5->unkEA = 1;
    temp_r5->unkEC = arg1;
    temp_r5->unk10 = (u16) (temp_r5->unk10 | 0x100);
    sp0.unk0 = 0x1F0C;
    temp_r5->unk18 = 0x1F0C;
    sp0.unk0 = 0;
    (temp_r5 + 0x10)->unk10 = 0;
    sp0.unk0 = 0;
    temp_r5->unk22 = 0;
    func_08008F60(&sp4, temp_r5->unkEC, 0x05000002, 2);
    temp_r1 = temp_r5->unk4;
    if (temp_r1 != temp_r5->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) sp4.unk0;
            temp_r1->unk4 = (s32) sp4.unk4;
            temp_r1->unk8 = (s32) sp4.unk8;
            temp_r1->unkC = (s32) sp4.unkC;
        }
        temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
        sp38 = 0x600;
        sp3C = 0;
        sp40 = 0xF800;
        sp44 = temp_r5 + 0x60;
        sp30 = temp_r5 + 0xEE;
        sp48 = temp_r5 + 0x62;
        sp34 = temp_r5 + 0xEF;
        sp2C = temp_r5 + 0x9C;
    } else {
        sp4C = temp_r1;
        sp18 = 1;
        temp_r4 = (s32) (temp_r1 - temp_r5->unk0) >> 4;
        sp14 = temp_r4;
        var_r0 = &sp14;
        if ((u32) temp_r4 < 1U) {
            var_r0 = &sp18;
        }
        temp_r0 = temp_r4 + *var_r0;
        if (temp_r0 != 0) {
            temp_r4_2 = temp_r0 * 0x10;
            var_r0_2 = malloc(temp_r4_2);
            var_sl = temp_r4_2;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sl);
            }
        } else {
            var_r0_2 = 0;
            var_sl = 0;
        }
        sp50 = var_r0_2;
        var_r2 = temp_r5->unk0;
        var_r3 = var_r0_2;
        sp38 = 0x600;
        sp3C = 0;
        sp40 = 0xF800;
        sp44 = temp_r5 + 0x60;
        sp30 = temp_r5 + 0xEE;
        sp48 = temp_r5 + 0x62;
        sp34 = temp_r5 + 0xEF;
        sp2C = temp_r5 + 0x9C;
loop_14:
        if (var_r2 != sp4C) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) var_r2->unk0;
                var_r3->unk4 = (s32) var_r2->unk4;
                var_r3->unk8 = (s32) var_r2->unk8;
                var_r3->unkC = (s32) var_r2->unkC;
            }
            var_r2 += 0x10;
            var_r3 += 0x10;
            goto loop_14;
        }
        if (sp18 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) sp4.unk0;
                var_r3->unk4 = (s32) sp4.unk4;
                var_r3->unk8 = (s32) sp4.unk8;
                var_r3->unkC = (s32) sp4.unkC;
            }
            var_r4 = var_r3 + 0x10;
        } else {
            var_r3_2 = sp18;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp4.unk0;
                        var_r2_2->unk4 = (s32) sp4.unk4;
                        var_r2_2->unk8 = (s32) sp4.unk8;
                        var_r2_2->unkC = (s32) sp4.unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r4 = var_r2_2;
        }
        temp_r2 = temp_r5->unk4;
        temp_r0_2 = temp_r5->unk0;
        var_r1 = temp_r0_2;
        if (temp_r0_2 != temp_r2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0_2 != 0) {
            free();
        }
        temp_r5->unk0 = sp50;
        temp_r5->unk4 = var_r4;
        temp_r5->unkC = (void *) (sp50 + var_sl);
    }
    func_08008F60(&sp0, 0x11111111U, ((sp38 + 0x1E8) << 5) + 0x06000000, 0x20);
    temp_r1_2 = temp_r5->unk4;
    if (temp_r1_2 != temp_r5->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) sp0.unk0;
            temp_r1_2->unk4 = (s32) sp0.unk4;
            temp_r1_2->unk8 = (s32) sp0.unk8;
            temp_r1_2->unkC = (s32) sp0.unkC;
        }
        temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
    } else {
        sp4C = temp_r1_2;
        sp20 = 1;
        temp_r4_3 = (s32) (temp_r1_2 - temp_r5->unk0) >> 4;
        sp1C = temp_r4_3;
        var_r0_3 = &sp1C;
        if ((u32) temp_r4_3 < 1U) {
            var_r0_3 = &sp20;
        }
        temp_r0_3 = temp_r4_3 + *var_r0_3;
        if (temp_r0_3 != 0) {
            temp_r4_4 = temp_r0_3 * 0x10;
            var_r0_4 = malloc(temp_r4_4);
            var_sb = temp_r4_4;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_sb);
            }
        } else {
            var_r0_4 = 0;
            var_sb = 0;
        }
        sp50 = var_r0_4;
        var_r2_3 = temp_r5->unk0;
        var_r3_3 = var_r0_4;
        if (var_r2_3 != sp4C) {
            do {
                if (var_r3_3 != 0) {
                    var_r3_3->unk0 = (s32) var_r2_3->unk0;
                    var_r3_3->unk4 = (s32) var_r2_3->unk4;
                    var_r3_3->unk8 = (s32) var_r2_3->unk8;
                    var_r3_3->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_3 += 0x10;
            } while (var_r2_3 != sp4C);
        }
        if (sp20 == 1) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = (s32) sp0.unk0;
                var_r3_3->unk4 = (s32) sp0.unk4;
                var_r3_3->unk8 = (s32) sp0.unk8;
                var_r3_3->unkC = (s32) sp0.unkC;
            }
            var_r4_2 = var_r3_3 + 0x10;
        } else {
            var_r3_4 = sp20;
            var_r2_4 = var_r3_3;
            if (var_r3_4 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) sp0.unk0;
                        var_r2_4->unk4 = (s32) sp0.unk4;
                        var_r2_4->unk8 = (s32) sp0.unk8;
                        var_r2_4->unkC = (s32) sp0.unkC;
                    }
                    var_r3_4 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_4 != 0);
            }
            var_r4_2 = var_r2_4;
        }
        temp_r2_2 = temp_r5->unk4;
        temp_r0_4 = temp_r5->unk0;
        var_r1_2 = temp_r0_4;
        if (temp_r0_4 != temp_r2_2) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_2);
        }
        if (temp_r0_4 != 0) {
            free();
        }
        temp_r5->unk0 = sp50;
        temp_r5->unk4 = var_r4_2;
        temp_r5->unkC = (void *) (sp50 + var_sb);
    }
    temp_r1_3 = (sp3C & 0xF000) | 0x1E8;
    func_08008F60(&sp0, temp_r1_3 | (temp_r1_3 << 0x10), sp40 + 0x06000000, 0x500);
    temp_r1_4 = temp_r5->unk4;
    if (temp_r1_4 != temp_r5->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (s32) sp0.unk0;
            temp_r1_4->unk4 = (s32) sp0.unk4;
            temp_r1_4->unk8 = (s32) sp0.unk8;
            temp_r1_4->unkC = (s32) sp0.unkC;
        }
        temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
    } else {
        sp28 = 1;
        temp_r4_5 = (s32) (temp_r1_4 - temp_r5->unk0) >> 4;
        sp24 = temp_r4_5;
        var_r0_5 = &sp24;
        if ((u32) temp_r4_5 < 1U) {
            var_r0_5 = &sp28;
        }
        temp_r0_5 = temp_r4_5 + *var_r0_5;
        if (temp_r0_5 != 0) {
            temp_r4_6 = temp_r0_5 * 0x10;
            var_r0_6 = malloc(temp_r4_6);
            var_r8 = temp_r4_6;
            if (var_r0_6 == 0) {
                var_r0_6 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_6 = 0;
            var_r8 = 0;
        }
        sp50 = var_r0_6;
        var_r2_5 = temp_r5->unk0;
        var_r3_5 = var_r0_6;
        if (var_r2_5 != temp_r1_4) {
            do {
                if (var_r3_5 != 0) {
                    var_r3_5->unk0 = (s32) var_r2_5->unk0;
                    var_r3_5->unk4 = (s32) var_r2_5->unk4;
                    var_r3_5->unk8 = (s32) var_r2_5->unk8;
                    var_r3_5->unkC = (s32) var_r2_5->unkC;
                }
                var_r2_5 += 0x10;
                var_r3_5 += 0x10;
            } while (var_r2_5 != temp_r1_4);
        }
        if (sp28 == 1) {
            if (var_r3_5 != 0) {
                var_r3_5->unk0 = (s32) sp0.unk0;
                var_r3_5->unk4 = (s32) sp0.unk4;
                var_r3_5->unk8 = (s32) sp0.unk8;
                var_r3_5->unkC = (s32) sp0.unkC;
            }
            var_r4_3 = var_r3_5 + 0x10;
        } else {
            var_r3_6 = sp28;
            var_r2_6 = var_r3_5;
            if (var_r3_6 != 0) {
                do {
                    if (var_r2_6 != 0) {
                        var_r2_6->unk0 = (s32) sp0.unk0;
                        var_r2_6->unk4 = (s32) sp0.unk4;
                        var_r2_6->unk8 = (s32) sp0.unk8;
                        var_r2_6->unkC = (s32) sp0.unkC;
                    }
                    var_r3_6 -= 1;
                    var_r2_6 += 0x10;
                } while (var_r3_6 != 0);
            }
            var_r4_3 = var_r2_6;
        }
        temp_r2_3 = temp_r5->unk4;
        temp_r0_6 = temp_r5->unk0;
        var_r1_3 = temp_r0_6;
        if (temp_r0_6 != temp_r2_3) {
            do {
                var_r1_3 += 0x10;
            } while (var_r1_3 != temp_r2_3);
        }
        if (temp_r0_6 != 0) {
            free();
        }
        temp_r5->unk0 = sp50;
        temp_r5->unk4 = var_r4_3;
        temp_r5->unkC = (void *) (sp50 + var_r8);
    }
    sp0.unk0 = 0x3E41;
    *sp44 = 0x3E41;
    *sp30 = 0x10;
    sp0.unk0 = 0x1010;
    *sp48 = 0x1010;
    *sp34 = 0;
    *sp2C = 0x1A;
}

