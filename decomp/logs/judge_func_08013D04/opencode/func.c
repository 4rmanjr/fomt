#include "common.h"
? **__builtin_new(s32);                             /* extern */
extern ? vtable_unk_080E5C14;
extern ? vtable_unk_080E5C24;
extern ? vtable_unk_080E5E44;

void func_08013D04(void *arg0, u8 arg1) {
    ? **temp_r0;
    ? **temp_r0_3;
    ? **temp_r1;
    s32 temp_r0_2;
    s32 temp_r6;
    u8 temp_r4;
    void *temp_r4_2;
    void *temp_r7;

    temp_r4 = arg1;
    temp_r7 = arg0->unk4;
    temp_r0 = __builtin_new(0x10);
    temp_r6 = ((s32) ((0 - temp_r4) | temp_r4) >> 0x1F) & 2;
    temp_r0_2 = temp_r7->unk8C;
    temp_r0->unk0 = &vtable_unk_080E5C14;
    temp_r0->unk4 = temp_r0_2;
    temp_r0_3 = __builtin_new(0x14);
    temp_r0_3->unk0 = &vtable_unk_080E5E44;
    temp_r0_3->unk4 = 0;
    temp_r4_2 = temp_r0_3 + 6;
    temp_r0_3->unk6 = (u16) ((0xFFFFFC00 & temp_r0_3->unk6) | 0x234);
    temp_r4_2->unk1 = (u8) (3 & temp_r4_2->unk1);
    temp_r4_2->unk2 = (u16) (0xFFFFFC00 & temp_r4_2->unk2);
    temp_r4_2->unk3 = (u8) (3 & temp_r4_2->unk3);
    temp_r4_2->unk4 = (u16) (0xFFFFFC00 & temp_r4_2->unk4);
    temp_r0_3->unk0 = &vtable_unk_080E5C24;
    temp_r0_3->unkC = temp_r0_2;
    temp_r0_3->unk10 = temp_r6;
    temp_r0->unk8 = temp_r0_3;
    temp_r0->unkC = temp_r6;
    temp_r1 = temp_r7->unkA4;
    if ((temp_r0 != temp_r1) && (temp_r1 != 0)) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    temp_r7->unkA4 = temp_r0;
    temp_r7->unk9C = 0x18;
}

