#include "common.h"
s32 func_080A4A00(void *, s32, u16, void **, s32, s32); /* extern */
extern s32 vtable_unk_080E73E8;

typedef struct GenObj {
    s32 unk0;
    void *unk4;
    u8 _pad8[32];
    s32 unk28;
} GenObj;
void *func_0803853C(GenObj *arg0, GenObj *arg1) {
    s8 sp8;
    s32 temp_r1;

    arg0->unk0 = arg1;
    arg0->unk4 = &vtable_unk_080E73E8;
    temp_r1 = (*arg1->unk0)->unk64();
    sp8 = 0;
    func_080A4A00(arg0 + 8, temp_r1, arg1->unk28, arg1->unk0, 2, 7);
    return arg0;
}

