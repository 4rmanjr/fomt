#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[6766];
    s32 unk1A76;
} GenObj;
u8 func_08005A3C(GenObj *arg0) {
    return arg0->unk4->unk1A76;
}

