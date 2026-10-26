#include "common.h"
typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
} GenObj;
void func_080503FC(GenObj *arg0) {
    if (arg0->unk8 != 0) {
        arg0->unk8 = 2;
    }
}

