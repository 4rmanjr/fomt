#include "common.h"
s32 func_080A4A00(void *, s32, s32, void **, s32, s32); /* extern */
extern ? vtable_unk_080E68B4;

void *func_080324BC(void *arg0, void *arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5, u8 arg6, u8 arg7) {
    u8 sp8;
    s32 temp_r1;
    s32 temp_r1_2;
    u8 temp_r8;
    void *temp_r0;
    void *temp_r0_2;

    temp_r8 = arg7;
    arg0->unk0 = arg1;
    arg0->unk4 = &vtable_unk_080E68B4;
    temp_r1 = (*arg1->unk0)->unk68();
    sp8 = temp_r8;
    func_080A4A00(arg0 + 8, temp_r1, arg1->unk22 + arg1->unk20, arg1->unk0, arg2, arg3);
    temp_r1_2 = (*arg1->unk0)->unk6C();
    sp8 = 0;
    func_080A4A00(arg0 + 0x48, temp_r1_2, 0, arg1->unk0, 2, 0xE);
    temp_r0 = arg0 + 0x88;
    arg0->unk88 = (u8) arg4;
    temp_r0_2 = temp_r0 + 1;
    temp_r0->unk1 = 0;
    temp_r0_2->unk1 = (s8) (arg5 * 4);
    (temp_r0_2 + 1)->unk1 = (u8) arg6;
    return arg0;
}

