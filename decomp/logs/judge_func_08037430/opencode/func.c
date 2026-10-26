#include "common.h"
typedef struct GenObj {
    u8 _pad0[60];
    s32 unk3C;
} GenObj;
u16 func_08037430(GenObj *arg0) {
    return arg0->unk3C;
}

