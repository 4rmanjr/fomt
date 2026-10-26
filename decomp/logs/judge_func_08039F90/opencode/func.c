#include "common.h"
s32 func_030004DC(s32, s32, s32, s32, s32, s32 *, s32, s32, void *); /* extern */
s32 func_080A480C(void *, s32, void *);               /* extern */
s32 func_080A4944(void *, void *, s32);               /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk4;
    s32 unk8;
    struct GenObj *unkC;
    s32 unk10;
    u8 _pad14[28];
    s32 unk30;
    s32 unk34;
    u8 _pad38[4];
    struct GenObj *unk3C;
    struct GenObj *unk3D;
    struct GenObj *unk3E;
    u8 _pad42[6];
    struct GenObj *unk48;
} GenObj;
void func_08039F90(GenObj *arg0, void **arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
s32 sp14;
    GenObj *sp34;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 *temp_r7;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r7;
    void **temp_r1;
    GenObj *temp_r0_2;
    GenObj *temp_r6;

    var_r7 = arg6;
    sp3C = arg4 - (*arg1)->unk18(arg1);
    sp40 = arg5 - (*arg1)->unk1C(arg1);
    sp44 = 0x8000 - arg5;
    sp34 = arg3;
    sp34.unk4 = arg2;
    temp_r5 = var_r7;
    if (temp_r5 < 0) {
        var_r7 = 0 - temp_r5;
    }
    temp_r6 = (GenObj *)((u8 *)arg0 + 8);
    temp_r0 = 3 & arg7;
    temp_r1 = arg0->unk30;
    (*temp_r1)->unk10(&sp14, temp_r1, *(arg0->unk34 + (arg0->unk3C * 4)));
    temp_r1_2 = arg0->unk10;
    if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {
        var_r0 = func_030004DC(sp34.unk4, sp3C, sp40 - var_r7, (temp_r0 * 4) | temp_r0 | (temp_r0 * 0x10) | (temp_r0 << 6), sp44, &sp14, arg0->unk8, (s32) temp_r6->unkC, (GenObj *)((u8 *)arg0 + 0x18));
    } else {
        var_r0 = 0;
    }
    if ((var_r0 != 0) && (temp_r6->unk3C != 0)) {
        func_080A480C(temp_r6, sp34, &sp14 + 8);
        if (temp_r6->unk3D != 0) {
            func_080A4944(temp_r6, &sp14 + 0x10, 1);
        } else if (temp_r6->unk3E == 0) {
            func_080A4944(temp_r6, &sp14 + 0x10, 1);
            temp_r6->unk3E = 1U;
        }
        temp_r6->unk3C = 0U;
    }
    temp_r0_2 = arg0->unk48;
    if ((temp_r0_2 != 0) && (temp_r5 >= 0)) {
        temp_r0_3 = 3 & arg7;
        temp_r7 = (GenObj *)((u8 *)temp_r0_2 + 0x28);
        temp_r1_3 = ((GenObj *)((u8 *)temp_r0_2 + 4))->unk4;
        if ((s32) ((0 - temp_r1_3) | temp_r1_3) < 0) {
            var_r0_2 = func_030004DC(sp34.unk4, sp3C, sp40, (temp_r0_3 * 4) | temp_r0_3 | (temp_r0_3 * 0x10) | (temp_r0_3 << 6), sp44, temp_r7, temp_r0_2->unk0, (s32) temp_r0_2->unkC, (GenObj *)((u8 *)temp_r0_2 + 0x10));
        } else {
            var_r0_2 = 0;
        }
        if ((var_r0_2 != 0) && (temp_r0_2->unk48 != 0)) {
            func_080A480C(temp_r0_2, sp34.unk0, temp_r7 + 8);
            func_080A4944(temp_r0_2, temp_r7 + 0x10, 1);
            temp_r0_2->unk48 = 0U;
        }
    }
}

