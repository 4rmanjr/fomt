#include "common.h"
typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
} GenObj;
s32 func_080943C0(GenObj *arg0) {
    return arg0->unk10;
}

