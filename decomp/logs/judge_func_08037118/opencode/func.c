#include "common.h"
s32 func_080AB85C(void *);                            /* extern */
s32 func_080AB8D0(void *);                            /* extern */
s32 func_080AB948(void *);                            /* extern */
s32 func_080AB9C4(void *);                            /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 _pad10[8];
    s32 unk18;
    s32 unk1C;
    u8 _pad20[8];
    s32 unk28;
} GenObj;
void func_08037118(GenObj *arg0, GenObj *arg1) {
    s32 sp0;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r8;
    s32 var_sb;

    temp_r1 = arg0->unk8;
    temp_r2 = arg0->unkC;
    var_sb = arg0->unk18 + temp_r1;
    temp_r0 = arg0->unk1C + temp_r2;
    var_r8 = temp_r0;
    temp_r1_2 = temp_r1 >> 0x10;
    sp0 = temp_r1_2;
    temp_r6 = temp_r2 >> 0x10;
    temp_r5 = (temp_r0 >> 0x10) - temp_r6;
    temp_r1_3 = (var_sb >> 0x10) - temp_r1_2;
    if (temp_r5 > 0) {
        if ((s32) arg1->unk0 > (s32) arg1->unk28) {
            func_080AB85C(arg1);
        }
        if (temp_r5 > arg1->unk0) {
            if ((s32) arg1->unk0 > (s32) arg1->unk28) {
                func_080AB85C(arg1);
            }
            var_r8 = (temp_r6 + arg1->unk0) << 0x10;
        }
    }
    if (temp_r5 < 0) {
        if ((s64) (arg1->unk4 + arg1->unk28) < 0) {
            func_080AB8D0(arg1);
        }
        if (temp_r5 < arg1->unk4) {
            if ((s64) (arg1->unk4 + arg1->unk28) < 0) {
                func_080AB8D0(arg1);
            }
            var_r8 = (temp_r6 + arg1->unk4) << 0x10;
        }
    }
    if (temp_r1_3 < 0) {
        if ((s64) (arg1->unk8 + arg1->unk28) < 0) {
            func_080AB948(arg1);
        }
        if (temp_r1_3 < arg1->unk8) {
            if ((s64) (arg1->unk8 + arg1->unk28) < 0) {
                func_080AB948(arg1);
            }
            var_sb = (sp0 + arg1->unk8) << 0x10;
        }
    }
    if (temp_r1_3 > 0) {
        if ((s32) arg1->unkC > (s32) arg1->unk28) {
            func_080AB9C4(arg1);
        }
        if (temp_r1_3 > arg1->unkC) {
            if ((s32) arg1->unkC > (s32) arg1->unk28) {
                func_080AB9C4(arg1);
            }
            var_sb = (sp0 + arg1->unkC) << 0x10;
        }
    }
    arg0->unk8 = var_sb;
    arg0->unkC = var_r8;
}

