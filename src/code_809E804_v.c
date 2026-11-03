#include "prelude.h"
// DECOMP-MATCHED func_080D0644 (dari code_809E804.s; cek manusia sebelum ke src/)
i32 func_080D05DC();                                  /* extern */
typedef struct S_G2 { u8 _pad0[40]; u8 unk28; u8 unk29; u8 unk2A; u8 unk2B; u8 _pad2C[4]; i32 unk30; } S_G2;
extern S_G2 * volatile gUnk_03000420;

__attribute__((section(".text.code_809E804.080D0644")))
void func_080D0644(u32 arg0, i32 arg1) {
    gUnk_03000420->unk28 = arg0;
    gUnk_03000420->unk29 = arg0 >> 8;
    gUnk_03000420->unk2A = arg0 >> 0x10;
    gUnk_03000420->unk2B = arg0 >> 0x18;
    gUnk_03000420->unk30 = arg1;
    func_080D05DC();
}
