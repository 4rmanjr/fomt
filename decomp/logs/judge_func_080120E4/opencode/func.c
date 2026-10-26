#include "common.h"
s32 SetAnimFacing__12AActorEntityUi(void *, s32);     /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[24];
    s32 unk20;
    u8 _pad24[132];
    s32 unkA8;
} GenObj;
void func_080120E4(GenObj *arg0, s32 arg2) {
    void *temp_r0;

    temp_r0 = (*arg0->unk4->unkA8)->unk40();
    if ((temp_r0 != 0) && (temp_r0->unk20 != arg2)) {
        SetAnimFacing__12AActorEntityUi(temp_r0, arg2);
    }
}

