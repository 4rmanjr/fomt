#include "common.h"
s32 free();                                           /* extern */
s16 func_080074C0(void *, s32);                     /* extern */
s16 func_08007D4C(void *, s32);                     /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
s32 func_0805E8F0(void *);                            /* extern */
s32 func_0805E99C(s32, s32, u16, ? *);                /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

void func_080CECE8(void *arg0, ? arg3) {
    s32 sp0;
    s32 sp8;
s32 sp20;
s32 sp3C;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    void *sp5C;
    s32 *sp60;
    void *sp64;
    void *sp68;
    s16 temp_r2;
    s16 temp_r2_3;
    s32 *var_r0_2;
    s32 *var_r0_4;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_7;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 var_r3_3;
    s32 var_r3_6;
    s32 var_sb;
    s32 var_sl;
    s8 *var_r1;
    s8 var_r0;
    u16 var_r2;
    u16 var_r2_2;
    u16 var_r3;
    u16 var_r3_4;
    void **temp_r1;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_6;
    void *temp_r0_8;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r2_2;
    void *temp_r2_4;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_5;
    void *temp_r5;
    void *temp_r7;
    void *var_r0_3;
    void *var_r0_5;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r2_5;
    void *var_r2_6;
    void *var_r3_2;
    void *var_r3_5;
    void *var_r5;
    void *var_r5_2;

    if (arg0->unk84 != 0) {
        temp_r0 = arg0->unk0->unk94;
        if (temp_r0 != 0) {
            if ((arg0->unk80 != temp_r0->unkBC) && ((s32) arg0->unk7C > 9)) {
                var_r1 = arg0 + 0x68;
                var_r0 = 0;
            } else {
                var_r1 = arg0 + 0x68;
                var_r0 = 1;
            }
            *var_r1 = var_r0;
        }
    }
    if (arg0->unk68 == 0) {
        return;
    }
    temp_r4 = arg0 + 0x38;
    if (arg0->unk0->unk88 == 3) {
        func_0805E8F0(temp_r4);
    }
    temp_r1 = arg0->unk38;
    (*temp_r1)->unk10(&sp0, temp_r1, *(arg0->unk3C + (temp_r4->unkC * 4)));
    sp20.unk0 = 0U;
    sp20.unk2 = 0U;
    sp20.unk4 = 0;
    sp20.unk6 = 0;
    sp20.unk8 = 0;
    sp20.unkC = 0;
    sp20.unk10 = 0;
    sp20.unk11 = 0;
    sp20.unk14 = 0;
    sp20.unk18 = 0;
    var_r2 = 0;
    if (sp0 != 0) {
        var_r2 = sp0.unk4;
    }
    if (var_r2 == 0) {
        return;
    }
    temp_r0_2 = arg0 + 0x4C;
    temp_r0_3 = temp_r0_2 + 0xC;
    sp20.unk0 = (s32) arg0->unk4C;
    sp20.unk4 = (s32) temp_r0_2->unk4;
    sp20.unk8 = (s32) temp_r0_2->unk8;
    temp_r1_2 = &sp20 + 0xC;
    sp20.unkC = (s32) temp_r0_2->unkC;
    temp_r1_2->unk4 = (s32) temp_r0_3->unk4;
    temp_r1_2->unk8 = (s32) temp_r0_3->unk8;
    temp_r1_2->unkC = (s32) temp_r0_3->unkC;
    sp20.unk0 = (u16) arg0->unk34;
    sp20.unk2 = (u16) arg0->unk36;
    sp20.unk8 = 1;
    temp_r4_2 = arg0 + 0x74;
    sp20.unk4 = func_080074C0(temp_r4_2, temp_r4_2->unk4);
    temp_r7 = arg0 + 0x6C;
    sp20.unk6 = func_08007D4C(temp_r7, temp_r7->unk4);
    sp20.unk18 = 1;
    temp_r0_4 = func_08008920(arg0->unk0);
    var_r2_2 = 0;
    sp5C = temp_r4_2;
    if (sp0 != 0) {
        var_r2_2 = sp0.unk4;
    }
    func_0805E99C(temp_r0_4, sp0, var_r2_2, &sp20);
    temp_r5 = func_08008910(arg0->unk0);
    temp_r2 = func_08007D4C(temp_r7, temp_r7->unk4);
    var_r3 = 0;
    if (sp8 != 0) {
        var_r3 = sp8.unk4;
    }
    func_08008F0C(&sp3C, sp8, (temp_r2 << 5) + 0x06010000, var_r3);
    temp_r1_3 = temp_r5->unk4;
    if (temp_r1_3 != temp_r5->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) sp3C.unk0;
            temp_r1_3->unk4 = (s32) sp3C.unk4;
            temp_r1_3->unk8 = (s32) sp3C.unk8;
            temp_r1_3->unkC = (s32) sp3C.unkC;
        }
        temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
        sp60 = &sp0 + 0x10;
    } else {
        sp64 = temp_r1_3;
        sp50 = 1;
        temp_r4_3 = (s32) (temp_r1_3 - temp_r5->unk0) >> 4;
        sp4C = temp_r4_3;
        var_r0_2 = &sp4C;
        if ((u32) temp_r4_3 < 1U) {
            var_r0_2 = &sp50;
        }
        temp_r0_5 = temp_r4_3 + *var_r0_2;
        if (temp_r0_5 != 0) {
            temp_r4_4 = temp_r0_5 * 0x10;
            var_r0_3 = malloc(temp_r4_4);
            var_sl = temp_r4_4;
            if (var_r0_3 == 0) {
                var_r0_3 = func_080D3BC0(var_sl);
            }
        } else {
            var_r0_3 = 0;
            var_sl = 0;
        }
        sp68 = var_r0_3;
        var_r2_3 = temp_r5->unk0;
        var_r3_2 = var_r0_3;
        sp60 = &sp0 + 0x10;
        if (var_r2_3 != sp64) {
            do {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) var_r2_3->unk0;
                    var_r3_2->unk4 = (s32) var_r2_3->unk4;
                    var_r3_2->unk8 = (s32) var_r2_3->unk8;
                    var_r3_2->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_2 += 0x10;
            } while (var_r2_3 != sp64);
        }
        if (sp50 == 1) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) sp3C.unk0;
                var_r3_2->unk4 = (s32) sp3C.unk4;
                var_r3_2->unk8 = (s32) sp3C.unk8;
                var_r3_2->unkC = (s32) sp3C.unkC;
            }
            var_r5 = var_r3_2 + 0x10;
        } else {
            var_r3_3 = sp50;
            var_r2_4 = var_r3_2;
            if (var_r3_3 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) sp3C.unk0;
                        var_r2_4->unk4 = (s32) sp3C.unk4;
                        var_r2_4->unk8 = (s32) sp3C.unk8;
                        var_r2_4->unkC = (s32) sp3C.unkC;
                    }
                    var_r3_3 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_3 != 0);
            }
            var_r5 = var_r2_4;
        }
        temp_r2_2 = temp_r5->unk4;
        temp_r0_6 = temp_r5->unk0;
        var_r1_2 = temp_r0_6;
        if (temp_r0_6 != temp_r2_2) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_2);
        }
        if (temp_r0_6 != 0) {
            free();
        }
        temp_r5->unk0 = sp68;
        temp_r5->unk4 = var_r5;
        temp_r5->unkC = (void *) (sp68 + var_sl);
    }
    temp_r4_5 = func_08008910(arg0->unk0);
    temp_r2_3 = func_080074C0(sp5C, sp5C->unk4);
    var_r3_4 = 0;
    if (sp10 != 0) {
        var_r3_4 = sp60->unk4;
    }
    func_08008F0C(&sp3C, sp10, (temp_r2_3 << 5) + 0x05000200, var_r3_4);
    temp_r1_4 = temp_r4_5->unk4;
    if (temp_r1_4 != temp_r4_5->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (s32) sp3C.unk0;
            temp_r1_4->unk4 = (s32) sp3C.unk4;
            temp_r1_4->unk8 = (s32) sp3C.unk8;
            temp_r1_4->unkC = (s32) sp3C.unkC;
        }
        temp_r4_5->unk4 = (void *) (temp_r4_5->unk4 + 0x10);
        return;
    }
    sp58 = 1;
    temp_r4_6 = (s32) (temp_r1_4 - temp_r4_5->unk0) >> 4;
    sp54 = temp_r4_6;
    var_r0_4 = &sp54;
    if ((u32) temp_r4_6 < 1U) {
        var_r0_4 = &sp58;
    }
    temp_r0_7 = temp_r4_6 + *var_r0_4;
    if (temp_r0_7 != 0) {
        temp_r4_7 = temp_r0_7 * 0x10;
        var_r0_5 = malloc(temp_r4_7);
        var_sb = temp_r4_7;
        if (var_r0_5 == 0) {
            var_r0_5 = func_080D3BC0(var_sb);
        }
    } else {
        var_r0_5 = 0;
        var_sb = 0;
    }
    sp68 = var_r0_5;
    var_r2_5 = temp_r4_5->unk0;
    var_r3_5 = var_r0_5;
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
    if (sp58 == 1) {
        if (var_r3_5 != 0) {
            var_r3_5->unk0 = (s32) sp3C.unk0;
            var_r3_5->unk4 = (s32) sp3C.unk4;
            var_r3_5->unk8 = (s32) sp3C.unk8;
            var_r3_5->unkC = (s32) sp3C.unkC;
        }
        var_r5_2 = var_r3_5 + 0x10;
    } else {
        var_r3_6 = sp58;
        var_r2_6 = var_r3_5;
        if (var_r3_6 != 0) {
            do {
                if (var_r2_6 != 0) {
                    var_r2_6->unk0 = (s32) sp3C.unk0;
                    var_r2_6->unk4 = (s32) sp3C.unk4;
                    var_r2_6->unk8 = (s32) sp3C.unk8;
                    var_r2_6->unkC = (s32) sp3C.unkC;
                }
                var_r3_6 -= 1;
                var_r2_6 += 0x10;
            } while (var_r3_6 != 0);
        }
        var_r5_2 = var_r2_6;
    }
    temp_r2_4 = temp_r4_5->unk4;
    temp_r0_8 = temp_r4_5->unk0;
    var_r1_3 = temp_r0_8;
    if (temp_r0_8 != temp_r2_4) {
        do {
            var_r1_3 += 0x10;
        } while (var_r1_3 != temp_r2_4);
    }
    if (temp_r0_8 != 0) {
        free();
    }
    temp_r4_5->unk0 = sp68;
    temp_r4_5->unk4 = var_r5_2;
    temp_r4_5->unkC = (void *) (sp68 + var_sb);
}

