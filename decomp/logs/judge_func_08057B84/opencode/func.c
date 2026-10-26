#include "common.h"
s32 func_08057CB0(void *, s32, s32, s16, s32);        /* extern */
s32 func_08057D34(void *, s32, s32, s32);             /* extern */

typedef struct GenObj {
    u8 _pad0[8900];
    s32 unk22C4;
    s32 unk22C6;
    s32 unk22C8;
    s32 unk22CA;
    s32 unk22CC;
    s32 unk22CD;
    s32 unk22CE;
    u8 _pad22D2[82];
    s32 unk2324;
} GenObj;
void func_08057B84(GenObj *arg0) {
    u8 temp_r1;

    func_08057CB0(arg0, 8, 0xC, arg0->unk22C4, 0);
    func_08057D34(arg0, 0x40, 0x14, 0xB);
    if (arg0->unk2324 == 0) {
        if (1 & arg0->unk22CC) {
            func_08057D34(arg0, 0xA0, 0x10, 0x1A);
            func_08057CB0(arg0, 0xC0, 0x10, arg0->unk22C6, 1);
            func_08057D34(arg0, 0xE0, 0x10, 0x17);
        }
    } else {
        if (2 & arg0->unk22CC) {
            func_08057D34(arg0, 0xA0, 8, 0x18);
            func_08057CB0(arg0, 0xC0, 8, arg0->unk22C8, 1);
            func_08057D34(arg0, 0xE0, 8, 0x17);
        }
        if (4 & arg0->unk22CC) {
            func_08057D34(arg0, 0xA0, 0x18, 0x19);
            func_08057CB0(arg0, 0xC0, 0x16, arg0->unk22CA, 1);
            func_08057D34(arg0, 0xE0, 0x16, 0x17);
        }
    }
    temp_r1 = arg0->unk22CE + 1;
    arg0->unk22CE = temp_r1;
    if (!(temp_r1 & 0xF)) {
        arg0->unk22CC = (u8) (arg0->unk22CC ^ arg0->unk22CD);
    }
}

