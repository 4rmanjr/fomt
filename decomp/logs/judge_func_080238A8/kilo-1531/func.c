#include "common.h"
s32 __5ActorRC5Actor(s32 *, s32);                       /* extern */
s32 func_08020038(void *, s32, ? *, s32);             /* extern */
s32 func_08023FB0(void *, s32, u8);                   /* extern */
s32 func_08024020(void *);                          /* extern */
extern ? vtable_unk_080E6284;

void *func_080238A8(void *arg0, s32 arg1, s32 arg2) {
s32 sp0;

    __5ActorRC5Actor(&sp0, arg2);
    func_08020038(arg0, arg1, &sp0, 0x921);
    arg0->unk14 = &vtable_unk_080E6284;
    arg0->unk34 = arg2;
    func_08023FB0(arg0, func_08024020(arg0), arg0->unk20);
    return arg0;
}

