void *__builtin_new(s32);                           /* extern */
s32 func_08007128(void *);                            /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_08007874(void *);                            /* extern */
s32 func_08007B54(void *, s32);                     /* extern */
s32 func_0805E6CC(void *, ? *);                       /* extern */
s32 memcpy(void *, ? *, s32);                         /* extern */
s32 memset(s32 *, s32, s32);                            /* extern */
extern ? gUnk_086678A0;
extern ? gUnk_0875A440;
extern ? gUnk_0875B444;
extern ? vtable_unk_080E77D0;

void func_0803C5B0(void **arg0) {
s32 sp0;
    void **sp20;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r4;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r5_6;

    sp20 = arg0;
    temp_r0 = __builtin_new(0x35C);
    func_0805E6CC(temp_r0, &gUnk_0875B444);
    func_0805E6CC(temp_r0 + 0x30, &gUnk_086678A0);
    temp_r4 = temp_r0 + 0x60;
    func_08007128(temp_r4);
    temp_r4->unk4 = func_0800736C(temp_r4);
    temp_r0_2 = temp_r0 + 0x68;
    temp_r0->unk68 = 0;
    temp_r0_2->unk4 = 0;
    temp_r0_2->unk8 = &vtable_unk_080E77D0;
    temp_r0_2->unkC = 0;
    temp_r0_2->unk10 = 0;
    temp_r0_2->unk14 = 0;
    temp_r0_2->unk18 = 1;
    temp_r5 = temp_r0 + 0x184;
    func_08007874(temp_r5);
    temp_r5->unk4 = func_08007B54(temp_r5, 3);
    temp_r0->unk18C = 1;
    temp_r0_3 = temp_r0 + 0x190;
    temp_r0->unk190 = 0;
    temp_r0_3->unk4 = 0;
    temp_r0_3->unk8 = &vtable_unk_080E77D0;
    temp_r0_3->unkC = 0;
    temp_r0_3->unk10 = 0;
    temp_r0_3->unk14 = 0;
    temp_r5_2 = temp_r0 + 0x2A8;
    func_08007874(temp_r5_2);
    temp_r5_2->unk4 = func_08007B54(temp_r5_2, 3);
    temp_r0->unk2B0 = 1;
    temp_r0_4 = temp_r0 + 0x2B4;
    temp_r0->unk2B4 = 0;
    temp_r0_4->unk4 = 0;
    temp_r0_4->unk8 = &vtable_unk_080E77D0;
    temp_r0_4->unkC = 0;
    temp_r0_4->unk10 = 0;
    temp_r0_4->unk14 = 0;
    temp_r0->unk2CC = 0;
    temp_r5_3 = temp_r0 + 0x2D0;
    func_08007874(temp_r5_3);
    temp_r5_3->unk4 = func_08007B54(temp_r5_3, 2);
    temp_r0_5 = temp_r0 + 0x2D8;
    temp_r0->unk2D8 = 0;
    temp_r0_5->unk4 = 0;
    temp_r0_5->unk8 = &vtable_unk_080E77D0;
    temp_r0_5->unkC = 0;
    temp_r0_5->unk10 = 0;
    temp_r0_5->unk14 = 0;
    temp_r0->unk2F0 = 1;
    temp_r0->unk2F1 = 0;
    temp_r5_4 = temp_r0 + 0x2F4;
    func_08007128(temp_r5_4);
    temp_r5_4->unk4 = func_0800736C(temp_r5_4);
    temp_r0_6 = temp_r0 + 0x2FC;
    temp_r0->unk2FC = 0;
    temp_r0_6->unk4 = 0;
    temp_r0_6->unk8 = &vtable_unk_080E77D0;
    temp_r0_6->unkC = 0;
    temp_r0_6->unk10 = 0;
    temp_r0_6->unk14 = 0;
    temp_r5_5 = temp_r0 + 0x314;
    func_08007874(temp_r5_5);
    temp_r5_5->unk4 = func_08007B54(temp_r5_5, 2);
    temp_r0_7 = temp_r0 + 0x31C;
    temp_r0->unk31C = 0;
    temp_r0_7->unk4 = 0;
    temp_r0_7->unk8 = &vtable_unk_080E77D0;
    temp_r0_7->unkC = 0;
    temp_r0_7->unk10 = 0;
    temp_r0_7->unk14 = 0;
    temp_r0->unk334 = 1;
    temp_r5_6 = temp_r0 + 0x338;
    func_08007874(temp_r5_6);
    temp_r5_6->unk4 = func_08007B54(temp_r5_6, 2);
    temp_r0_8 = temp_r0 + 0x340;
    temp_r0->unk340 = 0;
    temp_r0_8->unk4 = 0;
    temp_r0_8->unk8 = &vtable_unk_080E77D0;
    temp_r0_8->unkC = 0;
    temp_r0_8->unk10 = 0;
    temp_r0_8->unk14 = 0;
    temp_r0->unk358 = 1;
    memcpy(temp_r0 + 0x124, &gUnk_0875A440 + 0x3A0, 0x20);
    temp_r0->unk18C = 1;
    memset(&sp0, 0, 0x20);
    memcpy(temp_r0 + 0x288, &sp0, 0x20);
    temp_r0->unk2B0 = 1;
    memcpy(temp_r0 + 0x208, &sp0, 0x20);
    temp_r0->unk2B0 = 1;
    *sp20 = temp_r0;
}
