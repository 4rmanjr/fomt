void *func_08008918(void *);                        /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_0805E8F0(void *);                            /* extern */
s32 func_08075AE8(void *, s32, s16 *, s32, s32);      /* extern */
s32 memcpy(s16 *, s16 *, s32);                        /* extern */

void func_0806EFC0(void *arg0, s32 arg1, s32 arg2) {
    s16 sp4;
    s16 sp8;
    void *sp28;
    s32 temp_r8;
    s32 var_r0;
    s32 var_r1;
    s32 var_r6;
    s32 var_r7;
    u32 temp_r1;
    u32 temp_r2;
    void **temp_r1_2;
    void **temp_r1_3;
    void **temp_r1_4;
    void **temp_r1_5;
    void *temp_r3;
    void *temp_r4;

    var_r7 = arg0->unk10 + arg2;
    if (var_r7 < 0) {
        var_r7 = 0;
    } else if (var_r7 > 0xC000) {
        var_r7 = 0xC000;
    }
    var_r6 = arg0->unk14 + arg1;
    if (var_r6 < 0) {
        var_r6 = 0;
    } else if (var_r6 > 0x11000) {
        var_r6 = 0x11000;
    }
    temp_r3 = func_08008918(arg0);
    var_r0 = var_r7;
    if (var_r7 < 0) {
        var_r0 += 0xFF;
    }
    temp_r2 = (u32) (var_r0 << 8) >> 0x10;
    var_r1 = var_r6;
    if (var_r6 < 0) {
        var_r1 += 0xFF;
    }
    temp_r1 = (u32) (var_r1 << 8) >> 0x10;
    sp4 = (s16) temp_r2;
    temp_r3->unk1E = (s16) temp_r2;
    sp4 = (s16) temp_r2;
    temp_r3->unk1A = (s16) temp_r2;
    sp4 = (s16) temp_r2;
    temp_r3->unk16 = (s16) temp_r2;
    sp4 = (s16) temp_r1;
    temp_r3->unk1C = (s16) temp_r1;
    sp4 = (s16) temp_r1;
    temp_r3->unk18 = (s16) temp_r1;
    sp4 = (s16) temp_r1;
    temp_r3->unk14 = (s16) temp_r1;
    temp_r4 = arg0 + 0x50;
    func_0805E8F0(temp_r4);
    func_0805E8F0();
    sp28 = arg0 + 0x78;
    func_0805E8F0();
    func_0805E8F0();
    temp_r8 = func_08008920(arg0);
    if (var_r7 > 0) {
        temp_r1_2 = arg0->unk50;
        (*temp_r1_2)->unk10(&sp8, temp_r1_2, *(arg0->unk54 + (temp_r4->unkC * 4)));
        memcpy(&sp8, &sp8, 0x20);
        func_08075AE8(arg0 + 0x18, temp_r8, &sp8, 0x74, 0);
    }
    if (var_r7 <= 0xBFFF) {
        temp_r1_3 = arg0->unk64;
        (*temp_r1_3)->unk10(&sp4, temp_r1_3, *(arg0->unk68 + ((arg0 + 0x64)->unkC * 4)));
        memcpy(&sp4, &sp4, 0x20);
        func_08075AE8(arg0 + 0x18, temp_r8, &sp4, 0x74, 0x98);
    }
    if (var_r6 <= 0x10FFF) {
        temp_r1_4 = arg0->unk78;
        (*temp_r1_4)->unk10(&sp4, temp_r1_4, *(arg0->unk7C + (sp28->unkC * 4)));
        memcpy(&sp4, &sp4, 0x20);
        func_08075AE8(arg0 + 0x18, temp_r8, &sp4, 0xE8, 0x4C);
    }
    if (var_r6 > 0) {
        temp_r1_5 = arg0->unk8C;
        (*temp_r1_5)->unk10(&sp4, temp_r1_5, *(arg0->unk90 + ((arg0 + 0x8C)->unkC * 4)));
        memcpy(&sp4, &sp4, 0x20);
        func_08075AE8(arg0 + 0x18, temp_r8, &sp4, 0, 0x4C);
    }
    arg0->unk10 = var_r7;
    arg0->unk14 = var_r6;
}
