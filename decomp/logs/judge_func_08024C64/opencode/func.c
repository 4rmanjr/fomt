#include "common.h"
s32 func_080323C8();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[6];
    s32 unk6;
} GenObj;
void func_08024C64(GenObj *arg0) {
    arg0->unk6 = 0;
    func_080323C8();
}

