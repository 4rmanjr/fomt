
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
    u8 _pad0[65];
    u8 unk41;
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
    u8 _pad0[48];
    u8 unk30;
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
