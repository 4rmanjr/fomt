#include "common.h"
s32 GetFirstSlotWithTool__C8RucksackUi(s32, s32);   /* extern */
s32 GetFirstSlotWith__C9ToolChestUi(s32, s32);      /* extern */

s32 func_0809DF2C(s32 arg1, s32 arg2) {
    s32 var_r4;
    s32 var_r6;
    u32 temp_r0;

    var_r6 = 0;
    var_r4 = 0x51;
    temp_r0 = arg1 - 4;
    switch (temp_r0) {
    case 0:
        var_r4 = 5;
        break;
    case 1:
        var_r4 = 0xD;
        break;
    case 2:
        var_r4 = 0x15;
        break;
    case 3:
        var_r4 = 0x1D;
        break;
    case 4:
        var_r4 = 0x25;
        break;
    case 5:
        var_r4 = 0x2D;
        break;
    }
    if (var_r4 <= 0x50) {
        if (GetFirstSlotWithTool__C8RucksackUi(arg2 + 0x1C38, var_r4) != -1) {
            var_r6 = 1;
        }
        if (GetFirstSlotWith__C9ToolChestUi(arg2 + 0x380, var_r4) != -1) {
            var_r6 = 1;
        }
    }
    return var_r6;
}

