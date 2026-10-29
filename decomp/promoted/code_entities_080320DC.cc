
// DECOMP-MATCHED func_08032900 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
s32 func_08032900(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == 2) {
        if (((u32) (arg1 + 0xFFFFFEF0) <= 0x2AFU) && (arg2 > 0xAF) && (arg2 <= 0x24F)) {
            return 1;
        }
        return 2;
    }
    return 0;
}

// DECOMP-MATCHED func_080324B8 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
s32 func_080324B8(void) {
    return 0;
}

// DECOMP-MATCHED func_08033B7C (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
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
void func_08033B7C(GenObj *arg0) {
    arg0->unk41 = 0;
}

/* ATTEMPT-NOTE opencode: member u8 (strb). */

// DECOMP-MATCHED func_08033914 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
s32 func_08033914(s32 arg0) {
    u32 m = 0x18000;
    return ((m * (arg0 + 1)) >> 8) + 0x8000;
}

/* ATTEMPT-NOTE opencode: konstanta di u32 var agar muls (movs/lsl) bukan shift-add; u32 agar lsrs bukan asrs. */

// DECOMP-MATCHED func_08034248 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
extern s32 gUnk_080F1450;

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
u16 func_08034248(GenObj *arg0, s32 arg1) {
    u8 *base = (u8 *)&gUnk_080F1450;
    s32 t = arg0->unk30;

    return *(u16 *)(base + ((t * 5 + arg1) * 2));
}

/* ATTEMPT-NOTE opencode: unk30 u8; base (u8*) di var agar ldr-pc dulu + byte-arith (lsl#1) bukan s32-scale (lsl#3). */

// DECOMP-MATCHED func_080338F0 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
u32 func_080AB788(s32);

s32 func_080338F0(s32 arg0) {
    return func_080AB788(0x200) < (u32)(arg0 + 0x100);
}

// DECOMP-MATCHED func_08034C64 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
s32 func_080D7ECC(s32, s32, s32 *, s32, s32);       /* extern */

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

typedef struct {
    s32 (*unk0)(s32 arg0);
    s32 unk4;
    GenObj **unk8;
} UnkF29C0;

extern UnkF29C0 gUnk_080F29C0;

u32 func_08034C64(s32 arg0, u16 *arg1) {
    s32 sp4;
    s32 temp_r4;
    GenObj *temp_r5;
    s32 var_r2;
    u32 temp_r1_2;
    s32 temp_r0;
    GenObj *temp_r0_2;
    s32 temp_r1;

    temp_r5 = gUnk_080F29C0.unk8[gUnk_080F29C0.unk0(arg0)];
    if (temp_r5 != 0) {
        temp_r1_2 = *arg1;
        var_r2 = ((u32) (temp_r1_2 << 0x1B) >> 0x1B) - 6;
        if (var_r2 < 0) {
            var_r2 += 0x18;
        }
        sp4 = (var_r2 * 0x3C) + ((u32) (temp_r1_2 << 0x15) >> 0x1A);
        temp_r4 = (s32) temp_r5->unk4;
        temp_r0 = ((func_080D7ECC(temp_r4, temp_r4 + ((s32) temp_r5->unk0 * 8), &sp4, 0, 0) - temp_r4) >> 3) - 1;
        if (temp_r0 < (u32) temp_r5->unk0) {
            temp_r0_2 = ((GenObj *) ((s32) temp_r5->unk4 + (temp_r0 * 8)))->unk4;
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

// DECOMP-MATCHED func_08034BFC (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
s32 func_0805E860(void *, u16);                        /* extern */
extern u16 gUnk_080F14F0[];

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
void func_08034BFC(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 v = gUnk_080F14F0[arg1];
    func_0805E860((u8 *)arg0 + 0xB4, v);
    arg0->unkC8 = 1;
    arg0->unkCA = 0;
    arg0->unkCB = 1;
    arg0->unkCC = arg2;
    arg0->unkCE = arg3;
    arg0->unkD0 = 0x3C;
}
