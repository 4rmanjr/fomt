#include "common.h"
s32 func_08008920(void *);                          /* extern */
s32 func_08075AE8(void *, s32, ? *, s32, s32);        /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */

void func_08070140(void *arg0) {
s32 sp4;
    s32 temp_r6;
    s32 temp_r7;
    s32 var_r1;
    s32 var_r1_2;
    void **temp_r1;
    void *var_r4;

    var_r4 = arg0->unkD0;
    temp_r7 = (arg0 + 0xD0)->unk4;
    if (var_r4 != temp_r7) {
        do {
            temp_r6 = func_08008920(arg0);
            temp_r1 = var_r4->unk8;
            (*temp_r1)->unk10(&sp4, temp_r1, *(var_r4->unkC + (var_r4->unk14 * 4)));
            memcpy(&sp4, &sp4, 0x20);
            var_r1 = arg0->unk14;
            if (var_r1 < 0) {
                var_r1 += 0xFF;
            }
            var_r1_2 = arg0->unk10;
            if (var_r1_2 < 0) {
                var_r1_2 += 0xFF;
            }
            func_08075AE8(arg0 + 0x18, temp_r6, &sp4, var_r4->unk0 - (var_r1 >> 8), var_r4->unk4 - (var_r1_2 >> 8));
            var_r4 += 0x1C;
        } while (var_r4 != temp_r7);
    }
}

