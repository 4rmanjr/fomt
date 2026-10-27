#include "common.h"
s32 func_080096F0(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
} GenObj;
s32 func_080D780C(GenObj *arg0) {
    func_080096F0(arg0->unkC);
    return 0;
}

