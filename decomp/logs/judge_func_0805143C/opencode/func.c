#include "common.h"
s32 func_08007128(void *);                            /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_08007874(void *);                            /* extern */
s32 func_08007B54(void *, s32);                     /* extern */
s32 func_080084DC(void *, ? *);                       /* extern */
s32 func_08008B54(void *, s32);                       /* extern */
s32 func_0805E6CC(void *, ? *);                       /* extern */
s32 func_0805E824(void *, void *, s32, s32);          /* extern */
extern ? gUnk_08527094;
extern ? vtable_unk_080E7928;

void *func_0805143C(void *arg0, s32 arg1) {
s32 sp0;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;

    sp0.unk0 = 0x1E;
    sp0.unk2 = 1;
    func_080084DC(arg0, &sp0);
    arg0->unk4 = &vtable_unk_080E7928;
    arg0->unk8 = arg1;
    func_08008B54(arg0 + 0xC, 2);
    temp_r4 = arg0 + 0x10;
    func_0805E6CC(temp_r4, &gUnk_08527094);
    func_0805E824(arg0 + 0x40, temp_r4, 0, 0x100);
    temp_r0 = arg0 + 0x54;
    arg0->unk54 = 0;
    temp_r0->unk2 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk6 = 0;
    temp_r0->unk8 = 0;
    temp_r0->unkC = 0;
    temp_r0->unk10 = 0;
    temp_r0->unk11 = 0;
    temp_r0->unk14 = 0;
    temp_r0->unk18 = 0;
    func_0805E824(temp_r0 + 0x20, temp_r4, 1, 0x100);
    temp_r0_2 = arg0 + 0x88;
    arg0->unk88 = 0;
    temp_r0_2->unk2 = 0;
    temp_r0_2->unk4 = 0;
    temp_r0_2->unk6 = 0;
    temp_r0_2->unk8 = 0;
    temp_r0_2->unkC = 0;
    temp_r0_2->unk10 = 0;
    temp_r0_2->unk11 = 0;
    temp_r0_2->unk14 = 0;
    temp_r0_2->unk18 = 0;
    temp_r4_2 = temp_r4 + 0x98;
    func_08007874(temp_r4_2);
    temp_r4_2->unk4 = func_08007B54(temp_r4_2, 4);
    temp_r4_3 = temp_r4_2 + 8;
    func_08007128(temp_r4_3);
    temp_r4_3->unk4 = func_0800736C(temp_r4_3);
    arg0->unk8B8 = 0;
    return arg0;
}

