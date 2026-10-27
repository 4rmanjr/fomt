#include "common.h"
typedef struct GenObj {
    u8 _pad0[140];
    s32 unk8C;
} GenObj;
s32 func_080A5A9C(GenObj *arg0) {
    s32 var_r1;

    var_r1 = 0;
    if (arg0->unk8C == 0) {
        var_r1 = 1;
    }
    return var_r1;
}

