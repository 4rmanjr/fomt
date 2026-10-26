#include "common.h"
s32 malloc(s32);                                    /* extern */
extern ? (*gUnk_03000CD4)();

void func_080D3BC0(s32 arg0) {
loop_1:
    if (gUnk_03000CD4 == 0) {
loop_2:
        goto loop_2;
    }
    gUnk_03000CD4();
    if (malloc(arg0) != 0) {
        return;
    }
    goto loop_1;
}

