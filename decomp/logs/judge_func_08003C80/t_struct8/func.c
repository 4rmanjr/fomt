#include "common.h"
s32 func_08008E64(void *, s32, s32);                  /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E8F0(s32, void *, s32, s32);             /* extern */
extern s32 gUnk_080E8704;

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk8;
} GenObj;
void func_08003C80(s32 argB3E, s16 argB3F, s16 argB40, s16 argB41, GenObj *argB42, GenObj *argB43, GenObj *argB44, void *argB45) {
    s16 *var_r0;
    s16 var_r3;
    s32 temp_r0;
    s32 temp_r5;
    s32 var_sb;
    u32 var_r1;
    u32 var_r2;
    u32 var_r7;
    void *temp_r4;
    void *temp_r6;

    func_08008EB8(0, 0x06007FE0, 0x20);
    func_08008EB8(-1, 0x0600E800, 0x800);
    var_r3 = 0;
    var_r2 = 0;
    argB45 = &unksp0 + 8;
    argB42 = &argB3F;
    argB43 = &argB40;
    argB44 = &argB41;
    do {
        var_r1 = 0;
        temp_r0 = var_r2 << 6;
        var_r2 += 1;
        var_r0 = temp_r0 + 0x0600E840;
loop_2:
        *var_r0 = var_r3;
        var_r3 += 1;
        var_r0 += 2;
        var_r1 += 1;
        if (var_r1 <= 0x1DU) {
            goto loop_2;
        }
    } while (var_r2 <= 0xBU);
    argB3E.unk0 = 0x1E;
    argB3E.unk2 = 0xC;
    func_0804E7A0((s32) argB3E.unk0, argB45, 0);
    var_r7 = 0;
    temp_r6 = argB45;
    var_sb = 0;
    do {
        temp_r4 = &gUnk_080E8704 + var_sb;
        temp_r5 = var_r7 * 0x10;
        argB3F = 0x1E;
        argB42->unk2 = 0xC;
        unksp0 = temp_r4->unk0;
        func_0804E8F0((s32) argB3F, temp_r6, 0x10, temp_r5);
        argB40 = 0x1E;
        argB43->unk2 = 0xC;
        unksp0 = temp_r4->unk4;
        func_0804E8F0((s32) argB40, temp_r6, 0x80, temp_r5);
        argB41 = 0x1E;
        argB44->unk2 = 0xC;
        unksp0 = temp_r4->unk8;
        func_0804E8F0((s32) argB41, temp_r6, 0xC0, temp_r5);
        var_sb += 0xC;
        var_r7 += 1;
    } while (var_r7 <= 5U);
    func_08008E64(argB45, 0x06000000, 0x2D00);
}

