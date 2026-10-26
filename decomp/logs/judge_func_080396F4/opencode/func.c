#include "common.h"
typedef struct GenObj {
    u8 _pad0[18];
    s32 unk12;
    u8 _pad16[30];
    void *unk34;
} GenObj;
s32 func_080396F4(GenObj *arg1) {
    s32 var_r1;

    var_r1 = 0;
    if (arg1->unk34->unk12 != 0) {
        var_r1 = 3;
    }
    return var_r1;
}

