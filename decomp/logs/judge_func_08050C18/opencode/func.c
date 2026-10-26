#include "common.h"
typedef struct GenObj {
    u8 _pad0[496];
    s32 unk1F0;
} GenObj;
void func_08050C18(GenObj *arg0) {
    arg0->unk1F0 = (u8) (-2 & arg0->unk1F0);
}

