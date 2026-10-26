#include "common.h"
void func_080DE134(void *arg0, void *arg1) {
    s32 temp_r7;
    s32 temp_r8;
    s32 temp_sb;
    void **var_r5;
    void *temp_r1;
    void *temp_r6;

    temp_sb = *arg0->unk0;
    temp_r8 = arg1->unk8;
    temp_r7 = arg1->unk0;
    var_r5 = arg0 + 0xC;
    temp_r6 = (arg0->unk8 * 4) + arg0 + 0xC;
    if (var_r5 != temp_r6) {
        do {
            temp_r1 = *var_r5;
            if (temp_r1 != 0) {
                temp_r1->unk4C->unk10(temp_r1, temp_sb, temp_r8, temp_r7);
            }
            var_r5 += 4;
        } while (var_r5 != temp_r6);
    }
}

