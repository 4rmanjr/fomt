#include "common.h"
s32 func_080C7F58();                                  /* extern */
extern s32 vtable_unk_080E7C40;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1692];
    s32 unk6A4;
    u8 _pad6A8[96];
    s32 unk708;
    s32 unk70C;
} GenObj;
void *func_0807E4D4(GenObj *arg0) {
    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7C40;
    arg0->unk6A4 = 0;
    arg0->unk708 = 0;
    arg0->unk70C = 0;
    return arg0;
}

