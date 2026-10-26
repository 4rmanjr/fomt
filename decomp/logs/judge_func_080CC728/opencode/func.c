#include "common.h"
s32 free(void *);                                     /* extern */
s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008F0C(s32 *, s32, s32, s32);                /* extern */
s32 func_080CAC7C(s32 *, s32, u16, u32);                /* extern */
s32 func_080CAD18(s32, s32, u16, u32);                /* extern */
s32 func_080CAE60(void *, s32, s32, s32);             /* extern */
s32 func_080CAEEC(void *, u32, s32, s32);             /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern ? gUnk_08117860;

void func_080CC728(void *arg0, s32 arg1, s32 arg2, u16 arg3, u32 arg4) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
s32 spC;
s32 sp18;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 *sp40;
    s32 sp44;
    void *sp48;
    void *sp4C;
    void *sp50;
    s32 *var_r0;
    s32 *var_r0_4;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r4_2;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r6;
    s32 var_r3_2;
    s32 var_r3_4;
    s32 var_sb;
    s32 var_sb_2;
    u16 temp_r4;
    void *temp_r0;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r4_3;
    void *temp_r6_2;
    void *temp_r7;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r0_5;
    void *var_r0_6;
    void *var_r2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r3;
    void *var_r3_3;
    void *var_r5;
    void *var_r5_2;

    temp_r4 = arg3;
    func_080CAC7C(&spC, arg2, temp_r4, arg4);
    func_080CAD18((arg1 * 0xC) + arg0 + 0x218, arg2, temp_r4, arg4);
    temp_r4_2 = arg1 * 8;
    temp_r0 = temp_r4_2 + arg0 + 0x2AC;
    temp_r6 = func_08007D4C(temp_r0, temp_r0->unk4);
    temp_r4_3 = temp_r4_2 + arg0 + 0x2EC;
    sp3C = func_080074C0(temp_r4_3, temp_r4_3->unk4);
    temp_r1 = *((arg1 * 4) + &gUnk_08117860);
    sp38 = (temp_r1 & 0xFFFFFF00) | (u8) (temp_r1 + 0xF);
    temp_r7 = arg0->unk278;
    func_08008F0C(&sp18, sp10, (temp_r6 << 5) + 0x06010000, 0x80);
    temp_r1_2 = temp_r7->unk4;
    if (temp_r1_2 != temp_r7->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) sp18.unk0;
            temp_r1_2->unk4 = (s32) sp18.unk4;
            temp_r1_2->unk8 = (s32) sp18.unk8;
            temp_r1_2->unkC = (s32) sp18.unkC;
        }
        temp_r7->unk4 = (void *) (temp_r7->unk4 + 0x10);
        sp44 = sp3C << 5;
        sp40 = &sp0 + 0x38;
    } else {
        sp48 = temp_r1_2;
        sp2C = 1;
        temp_r4_4 = (s32) (sp48 - temp_r7->unk0) >> 4;
        sp28 = temp_r4_4;
        var_r0 = &sp28;
        if ((u32) temp_r4_4 < 1U) {
            var_r0 = &sp2C;
        }
        temp_r0_2 = temp_r4_4 + *var_r0;
        if (temp_r0_2 != 0) {
            temp_r4_5 = temp_r0_2 * 0x10;
            var_r0_2 = malloc(temp_r4_5);
            var_sb = temp_r4_5;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sb);
            }
        } else {
            var_r0_2 = 0;
            var_sb = 0;
        }
        sp4C = var_r0_2;
        var_r2 = temp_r7->unk0;
        var_r3 = var_r0_2;
        sp44 = sp3C << 5;
        sp40 = &sp0 + 0x38;
        if (var_r2 != sp48) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != sp48);
        }
        if (sp2C == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) sp18.unk0;
                var_r3->unk4 = (s32) sp18.unk4;
                var_r3->unk8 = (s32) sp18.unk8;
                var_r3->unkC = (s32) sp18.unkC;
            }
            var_r5 = var_r3 + 0x10;
        } else {
            var_r3_2 = sp2C;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp18.unk0;
                        var_r2_2->unk4 = (s32) sp18.unk4;
                        var_r2_2->unk8 = (s32) sp18.unk8;
                        var_r2_2->unkC = (s32) sp18.unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2 = temp_r7->unk4;
        temp_r1_3 = temp_r7->unk0;
        var_r0_3 = temp_r1_3;
        if (temp_r1_3 != temp_r2) {
            do {
                var_r0_3 += 0x10;
            } while (var_r0_3 != temp_r2);
        }
        if (temp_r1_3 != 0) {
            free(temp_r1_3);
        }
        temp_r7->unk0 = sp4C;
        temp_r7->unk4 = var_r5;
        temp_r7->unkC = (void *) (sp4C + var_sb);
    }
    temp_r6_2 = arg0->unk278;
    func_08008F0C(&sp18, sp14, sp44 + 0x05000200, 0x20);
    temp_r1_4 = temp_r6_2->unk4;
    if (temp_r1_4 != temp_r6_2->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (s32) sp18.unk0;
            temp_r1_4->unk4 = (s32) sp18.unk4;
            temp_r1_4->unk8 = (s32) sp18.unk8;
            temp_r1_4->unkC = (s32) sp18.unkC;
        }
        temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
    } else {
        sp50 = temp_r1_4;
        sp34 = 1;
        temp_r4_6 = (s32) (sp50 - temp_r6_2->unk0) >> 4;
        sp30 = temp_r4_6;
        var_r0_4 = &sp30;
        if ((u32) temp_r4_6 < 1U) {
            var_r0_4 = &sp34;
        }
        temp_r0_3 = temp_r4_6 + *var_r0_4;
        if (temp_r0_3 != 0) {
            temp_r4_7 = temp_r0_3 * 0x10;
            var_r0_5 = malloc(temp_r4_7);
            var_sb_2 = temp_r4_7;
            if (var_r0_5 == 0) {
                var_r0_5 = func_080D3BC0(var_sb_2);
            }
        } else {
            var_r0_5 = 0;
            var_sb_2 = 0;
        }
        sp4C = var_r0_5;
        var_r2_3 = temp_r6_2->unk0;
        var_r3_3 = var_r0_5;
        if (var_r2_3 != sp50) {
            do {
                if (var_r3_3 != 0) {
                    var_r3_3->unk0 = (s32) var_r2_3->unk0;
                    var_r3_3->unk4 = (s32) var_r2_3->unk4;
                    var_r3_3->unk8 = (s32) var_r2_3->unk8;
                    var_r3_3->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_3 += 0x10;
            } while (var_r2_3 != sp50);
        }
        if (sp34 == 1) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = (s32) sp18.unk0;
                var_r3_3->unk4 = (s32) sp18.unk4;
                var_r3_3->unk8 = (s32) sp18.unk8;
                var_r3_3->unkC = (s32) sp18.unkC;
            }
            var_r5_2 = var_r3_3 + 0x10;
        } else {
            var_r3_4 = sp34;
            var_r2_4 = var_r3_3;
            if (var_r3_4 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) sp18.unk0;
                        var_r2_4->unk4 = (s32) sp18.unk4;
                        var_r2_4->unk8 = (s32) sp18.unk8;
                        var_r2_4->unkC = (s32) sp18.unkC;
                    }
                    var_r3_4 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_4 != 0);
            }
            var_r5_2 = var_r2_4;
        }
        temp_r2_2 = temp_r6_2->unk4;
        temp_r1_5 = temp_r6_2->unk0;
        var_r0_6 = temp_r1_5;
        if (temp_r1_5 != temp_r2_2) {
            do {
                var_r0_6 += 0x10;
            } while (var_r0_6 != temp_r2_2);
        }
        if (temp_r1_5 != 0) {
            free(temp_r1_5);
        }
        temp_r6_2->unk0 = sp4C;
        temp_r6_2->unk4 = var_r5_2;
        temp_r6_2->unkC = (void *) (sp4C + var_sb_2);
    }
    sp0 = 1;
    sp4 = 0;
    sp8 = 0x20;
    func_080CAE60(arg0, (sp40->unk1 << 6) + ((sp38 * 2) + 0x0600F080), 0x54, 2);
    if (arg4 > 1U) {
        sp0 = 0;
        sp4 = 0x20;
        func_080CAEEC(arg0, arg4, (sp40->unk1 << 6) + ((sp40->unk0 * 2) + 0x0600F082), 0x20);
    }
}

