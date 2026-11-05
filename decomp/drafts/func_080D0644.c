// DECOMP-MATCHED func_080D0644 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080D05DC();                                  /* extern */
typedef struct S_03000420G { u8 _pad0[40]; u8 unk28; u8 unk29; u8 unk2A; u8 unk2B; u8 _pad2C[4]; s32 unk30; } S_03000420G;
extern s32 *gUnk_03000420;
#define G0644 ((S_03000420G *)gUnk_03000420)

void func_080D0644(u32 arg0, s32 arg1) {
    G0644->unk28 = (u8)arg0;
    G0644->unk29 = (u8)(arg0 >> 8);
    G0644->unk2A = (u8)(arg0 >> 0x10);
    G0644->unk2B = (u8)(arg0 >> 0x18);
    G0644->unk30 = arg1;
    func_080D05DC();
}
