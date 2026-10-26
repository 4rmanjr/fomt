#include "common.h"
s32 func_080084DC(void *, s32 *);                       /* extern */
s32 func_08008B54(void *, s32);                       /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
extern s32 gUnk_080FC4B4;
extern s32 vtable_unk_080E7B98;

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    void *unk4;
    u8 _pad8[1804];
    s32 unk714;
    s32 unk716;
    s32 unk718;
    s32 unk71C;
    s32 unk720;
    s32 unk724;
    s32 unk728;
    s32 unk72A;
    s32 unk72C;
} GenObj;
void *func_080773E8(GenObj *arg0) {
s32 sp0;
    s32 sp4;

    sp0 = 0x1E;
    sp0.unk2 = 1;
    func_080084DC(arg0, &sp0);
    arg0->unk4 = &vtable_unk_080E7B98;
    func_08008B54(arg0 + 8, 0);
    func_08008B54(arg0 + 0xC, 1);
    sp4 = 0x1C;
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

