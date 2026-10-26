#include "common.h"
typedef struct GenObj {
    u8 _pad0[32];
    s32 unk20;
    u8 _pad24[16];
    void *unk34;
} GenObj;
s32 func_08020460(GenObj *arg0) {
    s32 var_r1;

    var_r1 = 0;
    if (arg0->unk34->unk20 == 5) {
        var_r1 = 1;
    }
    return var_r1;
}

