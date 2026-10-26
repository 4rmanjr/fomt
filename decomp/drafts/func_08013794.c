? **__builtin_new(s32, s32, s32);                   /* extern */
extern ? vtable_unk_080E5E54;
extern ? vtable_unk_080E5E74;

void func_08013794(void *arg0) {
    ? **sp0;
    ? **spC;
    ? **sp10;
    ? **temp_r0;
    ? **temp_r0_2;
    ? **temp_r1;
    ? **temp_r2;
    ? **temp_r4;
    void *temp_r5;
    void *temp_r6;

    temp_r6 = arg0->unk4;
    sp0 = (s32 **)0x1D;
    temp_r0 = __builtin_new(0x14);
    temp_r5 = temp_r6 + 0x8C;
    sp10.unk0 = sp0.unk0;
    sp10.unk4 = (s32) sp0.unk4;
    sp10.unk8 = (s32) sp0.unk8;
    temp_r0->unk0 = &vtable_unk_080E5E74;
    temp_r0->unk4 = (s32) temp_r6->unk8C;
    temp_r2 = temp_r0 + 8;
    temp_r0->unk8 = (s32 **) sp10.unk0;
    temp_r2->unk4 = (s32) sp10.unk4;
    temp_r2->unk8 = (s32) sp10.unk8;
    spC = temp_r0;
    temp_r0_2 = __builtin_new(0xC, &sp10 + 0xC, temp_r2 + 0xC);
    temp_r4 = spC;
    spC = 0;
    sp10 = temp_r4;
    temp_r0_2->unk0 = &vtable_unk_080E5E54;
    temp_r0_2->unk4 = (s32) temp_r6->unk8C;
    sp10 = 0;
    temp_r0_2->unk8 = temp_r4;
    temp_r1 = temp_r5->unk18;
    if ((temp_r0_2 != temp_r1) && (temp_r1 != 0)) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    temp_r5->unk18 = temp_r0_2;
    temp_r6->unk9C = 0x18;
    if (spC != 0) {
        (*spC)->unk8(spC, 3);
    }
}
