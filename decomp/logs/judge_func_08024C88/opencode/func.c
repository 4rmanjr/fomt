#include "common.h"
typedef struct GenObj {
    u8 _pad0[60];
    s32 unk3C;
    s32 unk3D;
} GenObj;
void func_08024C88(GenObj *arg0) {
    arg0->unk3C = 8;
    arg0->unk3D = 0xFF;
}

