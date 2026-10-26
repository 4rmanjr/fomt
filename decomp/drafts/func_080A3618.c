s16 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_0805E860(void *, s32);                       /* extern */
s32 func_0805E99C(s32, s32, u16, ? *);                /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */

void func_080A3618(void *arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4) {
s32 sp0;
    s32 spC;
    s32 sp14;
    s32 sp1C;
    s32 sp24;
    s32 sp2C;
    s32 sp34;
s32 sp3C;
    s32 temp_r3;
    u16 var_r2;
    void **temp_r1;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r1_2;
    void *temp_r4;
    void *temp_r4_2;
    void *var_r0;

    sp0.unk0 = 0;
    sp0.unk2 = 0;
    sp0.unk4 = 0;
    sp0.unk6 = 0;
    sp0.unk8 = 0;
    spC = 0;
    sp0.unk10 = 0;
    sp0.unk11 = 0;
    sp14 = 0;
    sp0.unk18 = 0;
    sp1C = 0;
    sp1C.unk4 = 0U;
    sp24 = 0;
    sp24.unk4 = 0;
    sp2C = 0;
    sp2C.unk4 = 0;
    sp34 = 0;
    sp34.unk4 = 0;
    temp_r4 = arg0 + 0xB0;
    func_0805E860(temp_r4, arg3);
    temp_r1 = arg0->unkB0;
    (*temp_r1)->unk10(&sp3C, temp_r1, *(arg0->unkB4 + (temp_r4->unkC * 4)));
    memcpy(&sp3C, &sp3C, 0x20);
    temp_r4_2 = &sp3C + 0xC;
    sp1C.unk0 = sp3C.unk0;
    sp1C.unk4 = (s32) sp3C.unk4;
    sp1C.unk8 = (s32) sp3C.unk8;
    temp_r0 = &sp1C + 0xC;
    sp1C.unkC = (s32) sp3C.unkC;
    temp_r0->unk4 = (s32) temp_r4_2->unk4;
    temp_r0->unk8 = (s32) temp_r4_2->unk8;
    temp_r0->unkC = (s32) temp_r4_2->unkC;
    (temp_r0 + 0xC)->unk4 = (s32) (temp_r4_2 + 0xC)->unk4;
    temp_r0_2 = arg0 + 0xC4;
    temp_r0_3 = temp_r0_2 + 0xC;
    sp0.unk0 = (s32) arg0->unkC4;
    sp0.unk4 = (s32) temp_r0_2->unk4;
    sp0.unk8 = (s32) temp_r0_2->unk8;
    temp_r1_2 = &sp0 + 0xC;
    sp0.unkC = (s32) temp_r0_2->unkC;
    temp_r1_2->unk4 = (s32) temp_r0_3->unk4;
    temp_r1_2->unk8 = (s32) temp_r0_3->unk8;
    temp_r1_2->unkC = (s32) temp_r0_3->unkC;
    sp0.unk0 = arg1;
    sp0.unk2 = arg2;
    temp_r0_4 = arg0 + 0x174;
    sp0.unk6 = (s16) (*(arg0 + 0x140 + (arg3 * 2)) + func_08007D4C(temp_r0_4, temp_r0_4->unk4));
    switch (arg4) {                                 /* irregular */
    case 0:
        var_r0 = arg0 + 0x17C;
block_9:
        sp0.unk4 = func_080074C0(var_r0, var_r0->unk4);
        break;
    case 1:
        var_r0 = arg0 + 0x184;
        goto block_9;
    case 2:
        var_r0 = arg0 + 0x18C;
        goto block_9;
    }
    sp0.unk8 = 1;
    sp0.unk18 = 1;
    temp_r3 = func_08008920(arg0);
    var_r2 = 0;
    if (sp1C != 0) {
        var_r2 = sp1C.unk4;
    }
    func_0805E99C(temp_r3, sp1C, var_r2, &sp0);
}
