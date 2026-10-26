#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1088];
    s32 unk448;
} GenObj;
u8 func_0806EA6C(GenObj *arg0) {
    return arg0->unk4->unk448;
}

