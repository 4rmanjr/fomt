#include "common.h"
s32 func_08038EA0();                                /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
} GenObj;
s32 func_080387D8(GenObj *arg0) {
    if (arg0->unk10 == 0) {
        return 1;
    }
    return func_08038EA0();
}

