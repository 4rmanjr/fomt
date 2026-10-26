#include "common.h"
s32 Unpack(s32 *, s32 *);                                 /* extern */
s16 *func_08008918(s32);                            /* extern */
s32 func_08008E64(s32 *, s32, s32);                     /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
extern s32 gUnk_08738AD8;
extern s32 gUnk_08738CC8;
extern s32 gUnk_08738CF0;
extern s32 gUnk_08738D1C;
extern s32 gUnk_087399C4;
extern s32 gUnk_08739A64;

void func_08054F40(s32 arg0) {
    s16 sp0;
    s32 *temp_r4;
    s16 *temp_r0;
    s16 *temp_r0_10;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r0_4;
    s16 *temp_r0_5;
    s16 *temp_r0_6;
    s16 *temp_r0_7;
    s16 *temp_r0_8;
    s16 *temp_r0_9;

    func_08008EB8(0, 0x06007FE0, 0x20);
    func_08008EB8(-1, 0x0600E000, 0x800);
    func_08008EB8(-1, 0x0600E800, 0x800);
    func_08008EB8(-1, 0x0600F000, 0x800);
    temp_r4 = arg0 + 0x1D5A;
    Unpack(&gUnk_08738AD8, temp_r4);
    func_08008E64(temp_r4, 0x0600E000, 0x500);
    func_08008E64(temp_r4, 0x0600E800, 0xC0);
    Unpack(&gUnk_08738CC8, temp_r4);
    Unpack(&gUnk_08738CF0, temp_r4);
    Unpack(&gUnk_08738D1C, (s32 *)0x06000000);
    func_08008E64(&gUnk_087399C4, 0x05000000, 0x200);
    Unpack(&gUnk_08739A64, arg0 + 0x558);
    temp_r0 = func_08008918(arg0);
    sp0 = 0x1E40;
    *temp_r0 = 0x1E40;
    temp_r0_2 = func_08008918(arg0);
    sp0 = 0x1C43;
    temp_r0_2->unkE = 0x1C43;
    temp_r0_3 = func_08008918(arg0);
    sp0 = 0x1D42;
    temp_r0_3->unkC = 0x1D42;
    temp_r0_4 = func_08008918(arg0);
    sp0 = 0x1E41;
    temp_r0_4->unkA = 0x1E41;
    temp_r0_5 = func_08008918(arg0);
    sp0 = 0;
    temp_r0_5->unk14 = 0;
    temp_r0_6 = func_08008918(arg0);
    sp0 = 0;
    temp_r0_6->unk16 = 0;
    temp_r0_7 = func_08008918(arg0);
    sp0 = 0;
    temp_r0_7->unk18 = 0;
    temp_r0_8 = func_08008918(arg0);
    sp0 = 0;
    temp_r0_8->unk1A = 0;
    temp_r0_9 = func_08008918(arg0);
    sp0 = 0;
    temp_r0_9->unk1C = 0;
    temp_r0_10 = func_08008918(arg0);
    sp0 = 0;
    temp_r0_10->unk1E = 0;
}

