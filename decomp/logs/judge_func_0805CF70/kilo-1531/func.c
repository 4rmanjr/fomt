#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_08007128(void *);                            /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_0800770C(s32 *);                               /* extern */
s32 func_08007714(s32 *, s32);                          /* extern */
s32 func_08007874(void *);                            /* extern */
s32 func_08007B54(void *, s32);                     /* extern */
s32 func_0800835C(s32 *);                               /* extern */
s32 func_08008364(s32 *, s32);                          /* extern */
s32 func_080084DC(void *);                            /* extern */
s32 func_08008B54(void *, s32);                       /* extern */
s32 func_08050CC0(s32, s32, s32, s32, s32, ? *, ? *); /* extern */
s32 func_0805E6CC(void *, ? *);                       /* extern */
s32 func_0805E824(void *, void *, s32, s32);          /* extern */
extern ? gUnk_08527094;
extern ? gUnk_08728208;
extern ? vtable_unk_080E799C;
extern ? vtable_unk_080E79A8;

void *func_0805CF70(void *arg0, void *arg1) {
s32 spC;
s32 sp10;
s32 sp14;
    s32 temp_r6;
    u32 temp_r0_4;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r6_2;

    sp14.unk0 = 0x1E;
    sp14.unk2 = 1;
    func_080084DC(arg0);
    arg0->unk4 = &vtable_unk_080E799C;
    arg0->unk8 = arg1;
    arg0->unkC = 0;
    temp_r6 = __builtin_new(4);
    func_0800835C(&spC);
    func_0800770C(&sp10);
    arg0->unk10 = func_08050CC0(temp_r6, 0, 0x1F, 0, arg0->unkC, &spC, &sp10);
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    func_08008B54(arg0 + 0x14, 1);
    func_08008B54(arg0 + 0x18, 0);
    func_08008B54(arg0 + 0x1C, 2);
    temp_r4 = arg0 + 0x20;
    func_0805E6CC(temp_r4, &gUnk_08527094);
    temp_r6_2 = arg0 + 0x50;
    func_0805E6CC(temp_r6_2, &gUnk_08728208);
    func_0805E824(arg0 + 0x80, temp_r4, 0, 0x100);
    temp_r0 = arg0 + 0x94;
    arg0->unk94 = 0;
    temp_r0->unk2 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk6 = 0;
    temp_r0->unk8 = 0;
    temp_r0->unkC = 0;
    temp_r0->unk10 = 0;
    temp_r0->unk11 = 0;
    temp_r0->unk14 = 0;
    temp_r0->unk18 = 0;
    temp_r0->unk1C = 0;
    func_0805E824(temp_r0 + 0x1C + 4, temp_r4, 1, 0x100);
    temp_r0_2 = arg0 + 0xC8;
    arg0->unkC8 = 0;
    temp_r0_2->unk2 = 0;
    temp_r0_2->unk4 = 0;
    temp_r0_2->unk6 = 0;
    temp_r0_2->unk8 = 0;
    temp_r0_2->unkC = 0;
    temp_r0_2->unk10 = 0;
    temp_r0_2->unk11 = 0;
    temp_r0_2->unk14 = 0;
    temp_r0_2->unk18 = 0;
    temp_r0_2->unk1C = 0;
    func_0805E824(temp_r0_2 + 0x1C + 4, temp_r6_2, 0, 0x100);
    temp_r0_3 = arg0 + 0xFC;
    arg0->unkFC = 0;
    temp_r0_3->unk2 = 0;
    temp_r0_3->unk4 = 0;
    temp_r0_3->unk6 = 0;
    temp_r0_3->unk8 = 0;
    temp_r0_3->unkC = 0;
    temp_r0_3->unk10 = 0;
    temp_r0_3->unk11 = 0;
    temp_r0_3->unk14 = 0;
    temp_r0_3->unk18 = 0;
    arg0->unk118 = 0;
    temp_r4_2 = arg0 + 0x11C;
    func_08007874(temp_r4_2);
    temp_r4_2->unk4 = func_08007B54(temp_r4_2, 7);
    temp_r4_3 = arg0 + 0x124;
    func_08007128(temp_r4_3);
    temp_r4_3->unk4 = func_0800736C(temp_r4_3);
    temp_r4_4 = arg0 + 0x12C;
    func_08007874(temp_r4_4);
    temp_r4_4->unk4 = func_08007B54(temp_r4_4, 4);
    temp_r4_5 = arg0 + 0x134;
    func_08007128(temp_r4_5);
    temp_r4_5->unk4 = func_0800736C(temp_r4_5);
    temp_r4_6 = arg0 + 0x13C;
    func_08007874(temp_r4_6);
    temp_r4_6->unk4 = func_08007B54(temp_r4_6, 2);
    temp_r4_7 = arg0 + 0x144;
    func_08007128(temp_r4_7);
    temp_r4_7->unk4 = func_0800736C(temp_r4_7);
    arg0->unkAEC = &vtable_unk_080E79A8;
    (arg0 + 0xAEC)->unk4 = 0;
    temp_r0_4 = (u32) (arg0->unk8->unk2C48 << 0xD) >> 0xF;
    arg0->unkAD0 = temp_r0_4;
    if ((s32) temp_r0_4 > 0x1869F) {
        arg0->unkAD0 = 0x1869FU;
    }
    arg0->unk14C = 0;
    return arg0;
}

