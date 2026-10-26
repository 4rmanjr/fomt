#include "common.h"
s32 func_0805E860(s32, s32);                          /* extern */

void func_080384FC(void *arg0) {
    void *temp_r0;
    void *temp_r4;

    if (arg0->unk28 != 0x31) {
        temp_r4 = arg0->unk10;
        if (temp_r4 != 0) {
            func_0805E860(temp_r4 + 0x30, 0x31);
            temp_r0 = temp_r4 + 0x44;
            temp_r4->unk44 = 1;
            temp_r0->unk2 = 0;
            (temp_r0 + 2)->unk1 = 1;
        }
        arg0->unk28 = 0x31U;
    }
    arg0->unk26 = 0;
}

