#include "common.h"
s32 free();                                           /* extern */
void *func_08008910(s32);                           /* extern */
s32 func_08008F0C(s32 *, s32, s32);                     /* extern */
s32 func_0804E7DC(s32, s32, s32, s32, s32, s32);      /* extern */
s32 func_0804E8F0(s32, s32, s32, s32, s32);           /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

void func_0800637C(s32 arg0) {
s32 spC;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    void *sp2C;
    s32 *var_r0;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 var_r3_2;
    s32 var_r8;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r2;
    void *temp_r6;
    void *var_r0_2;
    void *var_r1;
    void *var_r2;
    void *var_r2_2;
    void *var_r3;
    void *var_r5;

    sp1C.unk0 = 0x1E;
    sp1C.unk2 = 2;
    temp_r4 = arg0 + 0x3C2C;
    func_0804E7DC(sp1C, temp_r4, 0, 0x60, 0x10, 0);
    sp20.unk0 = 0x1E;
    sp20.unk2 = 2;
    func_0804E8F0(sp20, temp_r4, 0x90, 0, arg0 + 0x461C);
    temp_r6 = func_08008910(arg0);
    func_08008F0C(&spC, temp_r4, 0x06003C00);
    temp_r1 = temp_r6->unk4;
    if (temp_r1 != temp_r6->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) spC.unk0;
            temp_r1->unk4 = (s32) spC.unk4;
            temp_r1->unk8 = (s32) spC.unk8;
            temp_r1->unkC = (s32) spC.unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
        return;
    }
    sp28 = 1;
    temp_r4_2 = (s32) (temp_r1 - temp_r6->unk0) >> 4;
    sp24 = temp_r4_2;
    var_r0 = &sp24;
    if ((u32) temp_r4_2 < 1U) {
        var_r0 = &sp28;
    }
    temp_r0 = temp_r4_2 + *var_r0;
    if (temp_r0 != 0) {
        temp_r4_3 = temp_r0 * 0x10;
        var_r0_2 = malloc(temp_r4_3);
        var_r8 = temp_r4_3;
        if (var_r0_2 == 0) {
            var_r0_2 = func_080D3BC0(var_r8);
        }
    } else {
        var_r0_2 = 0;
        var_r8 = 0;
    }
    sp2C = var_r0_2;
    var_r2 = temp_r6->unk0;
    var_r3 = var_r0_2;
    if (var_r2 != temp_r1) {
        do {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) var_r2->unk0;
                var_r3->unk4 = (s32) var_r2->unk4;
                var_r3->unk8 = (s32) var_r2->unk8;
                var_r3->unkC = (s32) var_r2->unkC;
            }
            var_r2 += 0x10;
            var_r3 += 0x10;
        } while (var_r2 != temp_r1);
    }
    if (sp28 == 1) {
        if (var_r3 != 0) {
            var_r3->unk0 = (s32) spC.unk0;
            var_r3->unk4 = (s32) spC.unk4;
            var_r3->unk8 = (s32) spC.unk8;
            var_r3->unkC = (s32) spC.unkC;
        }
        var_r5 = var_r3 + 0x10;
    } else {
        var_r3_2 = sp28;
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
        var_r5 = var_r2_2;
    }
    temp_r2 = temp_r6->unk4;
    temp_r0_2 = temp_r6->unk0;
    var_r1 = temp_r0_2;
    if (temp_r0_2 != temp_r2) {
        do {
            var_r1 += 0x10;
        } while (var_r1 != temp_r2);
    }
    if (temp_r0_2 != 0) {
        free();
    }
    temp_r6->unk0 = sp2C;
    temp_r6->unk4 = var_r5;
    temp_r6->unkC = (void *) (sp2C + var_r8);
}

