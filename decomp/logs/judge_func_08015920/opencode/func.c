#include "common.h"
s32 func_08033B24();                                /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[160];
    s32 unkA8;
} GenObj;
s32 func_08015920(GenObj *arg0, s32 arg1) {
    void **temp_r0;

    if ((u32) (arg1 - 0x24) <= 6U) {
        temp_r0 = arg0->unk4->unkA8;
        if ((*temp_r0)->unk40(temp_r0, arg1) != 0) {
            return func_08033B24();
        }
    }
    return 0;
}

