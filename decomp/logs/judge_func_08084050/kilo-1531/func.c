#include "common.h"
s32 func_0804E9F4(s32, u16, s32, s32, s32, s32);      /* extern */

s32 func_08084050(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r6;
    s32 var_ip;
    s32 var_r2;
    s32 var_r5;
    s32 var_r7;
    u16 var_r4;

    var_ip = 0xB;
    var_r7 = 4;
    temp_r6 = arg0 + 0x24;
    temp_r0 = arg0 + 0x20 + ((arg0->unk20 * 0x10) + 4);
    var_r2 = temp_r6;
    if (var_r2 != temp_r0) {
        do {
            var_r2 += 0x10;
        } while (var_r2 != temp_r0);
    }
    arg0->unk20 = (s32) (arg0->unk20 - ((s32) (temp_r0 - temp_r6) >> 4));
    switch (arg1) {                                 /* irregular */
    case 8:
        var_ip = 0xB;
        break;
    case 9:
        var_ip = 0xE;
        break;
    case 10:
        var_ip = 0x11;
        break;
    }
    var_r4 = (var_ip * 0x24) + 0xD0;
    var_r5 = 2;
    do {
        func_0804E9F4(arg0->unk1C->unk18 + (var_r7 << 6) + 4, var_r4, 0x12, 2, 0, 0x20);
        var_r7 += 2;
        var_r4 += 0x24;
        var_r5 -= 1;
    } while (var_r5 >= 0);
    return var_r7;
}

