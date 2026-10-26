#include "common.h"
s32 func_0803D52C(s32 *, s32);                          /* extern */

s32 func_0803E40C(void *arg0) {
s32 sp0;

    func_0803D52C(&sp0, arg0 + 0x10);
    if ((((u32) (arg0->unk2187 << 0x1B) >> 0x1E) == 2) && (sp0.unk3 == 0)) {
        return 1;
    }
    return 0;
}

