#include "common.h"
s32 BeginIncubation__4CoopUi(s32, s32);               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[132];
    struct GenObj *unk8C;
    u8 _pad90[24];
    struct GenObj *unkA8;
} GenObj;
void func_080146CC(GenObj *arg0, s32 arg1) {
    void **temp_r0;
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    BeginIncubation__4CoopUi(temp_r4->unk8C + 0x410, arg1);
    temp_r0 = temp_r4->unkA8;
    (*temp_r0)->unkAC(temp_r0, arg1);
}

