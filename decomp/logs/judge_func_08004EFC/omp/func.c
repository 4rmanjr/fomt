#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_0800770C(s32 *);                               /* extern */
s32 func_08007714(s32 *, s32);                          /* extern */
s32 func_0800835C(s32 *);                               /* extern */
s32 func_08008364(s32 *, s32);                          /* extern */
s32 func_08008444();                                  /* extern */
s32 func_08008D3C(s32);                             /* extern */
s32 *func_0800E2E4(u32);                              /* extern */
s32 func_0804EC84(s32, s32 *, s32);                     /* extern */
s32 func_08050CC0(s32, s32, s32, s32, s32, s32 *, s32 *); /* extern */
s32 memcpy(void *, s32 *, u32);                         /* extern */
u32 strlen(s32 *);                                    /* extern */
extern s32 vtable_unk_080E5A98;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[6688];
    s32 unk1A28;
    s32 unk1A2C;
    s32 unk1A30;
    u8 _pad1A34[66];
    s32 unk1A76;
} GenObj;
void *func_08004EFC(GenObj *arg0, s32 *arg1, s32 arg2, s32 *arg3, s32 *arg4) {
s32 spC;
s32 sp10;
s32 sp14;
    s32 *sp24;
    s32 *temp_r4_2;
    s32 *temp_r6;
    s32 *temp_sb;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    s8 *var_r0_3;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r5_2;
    u32 temp_r5_3;
    u32 var_r4;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;
    u32 var_r4_5;
    void *temp_r1;
    void *temp_r5;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r6_2;

    sp24 = arg3;
    func_08008444();
    arg0->unk4 = &vtable_unk_080E5A98;
    var_r0 = 3;
    do {
        var_r0 -= 1;
    } while (var_r0 != -1);
    var_r0_2 = 3;
    do {
        var_r0_2 -= 1;
    } while (var_r0_2 != -1);
    arg0->unk1A28 = 2;
    temp_r4 = __builtin_new(4);
    func_0800835C(&spC);
    func_0800770C(&sp10);
    arg0->unk1A2C = func_08050CC0(temp_r4, 0, 0x1C, 4, 0, &spC, &sp10);
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    arg0->unk1A30 = func_08008D3C(0xC8);
    var_r0_3 = arg0 + 0x1A34;
    var_r1 = 3;
    do {
        *var_r0_3 = 0;
        var_r0_3 += 0x10;
        var_r1 -= 1;
    } while (var_r1 != -1);
    arg0->unk1A76 = 0;
    temp_r5 = arg0 + 0x1A34;
    var_r4 = strlen(arg1);
    if (var_r4 > 0xFU) {
        var_r4 = 0xF;
    }
    memcpy(temp_r5, arg1, var_r4);
    *((u8 *)temp_r5 + var_r4) = 0;
    func_0804EC84(((u32) (arg2 << 0x19) >> 0x1B) + 1, &sp14, 2);
    temp_sb = func_0800E2E4((u32) (arg2 << 0x1E) >> 0x1E);
    temp_r6 = arg0 + 0x1A44;
    temp_r4_2 = temp_sb;
    temp_r0 = strlen(temp_r6);
    temp_r1 = temp_r6 + temp_r0;
    temp_r5_2 = 0xF - temp_r0;
    if (temp_r5_2 != 0) {
        var_r4_2 = strlen(temp_r4_2);
        if (var_r4_2 > temp_r5_2) {
            var_r4_2 = temp_r5_2;
        }
        memcpy(temp_r1, temp_sb, var_r4_2);
        *((u8 *)temp_r1 + var_r4_2) = 0;
    }
    temp_r0_2 = strlen(temp_r6);
    temp_r6_2 = temp_r6 + temp_r0_2;
    temp_r5_3 = 0xF - temp_r0_2;
    if (temp_r5_3 != 0) {
        var_r4_3 = strlen(&sp14);
        if (var_r4_3 > temp_r5_3) {
            var_r4_3 = temp_r5_3;
        }
        memcpy(temp_r6_2, &sp14, var_r4_3);
        *((u8 *)temp_r6_2 + var_r4_3) = 0;
    }
    temp_r5_4 = arg0 + 0x1A54;
    var_r4_4 = strlen(sp24);
    if (var_r4_4 > 0xFU) {
        var_r4_4 = 0xF;
    }
    memcpy(temp_r5_4, sp24, var_r4_4);
    *((u8 *)temp_r5_4 + var_r4_4) = 0;
    temp_r5_5 = arg0 + 0x1A64;
    var_r4_5 = strlen(arg4);
    if (var_r4_5 > 0xFU) {
        var_r4_5 = 0xF;
    }
    memcpy(temp_r5_5, arg4, var_r4_5);
    *((u8 *)temp_r5_5 + var_r4_5) = 0;
    return arg0;
}

