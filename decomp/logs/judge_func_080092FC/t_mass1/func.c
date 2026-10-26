#include "common.h"
typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
} GenObj;
void func_080092FC(GenObj *arg0, s16 arg1) {
    arg0->unkC = arg1;
}

