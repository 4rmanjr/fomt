s32 func_08007128(void *);                            /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_08007874(void *);                            /* extern */
s32 func_08007B54(void *, s32);                     /* extern */
s32 func_080084DC(void *);                            /* extern */
s32 func_08008B54(void *, s32);                       /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0805E6CC(void *, ? *);                       /* extern */
s32 func_0805E824(void *, void *, s32, s32);          /* extern */
extern ? gUnk_0810828C;
extern ? gUnk_08527094;
extern ? gUnk_08728208;
extern ? vtable_unk_080E7BD0;

void *func_08078E40(void *arg0, s32 arg1, s16 arg2) {
s32 sp4;
    s32 sp8;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r5;

    sp4.unk0 = 0x1E;
    sp4.unk2 = 1;
    func_080084DC(arg0);
    arg0->unk4 = &vtable_unk_080E7BD0;
    arg0->unk8 = arg1;
    func_08008B54(arg0 + 0xC, 1);
    sp8.unk0 = 0x1C;
    sp8.unk2 = 2;
    func_0804E7A0(sp8, arg0 + 0x14, 0);
    temp_r4 = arg0 + 0x714;
    func_0805E6CC(temp_r4, &gUnk_08527094);
    temp_r5 = arg0 + 0x744;
    func_0805E6CC(temp_r5, &gUnk_08728208);
    func_0805E824(arg0 + 0x774, temp_r4, 0, 0x100);
    temp_r0 = arg0 + 0x788;
    arg0->unk788 = 0;
    temp_r0->unk2 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk6 = 0;
    temp_r0->unk8 = 0;
    temp_r0->unkC = 0;
    temp_r0->unk10 = 0;
    temp_r0->unk11 = 0;
    temp_r0->unk14 = 0;
    temp_r0->unk18 = 0;
    arg0->unk7A4 = 0;
    func_0805E824(arg0 + 0x7A8, temp_r4, 1, 0x100);
    temp_r0_2 = arg0 + 0x7BC;
    arg0->unk7BC = 0;
    temp_r0_2->unk2 = 0;
    temp_r0_2->unk4 = 0;
    temp_r0_2->unk6 = 0;
    temp_r0_2->unk8 = 0;
    temp_r0_2->unkC = 0;
    temp_r0_2->unk10 = 0;
    temp_r0_2->unk11 = 0;
    temp_r0_2->unk14 = 0;
    temp_r0_2->unk18 = 0;
    arg0->unk7D8 = 0;
    func_0805E824(arg0 + 0x7DC, temp_r5, 0, 0x100);
    temp_r0_3 = arg0 + 0x7F0;
    arg0->unk7F0 = 0;
    temp_r0_3->unk2 = 0;
    temp_r0_3->unk4 = 0;
    temp_r0_3->unk6 = 0;
    temp_r0_3->unk8 = 0;
    temp_r0_3->unkC = 0;
    temp_r0_3->unk10 = 0;
    temp_r0_3->unk11 = 0;
    temp_r0_3->unk14 = 0;
    temp_r0_3->unk18 = 0;
    arg0->unk80C = 0;
    temp_r4_2 = arg0 + 0x810;
    func_08007874(temp_r4_2);
    temp_r4_2->unk4 = func_08007B54(temp_r4_2, 4);
    temp_r4_3 = arg0 + 0x818;
    func_08007128(temp_r4_3);
    temp_r4_3->unk4 = func_0800736C(temp_r4_3);
    temp_r4_4 = arg0 + 0x820;
    func_08007874(temp_r4_4);
    temp_r4_4->unk4 = func_08007B54(temp_r4_4, 6);
    temp_r4_5 = arg0 + 0x828;
    func_08007128(temp_r4_5);
    temp_r4_5->unk4 = func_0800736C(temp_r4_5);
    temp_r4_6 = arg0 + 0x830;
    func_08007874(temp_r4_6);
    temp_r4_6->unk4 = func_08007B54(temp_r4_6, 2);
    temp_r4_7 = arg0 + 0x838;
    func_08007128(temp_r4_7);
    temp_r4_7->unk4 = func_0800736C(temp_r4_7);
    arg0->unkA60 = 0;
    (arg0 + 0xA60)->unk4 = 0;
    (arg0 + 0xA68)->unk4 = 0;
    arg0->unk840 = 0;
    arg0->unk842 = 0;
    arg0->unk856 = 0;
    arg0->unk844 = 0;
    arg0->unk84C = 0;
    arg0->unk84E = 0;
    switch (arg2) {                                 /* irregular */
    case 0x1000:
        arg0->unkA56 = 0;
        arg0->unkA57 = 0;
        arg0->unkA58 = 0;
        break;
    case 0x1001:
        arg0->unkA56 = 0;
        arg0->unkA57 = 1;
block_6:
        arg0->unkA58 = 0;
        break;
    case 0x1002:
        arg0->unkA56 = 0;
        arg0->unkA57 = 0;
        goto block_6;
    default:
        arg0->unkA70 = arg2;
        arg0->unkA5C = (s32) *((arg0->unkA70 * 4) + &gUnk_0810828C);
        arg0->unkA56 = 1;
        arg0->unkA57 = 1;
        arg0->unkA58 = 7;
        break;
    }
    return arg0;
}
