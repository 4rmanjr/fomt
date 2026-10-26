#include "common.h"
s32 func_0803B6B8(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[168];
    s32 unkB0;
} GenObj;
void func_08012ACC(GenObj *arg0) {
    func_0803B6B8(arg0->unk4->unkB0);
}

