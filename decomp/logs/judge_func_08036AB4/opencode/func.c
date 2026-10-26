#include "common.h"
s32 func_08035908(void *, s32);                       /* extern */
s32 func_08035940(void *, s32);                       /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_08036AB4(GenObj *arg0) {
    s32 var_r1;
    s32 var_r5;
    u16 temp_r0;

    var_r1 = 0x9D3;
    var_r5 = 0x9D7;
    temp_r0 = arg0->unk4;
    if (temp_r0 != 0x11) {
        if ((s32) temp_r0 <= 0x11) {
            if (temp_r0 != 7) {

            } else {
                goto block_6;
            }
        } else if ((temp_r0 == 0x1D) || (temp_r0 == 0x25)) {
            goto block_6;
        }
    } else {
block_6:
        var_r1 = 0x9DF;
        var_r5 = 0x9E3;
    }
    func_08035908(arg0, var_r1);
    func_08035940(arg0, var_r5);
}

