#include "common.h"
s32 __builtin_delete(s32);                            /* extern */
s32 func_080A47B4(s32, s32);                          /* extern */

typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
} GenObj;
void func_08038EB8(GenObj *arg0) {
    s32 temp_r4;

    temp_r4 = arg0->unkC;
    if ((temp_r4 != 0) && (temp_r4 != 0)) {
        func_080A47B4(temp_r4, 2);
        __builtin_delete(temp_r4);
    }
    arg0->unkC = 0;
}

