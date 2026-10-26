#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[12];
    struct GenObj *unk14;
    u8 _pad18[32];
    s32 unk38;
    u8 _pad3C[108];
    s32 unkA8;
} GenObj;
void func_08014290(GenObj *arg0) {
    void *temp_r0;

    temp_r0 = (*arg0->unk4->unkA8)->unk40();
    if (temp_r0 != 0) {
        ((void (*)(void *,...))(temp_r0->unk14->unk38))(temp_r0, 0);
    }
}

