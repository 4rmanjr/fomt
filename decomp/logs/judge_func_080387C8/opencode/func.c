#include "common.h"
s32 func_08038E90();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
} GenObj;
void func_080387C8(GenObj *arg0) {
    if (arg0->unk10 != 0) {
        func_08038E90();
    }
}

