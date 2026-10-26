#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[132];
    s32 unk8C;
} GenObj;
void func_08014304(GenObj *arg0) {
    arg0->unk4->unk8C->unk34C4 = 0;
}

