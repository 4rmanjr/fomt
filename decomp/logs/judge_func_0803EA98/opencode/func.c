#include "common.h"
s32 func_0803D52C(s32 *, void *);                       /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct GenObj {
    u8 _pad0[1];
    s32 unk1;
    s32 unk2;
    u8 _pad6[8644];
    s32 unk21CA;
} GenObj;
s32 func_0803EA98(GenObj *arg0) {
GenObj sp0;

    if ((s32) (arg0->unk21CA << 0x1A) < 0) {
        return 0;
    }
    func_0803D52C(&sp0, arg0 + 0x10);
    if ((func_0803D644(sp0.unk1, sp0.unk2) << 0x18) == 0) {
        return 1;
    }
    return 2;
}

