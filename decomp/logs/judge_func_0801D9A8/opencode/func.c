#include "common.h"
s32 func_08012B24(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4180];
    s32 unk1054;
} GenObj;
void func_0801D9A8(GenObj *arg0) {
    func_08012B24(arg0->unk1054);
}

