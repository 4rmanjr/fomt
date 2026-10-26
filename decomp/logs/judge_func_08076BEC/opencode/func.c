#include "common.h"
typedef struct GenObj {
    u8 _pad0[8];
    void *unk8;
    u8 _padC[1412];
    s32 unk590;
} GenObj;
s16 func_08076BEC(GenObj *arg0) {
    return arg0->unk8->unk590;
}

