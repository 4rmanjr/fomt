#include "common.h"
s32 func_0805E8F0(s32);                             /* extern */
s32 func_080AB380();                                  /* extern */

void func_080ACAF0(void *arg0, s32 *arg1) {
    s32 sp0;
    s32 temp_r0_2;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r0;
    u8 temp_r0;
    u8 temp_r2;
    void **var_r4;
    void *temp_r1;
    void *temp_r1_4;
    void *temp_r5;

    arg0->unk4->unk90->unkC();
    if (arg0->unk1028 != 0) {
        func_080AB380();
    }
    temp_r1 = arg0 + 0x102C;
    temp_r4 = arg0->unk102C;
    if ((s32) ((0 - temp_r4) | temp_r4) < 0) {
        temp_r2 = temp_r1->unk8;
        if (temp_r2 != 0) {
            temp_r0 = temp_r1->unk9 - 1;
            temp_r1->unk9 = temp_r0;
            if ((temp_r0 << 0x18) == 0) {
                temp_r1_2 = arg0->unk102C;
                if ((temp_r1_2 != 0) && (temp_r1_2 != 0)) {
                    temp_r1_2->unk24->unk8(temp_r1_2, 3);
                }
                arg0->unk102C = 0;
            } else {
                temp_r4_2 = arg0->unk102C;
                if (temp_r4_2->unk3F == 0) {
                    if ((s32) (func_0805E8F0(temp_r4_2 + 0x28) << 0x1E) < 0) {
                        temp_r4_2->unk3C = 1;
                    }
                } else {
                    temp_r4_2->unk3F = 0U;
                }
            }
            temp_r1->unkA = (u8) ((temp_r1->unkA + 1) & 7);
        } else {
            if (temp_r4->unk3F == 0) {
                temp_r0_2 = func_0805E8F0(temp_r4 + 0x28);
                if ((s32) (temp_r0_2 << 0x1E) < 0) {
                    temp_r4->unk3C = 1;
                }
                var_r0 = temp_r0_2;
            } else {
                temp_r4->unk3F = temp_r2;
                var_r0 = 2;
            }
            if ((s32) (var_r0 << 0x1D) < 0) {
                temp_r1_3 = arg0->unk102C;
                if ((temp_r1_3 != 0) && (temp_r1_3 != 0)) {
                    temp_r1_3->unk24->unk8(temp_r1_3, 3);
                }
                arg0->unk102C = 0;
            }
        }
    }
    var_r4 = arg0 + 8;
    temp_r5 = arg0 + 0x198;
    sp0 = *arg1;
    sp0.unk4 = 0;
    if (var_r4 != temp_r5) {
        do {
            temp_r1_4 = *var_r4;
            if (temp_r1_4 != 0) {
                temp_r1_4->unk14->unk2C(temp_r1_4, &sp0);
            }
            var_r4 += 4;
        } while (var_r4 != temp_r5);
    }
}

