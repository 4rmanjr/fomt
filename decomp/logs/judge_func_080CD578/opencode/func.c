#include "common.h"
s32 func_0800770C(s32 *);                               /* extern */
s32 func_08007714(s32 *, s32);                          /* extern */
s32 func_0800835C(s32 *);                               /* extern */
s32 func_08008364(s32 *, s32);                          /* extern */
s32 func_08008444();                                  /* extern */
s32 func_08008B54(void *, s32);                       /* extern */
s32 func_08050CC0(void *, s32, s32, s32, s32, ? *, ? *); /* extern */
s32 func_0805E6CC(void *, ? *);                       /* extern */
s32 func_0805E824(void *, void *, s32, s32);          /* extern */
extern ? gUnk_08754C0C;
extern ? vtable_unk_080E85A0;

void *func_080CD578(void *arg0, s32 arg1) {
s32 spC;
s32 sp10;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r6;

    func_08008444();
    arg0->unk4 = &vtable_unk_080E85A0;
    arg0->unk8 = arg1;
    func_08008B54(arg0 + 0xC, 1);
    temp_r6 = arg0 + 0x10;
    func_0805E6CC(temp_r6, &gUnk_08754C0C);
    temp_r0 = arg0 + 0x40;
    arg0->unk40 = 0;
    temp_r0->unk2 = 0;
    func_0805E824(temp_r0 + 4, temp_r6, 0, 0x100);
    temp_r0_2 = arg0 + 0x58;
    arg0->unk58 = 0;
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
    arg0->unk78 = 0;
    arg0->unk7C = 0;
    func_0800835C(&spC);
    func_0800770C(&sp10);
    func_08050CC0(arg0 + 0x80, 0, 0x1D, 0, 0, &spC, &sp10);
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    return arg0;
}

