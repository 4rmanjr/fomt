#include "common.h"
typedef struct GenObj {
    u8 _pad0[3];
    s32 unk3;
} GenObj;
u32 func_08010F1C(GenObj *arg0) {
    return (u32) (arg0->unk3 << 0x19) >> 0x1A;
}

