#include "common.h"
extern ? gUnk_081008EC;
extern ? gUnk_081009DC;

void func_080946C4(void *arg0, s32 arg1) {
    ? *var_r0;

    switch (arg1) {                                 /* irregular */
    case 2:
        var_r0 = &gUnk_081008EC;
block_5:
        arg0->unk8 = var_r0;
        return;
    case 3:
        arg0->unk10 = 1;
        var_r0 = &gUnk_081009DC;
        goto block_5;
    }
}

