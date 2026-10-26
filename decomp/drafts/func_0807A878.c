s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008E64(s32, s32, u16);                     /* extern */
s32 func_0805E790(s32 *, void *, s32);                  /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */

void func_0807A878(void *arg0) {
    s32 sp0;
    s32 sp8;
    s32 sp10;
    s32 sp18;
s32 sp20;
    s32 temp_r1_3;
    s32 temp_r1_5;
    s32 temp_r1_6;
    u16 var_r2;
    u16 var_r2_2;
    u16 var_r2_3;
    void **temp_r1;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r1_2;
    void *temp_r1_4;

    sp0 = 0;
    sp0.unk4 = 0;
    sp8 = 0;
    sp8.unk4 = 0U;
    sp10 = 0;
    sp10.unk4 = 0U;
    sp18 = 0;
    sp18.unk4 = 0;
    temp_r1 = arg0->unk774;
    (*temp_r1)->unk10(&sp20, temp_r1, *(arg0->unk778 + ((arg0 + 0x774)->unkC * 4)));
    memcpy(&sp20, &sp20, 0x20);
    temp_r0 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_2 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_2->unk4 = (s32) temp_r0->unk4;
    temp_r1_2->unk8 = (s32) temp_r0->unk8;
    temp_r1_2->unkC = (s32) temp_r0->unkC;
    (temp_r1_2 + 0xC)->unk4 = (s32) (temp_r0 + 0xC)->unk4;
    temp_r0_2 = arg0 + 0x818;
    temp_r1_3 = (func_080074C0(temp_r0_2, temp_r0_2->unk4) << 5) + 0x05000200;
    var_r2 = 0;
    if (sp10 != 0) {
        var_r2 = sp10.unk4;
    }
    func_08008E64(sp10, temp_r1_3, var_r2);
    func_0805E790(&sp20, arg0 + 0x744, 0);
    temp_r0_3 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_4 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_4->unk4 = (s32) temp_r0_3->unk4;
    temp_r1_4->unk8 = (s32) temp_r0_3->unk8;
    temp_r1_4->unkC = (s32) temp_r0_3->unkC;
    (temp_r1_4 + 0xC)->unk4 = (s32) (temp_r0_3 + 0xC)->unk4;
    temp_r0_4 = arg0 + 0x838;
    temp_r1_5 = (func_080074C0(temp_r0_4, temp_r0_4->unk4) << 5) + 0x05000200;
    var_r2_2 = 0;
    if (sp10 != 0) {
        var_r2_2 = sp10.unk4;
    }
    func_08008E64(sp10, temp_r1_5, var_r2_2);
    temp_r0_5 = arg0 + 0x830;
    temp_r1_6 = (func_08007D4C(temp_r0_5, temp_r0_5->unk4) << 5) + 0x06010000;
    var_r2_3 = 0;
    if (sp8 != 0) {
        var_r2_3 = sp8.unk4;
    }
    func_08008E64(sp8, temp_r1_6, var_r2_3);
}
