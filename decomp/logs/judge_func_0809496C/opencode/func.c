#include "common.h"
typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
} GenObj;
s32 func_0809496C(GenObj *arg0) {
    return arg0->unk8 + 0x27;
}

