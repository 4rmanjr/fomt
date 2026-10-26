s32 __builtin_new(s32);                             /* extern */
s32 func_08007128(void *);                            /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_0800770C(s32 *);                               /* extern */
s32 func_08007714(s32 *, s32);                          /* extern */
s32 func_08007874(void *);                            /* extern */
s32 func_08007B54(void *, s32);                     /* extern */
s32 func_0800835C(s32 *);                               /* extern */
s32 func_08008364(s32 *, s32);                          /* extern */
s32 func_080084DC(void *);                            /* extern */
s32 func_08008B54(void *, s32);                       /* extern */
s32 func_08050CC0(s32, s32, s32, s32, s32, s32 *, s32 *); /* extern */
s32 func_0805E6CC(void *, s32 *);                       /* extern */
s32 func_0805E824(void *, void *, s32, s32);          /* extern */
s32 func_080A041C(void *);                          /* extern */
void *func_080A1480(void *);                        /* extern */
extern s32 gUnk_08728208;
extern s32 gUnk_0874F34C;
extern s32 gUnk_087506E0;
extern s32 vtable_unk_080E825C;
extern s32 vtable_unk_080E8268;

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    struct GenObj *unk2;
    struct GenObj *unk4;
    struct GenObj *unk5;
    struct GenObj *unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    struct GenObj *unk10;
    struct GenObj *unk11;
    s32 unk12;
    struct GenObj *unk14;
    struct GenObj *unk18;
    u8 _pad1C[168];
    s32 unkC4;
    u8 _padC8[44];
    s32 unkF4;
    u8 _padF8[44];
    s32 unk124;
    u8 _pad128[182];
    s32 unk1DE;
    s32 unk1E0;
    u8 _pad1E4[2];
    s32 unk1E6;
    s32 unk1E8;
    u8 _pad1EC[48];
    void *unk21C;
} GenObj;
void *func_080A220C(GenObj *arg0, void *arg1) {
s32 spC;
s32 sp10;
s32 sp14;
    u32 sp18;
    u32 sp1C;
    s16 *var_r0_3;
    s16 *var_r1;
    s16 *var_r1_2;
    s16 var_r0;
    s32 temp_r6;
    s32 var_r2;
    u32 *var_r0_2;
    u32 temp_r0_6;
    u32 temp_r1_3;
    u32 temp_r1_4;
    u32 temp_r2;
    u8 temp_r0_5;
    u8 temp_r0_7;
    u8 temp_r1_2;
    u8 temp_r3;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r0_3;
    GenObj *temp_r0_4;
    void *temp_r1;
    void *temp_r4;
    GenObj *temp_r4_10;
    GenObj *temp_r4_2;
    GenObj *temp_r4_3;
    GenObj *temp_r4_4;
    GenObj *temp_r4_5;
    GenObj *temp_r4_6;
    GenObj *temp_r4_7;
    GenObj *temp_r4_8;
    GenObj *temp_r4_9;
    void *temp_r6_2;

    sp14 = 0x1E;
    sp14.unk2 = 1;
    func_080084DC(arg0);
    arg0->unk4 = &vtable_unk_080E825C;
    arg0->unk8 = arg1;
    arg0->unkC = 0;
    temp_r6 = __builtin_new(4);
    func_0800835C(&spC);
    func_0800770C(&sp10);
    arg0->unk10 = func_08050CC0(temp_r6, 0, 0x1F, 0xF, arg0->unkC, &spC, &sp10);
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    func_08008B54((GenObj *)((u8 *)arg0 + 0x14), 1);
    func_08008B54((GenObj *)((u8 *)arg0 + 0x18), 0);
    func_08008B54((GenObj *)((u8 *)arg0 + 0x1C), 2);
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x20);
    func_0805E6CC(temp_r4, &gUnk_0874F34C);
    temp_r6_2 = (GenObj *)((u8 *)arg0 + 0x50);
    func_0805E6CC(temp_r6_2, &gUnk_087506E0);
    temp_r1 = (GenObj *)((u8 *)arg0 + 0x80);
    func_0805E6CC(temp_r1, &gUnk_08728208);
    func_0805E824((GenObj *)((u8 *)arg0 + 0xB0), temp_r4, 0, 0x100);
    temp_r0 = (GenObj *)((u8 *)arg0 + 0xC4);
    arg0->unkC4 = 0;
    temp_r0->unk2 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk6 = 0;
    temp_r0->unk8 = 0;
    temp_r0->unkC = 0;
    temp_r0->unk10 = 0;
    temp_r0->unk11 = 0;
    temp_r0->unk14 = 0;
    temp_r0->unk18 = 0;
    func_0805E824((GenObj *)((u8 *)temp_r0 + 0x1C), temp_r6_2, 0, 0x100);
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0xF4);
    arg0->unkF4 = 0;
    temp_r0_2->unk2 = 0;
    temp_r0_2->unk4 = 0;
    temp_r0_2->unk6 = 0;
    temp_r0_2->unk8 = 0;
    temp_r0_2->unkC = 0;
    temp_r0_2->unk10 = 0;
    temp_r0_2->unk11 = 0;
    temp_r0_2->unk14 = 0;
    temp_r0_2->unk18 = 0;
    func_0805E824((GenObj *)((u8 *)arg0 + 0x110), temp_r1, 0, 0x100);
    temp_r0_3 = (GenObj *)((u8 *)arg0 + 0x124);
    arg0->unk124 = 0;
    temp_r0_3->unk2 = 0;
    temp_r0_3->unk4 = 0;
    temp_r0_3->unk6 = 0;
    temp_r0_3->unk8 = 0;
    temp_r0_3->unkC = 0;
    temp_r0_3->unk10 = 0;
    temp_r0_3->unk11 = 0;
    temp_r0_3->unk14 = 0;
    temp_r0_3->unk18 = 0;
    temp_r4_2 = (GenObj *)((u8 *)arg0 + 0x174);
    func_08007874(temp_r4_2);
    temp_r4_2->unk4 = func_08007B54(temp_r4_2, 7);
    temp_r4_3 = (GenObj *)((u8 *)arg0 + 0x17C);
    func_08007128(temp_r4_3);
    temp_r4_3->unk4 = func_0800736C(temp_r4_3);
    temp_r4_4 = (GenObj *)((u8 *)arg0 + 0x184);
    func_08007128(temp_r4_4);
    temp_r4_4->unk4 = func_0800736C(temp_r4_4);
    temp_r4_5 = (GenObj *)((u8 *)arg0 + 0x18C);
    func_08007128(temp_r4_5);
    temp_r4_5->unk4 = func_0800736C(temp_r4_5);
    temp_r4_6 = (GenObj *)((u8 *)arg0 + 0x194);
    func_08007874(temp_r4_6);
    temp_r4_6->unk4 = func_08007B54(temp_r4_6, 6);
    temp_r4_7 = (GenObj *)((u8 *)arg0 + 0x19C);
    func_08007128(temp_r4_7);
    temp_r4_7->unk4 = func_0800736C(temp_r4_7);
    temp_r4_8 = (GenObj *)((u8 *)arg0 + 0x1A4);
    func_08007874(temp_r4_8);
    temp_r4_8->unk4 = func_08007B54(temp_r4_8, 4);
    temp_r4_9 = (GenObj *)((u8 *)arg0 + 0x1AC);
    func_08007128(temp_r4_9);
    temp_r4_9->unk4 = func_0800736C(temp_r4_9);
    arg0->unk1DE = (u8) (-4 & arg0->unk1DE & ~0x7C);
    temp_r0_4 = (GenObj *)((u8 *)arg0 + 0x21C);
    arg0->unk21C = &vtable_unk_080E8268;
    temp_r0_4->unk4 = 0;
    temp_r0_4->unk5 = 0;
    temp_r0_4->unk8 = 0;
    arg0->unk1DE = (u8) arg0->unk8->unk11;
    temp_r0_5 = arg0->unk8->unk10;
    arg0->unk1E0 = (u16) ((((u32) (temp_r0_5 << 0x1D) >> 0x1D) + ((temp_r0_5 >> 3) * 7)) - 1);
    if ((u32) ((u32) (arg0->unk8->unk12 << 0x1B) >> 0x1B) <= 5U) {
        temp_r3 = arg0->unk1DE;
        temp_r2 = (u32) (temp_r3 << 0x19) >> 0x1B;
        if (temp_r2 == 0) {
            arg0->unk1DE = (u8) ((-4 & temp_r3) | ((((u32) (temp_r3 << 0x1E) >> 0x1E) - 1) & 3));
            var_r2 = 0x1D;
        } else {
            var_r2 = temp_r2 - 1;
        }
        arg0->unk1DE = (u8) ((-0x7D & arg0->unk1DE) | ((var_r2 & 0x1F) * 4));
        temp_r1_2 = arg0->unk1DE;
        if ((((u32) (temp_r1_2 << 0x1E) >> 0x1E) == 3) && (((u32) (temp_r1_2 << 0x19) >> 0x1B) == 0x1D)) {
            arg0->unk1E0 = (u16) (arg0->unk1E0 - 1);
        }
    }
    temp_r0_6 = (u32) (arg0->unk1DE << 0x1E) >> 0x1E;
    switch (temp_r0_6) {                            /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_r1 = (GenObj *)((u8 *)arg0 + 0x1E2);
block_17:
        *var_r1 = (s16) temp_r0_6;
        break;
    case 2:                                         /* switch 1 */
        var_r1 = (GenObj *)((u8 *)arg0 + 0x1E2);
        goto block_17;
    case 1:                                         /* switch 1 */
    case 3:                                         /* switch 1 */
        var_r1 = (GenObj *)((u8 *)arg0 + 0x1E2);
        goto block_17;
    }
    if (func_080A041C(arg0->unk8 + 0x1CD4) == 0) {
        arg0->unk1E6 = 0xFFFF;
        arg0->unk1E8 = -1;
        var_r1_2 = (GenObj *)((u8 *)arg0 + 0x1EA);
        var_r0 = -1;
    } else {
        temp_r4_10 = func_080A1480(arg0->unk8 + 0x1CD4);
        sp18 = 0xC8;
        temp_r0_7 = temp_r4_10->unk0;
        temp_r1_3 = ((temp_r0_7 >> 3) * 7) + ((u32) (temp_r0_7 << 0x1D) >> 0x1D);
        sp1C = temp_r1_3;
        var_r0_2 = &sp18;
        if (temp_r1_3 < 0xC8U) {
            var_r0_2 = &sp1C;
        }
        arg0->unk1E6 = (s16) (*var_r0_2 - 1);
        temp_r1_4 = (u32) (temp_r4_10->unk1 << 0x1E) >> 0x1E;
        switch (temp_r1_4) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_r0_3 = (GenObj *)((u8 *)arg0 + 0x1E8);
block_32:
            *var_r0_3 = (s16) temp_r1_4;
            break;
        case 2:                                     /* switch 2 */
            var_r0_3 = (GenObj *)((u8 *)arg0 + 0x1E8);
            goto block_32;
        case 1:                                     /* switch 2 */
        case 3:                                     /* switch 2 */
            var_r0_3 = (GenObj *)((u8 *)arg0 + 0x1E8);
            goto block_32;
        }
        var_r0 = ((u32) (temp_r4_10->unk1 << 0x19) >> 0x1B) + 1;
        var_r1_2 = (GenObj *)((u8 *)arg0 + 0x1EA);
    }
    *var_r1_2 = var_r0;
    return arg0;
}
