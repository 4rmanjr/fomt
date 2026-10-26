s32 func_08007128(void *);                            /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_0800770C(s32 *);                               /* extern */
s32 func_08007714(s32 *, s32);                          /* extern */
s32 func_08007874(void *);                            /* extern */
s32 func_08007B54(void *, s32);                     /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_0800835C(s32 *);                               /* extern */
s32 func_08008364(s32 *, s32);                          /* extern */
s32 func_08008444();                                  /* extern */
s32 func_08008B54(void *, s32);                       /* extern */
s32 func_08050CC0(void *, s32, s32, s32, s32, ? *, ? *); /* extern */
s32 func_08050E50(void *, s32);                       /* extern */
s32 func_0805E6CC(void *, ? *);                       /* extern */
s32 func_0805E824(void *, void *, s32, s32);          /* extern */
extern ? gUnk_08527094;
extern ? gUnk_08728208;
extern ? vtable_unk_080E7AA8;

void *func_08069F14(void *arg0, void ***arg1, s32 arg2, s32 arg3) {
s32 spC;
s32 sp10;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r8;
    void **temp_r0;
    void **temp_r1_2;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r1;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r5_2;
    void *temp_r6;
    void *var_r0_2;
    void *var_r4;
    void *var_r4_2;
    void *var_r6;

    func_08008444();
    arg0->unk4 = &vtable_unk_080E7AA8;
    temp_r0 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r0;
    arg0->unkC = arg2;
    arg0->unk10 = arg3;
    arg0->unk14 = 0;
    arg0->unk18 = -1;
    arg0->unk1C = 0;
    arg0->unk20 = 0;
    temp_r6 = arg0 + 0x24;
    func_0805E6CC(temp_r6, &gUnk_08527094);
    temp_r1 = arg0 + 0x54;
    func_0805E6CC(temp_r1, &gUnk_08728208);
    temp_r0_2 = arg0 + 0x84;
    arg0->unk84 = 0;
    temp_r0_2->unk2 = 0;
    func_0805E824(temp_r0_2 + 4, temp_r6, 0, 0x100);
    temp_r0_3 = arg0 + 0x9C;
    arg0->unk9C = 0;
    temp_r0_3->unk2 = 0;
    temp_r0_3->unk4 = 0;
    temp_r0_3->unk6 = 0;
    temp_r0_3->unk8 = 0;
    temp_r0_3->unkC = 0;
    temp_r0_3->unk10 = 0;
    temp_r0_3->unk11 = 0;
    temp_r0_3->unk14 = 0;
    temp_r0_3->unk18 = 0;
    temp_r0_4 = temp_r0_3 + 0x1C;
    temp_r0_3->unk1C = 0;
    temp_r0_5 = temp_r0_4 + 4;
    temp_r0_4->unk4 = 0;
    temp_r0_5->unk2 = 0;
    func_0805E824(temp_r0_5 + 4, temp_r6, 1, 0x100);
    temp_r0_6 = arg0 + 0xD4;
    arg0->unkD4 = 0;
    temp_r0_6->unk2 = 0;
    temp_r0_6->unk4 = 0;
    temp_r0_6->unk6 = 0;
    temp_r0_6->unk8 = 0;
    temp_r0_6->unkC = 0;
    temp_r0_6->unk10 = 0;
    temp_r0_6->unk11 = 0;
    temp_r0_6->unk14 = 0;
    temp_r0_6->unk18 = 0;
    temp_r0_6->unk1C = 0;
    temp_r6->unkD0 = 0xC;
    arg0->unkF8 = 0x18;
    func_0805E824(arg0 + 0xFC, temp_r1, 0, 0x100);
    temp_r0_7 = arg0 + 0x110;
    arg0->unk110 = 0;
    temp_r0_7->unk2 = 0;
    temp_r0_7->unk4 = 0;
    temp_r0_7->unk6 = 0;
    temp_r0_7->unk8 = 0;
    temp_r0_7->unkC = 0;
    temp_r0_7->unk10 = 0;
    temp_r0_7->unk11 = 0;
    temp_r0_7->unk14 = 0;
    temp_r0_7->unk18 = 0;
    arg0->unk12C = 1;
    (temp_r6 + 0xD0)->unk3C = 0;
    func_0800835C(&spC);
    func_0800770C(&sp10);
    func_08050CC0(arg0 + 0x134, 0, 0x1D, 0, 0, &spC, &sp10);
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    arg0->unk138 = 0;
    var_r0 = 0xF;
    do {
        var_r0 -= 1;
    } while (var_r0 != -1);
    arg0->unk3EA0 = 0;
    arg0->unk3FA4 = 0;
    arg0->unk4068 = 0;
    arg0->unk40AC = 0;
    temp_r4 = arg0 + 0x40B0;
    func_08007874(temp_r4);
    temp_r4->unk4 = func_08007B54(temp_r4, 1);
    temp_r4_2 = arg0 + 0x40B8;
    func_08007128(temp_r4_2);
    temp_r4_2->unk4 = func_0800736C(temp_r4_2);
    temp_r4_3 = arg0 + 0x40C0;
    func_08007874(temp_r4_3);
    temp_r4_3->unk4 = func_08007B54(temp_r4_3, 2);
    temp_r4_4 = arg0 + 0x40C8;
    func_08007128(temp_r4_4);
    temp_r4_4->unk4 = func_0800736C(temp_r4_4);
    var_r4 = arg0 + 0x40D0;
    var_r5 = 9;
    do {
        func_08007874(var_r4);
        var_r4->unk4 = 0;
        var_r4 += 8;
        var_r5 -= 1;
    } while (var_r5 != -1);
    var_r4_2 = arg0 + 0x4120;
    var_r5_2 = 9;
    do {
        func_08007128(var_r4_2);
        var_r4_2->unk4 = 0;
        var_r4_2 += 8;
        var_r5_2 -= 1;
    } while (var_r5_2 != -1);
    func_08008B54(arg0 + 0x4170, 1);
    arg0->unk4174 = 0;
    switch (arg3) {                                 /* irregular */
    default:
    case 1:
        var_r0_2 = arg0 + 0x134;
block_13:
        func_08050E50(var_r0_2, 0xB4);
        break;
    case 2:
        var_r0_2 = arg0 + 0x134;
        goto block_13;
    case 0:
        func_08050E50(arg0 + 0x134, 0);
        break;
    }
    var_r8 = 0;
    var_r6 = arg0 + 0x40D4;
    do {
        temp_r5 = var_r8 * 8;
        temp_r4_5 = temp_r5 + arg0 + 0x40D0;
        func_08007C28(temp_r4_5, var_r6->unk0);
        var_r6->unk0 = func_08007B54(temp_r4_5, 2);
        temp_r5_2 = temp_r5 + arg0 + 0x4120;
        func_080073E0(temp_r5_2, var_r6->unk50);
        var_r6->unk50 = func_0800736C(temp_r5_2);
        var_r6 += 8;
        var_r8 += 1;
    } while (var_r8 <= 9);
    temp_r1_2 = *arg1;
    if (temp_r1_2 != 0) {
        (*temp_r1_2)->unk8(temp_r1_2, 3);
    }
    return arg0;
}
