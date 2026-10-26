#include "common.h"
s32 func_080C7F58();                                  /* extern */
extern s32 vtable_unk_080E7C5C;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1692];
    s32 unk6A4;
    s32 unk6A8;
    s32 unk6AC;
} GenObj;
void *func_0807EEA0(GenObj *arg0) {
    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7C5C;
    arg0->unk6A4 = 0;
    arg0->unk6A8 = 0;
    arg0->unk6AC = 0;
    return arg0;
}

