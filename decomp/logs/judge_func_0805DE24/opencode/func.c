#include "common.h"
s32 func_0805DEC0(void *, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_0805DF68(void *, s32, s32, s32, s32);        /* extern */
extern s32 gUnk_080FB000;

typedef struct GenObj {
    u8 _pad0[332];
    s32 unk14C;
    u8 _pad150[382];
    s32 unk2CE;
    u8 _pad2D2[2046];
    s32 unkAD0;
} GenObj;
void func_0805DE24(GenObj *arg0) {
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r6;

    arg0->unk2CE = 0;
    var_r4 = 0;
    do {
        func_0805DEC0(arg0, 0x90, (var_r4 * 0x10) - (arg0->unk14C - 0x20), 3, (s32) ((*((u8 *)arg0 + 0xAE0 + var_r4) * 0x14) + &gUnk_080FB000)->unk10, 4, 0xA);
        var_r4 += 1;
    } while (var_r4 <= 9);
    var_r4_2 = 0;
    var_r6 = 8;
    do {
        func_0805DF68(arg0, var_r6, 4, var_r4_2 + 0xD, 1);
        var_r6 += 8;
        var_r4_2 += 1;
    } while (var_r4_2 <= 0xA);
    func_0805DEC0(arg0, 0x88, 4, 1, arg0->unkAD0, 5, 0xA);
}

