#include "common.h"
void *GetMapData(s32);                              /* extern */
s32 Unpack(s32, s32);                                 /* extern */

void func_080A5DB8(void *arg0, s32 arg1, s32 arg2) {
    s32 *temp_r4;
    void *temp_r0;

    temp_r0 = GetMapData(arg0->unk4);
    temp_r4 = arg0 + 0x1C + (arg2 * 4);
    Unpack(temp_r0->unk4, *temp_r4);
    if (arg1 >= 0) {
        if (arg1 > 2) {
            if (arg1 != 3) {
                return;
            }
            Unpack(temp_r0->unk8, *temp_r4);
        } else {
            Unpack(temp_r0->unk4, *temp_r4);
        }
    }
}

