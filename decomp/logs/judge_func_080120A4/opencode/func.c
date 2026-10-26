#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    s32 unk8;
    u8 _padC[156];
    s32 unkA8;
} GenObj;
s32 func_080120A4(GenObj *arg0) {
    s32 var_r1;
    void *temp_r0;

    temp_r0 = (*arg0->unk4->unkA8)->unk40();
    var_r1 = 0;
    if (temp_r0 != 0) {
        var_r1 = temp_r0->unk8;
    }
    return var_r1 >> 0x10;
}

