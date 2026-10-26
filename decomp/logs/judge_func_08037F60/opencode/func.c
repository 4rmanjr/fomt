#include "common.h"
typedef struct GenObj {
    u8 _pad0[84];
    s32 unk54;
} GenObj;
void func_08037F60(GenObj *arg0) {
    u8 temp_r0;

    temp_r0 = arg0->unk54;
    if (temp_r0 != 0) {
        arg0->unk54 = (u8) (temp_r0 - 1);
    }
}

