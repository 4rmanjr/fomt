#include "common.h"
s32 func_080D05DC();                                  /* extern */
extern void *gUnk_03000420;

void func_080D0644(u8 arg0, s32 arg1) {
    gUnk_03000420->unk28 = arg0;
    gUnk_03000420->unk29 = (s8) (arg0 >> 8);
    gUnk_03000420->unk2A = (s8) (arg0 >> 0x10);
    gUnk_03000420->unk2B = (s8) (arg0 >> 0x18);
    gUnk_03000420->unk30 = arg1;
    func_080D05DC();
}

