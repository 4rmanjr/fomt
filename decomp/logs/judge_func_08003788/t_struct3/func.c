#include "common.h"
s8 *func_0800E2E4(u32);                             /* extern */
s8 *func_0800E304(s32);                             /* extern */
s8 *func_0800E4E0(void *);                          /* extern */
s32 func_0804EC84(u32, s8 *, s32);                    /* extern */
s32 memcpy(s8 *, s8 *, u32);                          /* extern */
s8 *method_08009AF4__C4Farm(void *);                /* extern */
u32 strlen(s8 *);                                   /* extern */
extern s8 gUnk_080E874C;
extern s8 gUnk_080E8754;
extern s8 gUnk_080E8758;
extern s8 gUnk_080E8760;
extern s8 gUnk_080E8764;
extern s8 gUnk_080E8768;

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
} GenObj;
void func_08003788(GenObj *arg1, GenObj *arg2) {
    s8 sp0;
    u32 sp18;
    u32 sp1C;
    s8 sp20;
    void *sp24;
    s8 *temp_r4;
    s8 *temp_r4_2;
    s8 *temp_r4_3;
    s8 *temp_r4_4;
    s8 *temp_r6;
    s8 *temp_r7;
    s8 *temp_r7_10;
    s8 *temp_r7_11;
    s8 *temp_r7_12;
    s8 *temp_r7_2;
    s8 *temp_r7_3;
    s8 *temp_r7_4;
    s8 *temp_r7_5;
    s8 *temp_r7_6;
    s8 *temp_r7_7;
    s8 *temp_r7_8;
    s8 *temp_r7_9;
    s8 *temp_r8;
    s8 *temp_r8_2;
    s8 *temp_r8_3;
    u32 *var_r0;
    u32 temp_r0_10;
    u32 temp_r0_11;
    u32 temp_r0_12;
    u32 temp_r0_13;
    u32 temp_r0_14;
    u32 temp_r0_15;
    u32 temp_r0_16;
    u32 temp_r0_17;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r0_8;
    u32 temp_r0_9;
    u32 temp_r1;
    u32 temp_r5;
    u32 temp_r5_10;
    u32 temp_r5_11;
    u32 temp_r5_12;
    u32 temp_r5_2;
    u32 temp_r5_3;
    u32 temp_r5_4;
    u32 temp_r5_5;
    u32 temp_r5_6;
    u32 temp_r5_7;
    u32 temp_r5_8;
    u32 temp_r5_9;
    u32 var_r2;
    u32 var_r4;
    u32 var_r4_10;
    u32 var_r4_11;
    u32 var_r4_12;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;
    u32 var_r4_5;
    u32 var_r4_6;
    u32 var_r4_7;
    u32 var_r4_8;
    u32 var_r4_9;
    u8 temp_r0;
    u8 temp_r3;
    void *temp_r2;

    sp24 = arg2;
    *arg1 = 0;
    temp_r2 = arg2 + 0x10;
    sp18 = 0xC8;
    temp_r0 = sp24->unk10;
    temp_r1 = ((temp_r0 >> 3) * 7) + ((u32) (temp_r0 << 0x1D) >> 0x1D);
    sp1C = temp_r1;
    var_r0 = &sp18;
    if (temp_r1 < 0xC8U) {
        var_r0 = &sp1C;
    }
    func_0804EC84(*var_r0, &sp0, 0);
    temp_r0_2 = strlen(arg1);
    temp_r7 = &arg1[temp_r0_2];
    temp_r5 = 0x7F - temp_r0_2;
    if (temp_r5 != 0) {
        var_r4 = strlen(&gUnk_080E874C);
        if (var_r4 > temp_r5) {
            var_r4 = temp_r5;
        }
        memcpy(temp_r7, &gUnk_080E874C, var_r4);
        temp_r7[var_r4] = 0;
    }
    temp_r0_3 = strlen(arg1);
    temp_r7_2 = &arg1[temp_r0_3];
    temp_r5_2 = 0x7F - temp_r0_3;
    if (temp_r5_2 != 0) {
        var_r4_2 = strlen(&sp0);
        if (var_r4_2 > temp_r5_2) {
            var_r4_2 = temp_r5_2;
        }
        memcpy(temp_r7_2, &sp0, var_r4_2);
        temp_r7_2[var_r4_2] = 0;
    }
    temp_r0_4 = strlen(arg1);
    temp_r7_3 = &arg1[temp_r0_4];
    temp_r5_3 = 0x7F - temp_r0_4;
    if (temp_r5_3 != 0) {
        var_r4_3 = strlen(&gUnk_080E8754);
        if (var_r4_3 > temp_r5_3) {
            var_r4_3 = temp_r5_3;
        }
        memcpy(temp_r7_3, &gUnk_080E8754, var_r4_3);
        temp_r7_3[var_r4_3] = 0;
    }
    temp_r8 = func_0800E2E4((u32) (temp_r2->unk1 << 0x1E) >> 0x1E);
    temp_r4 = temp_r8;
    temp_r0_5 = strlen(arg1);
    temp_r7_4 = &arg1[temp_r0_5];
    temp_r5_4 = 0x7F - temp_r0_5;
    if (temp_r5_4 != 0) {
        var_r4_4 = strlen(temp_r4);
        if (var_r4_4 > temp_r5_4) {
            var_r4_4 = temp_r5_4;
        }
        memcpy(temp_r7_4, temp_r8, var_r4_4);
        temp_r7_4[var_r4_4] = 0;
    }
    func_0804EC84(((u32) (temp_r2->unk1 << 0x19) >> 0x1B) + 1, &sp0, 0);
    temp_r0_6 = strlen(arg1);
    temp_r7_5 = &arg1[temp_r0_6];
    temp_r5_5 = 0x7F - temp_r0_6;
    if (temp_r5_5 != 0) {
        var_r4_5 = strlen(&gUnk_080E8758);
        if (var_r4_5 > temp_r5_5) {
            var_r4_5 = temp_r5_5;
        }
        memcpy(temp_r7_5, &gUnk_080E8758, var_r4_5);
        temp_r7_5[var_r4_5] = 0;
    }
    temp_r0_7 = strlen(arg1);
    temp_r7_6 = &arg1[temp_r0_7];
    temp_r5_6 = 0x7F - temp_r0_7;
    if (temp_r5_6 != 0) {
        var_r4_6 = strlen(&sp0);
        if (var_r4_6 > temp_r5_6) {
            var_r4_6 = temp_r5_6;
        }
        memcpy(temp_r7_6, &sp0, var_r4_6);
        temp_r7_6[var_r4_6] = 0;
    }
    temp_r0_8 = strlen(arg1);
    temp_r7_7 = &arg1[temp_r0_8];
    temp_r5_7 = 0x7F - temp_r0_8;
    if (temp_r5_7 != 0) {
        var_r4_7 = strlen(&gUnk_080E8760);
        if (var_r4_7 > temp_r5_7) {
            var_r4_7 = temp_r5_7;
        }
        memcpy(temp_r7_7, &gUnk_080E8760, var_r4_7);
        temp_r7_7[var_r4_7] = 0;
    }
    temp_r3 = temp_r2->unk1;
    var_r2 = ((u32) (temp_r3 << 0x19) >> 0x1B) + ((((u32) (temp_r3 << 0x1E) >> 0x1E) * 0x1E) + ((((u32) (arg2->unk10 << 0x1D) >> 0x1D) + 6) * 0x78));
    if (var_r2 > 6U) {
        var_r2 = var_r2 % 7U;
    }
    temp_r8_2 = func_0800E304(var_r2 & 7);
    temp_r4_2 = temp_r8_2;
    temp_r0_9 = strlen(arg1);
    temp_r7_8 = &arg1[temp_r0_9];
    temp_r5_8 = 0x7F - temp_r0_9;
    if (temp_r5_8 != 0) {
        var_r4_8 = strlen(temp_r4_2);
        if (var_r4_8 > temp_r5_8) {
            var_r4_8 = temp_r5_8;
        }
        memcpy(temp_r7_8, temp_r8_2, var_r4_8);
        temp_r7_8[var_r4_8] = 0;
    }
    temp_r0_10 = strlen(arg1);
    temp_r7_9 = &arg1[temp_r0_10];
    temp_r5_9 = 0x7F - temp_r0_10;
    if (temp_r5_9 != 0) {
        var_r4_9 = strlen(&gUnk_080E8764);
        if (var_r4_9 > temp_r5_9) {
            var_r4_9 = temp_r5_9;
        }
        memcpy(temp_r7_9, &gUnk_080E8764, var_r4_9);
        temp_r7_9[var_r4_9] = 0;
    }
    sp20 = 0xD;
    temp_r0_11 = strlen(arg1);
    if ((u32) (temp_r0_11 + 1) <= 0x7FU) {
        arg1[temp_r0_11].unk0 = 0xD;
        arg1[temp_r0_11].unk1 = 0;
    }
    sp0.unk21 = 0xA;
    temp_r0_12 = strlen(arg1);
    if ((u32) (temp_r0_12 + 1) <= 0x7FU) {
        arg1[temp_r0_12].unk0 = 0xA;
        arg1[temp_r0_12].unk1 = 0;
    }
    temp_r8_3 = method_08009AF4__C4Farm(sp24 + 0x14);
    temp_r4_3 = temp_r8_3;
    temp_r0_13 = strlen(arg1);
    temp_r7_10 = &arg1[temp_r0_13];
    temp_r5_10 = 0x7F - temp_r0_13;
    if (temp_r5_10 != 0) {
        var_r4_10 = strlen(temp_r4_3);
        if (var_r4_10 > temp_r5_10) {
            var_r4_10 = temp_r5_10;
        }
        memcpy(temp_r7_10, temp_r8_3, var_r4_10);
        temp_r7_10[var_r4_10] = 0;
    }
    temp_r0_14 = strlen(arg1);
    temp_r7_11 = &arg1[temp_r0_14];
    temp_r5_11 = 0x7F - temp_r0_14;
    if (temp_r5_11 != 0) {
        var_r4_11 = strlen(&gUnk_080E8768);
        if (var_r4_11 > temp_r5_11) {
            var_r4_11 = temp_r5_11;
        }
        memcpy(temp_r7_11, &gUnk_080E8768, var_r4_11);
        temp_r7_11[var_r4_11] = 0;
    }
    sp0.unk22 = 0xD;
    temp_r0_15 = strlen(arg1);
    if ((u32) (temp_r0_15 + 1) <= 0x7FU) {
        arg1[temp_r0_15].unk0 = 0xD;
        arg1[temp_r0_15].unk1 = 0;
    }
    sp0.unk23 = 0xA;
    temp_r0_16 = strlen(arg1);
    if ((u32) (temp_r0_16 + 1) <= 0x7FU) {
        arg1[temp_r0_16].unk0 = 0xA;
        arg1[temp_r0_16].unk1 = 0;
    }
    temp_r7_12 = func_0800E4E0(sp24 + 0x1BD8);
    temp_r4_4 = temp_r7_12;
    temp_r0_17 = strlen(arg1);
    temp_r6 = &arg1[temp_r0_17];
    temp_r5_12 = 0x7F - temp_r0_17;
    if (temp_r5_12 != 0) {
        var_r4_12 = strlen(temp_r4_4);
        if (var_r4_12 > temp_r5_12) {
            var_r4_12 = temp_r5_12;
        }
        memcpy(temp_r6, temp_r7_12, var_r4_12);
        temp_r6[var_r4_12] = 0;
    }
}

