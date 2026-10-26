#include "common.h"
s32 free();                                           /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
s32 func_0805E99C(s32, s32, u16, void *);             /* extern */
u32 func_080D3BC0(u32);                             /* extern */
u32 malloc(u32);                                    /* extern */

void func_080BA7E4(void *arg0, s32 arg1) {
s32 sp0;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    ? *sp2C;
    ? *sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    void *sp48;
    u32 sp4C;
    s16 var_r1_2;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 *var_r0_5;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r0_6;
    s32 temp_r0_8;
    s32 temp_r1;
    s32 temp_r1_4;
    s32 temp_r2_2;
    s32 temp_r4_2;
    s32 temp_r4_5;
    s32 temp_r4_7;
    s32 temp_r4_9;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 var_r1;
    s32 var_r3_2;
    s32 var_r3_5;
    s32 var_r3_8;
    u16 var_r2_10;
    u16 var_r2_5;
    u16 var_r3_3;
    u16 var_r3_6;
    u16 var_r5;
    u16 var_r6;
    u32 temp_r4_3;
    u32 temp_r4_6;
    u32 temp_r4_8;
    u32 var_r0_2;
    u32 var_r0_4;
    u32 var_r0_6;
    u32 var_r2;
    u32 var_r2_2;
    u32 var_r2_4;
    u32 var_r2_7;
    u32 var_r2_9;
    u32 var_r3;
    u32 var_r3_4;
    u32 var_r3_7;
    u32 var_r4;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r7;
    u32 var_r8;
    u32 var_r8_2;
    u32 var_sl;
    u32 var_sl_2;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_7;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_5;
    void *temp_r2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r3;
    void *temp_r4;
    void *temp_r4_4;
    void *temp_r5;
    void *temp_r5_3;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r1_5;
    void *var_r2_3;
    void *var_r2_6;
    void *var_r2_8;

    var_r1 = arg1;
    sp28 = var_r1;
    var_r2 = 0;
    do {
        ((var_r2 * 4) + arg0)->unk7C8->unk6 = (s16) var_r1;
        var_r1 += 0xF;
        var_r2 += 1;
    } while (var_r2 <= 4U);
    var_r2_2 = 0;
    sp44 = sp28 << 5;
    var_r1_2 = sp28 + 0x4B;
    do {
        ((var_r2_2 * 4) + arg0)->unk884->unk6 = var_r1_2;
        var_r1_2 += 0xF;
        var_r2_2 += 1;
    } while (var_r2_2 <= 1U);
    arg0->unk8D0->unk6 = (s16) (sp28 + 0x69);
    var_r8 = 0;
loop_5:
    temp_r5 = func_08008910(arg0);
    temp_r1 = var_r8 << 5;
    temp_r4 = temp_r1 + arg0;
    var_r6 = 0;
    sp38 = temp_r1;
    if (temp_r4->unk7E4 != 0) {
        var_r6 = (temp_r4 + 0x7E4)->unk4;
    }
    func_08008F0C(&sp0, (temp_r1 + arg0)->unk7E4, (((var_r8 * 0xF) + sp28) << 5) + 0x06010000, var_r6);
    sp2C = &sp0;
    temp_r1_2 = temp_r5->unk4;
    if (temp_r1_2 != temp_r5->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) sp0.unk0;
            temp_r1_2->unk4 = (s32) sp0.unk4;
            temp_r1_2->unk8 = (s32) sp0.unk8;
            temp_r1_2->unkC = (s32) sp0.unkC;
        }
        temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
        sp34 = var_r8 * 4;
        var_r8 += 1;
    } else {
        sp48 = temp_r1_2;
        sp14 = 1;
        temp_r4_2 = (s32) (temp_r1_2 - temp_r5->unk0) >> 4;
        sp10 = temp_r4_2;
        var_r0 = &sp10;
        if ((u32) temp_r4_2 < 1U) {
            var_r0 = &sp14;
        }
        temp_r0 = temp_r4_2 + *var_r0;
        if (temp_r0 != 0) {
            temp_r4_3 = temp_r0 * 0x10;
            var_r0_2 = malloc(temp_r4_3);
            var_sl = temp_r4_3;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sl);
            }
        } else {
            var_r0_2 = 0;
            var_sl = 0;
        }
        sp4C = var_r0_2;
        var_r2_3 = temp_r5->unk0;
        var_r3 = var_r0_2;
        sp34 = var_r8 * 4;
        var_r8 += 1;
        if (var_r2_3 != sp48) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2_3->unk0;
                    var_r3->unk4 = (s32) var_r2_3->unk4;
                    var_r3->unk8 = (s32) var_r2_3->unk8;
                    var_r3->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3 += 0x10;
            } while (var_r2_3 != sp48);
        }
        if (sp14 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) sp2C->unk0;
                var_r3->unk4 = (s32) sp2C->unk4;
                var_r3->unk8 = (s32) sp2C->unk8;
                var_r3->unkC = (s32) sp2C->unkC;
            }
            var_r4 = var_r3 + 0x10;
        } else {
            var_r3_2 = sp14;
            var_r2_4 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) sp2C->unk0;
                        var_r2_4->unk4 = (s32) sp2C->unk4;
                        var_r2_4->unk8 = (s32) sp2C->unk8;
                        var_r2_4->unkC = (s32) sp2C->unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r4 = var_r2_4;
        }
        temp_r2 = temp_r5->unk4;
        temp_r0_2 = temp_r5->unk0;
        var_r1_3 = temp_r0_2;
        if (temp_r0_2 != temp_r2) {
            do {
                var_r1_3 += 0x10;
            } while (var_r1_3 != temp_r2);
        }
        if (temp_r0_2 != 0) {
            free();
        }
        temp_r5->unk0 = (void *) sp4C;
        temp_r5->unk4 = (void *) var_r4;
        temp_r5->unkC = (s32) (sp4C + var_sl);
    }
    temp_r5_2 = func_08008920(arg0);
    temp_r3 = sp38 + arg0;
    var_r2_5 = 0;
    if (temp_r3->unk7DC != 0) {
        var_r2_5 = (temp_r3 + 0x7DC)->unk4;
    }
    func_0805E99C(temp_r5_2, (sp38 + arg0)->unk7DC, var_r2_5, (sp34 + arg0)->unk7C8);
    if (var_r8 <= 4U) {
        goto loop_5;
    }
    var_r7 = 0;
