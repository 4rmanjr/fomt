#include "common.h"
void func_080A1A4C(void *arg0) {
    s32 var_r2;
    u8 *temp_r1;

    var_r2 = 0;
    do {
        temp_r1 = arg0 + var_r2;
        *temp_r1 |= 0xFF;
        var_r2 += 1;
    } while (var_r2 <= 6);
    arg0->unk7 = (u8) ((((((-8 & arg0->unk7) | 6) & ~0x38) | 0x30) & 0x3F) | 0x80);
    arg0->unk8 = (u8) (((((arg0->unk8 | 1) & ~0xE) | 0xC) & ~0x70) | 0x60);
    arg0->unk8 = (s16) ((0xFFFFFC7F & (u16) arg0->unk8) | 0x300);
    arg0->unk9 = (u8) ((((-0x1D & arg0->unk9) | 0x18) & 0x1F) | 0xC0);
    arg0->unkA = (u8) ((((-8 & arg0->unkA) | 6) & ~0x38) | 0x30);
    arg0->unkA = (s16) ((0xFFFFFE3F & (u16) arg0->unkA) | 0x180);
    arg0->unkB = (u8) ((((-0xF & arg0->unkB) | 0xC) & ~0x70) | 0x60 | 0x80);
    arg0->unkC = (u8) ((-4 & arg0->unkC & ~0x1C) | 4);
}

