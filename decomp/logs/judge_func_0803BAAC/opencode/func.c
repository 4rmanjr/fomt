#include "common.h"
typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk6;
    struct GenObj *unk8;
    s32 unkA;
    s32 unkB;
    struct GenObj *unkC;
    s32 unkD;
    s32 unk10;
    s32 unk14;
    u8 _pad18[4];
    s32 unk1C;
    u8 _pad20[12];
    s32 unk2C;
    u8 _pad30[16];
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4A;
    u8 _pad4E[2];
    s32 unk50;
} GenObj;
s32 func_0803BAAC(GenObj *arg0, GenObj *arg1, GenObj *arg2, GenObj *arg3) {
s32 sp0;
    s16 temp_r0_4;
    s16 temp_r0_8;
    s16 temp_r1_2;
    s16 temp_r1_3;
    s16 temp_r1_4;
    s16 temp_r1_5;
    s16 temp_r2_4;
    s16 temp_r2_5;
    s16 temp_r5_2;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_6;
    s32 temp_r2_3;
    s32 temp_r2_7;
    s32 temp_r4_4;
    s32 temp_r5_4;
    s32 var_r2;
    u16 temp_r0_5;
    u16 temp_r4_2;
    u16 temp_r4_3;
    u16 temp_r5;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r2_2;
    u32 temp_r2_6;
    u32 temp_r2_8;
    u32 temp_r5_3;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r2;
    u8 temp_r4;
    u8 temp_r6;
    u8 var_r0;
    GenObj *temp_r3;

    temp_r2 = arg0->unkB;
    temp_r0 = ((arg0->unkC & 0x7F) * 2) | (temp_r2 >> 7);
    switch (temp_r0) {                              /* irregular */
    case 1:
        temp_r0_2 = arg0->unkD;
        if ((u32) temp_r0_2 > 8U) {
            arg0->unkB = (u8) (0x80 | temp_r2);
            arg0->unkC = (u8) ((-0x80 & arg0->unkC) | 1);
        } else {
            var_r0 = temp_r0_2 + 1;
block_10:
            arg0->unkD = var_r0;
        }
        break;
    case 2:
        temp_r0_3 = arg0->unkD;
        if (temp_r0_3 == 0) {
            arg0->unkB = (u8) (0x7F & temp_r2);
            arg0->unkC = (u8) (-0x80 & arg0->unkC);
        } else {
            var_r0 = temp_r0_3 - 1;
            goto block_10;
        }
        break;
    }
    temp_r3 = (GenObj *)((u8 *)arg0 + 0x10);
    var_r2 = 0;
    if (temp_r3->unkC == ((GenObj *)((u8 *)temp_r3 + 0x10))) {
        var_r2 = 1;
    }
    if (var_r2 == 0) {
        ((void (*)(void *,...))(arg2->unk8->unk1C))(arg2, temp_r3);
    }
    if ((((arg0->unkC & 0x7F) * 2) | ((u8) arg0->unkB >> 7)) == 0) {
        arg1->unk0 = (u16) (arg1->unk0 & ~(0x100 << ((u32) (arg0->unk8 << 0x1E) >> 0x1E)));
        temp_r1 = arg0->unk2C;
        if ((s32) ((0 - temp_r1) | temp_r1) < 0) {
            ((void (*)(void *,...))(arg3->unk8->unk14))(arg3, (GenObj *)((u8 *)arg0 + 0x2C));
        }
    } else {
        temp_r4 = arg0->unk8;
        temp_r2_2 = (u32) (temp_r4 << 0x1E) >> 0x1E;
        arg1->unk0 = (u16) ((0x100 << temp_r2_2) | 0x2000 | arg1->unk0);
        temp_r2_3 = temp_r2_2 * 4;
        temp_r1_2 = (((u32) ((u16) arg0->unk8 << 0x17) >> 0x1E) * 4) | (((u32) (temp_r4 << 0x19) >> 0x1B) << 8) | 0x40;
        sp0 = temp_r1_2;
        *((temp_r2_2 * 2) + 8 + arg1) = temp_r1_2;
        sp0 = 0;
        *((u8 *)temp_r2_3 + 0x10 + arg1) = 0;
        temp_r5 = arg0->unk2;
        temp_r0_4 = 0 - temp_r5;
        sp0 = temp_r0_4;
        *((u8 *)temp_r2_3 + 0x12 + arg1) = temp_r0_4;
        temp_r6 = arg0->unkD;
        sp0.unk4 = temp_r4;
        if ((u32) temp_r6 > 8U) {
            temp_r0_5 = arg0->unk0;
            temp_r2_4 = (temp_r0_5 << 8) | (temp_r0_5 + arg0->unk4);
            sp0 = temp_r2_4;
            arg1->unk40 = temp_r2_4;
            temp_r1_3 = (temp_r5 << 8) | (temp_r5 + arg0->unk6);
            sp0 = temp_r1_3;
            arg1->unk44 = temp_r1_3;
        } else {
            temp_r4_2 = arg0->unk6;
            temp_r0_6 = (u32) (temp_r6 * temp_r4_2) / 9U;
            temp_r5_2 = (s16) arg0->unk2;
            temp_r5_3 = temp_r5_2 + (temp_r5_2 + temp_r4_2);
            temp_r5_4 = ((s32) (temp_r5_3 + (temp_r5_3 >> 0x1F)) >> 1) - ((s32) ((temp_r0_6 >> 0x1F) + temp_r0_6) >> 1);
            temp_r4_3 = arg0->unk4;
            temp_r0_7 = temp_r6 * temp_r4_3;
            temp_r2_5 = (s16) arg0->unk0;
            temp_r2_6 = temp_r2_5 + (temp_r2_5 + temp_r4_3);
            temp_r2_7 = ((s32) (temp_r2_6 + (temp_r2_6 >> 0x1F)) >> 1) - (temp_r0_7 / 18);
            temp_r1_4 = (temp_r2_7 << 8) | (temp_r2_7 + (temp_r0_7 / 9U));
            sp0 = temp_r1_4;
            arg1->unk40 = temp_r1_4;
            temp_r0_8 = (temp_r5_4 << 8) | (temp_r5_4 + temp_r0_6);
            sp0 = temp_r0_8;
            arg1->unk44 = temp_r0_8;
        }
        sp0 = 0x3F;
        arg1->unk48 = 0x3FU;
        temp_r4_4 = 1 << ((u32) (sp0.unk4 << 0x1E) >> 0x1E);
        temp_r1_5 = 0x3F & ~temp_r4_4;
        sp0 = temp_r1_5;
        arg1->unk4A = temp_r1_5;
        temp_r2_8 = (u32) (arg0->unkA << 0x11) >> 0x18;
        if (temp_r2_8 == 2) {
            arg1->unk48 = (u16) (arg1->unk48 | 0x20);
            arg1->unk50 = (s32) (temp_r4_4 | 0x08083F40);
        }
        if (temp_r2_8 == 1) {
            temp_r1_6 = arg0->unk2C;
            if ((s32) ((0 - temp_r1_6) | temp_r1_6) >= 0) {
                ((void (*)(void *,...))(arg3->unk8->unk10))(arg3, (GenObj *)((u8 *)arg0 + 0x2C));
            }
        }
    }
    return ((arg0->unkC & 0x7F) * 2) | ((u8) arg0->unkB >> 7);
}

