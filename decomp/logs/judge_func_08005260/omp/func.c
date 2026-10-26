#include "common.h"
typedef struct GenObj {
    u8 _pad0[0x1A74];
    u8 unk1A74;
    u8 unk1A75;
} GenObj;
void func_08005260(GenObj *arg0) {
    arg0->unk1A75 = 0;
    arg0->unk1A74 = 0;
}

