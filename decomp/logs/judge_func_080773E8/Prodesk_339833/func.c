#include "common.h"
s32 func_080084DC(void *, ? *);                       /* extern */
s32 func_08008B54(void *, s32);                       /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
extern ? gUnk_080FC4B4;
extern ? vtable_unk_080E7B98;

void *func_080773E8(void *arg0) {
s32 sp0;
    s32 sp4;

    sp0.unk0 = 0x1E;
    sp0.unk2 = 1;
    func_080084DC(arg0, &sp0);
    arg0->unk4 = &vtable_unk_080E7B98;
    func_08008B54(arg0 + 8, 0);
    func_08008B54(arg0 + 0xC, 1);
    sp4.unk0 = 0x1C;
    sp4.unk2 = 2;
    func_0804E7A0(sp4, arg0 + 0x14, 0);
    arg0->unk714 = 0x100;
    arg0->unk716 = 0;
    arg0->unk718 = 0;
    arg0->unk71C = 0;
    arg0->unk720 = 0;
    arg0->unk724 = 0;
    arg0->unk728 = 1;
    arg0->unk72A = 0;
    arg0->unk72C = &gUnk_080FC4B4;
    return arg0;
}

