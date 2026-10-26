#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
s32 func_08025AFC(GenObj *arg0) {
    if ((s32) arg0->unk4 > 8) {
        return 0;
    }
    return 1;
}

