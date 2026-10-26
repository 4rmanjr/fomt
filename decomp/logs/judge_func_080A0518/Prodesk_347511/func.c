#include "common.h"
u32 GetFriendship__C3Npc();                         /* extern */
s32 func_080A0030(s32, u32);                        /* extern */

s32 func_080A0518(s32 arg0) {
    s32 var_r5;
    u32 temp_r0;
    u32 var_r4;

    var_r5 = 1;
    var_r4 = 1;
    do {
        temp_r0 = var_r4 - 0x17;
        switch (temp_r0) {
        case 0:
        case 3:
        case 7:
        case 9:
        case 12:
            break;
        default:
        case 1:
        case 2:
        case 4:
        case 5:
        case 6:
        case 8:
        case 10:
        case 11:
            if ((func_080A0030(arg0, var_r4) != 0) && (GetFriendship__C3Npc() <= 0xF9U)) {
                var_r5 = 0;
            }
            break;
        }
        var_r4 += 1;
    } while (var_r4 <= 0x2AU);
    return var_r5;
}