loop_40:
    temp_r5_3 = func_08008910(arg0);
    temp_r2_2 = var_r7 << 5;
    temp_r4_4 = temp_r2_2 + arg0;
    var_r3_3 = 0;
    sp40 = temp_r2_2;
    if (temp_r4_4->unk894 != 0) {
        var_r3_3 = (temp_r4_4 + 0x894)->unk4;
    }
    func_08008F0C(&sp0, (temp_r2_2 + arg0)->unk894, (((var_r7 * 0xF) + sp28) << 5) + 0x06010960, var_r3_3);
    sp30 = &sp0;
    temp_r1_3 = temp_r5_3->unk4;
    if (temp_r1_3 != temp_r5_3->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) sp0.unk0;
            temp_r1_3->unk4 = (s32) sp0.unk4;
            temp_r1_3->unk8 = (s32) sp0.unk8;
            temp_r1_3->unkC = (s32) sp0.unkC;
        }
        temp_r5_3->unk4 = (void *) (temp_r5_3->unk4 + 0x10);
        sp3C = var_r7 * 4;
        sp4C = var_r7 + 1;
    } else {
        sp48 = temp_r1_3;
        sp1C = 1;
        temp_r4_5 = (s32) (temp_r1_3 - temp_r5_3->unk0) >> 4;
        sp18 = temp_r4_5;
        var_r0_3 = &sp18;
        if ((u32) temp_r4_5 < 1U) {
            var_r0_3 = &sp1C;
        }
        temp_r0_3 = temp_r4_5 + *var_r0_3;
        if (temp_r0_3 != 0) {
            temp_r4_6 = temp_r0_3 * 0x10;
            var_r0_4 = malloc(temp_r4_6);
            var_sl_2 = temp_r4_6;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_sl_2);
            }
        } else {
            var_r0_4 = 0;
            var_sl_2 = 0;
        }
        var_r2_6 = temp_r5_3->unk0;
        var_r3_4 = var_r0_4;
        sp3C = var_r7 * 4;
        sp4C = var_r7 + 1;
        if (var_r2_6 != sp48) {
            do {
                if (var_r3_4 != 0) {
                    var_r3_4->unk0 = (s32) var_r2_6->unk0;
                    var_r3_4->unk4 = (s32) var_r2_6->unk4;
                    var_r3_4->unk8 = (s32) var_r2_6->unk8;
                    var_r3_4->unkC = (s32) var_r2_6->unkC;
                }
                var_r2_6 += 0x10;
                var_r3_4 += 0x10;
            } while (var_r2_6 != sp48);
        }
        if (sp1C == 1) {
            if (var_r3_4 != 0) {
                var_r3_4->unk0 = (s32) sp30->unk0;
                var_r3_4->unk4 = (s32) sp30->unk4;
                var_r3_4->unk8 = (s32) sp30->unk8;
                var_r3_4->unkC = (s32) sp30->unkC;
            }
            var_r4_2 = var_r3_4 + 0x10;
        } else {
            var_r3_5 = sp1C;
            var_r2_7 = var_r3_4;
            if (var_r3_5 != 0) {
                do {
                    if (var_r2_7 != 0) {
                        var_r2_7->unk0 = (s32) sp30->unk0;
                        var_r2_7->unk4 = (s32) sp30->unk4;
                        var_r2_7->unk8 = (s32) sp30->unk8;
                        var_r2_7->unkC = (s32) sp30->unkC;
                    }
                    var_r3_5 -= 1;
                    var_r2_7 += 0x10;
                } while (var_r3_5 != 0);
            }
            var_r4_2 = var_r2_7;
        }
        temp_r2_3 = temp_r5_3->unk4;
        temp_r0_4 = temp_r5_3->unk0;
        var_r1_4 = temp_r0_4;
        if (temp_r0_4 != temp_r2_3) {
            do {
                var_r1_4 += 0x10;
            } while (var_r1_4 != temp_r2_3);
        }
        if (temp_r0_4 != 0) {
            free();
        }
        temp_r5_3->unk0 = (void *) var_r0_4;
        temp_r5_3->unk4 = (void *) var_r4_2;
        temp_r5_3->unkC = (s32) (var_sl_2 + var_r0_4);
    }
    temp_r6 = func_08008920(arg0);
    temp_r2_4 = sp40 + arg0;
    var_r5 = 0;
    if (temp_r2_4->unk88C != 0) {
        var_r5 = (temp_r2_4 + 0x88C)->unk4;
    }
    func_0805E99C(temp_r6, (sp40 + arg0)->unk88C, var_r5, (sp3C + arg0)->unk884);
    var_r7 = sp4C;
    if (var_r7 <= 1U) {
        goto loop_40;
    }
    temp_r0_5 = func_08008910(arg0);
    temp_r1_4 = arg0->unk8DC;
    var_r3_6 = 0;
    if (temp_r1_4 != 0) {
        var_r3_6 = (arg0 + 0x8DC)->unk4;
    }
    func_08008F0C(&sp0, temp_r1_4, sp44 + 0x06010D20, var_r3_6);
    temp_r1_5 = temp_r0_5->unk4;
    if (temp_r1_5 != temp_r0_5->unkC) {
        if (temp_r1_5 != 0) {
            temp_r1_5->unk0 = (s32) sp0.unk0;
            temp_r1_5->unk4 = (s32) sp0.unk4;
            temp_r1_5->unk8 = (s32) sp0.unk8;
            temp_r1_5->unkC = (s32) sp0.unkC;
        }
        temp_r0_5->unk4 = (void *) (temp_r0_5->unk4 + 0x10);
    } else {
        sp48 = temp_r1_5;
        sp24 = 1;
        temp_r4_7 = (s32) (temp_r1_5 - temp_r0_5->unk0) >> 4;
        sp20 = temp_r4_7;
        var_r0_5 = &sp20;
        if ((u32) temp_r4_7 < 1U) {
            var_r0_5 = &sp24;
        }
        temp_r0_6 = temp_r4_7 + *var_r0_5;
        if (temp_r0_6 != 0) {
            temp_r4_8 = temp_r0_6 * 0x10;
            var_r0_6 = malloc(temp_r4_8);
            var_r8_2 = temp_r4_8;
            if (var_r0_6 == 0) {
                var_r0_6 = func_080D3BC0(var_r8_2);
            }
        } else {
            var_r0_6 = 0;
            var_r8_2 = 0;
        }
        sp4C = var_r0_6;
        var_r2_8 = temp_r0_5->unk0;
        var_r3_7 = var_r0_6;
        if (var_r2_8 != sp48) {
            do {
                if (var_r3_7 != 0) {
                    var_r3_7->unk0 = (s32) var_r2_8->unk0;
                    var_r3_7->unk4 = (s32) var_r2_8->unk4;
                    var_r3_7->unk8 = (s32) var_r2_8->unk8;
                    var_r3_7->unkC = (s32) var_r2_8->unkC;
                }
                var_r2_8 += 0x10;
                var_r3_7 += 0x10;
            } while (var_r2_8 != sp48);
        }
        if (sp24 == 1) {
            if (var_r3_7 != 0) {
                var_r3_7->unk0 = (s32) sp0.unk0;
                var_r3_7->unk4 = (s32) sp0.unk4;
                var_r3_7->unk8 = (s32) sp0.unk8;
                var_r3_7->unkC = (s32) sp0.unkC;
            }
            var_r4_3 = var_r3_7 + 0x10;
        } else {
            var_r3_8 = sp24;
            var_r2_9 = var_r3_7;
            if (var_r3_8 != 0) {
                do {
                    if (var_r2_9 != 0) {
                        var_r2_9->unk0 = (s32) sp0.unk0;
                        var_r2_9->unk4 = (s32) sp0.unk4;
                        var_r2_9->unk8 = (s32) sp0.unk8;
                        var_r2_9->unkC = (s32) sp0.unkC;
                    }
                    var_r3_8 -= 1;
                    var_r2_9 += 0x10;
                } while (var_r3_8 != 0);
            }
            var_r4_3 = var_r2_9;
        }
        temp_r2_5 = temp_r0_5->unk4;
        temp_r0_7 = temp_r0_5->unk0;
        var_r1_5 = temp_r0_7;
        if (temp_r0_7 != temp_r2_5) {
            do {
                var_r1_5 += 0x10;
            } while (var_r1_5 != temp_r2_5);
        }
        if (temp_r0_7 != 0) {
            free();
        }
        temp_r0_5->unk0 = (void *) sp4C;
        temp_r0_5->unk4 = (void *) var_r4_3;
        temp_r0_5->unkC = (s32) (sp4C + var_r8_2);
    }
    temp_r4_9 = func_08008920(arg0);
    temp_r0_8 = arg0->unk8D4;
    var_r2_10 = 0;
    if (temp_r0_8 != 0) {
        var_r2_10 = (arg0 + 0x8D4)->unk4;
    }
    func_0805E99C(temp_r4_9, temp_r0_8, var_r2_10, arg0->unk8D0);
}

