#include "common.h"
s32 func_080CAD10(s32, u32);                          /* extern */
s32 func_080CAE60(s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_080CAEEC(s32, u32, s32, s32, s32, s32);      /* extern */
extern s32 gUnk_0811785C;

void func_080CB9DC(s32 arg0, u32 arg1) {
    s32 spC;

    func_080CAD10(arg0 + 0x280, arg1);
    spC = gUnk_0811785C;
    func_080CAE60(arg0, (spC.unk1 << 6) + ((spC.unk0 * 2) + 0x0600F080), 0x54, 2, 1, 0, 0x20);
    if (arg1 > 1U) {
        func_080CAEEC(arg0, arg1, (spC.unk1 << 6) + ((spC.unk0 * 2) + 0x0600F082), 0x20, 0, 0x20);
    }
}

