#include "common.h"
s32 memset(s32, s32, s32);                            /* extern */

typedef struct GenObj {
    u8 _pad0[24];
    s32 unk18;
    s32 unk1C;
} GenObj;
void func_08075DD4(GenObj *arg0) {
    s32 temp_r1;

    temp_r1 = arg0->unk18;
    memset(temp_r1, 0xFF, ((s32) (arg0->unk1C - temp_r1) >> 6) << 6);
}

