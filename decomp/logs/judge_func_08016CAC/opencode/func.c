#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[160];
    s32 unkA8;
} GenObj;
void func_08016CAC(GenObj *arg0) {
    void **temp_r0;

    temp_r0 = arg0->unk4->unkA8;
    (*temp_r0)->unk40(temp_r0, 0)->unk14->unkA8();
}

