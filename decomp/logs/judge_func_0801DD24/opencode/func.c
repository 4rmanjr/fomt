#include "common.h"
s32 func_080A6194(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_0801DD24(GenObj *arg0) {
    func_080A6194(arg0->unk4);
}

