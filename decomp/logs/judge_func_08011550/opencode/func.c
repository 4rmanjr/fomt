#include "common.h"
typedef struct GenObj {
    s32 unk0;
    s32 unk4;
} GenObj;
void func_08011550(GenObj *arg0) {
    if (arg0->unk4 == arg0->unk0) {
        arg0->unk0 = 0x10;
    }
    arg0->unk4 = 0x10;
}

