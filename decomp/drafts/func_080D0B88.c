// DECOMP-MATCHED func_080D0B88 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct S_03000420 { u8 _pad0[4]; s32 unk4; s32 unk8; u8 _padC[8]; s32 unk14; u8 _pad18[28]; s32 unk34; s32 unk38; s32 unk3C; u8 _pad40[320]; s32 unk180; } S_03000420;
extern S_03000420 *gUnk_03000420;
extern s32 *gUnk_0300041C;

void func_080D0B88(void) {
    gUnk_03000420->unk34 = 0;
    gUnk_03000420->unk38 = 0;
    gUnk_0300041C = (s32 *)((u8 *)gUnk_03000420 + 0x3C);
    gUnk_03000420->unk3C = 0;
}
