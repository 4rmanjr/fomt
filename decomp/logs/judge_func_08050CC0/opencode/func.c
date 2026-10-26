#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_0804F288(s32, s32, ?, s32, s32, s32, s32);   /* extern */

s32 *func_08050CC0(s32 *arg0, ? arg1, ? arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    *arg0 = func_0804F288(__builtin_new(0x554), arg1, arg2, arg3, arg4, arg5, arg6);
    return arg0;
}

