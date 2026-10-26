#include "common.h"
extern ? gUnk_0810787C;

void func_080B34DC(void *arg0) {
    s32 var_r2;

    var_r2 = 0;
loop_1:
    if (arg0->unk8E0 == *(var_r2 + &gUnk_0810787C)) {
        arg0->unk884 = var_r2;
        return;
    }
    var_r2 += 1;
    if (var_r2 > 4) {
        arg0->unk884 = 5;
        return;
    }
    goto loop_1;
}

