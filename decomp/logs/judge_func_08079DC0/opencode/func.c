#include "common.h"
s32 free();                                           /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008F0C(s32 *, void *, s32, s32);             /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E958(s32, void *, s32, s32, ? *, s32, s32); /* extern */
s32 func_0807A708(void *, s32, ? *);                  /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern ? gUnk_0810828C;

void func_08079DC0(void *arg0) {
s32 spC;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    void *sp3C;
    s32 *temp_r0_3;
    s32 *var_r0_2;
    s32 temp_r0_4;
    s32 temp_r1;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 var_r3_2;
    s32 var_r5;
    s32 var_r7;
    s32 var_r8;
    u16 temp_r0;
    u32 temp_r0_2;
    u32 temp_r2;
    u32 var_r0;
    void *temp_r0_5;
    void *temp_r1_2;
    void *temp_r2_2;
    void *temp_r4;
    void *temp_r6;
    void *var_r0_3;
    void *var_r1;
    void *var_r2;
    void *var_r2_2;
    void *var_r3;
    void *var_r4;

    temp_r0 = arg0->unk840;
    temp_r2 = temp_r0 << 0x10;
    if ((u32) temp_r0 > (u32) arg0->unk842) {
        temp_r0_2 = temp_r2 >> 0x14;
        var_r7 = temp_r0_2 + 8;
        var_r5 = temp_r0_2 + 0xA;
        var_r0 = 0xF;
    } else {
        var_r0 = temp_r2 >> 0x14;
        var_r7 = var_r0 - 2;
        var_r5 = 0xF;
    }
    sp2C.unk0 = 0x1C;
    sp2C.unk2 = 2;
    temp_r4 = arg0 + 0x14;
    func_0804E7A0(sp2C, temp_r4, 0);
    if (var_r7 >= 0) {
        temp_r0_3 = *((*(arg0 + 0x858 + (var_r7 * 2)) * 4) + &gUnk_0810828C);
        arg0->unkA5C = temp_r0_3;
        temp_r1 = *temp_r0_3;
        if (temp_r1 != 0) {
            func_0807A708(arg0, temp_r1, &spC);
            sp30.unk0 = 0x1C;
            sp30.unk2 = 2;
            func_0804E958(sp30, temp_r4, 0, 0, &spC, 0, 1);
        }
    }
    temp_r6 = func_08008910(arg0);
    func_08008F0C(&spC, temp_r4, ((var_r5 & var_r0) * 0x700) + 0x06000C00, 0x700);
    temp_r1_2 = temp_r6->unk4;
    if (temp_r1_2 != temp_r6->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) spC.unk0;
            temp_r1_2->unk4 = (s32) spC.unk4;
            temp_r1_2->unk8 = (s32) spC.unk8;
            temp_r1_2->unkC = (s32) spC.unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
        return;
    }
    sp38 = 1;
    temp_r4_2 = (s32) (temp_r1_2 - temp_r6->unk0) >> 4;
    sp34 = temp_r4_2;
    var_r0_2 = &sp34;
    if ((u32) temp_r4_2 < 1U) {
        var_r0_2 = &sp38;
    }
    temp_r0_4 = temp_r4_2 + *var_r0_2;
    if (temp_r0_4 != 0) {
        temp_r4_3 = temp_r0_4 * 0x10;
        var_r0_3 = malloc(temp_r4_3);
        var_r8 = temp_r4_3;
        if (var_r0_3 == 0) {
            var_r0_3 = func_080D3BC0(var_r8);
        }
    } else {
        var_r0_3 = 0;
        var_r8 = 0;
    }
    sp3C = var_r0_3;
    var_r2 = temp_r6->unk0;
    var_r3 = var_r0_3;
    if (var_r2 != temp_r1_2) {
        do {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) var_r2->unk0;
                var_r3->unk4 = (s32) var_r2->unk4;
                var_r3->unk8 = (s32) var_r2->unk8;
                var_r3->unkC = (s32) var_r2->unkC;
            }
            var_r2 += 0x10;
            var_r3 += 0x10;
        } while (var_r2 != temp_r1_2);
    }
    if (sp38 == 1) {
        if (var_r3 != 0) {
            var_r3->unk0 = (s32) spC.unk0;
            var_r3->unk4 = (s32) spC.unk4;
            var_r3->unk8 = (s32) spC.unk8;
            var_r3->unkC = (s32) spC.unkC;
        }
        var_r4 = var_r3 + 0x10;
    } else {
        var_r3_2 = sp38;
        var_r2_2 = var_r3;
        if (var_r3_2 != 0) {
            do {
                if (var_r2_2 != 0) {
                    var_r2_2->unk0 = (s32) spC.unk0;
                    var_r2_2->unk4 = (s32) spC.unk4;
                    var_r2_2->unk8 = (s32) spC.unk8;
                    var_r2_2->unkC = (s32) spC.unkC;
                }
                var_r3_2 -= 1;
                var_r2_2 += 0x10;
            } while (var_r3_2 != 0);
        }
        var_r4 = var_r2_2;
    }
    temp_r2_2 = temp_r6->unk4;
    temp_r0_5 = temp_r6->unk0;
    var_r1 = temp_r0_5;
    if (temp_r0_5 != temp_r2_2) {
        do {
            var_r1 += 0x10;
        } while (var_r1 != temp_r2_2);
    }
    if (temp_r0_5 != 0) {
        free();
    }
    temp_r6->unk0 = sp3C;
    temp_r6->unk4 = var_r4;
    temp_r6->unkC = (void *) (sp3C + var_r8);
}

