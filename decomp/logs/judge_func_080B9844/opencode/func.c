#include "common.h"
s32 func_08008B6C(s32, s32);                          /* extern */

void func_080B9844(void *arg0, u8 arg1) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r1;
    s8 *var_r2;
    u32 *temp_r2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 var_r6;
    u8 *var_r0;
    u8 temp_r0_2;
    u8 temp_r1_4;
    u8 temp_r1_5;
    u8 temp_r1_6;
    u8 temp_r3;
    void *temp_r0;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r1_3;
    void *temp_r1_7;
    void *temp_r3_2;
    void *temp_r6;
    void *var_r1_2;
    void *var_r3;

    var_r6 = (u32) ((arg1 << 0x18) + 0x01000000) >> 0x18;
    if (var_r6 > 1U) {
        var_r6 = 0;
    }
    temp_r1 = arg1 << 6;
    temp_r0 = arg0 + temp_r1;
    temp_r3 = temp_r0->unk88;
    if (((u32) (u8) (temp_r3 - 1) <= 0x3AU) && (*(arg0 + 0x6C + temp_r1) == 5)) {
        temp_r0_2 = temp_r3 + 1;
        temp_r0->unk88 = temp_r0_2;
        if ((u32) temp_r0_2 <= 0x3BU) {
            return;
        }
        temp_r0->unk88 = 0U;
        func_08008B6C(arg0 + 0x710, 0xB5);
        return;
    }
    temp_r1_2 = arg0 + 0x80;
    temp_r0_3 = *(temp_r1_2 + temp_r1);
    switch (temp_r0_3) {                            /* irregular */
    case 0:
        temp_r1_3 = arg0 + temp_r1;
        temp_r1_3->unk9C = 1;
        temp_r1_3->unk9A = 0;
        break;
    case 1:
        var_r3 = arg0 + temp_r1;
        var_r2 = var_r3 + 0x90;
        if ((u32) var_r3->unk90 < (u32) arg0->unkB75) {
            var_r1 = 0xB60;
block_40:
            var_r3->unk8F = (s8) *(arg0 + var_r1);
block_41:
            *(arg0 + 0x6C + temp_r1) = 1;
        } else {
block_43:
            *var_r2 = 0;
            *(temp_r1_2 + temp_r1) = 0;
            var_r3->unk9C = 1;
            var_r3->unk9A = 0;
            var_r1_2 = var_r3 + 0x8F;
            var_r3->unk8F = (u8) arg0->unkB5E;
            var_r0 = arg0 + 0xB59;
block_44:
            var_r1_2->unk2 = (s8) (*var_r0 + 1);
        }
        break;
    case 2:
        var_r3 = arg0 + temp_r1;
        var_r2 = var_r3 + 0x90;
        if ((s32) var_r3->unk90 < (s32) (arg0->unkB74 - 0x3C)) {
            var_r1 = 0xB62;
            goto block_40;
        }
        goto block_43;
    case 3:
        var_r3 = arg0 + temp_r1;
        var_r2 = var_r3 + 0x90;
        temp_r1_4 = var_r3->unk90;
        if ((u32) temp_r1_4 <= 0x3BU) {
            *(arg0 + 0x6C + temp_r1) = 5;
            var_r3->unk88 = 1;
            var_r3->unk90 = 0x3CU;
        } else {
            if ((u32) temp_r1_4 < (u32) arg0->unkB76) {
                var_r1 = 0xB64;
                goto block_40;
            }
            goto block_43;
        }
        break;
    case 4:
        temp_r3_2 = arg0 + temp_r1;
        temp_r1_5 = temp_r3_2->unk90;
        if ((u32) temp_r1_5 <= 0x3BU) {
            temp_r6 = arg0 + 0x6C;
            if (temp_r1_5 == 0) {
                temp_r2 = temp_r6 + temp_r1;
                if ((u32) *temp_r2 <= 1U) {
                    temp_r3_2->unk8F = (u8) arg0->unkB66;
                }
                temp_r0_4 = *temp_r2;
                if ((temp_r0_4 == 2) || (temp_r0_4 == 4)) {
                    temp_r3_2->unk8F = (u8) arg0->unkB64;
                }
            }
            *(temp_r6 + temp_r1) = 3;
        } else {
            if ((u32) temp_r1_5 < (u32) arg0->unkB74) {
                if (temp_r1_5 == 0x3C) {
                    temp_r0_5 = arg0 + 0x74;
                    *(temp_r0_5 + temp_r1) = *(temp_r0_5 + (var_r6 << 6));
                }
                goto block_41;
            }
            temp_r3_2->unkAB = 0;
            temp_r3_2->unk90 = 0U;
            *(temp_r1_2 + temp_r1) = 0;
            temp_r3_2->unk9C = 1;
            temp_r3_2->unk9A = 0;
            var_r1_2 = temp_r3_2 + 0x8F;
            temp_r3_2->unk8F = (u8) arg0->unkB5E;
            var_r0 = arg0 + 0xB59;
            goto block_44;
        }
        break;
    case 5:
        var_r3 = arg0 + temp_r1;
        var_r2 = var_r3 + 0x90;
        if ((u32) var_r3->unk90 <= 0x1DU) {
            *(arg0 + 0x6C + temp_r1) = 3;
        } else {
            temp_r1_6 = var_r3->unk90;
            if ((s32) temp_r1_6 < (s32) (arg0->unkB77 - 0x3C)) {
                if (temp_r1_6 == 0x1E) {
                    temp_r0_6 = arg0 + 0x74;
                    *(temp_r0_6 + temp_r1) = *(temp_r0_6 + (var_r6 << 6));
                }
                var_r1 = 0xB68;
                goto block_40;
            }
            var_r3->unkAB = 0;
            goto block_43;
        }
        break;
    }
    temp_r1_7 = arg0 + temp_r1;
    temp_r1_7->unk90 = (u8) (temp_r1_7->unk90 + 1);
}

