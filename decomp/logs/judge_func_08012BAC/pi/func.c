#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[148];
    struct GenObj *unk9C;
    u8 _padA0[64];
    struct GenObj *unkE0;
} GenObj;
void func_08012BAC(GenObj *arg0, s16 arg1) {
    GenObj *temp_r0;

    temp_r0 = arg0->unk4;
    temp_r0->unkE0 = arg1;
    temp_r0->unk9C = 0x15;
}

