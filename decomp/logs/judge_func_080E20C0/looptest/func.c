#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
s32 free();                                           /* extern */

void func_080E20C0(void *arg0, s32 arg1) {
    if (arg0->unk20 != 0) {
        free();
    }
    if (arg0->unk10 != 0) {
        free();
    }
    if (arg0->unk0 != 0) {
        free();
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

