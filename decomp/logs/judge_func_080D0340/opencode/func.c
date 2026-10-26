#include "common.h"
s32 func_080D0AE0();                                  /* extern */
extern s32 *gUnk_03000420;

void func_080D0340(void) {
    if (*gUnk_03000420 != 0) {
        *gUnk_03000420 = 0;
        func_080D0AE0();
    }
}

