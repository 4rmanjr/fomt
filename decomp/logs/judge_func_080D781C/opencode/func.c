#include "common.h"
s32 func_08009864(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
} GenObj;
s32 func_080D781C(GenObj *arg0) {
    func_08009864(arg0->unkC);
    return 0;
}

