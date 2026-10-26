#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
extern void *gUnk_03000408;

void func_080079E8(void *arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = gUnk_03000408->unk924 - 1;
    gUnk_03000408->unk924 = temp_r4;
    if (temp_r4 == 0) {
        if (gUnk_03000408 != 0) {
            __builtin_delete(gUnk_03000408);
        }
        gUnk_03000408 = temp_r4;
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

