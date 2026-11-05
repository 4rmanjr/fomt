// DECOMP-MATCHED func_080D02CC (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080D0B88();                                  /* extern */
typedef struct S_03000420 { u8 _pad0[4]; s32 unk4; s32 unk8; u8 _padC[8]; s32 unk14; u8 _pad18[28]; s32 unk34; s32 unk38; } S_03000420;
extern S_03000420 *gUnk_03000420;

void func_080D02CC(s32 *arg0) {
    gUnk_03000420 = (S_03000420 *)arg0;
    *arg0 = 0;
    func_080D0B88();
    gUnk_03000420->unk4 = 0;
    gUnk_03000420->unk8 = 0;
}
