#include "common.h"
s32 func_08050DC8(s32, s32, s32, s32);                /* extern */
s32 func_08050E98(s32, s32);                          /* extern */

void func_080CABEC(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = arg0 + 0x348;
    func_08050E98(temp_r4, 4);
    func_08050E98(temp_r4, 8);
    func_08050E98(temp_r4, 1);
    func_08050E98(temp_r4, 2);
    func_08050E98(temp_r4, 0x10);
    func_08050E98(temp_r4, 0x20);
    func_08050DC8(temp_r4, arg1, 0, 0);
}

