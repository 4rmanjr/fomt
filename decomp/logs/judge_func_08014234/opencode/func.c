#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[160];
    s32 unkA8;
} GenObj;
void func_08014234(GenObj *arg0) {
    (*arg0->unk4->unkA8)->unkA4();
}

