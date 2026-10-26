#include "common.h"
typedef struct GenObj {
    u8 _pad0[12];
    void *unkC;
    u8 _pad10[64];
    s32 unk50;
} GenObj;
s32 func_08038EA0(GenObj *arg0) {
    s32 var_r1;

    var_r1 = 0;
    if (arg0->unkC->unk50 == 0) {
        var_r1 = 1;
    }
    return var_r1;
}

