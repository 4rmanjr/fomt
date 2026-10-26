#include "common.h"
void *__builtin_new(s32);                           /* extern */
s32 func_08037008(void *, s32, s32, s32, s32);          /* extern */
s32 func_08037244(void *, ? *);                       /* extern */
extern ? vtable_unk_080E72E4;

void *func_08037A5C(s32 arg0, ? arg1, s32 arg2) {
s32 sp4;
    void *temp_r0;

    temp_r0 = __builtin_new(0x48);
    func_08037008(temp_r0, arg0, arg1, 0x71C, 0);
    temp_r0->unk14 = &vtable_unk_080E72E4;
    temp_r0->unk44 = (u8) ((-4 & temp_r0->unk44) | (arg2 & 3));
    sp4.unk0 = 0x160;
    sp4.unk2 = 0xD8;
    sp4.unk4 = 0x198;
    sp4.unk6 = 0xE8;
    func_08037244(temp_r0, &sp4);
    return temp_r0;
}

