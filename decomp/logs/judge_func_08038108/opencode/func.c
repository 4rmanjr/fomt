#include "common.h"
typedef struct GenObj {
    u8 _pad0[37];
    s32 unk25;
} GenObj;
u8 func_08038108(GenObj *arg0) {
    return arg0->unk25;
}

