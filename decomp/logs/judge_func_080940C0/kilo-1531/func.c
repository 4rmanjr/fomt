#include "common.h"
extern ? gUnk_0810084C;

void func_080940C0(void *arg0, s32 arg1) {
    s8 var_r0;

    switch (arg1) {                                 /* irregular */
    case 2:
        var_r0 = 1;
block_5:
        arg0->unkC = var_r0;
        arg0->unk8 = &gUnk_0810084C;
        return;
    case 3:
        var_r0 = 0;
        goto block_5;
    }
}

