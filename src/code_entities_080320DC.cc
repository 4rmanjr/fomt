#include "prelude.h"

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj {
    u16 unk0;
    u8 _pad2[2];
    struct GenObj *unk4;
    u8 _pad8[2];
    u16 unkA;
    u8 _padC[0x24];
    u8 unk30;
    u8 _pad31[0x10];
    u8 unk41;
    u8 _pad42[0x86];
    u8 unkC8;
    u8 _padC9;
    u8 unkCA;
    u8 unkCB;
    i16 unkCC;
    i16 unkCE;
    i16 unkD0;
} GenObj;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED func_08034BFC (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0805E860(void *, u16);                        /* extern */
extern u16 gUnk_080F14F0[];

void func_08034BFC(GenObj *arg0, i32 arg1, i32 arg2, i32 arg3) {
    u16 v = gUnk_080F14F0[arg1];
    func_0805E860((u8 *)arg0 + 0xB4, v);
    arg0->unkC8 = 1;
    arg0->unkCA = 0;
    arg0->unkCB = 1;
    arg0->unkCC = arg2;
    arg0->unkCE = arg3;
    arg0->unkD0 = 0x3C;
}
}
// ekor tak-bermarker dari code_entities_080320DC.s (verbatim, jangan diubah)
asm(
".L08034C40:\n"
"    .byte 0x30, 0x30, 0x00, 0x78, 0x70, 0x47, 0x00, 0x00, 0x00, 0x69, 0x70, 0x47, 0x10, 0xB5, 0x0C, 0x1C\n"
"    .byte 0x13, 0x1C, 0x01, 0x1C, 0x30, 0x31, 0x09, 0x78, 0x22, 0x1C, 0xFE, 0xF7, 0x93, 0xFF, 0x10, 0xBC\n"
"    .byte 0x01, 0xBC, 0x00, 0x47\n"
"    @ 34c40:       3030            adds    r0, #48 @ 0x30\n"
"    @ 34c42:       7800            ldrb    r0, [r0, #0]\n"
"    @ 34c44:       4770            bx      lr\n"
"    @ 34c46:       0000            movs    r0, r0\n"
"    @ 34c48:       6900            ldr     r0, [r0, #16]\n"
"    @ 34c4a:       4770            bx      lr\n"
"    @ 34c4c:       b510            push    {r4, lr}\n"
"    @ 34c4e:       1c0c            adds    r4, r1, #0\n"
"    @ 34c50:       1c13            adds    r3, r2, #0\n"
"    @ 34c52:       1c01            adds    r1, r0, #0\n"
"    @ 34c54:       3130            adds    r1, #48 @ 0x30\n"
"    @ 34c56:       7809            ldrb    r1, [r1, #0]\n"
"    @ 34c58:       1c22            adds    r2, r4, #0\n"
"    @ 34c5a:       f7fe ff93       bl      func_08033B84\n"
"    @ 34c5e:       bc10            pop     {r4}\n"
"    @ 34c60:       bc01            pop     {r0}\n"
"    @ 34c62:       4700            bx      r0\n"
);

// DECOMP-MATCHED func_08034C64 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D7ECC(i32, i32, i32 *, i32, i32);       /* extern */

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
