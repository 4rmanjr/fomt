#include "common.h"
s32 func_08050E8C();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[164];
    s32 unkAC;
} GenObj;
void func_0801284C(GenObj *arg0) {
    if (arg0->unk4->unkAC != 0) {
        func_08050E8C();
    }
}

