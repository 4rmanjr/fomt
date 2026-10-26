#include "common.h"
s32 Unpack(s32 *, s32);                                 /* extern */
s16 *func_08008918(?);                              /* extern */
s32 func_08008E64(s32 *, s32, s32);                     /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
extern ? gUnk_0873F3C8;
extern ? gUnk_0873F5D4;
extern ? gUnk_0873F6AC;
extern ? gUnk_087400E4;

void func_080C160C(s32 arg0) {
    s16 sp0;
    s16 *temp_r0;
    s16 *temp_r0_2;
    s16 *temp_r0_3;

    func_08008EB8(0, 0x06007FE0, 0x20);
    func_08008EB8(-1, 0x0600F000, 0x800);
    func_08008EB8(-1, 0x0600F800, 0x800);
    Unpack(&gUnk_0873F3C8, 0x0600F800);
    Unpack(&gUnk_0873F5D4, 0x0600F000);
    Unpack(&gUnk_0873F6AC, 0x06000000);
    func_08008E64(&gUnk_087400E4, 0x05000020, 0x200);
    temp_r0 = func_08008918(arg0);
    sp0 = 0x1640;
    *temp_r0 = 0x1640;
    temp_r0_2 = func_08008918(arg0);
    sp0 = 0x1E41;
    temp_r0_2->unkA = 0x1E41;
    temp_r0_3 = func_08008918(arg0);
    sp0 = 0x1F42;
    temp_r0_3->unkC = 0x1F42;
}

