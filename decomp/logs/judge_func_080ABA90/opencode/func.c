#include "common.h"
s32 func_080AB85C(void *);                            /* extern */
s32 func_080AB8D0(void *);                            /* extern */
s32 func_080AB948(void *);                            /* extern */
s32 func_080AB9C4(void *);                            /* extern */

void func_080ABA90(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;

    if (((s32) arg0->unk20 < (s32) arg1->unk4) && ((s32) arg1->unk0 < (s32) arg0->unk24)) {
        temp_r5 = arg0->unk26 - arg1->unk2;
        if (temp_r5 <= 0) {
            if ((s32) arg0->unk0 > (s32) arg0->unk28) {
                func_080AB85C(arg0);
            }
            if ((s32) (temp_r5 + arg0->unk0) > 0) {
                arg0->unk0 = (s32) (0 - temp_r5);
                if (arg2 == 1) {
                    arg0->unk10 = 0;
                }
            }
        }
        temp_r5_2 = arg0->unk22 - arg1->unk6;
        if (temp_r5_2 >= 0) {
            if ((s64) (arg0->unk4 + arg0->unk28) < 0) {
                func_080AB8D0(arg0);
            }
            if ((s32) (temp_r5_2 + arg0->unk4) < 0) {
                arg0->unk4 = (s32) (0 - temp_r5_2);
                if (arg2 == 1) {
                    arg0->unk11 = 0;
                }
            }
        }
    }
    if (((s32) arg0->unk22 < (s32) arg1->unk6) && ((s32) arg1->unk2 < (s32) arg0->unk26)) {
        temp_r5_3 = arg0->unk20 - arg1->unk4;
        if (temp_r5_3 >= 0) {
            if ((s64) (arg0->unk8 + arg0->unk28) < 0) {
                func_080AB948(arg0);
            }
            if ((s32) (temp_r5_3 + arg0->unk8) < 0) {
                arg0->unk8 = (s32) (0 - temp_r5_3);
                if (arg2 == 1) {
                    arg0->unk12 = 0;
                }
            }
        }
        temp_r5_4 = arg0->unk24 - arg1->unk0;
        if (temp_r5_4 <= 0) {
            if ((s32) arg0->unkC > (s32) arg0->unk28) {
                func_080AB9C4(arg0);
            }
            if ((s32) (temp_r5_4 + arg0->unkC) > 0) {
                arg0->unkC = (s32) (0 - temp_r5_4);
                if (arg2 == 1) {
                    arg0->unk13 = 0;
                }
            }
        }
    }
}

