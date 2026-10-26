#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_0800770C(s32 *);                               /* extern */
s32 func_08007714(s32 *, s32);                          /* extern */
s32 func_0800835C(s32 *);                               /* extern */
s32 func_08008364(s32 *, s32);                          /* extern */
s32 func_08008444();                                  /* extern */
s32 func_08008B54(void *, s32);                       /* extern */
s32 func_08050CC0(void *, s32, s32, s32, s32, ? *, ? *); /* extern */
s32 func_0809424C(s32);                               /* extern */
s32 func_080947BC(s32, s32);                        /* extern */
s32 func_080D02CC(void *);                            /* extern */
s32 func_080E3A9C(s32, s32);                          /* extern */
extern ? vtable_unk_080E7DF4;
extern ? vtable_unk_080E7F00;
extern ? vtable_unk_080E7F0C;

void *func_0809323C(void *arg0, s32 arg1) {
s32 spC;
s32 sp10;
    s32 temp_r4;

    func_08008444();
    temp_r4 = arg0 + 8;
    func_0809424C(temp_r4);
    arg0->unk8 = &vtable_unk_080E7F0C;
    func_080D02CC(arg0 + 0x38);
    func_080E3A9C(temp_r4, 0);
    arg0->unk8 = &vtable_unk_080E7DF4;
    arg0->unk4 = &vtable_unk_080E7F00;
    arg0->unk1C4 = 1;
    arg0->unk1C8 = func_080947BC(__builtin_new(0x4C), arg1);
    arg0->unk1CC = arg1;
    func_0800835C(&spC);
    func_0800770C(&sp10);
    func_08050CC0(arg0 + 0x1D0, 0, 0x1D, 0, 0, &spC, &sp10);
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    func_08008B54(arg0 + 0x1D4, 1);
    arg0->unk1E0 = 0;
    arg0->unk3E8 = 0;
    arg0->unk3EC = 1;
    return arg0;
}

