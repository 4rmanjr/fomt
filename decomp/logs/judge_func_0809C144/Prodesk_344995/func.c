#include "common.h"
void func_0809C144(void *arg0) {
    u32 var_r3;
    void *var_r1;

    var_r3 = 0;
    var_r1 = arg0;
    do {
        var_r1->unk0 = 0;
        var_r1->unkC = 0;
        var_r1->unk6 = 0;
        var_r1 += 1;
        var_r3 += 1;
    } while (var_r3 <= 5U);
}

