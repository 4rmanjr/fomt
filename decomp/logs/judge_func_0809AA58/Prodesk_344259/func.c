#include "common.h"
s32 func_0809AA58(s32 arg0, u16 arg1) {
    s32 var_r0;
    s32 var_r3;
    u32 temp_r0;
    u8 *temp_r1;

    var_r3 = 0;
    temp_r0 = arg1 - 0x9B;
    switch (temp_r0) {
    case 0:
        var_r0 = 0xA00;
block_8:
        temp_r1 = arg0 + var_r0;
        if (*temp_r1 == 0) {
            *temp_r1 = 1;
            var_r3 = 1;
        }
        break;
    case 1:
        var_r0 = 0xA01;
        goto block_8;
    case 2:
        var_r0 = 0xA02;
        goto block_8;
    case 3:
        var_r0 = 0xA03;
        goto block_8;
    case 4:
        var_r0 = 0xA04;
        goto block_8;
    case 5:
        var_r0 = 0xA05;
        goto block_8;
    }
    return var_r3;
}

