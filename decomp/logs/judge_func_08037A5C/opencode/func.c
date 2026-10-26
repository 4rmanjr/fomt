#include "common.h"
void *__builtin_new(s32);                           /* extern */
s32 func_08037008(void *, s32, s32, s32, s32);          /* extern */
s32 func_08037244(void *, s32 *);                       /* extern */
extern s32 vtable_unk_080E72E4;

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk6;
    u8 _padA[10];
    void *unk14;
    u8 _pad18[44];
    s32 unk44;
} GenObj;
void *func_08037A5C(s32 arg0, ? arg1, s32 arg2) {
s32 sp4;
    GenObj *temp_r0;

    temp_r0 = __builtin_new(0x48);
    func_08037008(temp_r0, arg0, arg1, 0x71C, 0);
    temp_r0->unk14 = &vtable_unk_080E72E4;
    temp_r0->unk44 = (u8) ((-4 & temp_r0->unk44) | (arg2 & 3));
    sp4 = 0x160;
    sp4.unk2 = 0xD8;
    sp4.unk4 = 0x198;
    sp4.unk6 = 0xE8;
    func_08037244(temp_r0, &sp4);
    return temp_r0;
}

