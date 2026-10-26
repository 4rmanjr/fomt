s32 func_080AC070(void *, ? *);                     /* extern */
s32 func_080AC124(void *, void *, void *, s32, s32, s32); /* extern */

void func_080AB85C(void *arg0) {
s32 sp8;
    s32 temp_r0_2;
    s32 temp_r3;
    s8 var_r1;
    void *temp_r0;
    void *temp_r6;

    arg0->unk0 = (s32) arg0->unk28;
    temp_r0 = arg0 + 0x14;
    temp_r6 = arg0 + 0x20;
    func_080AC124(temp_r0, temp_r6, arg0, 0, 0, 0);
    temp_r0_2 = arg0->unk30;
    if (temp_r0_2 != 0) {
        temp_r3 = arg0->unk0 + temp_r0_2;
        sp8.unk0 = (s16) arg0->unk20;
        sp8.unk2 = (s16) (temp_r3 + temp_r6->unk2);
        sp8.unk4 = (s16) temp_r6->unk4;
        sp8.unk6 = (s16) (temp_r3 + temp_r6->unk6);
        var_r1 = func_080AC070(temp_r0, &sp8) ^ 1;
    } else {
        var_r1 = 0;
    }
    arg0->unk10 = var_r1;
}
