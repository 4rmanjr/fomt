#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[160];
    struct GenObj *unkA8;
    u8 _padAC[56];
    struct GenObj *unkE4;
} GenObj;
void func_080121C4(GenObj *arg0) {
    s32 temp_r0;
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    temp_r0 = (*temp_r4->unkA8)->unk40();
    temp_r4->unkE4 = temp_r0;
    if (temp_r0 != 0) {
        *(((GenObj *)((u8 *)temp_r4 + 0xE4)) - 0x48) = 0x16;
    }
}

