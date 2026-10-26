#include "common.h"
s32 __12AActorEntityP10GameObjectRC13ActorLocationUiUi(void *, s32, ? *, s32, s32); /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
extern ? vtable_unk_080E671C;

void *func_0802B944(void *arg0, ? arg1) {
s32 sp4;
s32 spC;

    spC.unk0 = (u16) ((0xFFFFFC00 & spC.unk0) | 0x234);
    spC.unk1 = (u8) (3 & spC.unk1);
    spC.unk2 = (u16) (0xFFFFFC00 & spC.unk2);
    spC.unk3 = (u8) (3 & spC.unk3);
    spC.unk4 = (u16) (0xFFFFFC00 & spC.unk4);
    memcpy(&sp4, &spC, 6);
    sp4.unk6 = 0;
    __12AActorEntityP10GameObjectRC13ActorLocationUiUi(arg0, arg1, &sp4, 2, 0);
    arg0->unk14 = &vtable_unk_080E671C;
    return arg0;
}

