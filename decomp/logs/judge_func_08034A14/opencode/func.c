#include "common.h"
s32 func_080324BC(void *, void *, s32, s32, s32, s32); /* extern */
s32 func_080A4A00(void *, s32, u16, void **, s32, s32); /* extern */
extern s32 gUnk_080F14B8;
extern s32 gUnk_080F14F0;
extern s32 vtable_unk_080E6904;

typedef struct GenObj {
    s32 unk0;
    void *unk4;
    u8 _pad8[40];
    s32 unk30;
    u8 _pad34[156];
    s32 unkD0;
} GenObj;
void *func_08034A14(GenObj *arg0, GenObj *arg1) {
    s32 sp8;
    s8 spC;
    s32 temp_r1;
    u8 temp_r5;

    sp8 = 0;
    spC = 0;
    func_080324BC(arg0, arg1, 3, *((arg1->unk30 * 4) + &gUnk_080F14B8), 0, 4);
    arg0->unk4 = &vtable_unk_080E6904;
    temp_r1 = (*arg1->unk0)->unk68();
    temp_r5 = arg1->unk30;
    sp8 = 0;
    func_080A4A00(arg0 + 0x8C, temp_r1, *((temp_r5 * 2) + &gUnk_080F14F0), arg1->unk0, 2, *((temp_r5 * 4) + &gUnk_080F14B8));
    arg0->unkD0 = 0;
    return arg0;
}

