// DECOMP-MATCHED func_080D0678 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct S_G2 { u8 _pad0[44]; u8 unk2C; u8 unk2D; u8 unk2E; u8 unk2F; } S_G2;
extern S_G2 *gUnk_03000420;
s32 func_080D0678(void) {
    return gUnk_03000420->unk2C | (gUnk_03000420->unk2D << 8) | (gUnk_03000420->unk2E << 0x10) | (gUnk_03000420->unk2F << 0x18);
}
