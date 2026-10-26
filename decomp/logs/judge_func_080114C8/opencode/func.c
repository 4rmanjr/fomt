#include "common.h"
typedef struct GenObj {
    u8 _pad0[3];
    s32 unk3;
} GenObj;
s32 func_080114C8(GenObj *arg0, u32 arg1) {
    u32 var_r1;
    u8 temp_r2;

    var_r1 = arg1;
    if (var_r1 > 0x63U) {
        var_r1 = 0x63;
    }
    temp_r2 = arg0->unk3;
    if ((u32) ((u32) (temp_r2 << 0x19) >> 0x1A) >= var_r1) {
        return 0;
    }
    arg0->unk3 = (u8) ((-0x7F & temp_r2) | ((var_r1 & 0x3F) * 2));
    return 1;
}

