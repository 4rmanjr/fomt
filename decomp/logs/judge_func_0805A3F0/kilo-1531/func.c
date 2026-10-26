#include "common.h"
s32 func_08008E64(s32 *, s32, s32);                     /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_0804E7A0(s32, ? *, s32);                     /* extern */
s32 func_0804E958(s32, ? *, s32, s32);                /* extern */
extern s32 gUnk_080FAFC8;

void func_0805A3F0(s32 arg200, ? arg201) {
    s16 *var_r1;
    s16 var_r0;
    s32 *temp_r0_2;
    s32 *var_r8;
    s32 temp_r0;
    s32 temp_r1;
    s32 var_r7;
    u32 var_r2;
    u32 var_r3;

    func_08008EB8(0, 0x06008000, 0x2C00);
    func_08008EB8(0, 0x0600F800, 0x800);
    var_r2 = 0;
    var_r8 = &gUnk_080FAFC8;
    do {
        var_r3 = 0;
        temp_r1 = var_r2 << 6;
        temp_r0 = var_r2 << 5;
        var_r2 += 1;
        var_r0 = temp_r0 + 0x2000;
        var_r1 = temp_r1 + 0x0600F800;
loop_2:
        *var_r1 = var_r0;
        var_r0 += 1;
        var_r1 += 2;
        var_r3 += 1;
        if (var_r3 <= 0x1FU) {
            goto loop_2;
        }
    } while (var_r2 <= 0x15U);
    if (gUnk_080FAFC8 != 0) {
        var_r7 = 0x06008000;
        do {
            arg200.unk0 = 0x20;
            arg200.unk2 = 2;
            func_0804E7A0((s32) arg200.unk0, &unksp10, 0);
            temp_r0_2 = var_r8 + 4;
            var_r8 = temp_r0_2;
            arg201.unk0 = 0x20;
            arg201.unk2 = 2;
            unksp0 = *(temp_r0_2 - 4);
            unksp4 = 0;
            unksp8 = 1;
            func_0804E958((s32) arg201.unk0, &unksp10, 0, 0);
            func_08008E64(&unksp10, var_r7, 0x800);
            var_r7 += 0x800;
        } while (*var_r8 != 0);
    }
}

