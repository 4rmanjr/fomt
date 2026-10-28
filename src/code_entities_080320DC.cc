#include "prelude.h"

// DECOMP-MATCHED func_08034C64 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D7ECC(i32, i32, i32 *, i32, i32);       /* extern */

typedef struct GenObj {
    u16 unk0;
    u8 _pad2[2];
    struct GenObj *unk4;
    u8 _pad8[2];
    u16 unkA;
} GenObj;

typedef struct {
    i32 (*unk0)(i32 arg0);
    i32 unk4;
    GenObj **unk8;
} UnkF29C0;

extern UnkF29C0 gUnk_080F29C0;

u32 func_08034C64(i32 arg0, u16 *arg1) {
    i32 sp4;
    i32 temp_r4;
    GenObj *temp_r5;
    i32 var_r2;
    u32 temp_r1_2;
    i32 temp_r0;
    GenObj *temp_r0_2;
    i32 temp_r1;

    temp_r5 = gUnk_080F29C0.unk8[gUnk_080F29C0.unk0(arg0)];
    if (temp_r5 != 0) {
        temp_r1_2 = *arg1;
        var_r2 = ((u32) (temp_r1_2 << 0x1B) >> 0x1B) - 6;
        if (var_r2 < 0) {
            var_r2 += 0x18;
        }
        sp4 = (var_r2 * 0x3C) + ((u32) (temp_r1_2 << 0x15) >> 0x1A);
        temp_r4 = (i32) temp_r5->unk4;
        temp_r0 = ((func_080D7ECC(temp_r4, temp_r4 + ((i32) temp_r5->unk0 * 8), &sp4, 0, 0) - temp_r4) >> 3) - 1;
        if (temp_r0 < (u32) temp_r5->unk0) {
            temp_r0_2 = ((GenObj *) ((i32) temp_r5->unk4 + (temp_r0 * 8)))->unk4;
            if (temp_r0_2 != 0) {
                temp_r1 = ((u32) (temp_r0_2->unkA << 0x16) >> 0x16) ^ 0x1D;
                return (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
            }
        }
        goto block_6;
    }
block_6:
    return 0U;
}
}
