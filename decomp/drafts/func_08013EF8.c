void *__builtin_new(s32, s32, s32);                 /* extern */
void **func_0803B6FC(void *, void **, s32);           /* extern */
extern ? vtable_unk_080E5E74;

void func_08013EF8(void *arg0, ? arg1) {
    void *sp0;
    void **spC;
    void *sp10;
    void **temp_r0_2;
    void **temp_r1;
    void *temp_r0;
    void *temp_r2;
    void *temp_r6;

    temp_r6 = arg0->unk4;
    sp0 = (void *)0x2F;
    temp_r0 = __builtin_new(0x14);
    sp10.unk0 = sp0.unk0;
    sp10.unk4 = (s32) sp0.unk4;
    sp10.unk8 = (s32) sp0.unk8;
    temp_r0->unk0 = &vtable_unk_080E5E74;
    temp_r0->unk4 = (s32) temp_r6->unk8C;
    temp_r2 = temp_r0 + 8;
    temp_r0->unk8 = (void *) sp10.unk0;
    temp_r2->unk4 = (s32) sp10.unk4;
    temp_r2->unk8 = (s32) sp10.unk8;
    spC = 0;
    sp10 = temp_r0;
    temp_r0_2 = func_0803B6FC(__builtin_new(0xC, 0, temp_r2 + 0xC), &sp10, arg1);
    temp_r1 = temp_r6->unkA4;
    if ((temp_r0_2 != temp_r1) && (temp_r1 != 0)) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    temp_r6->unkA4 = temp_r0_2;
    temp_r6->unk9C = 0x18;
    if (spC != 0) {
        (*spC)->unk8(spC, 3);
    }
}
