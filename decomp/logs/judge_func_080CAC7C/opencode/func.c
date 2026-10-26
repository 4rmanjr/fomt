#include "common.h"
s32 func_0805E6CC(s32 **);                              /* extern */
s32 func_0805E824(void ***, ? **, u16, s32);          /* extern */
extern ? vtable_unk_080E5A28;

void *func_080CAC7C(void *arg0, u16 arg2, s32 arg3) {
    ? *sp0;
s32 sp30;
    void **sp34;
s32 sp48;
    s8 sp64;
s32 sp68;

    func_0805E6CC(&sp0);
    sp30.unk0 = 0;
    sp30.unk2 = 0;
    func_0805E824(&sp34, &sp0, arg2, 0x100);
    sp48.unk0 = 0;
    sp48.unk2 = 0;
    sp48.unk4 = 0;
    sp48.unk6 = 0;
    sp48.unk8 = 0;
    sp48.unkC = 0;
    sp48.unk10 = 0;
    sp48.unk11 = 0;
    sp48.unk14 = 0;
    sp48.unk18 = 0;
    sp64 = 0;
    (*sp34)->unk10(&sp68, sp34, *(sp38 + (sp34.unkC * 4)));
    arg0->unk4 = sp70;
    arg0->unk8 = sp78;
    arg0->unk0 = arg3;
    sp0 = &vtable_unk_080E5A28;
    return arg0;
}

