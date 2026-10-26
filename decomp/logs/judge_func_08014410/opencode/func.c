#include "common.h"
? **__builtin_new(s32, s32, s32);                   /* extern */
extern ? vtable_unk_080E5D34;
extern ? vtable_unk_080E5E74;

void func_08014410(void *arg0, s32 arg1) {
    ? **sp0;
    ? **spC;
    ? **sp10;
    ? **temp_r0;
    ? **temp_r0_2;
    ? **temp_r1;
    ? **temp_r2;
    ? **temp_r5;
    void *temp_r7;

    temp_r7 = arg0->unk4;
    sp0 = (s32 **)0x25;
    temp_r0 = __builtin_new(0x14);
    sp10.unk0 = sp0.unk0;
    sp10.unk4 = (s32) sp0.unk4;
    sp10.unk8 = (s32) sp0.unk8;
    temp_r0->unk0 = &vtable_unk_080E5E74;
    temp_r0->unk4 = (s32) temp_r7->unk8C;
    temp_r2 = temp_r0 + 8;
    temp_r0->unk8 = (s32 **) sp10.unk0;
    temp_r2->unk4 = (s32) sp10.unk4;
    temp_r2->unk8 = (s32) sp10.unk8;
    spC = temp_r0;
    temp_r0_2 = __builtin_new(0x10, &sp10 + 0xC, temp_r2 + 0xC);
    temp_r5 = spC;
    spC = 0;
    sp10 = temp_r5;
    temp_r0_2->unk0 = &vtable_unk_080E5D34;
    sp10 = 0;
    temp_r0_2->unk4 = temp_r5;
    temp_r0_2->unk8 = (s32) temp_r7->unk8C;
    temp_r0_2->unkC = (s8) ((u32) ((0 - arg1) | arg1) >> 0x1F);
    temp_r1 = temp_r7->unkA4;
    if ((temp_r0_2 != temp_r1) && (temp_r1 != 0)) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    temp_r7->unkA4 = temp_r0_2;
    temp_r7->unk9C = 0x18;
    if (spC != 0) {
        (*spC)->unk8(spC, 3);
    }
}

