#include "common.h"
typedef struct GenObj {
    u8 _pad0[1280];
    s32 unk500;
} GenObj;
void func_08050C64(GenObj *arg0) {
    arg0->unk500 = 0;
}

