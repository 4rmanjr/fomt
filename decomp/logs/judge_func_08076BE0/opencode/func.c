#include "common.h"
typedef struct GenObj {
    u8 _pad0[8];
    void *unk8;
    u8 _padC[1412];
    s32 unk590;
} GenObj;
void func_08076BE0(GenObj *arg0, s16 arg1) {
    arg0->unk8->unk590 = arg1;
}

