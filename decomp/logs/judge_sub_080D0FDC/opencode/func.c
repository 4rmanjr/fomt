#include "common.h"
s32 sub_080D0FDC(s32 arg0, u32 arg1, s32 arg2) {
    s32 var_r0;

    var_r0 = arg0;
    if (arg2 & ROTATE_RIGHT(M2C_ERROR(/* Read from unset register $r12 */), 3)) {
        var_r0 += arg1 >> 3;
    }
    if (arg2 & ROTATE_RIGHT(M2C_ERROR(/* Read from unset register $r12 */), 2)) {
        var_r0 += arg1 >> 2;
    }
    if (arg2 & ROTATE_RIGHT(M2C_ERROR(/* Read from unset register $r12 */), 1)) {
        var_r0 += arg1 >> 1;
    }
    return var_r0;
}

