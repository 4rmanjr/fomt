#include "common.h"
s16 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008920(s32);                             /* extern */
s32 func_0805E790(s32 *, s32, s32);                   /* extern */
s32 func_0805E99C(s32, s32, u16, s32 *);                /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk6;
    s32 unk8;
    u8 _padC[4];
    s32 unk10;
    s32 unk11;
    u8 _pad15[3];
    s32 unk18;
} GenObj;
void func_08057D34(s32 arg0, s16 arg1, s16 arg2, s32 arg3) {
s32 sp0;
    s32 spC;
    s32 sp14;
    s32 sp1C;
    s32 temp_r3;
    u16 var_r2;
    void *temp_r0;
    void *temp_r0_2;

    sp0 = 0;
    sp0.unk2 = 0;
    sp0.unk4 = 0;
    sp0.unk6 = 0;
    sp0.unk8 = 0;
    spC = 0;
    sp0.unk10 = 0;
    sp0.unk11 = 0;
    sp14 = 0;
    sp0.unk18 = 0;
    func_0805E790(&sp1C, arg0 + 0x50, arg3);
    sp0 = arg1;
    sp0.unk2 = arg2;
    temp_r0 = arg0 + 0x480;
    sp0.unk4 = func_080074C0(temp_r0, temp_r0->unk4);
    temp_r0_2 = arg0 + 0x478;
    sp0.unk6 = (s16) (*((u8 *)arg0 + 0x2334 + (arg3 * 4)) + func_08007D4C(temp_r0_2, temp_r0_2->unk4));
    sp0.unk8 = 1;
    sp0.unk18 = 1;
    temp_r3 = func_08008920(arg0);
    var_r2 = 0;
    if (sp1C != 0) {
        var_r2 = sp1C.unk4;
    }
    func_0805E99C(temp_r3, sp1C, var_r2, &sp0);
}

