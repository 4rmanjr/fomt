s32 GetDoghouseStyle__C9FarmHouse(s32);             /* extern */
s32 GetMailboxStyle__C9FarmHouse(s32);              /* extern */
s32 GetUpgradeLevel__C4Barn(s32);                   /* extern */
s32 GetUpgradeLevel__C4Coop(s32);                   /* extern */
s32 GetUpgradeLevel__C9FarmHouse(s32);              /* extern */
s32 GetWindowStyle__C9FarmHouse(s32);               /* extern */
s32 Unpack(s32 *, s32);                                 /* extern */
s32 func_08008E64(s32 *, s32, s32);                     /* extern */
s32 func_0800E324(s32);                             /* extern */
s32 func_0806EB70(void *, s32, s32 *);                  /* extern */
s32 func_0806EC28(void *, s32, u16, u16, s32, s32, s32); /* extern */
s32 func_080700B8(void *, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 gUnk_080FBDA4;
extern s32 gUnk_080FBDF4;
extern s32 gUnk_080FBE24;
extern s32 gUnk_080FBE44;
extern s32 gUnk_080FBE64;
extern s32 gUnk_080FBE67;
extern s32 gUnk_08527238;
extern s32 gUnk_08527348;
extern s32 gUnk_08527520;
extern s32 gUnk_085275D0;
extern s32 gUnk_08529794;
extern u16 gUnk_08529994;
extern u16 gUnk_08529BA8;
extern u16 gUnk_08529DA4;
extern s32 gUnk_0852A6D8;
extern s32 gUnk_0852A7EC;
extern s32 gUnk_0852A9BC;
extern s32 gUnk_0852AA6C;
extern s32 gUnk_0852CA40;
extern u16 gUnk_0852CC40;
extern u16 gUnk_0852CE54;
extern u16 gUnk_0852D050;

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    s32 unkA;
    s32 unkC;
    s32 unkD;
} GenObj;
void func_0806EC94(GenObj *arg0) {
    s32 spC;
    s32 sp10;
    u32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 *var_r0;
    s32 *var_r0_2;
    s32 *var_r2;
    s32 *var_r2_2;
    s32 *var_r2_3;
    s32 *var_r4;
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r1;
    u16 *var_r1_3;
    u16 *var_r1_4;
    u16 *var_r4_2;
    u16 temp_r2_2;
    u16 temp_r2_3;
    u16 temp_r2_4;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r2;
    u32 temp_r3;
    u32 temp_r7;
    u32 var_r1_2;
    u32 var_r8;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;

    var_r1 = 0;
    if (func_0800E324(arg0->unk8 + 0x10) == 3) {
        var_r1 = 1;
    }
    spC = var_r1;
    var_r0 = &gUnk_085275D0;
    if (var_r1 != 0) {
        var_r0 = &gUnk_0852AA6C;
    }
    Unpack(var_r0, 0x06000000);
    var_r0_2 = &gUnk_08529794;
    if (spC != 0) {
        var_r0_2 = &gUnk_0852CA40;
    }
    func_08008E64(var_r0_2, 0x05000000, 0x200);
    var_r2 = &gUnk_08527238;
    if (spC != 0) {
        var_r2 = &gUnk_0852A6D8;
    }
    func_0806EB70(arg0, 0x1C, var_r2);
    var_r2_2 = &gUnk_08527348;
    if (spC != 0) {
        var_r2_2 = &gUnk_0852A7EC;
    }
    func_0806EB70(arg0, 0x18, var_r2_2);
    var_r2_3 = &gUnk_08527520;
    if (spC != 0) {
        var_r2_3 = &gUnk_0852A9BC;
    }
    func_0806EB70(arg0, 0x14, var_r2_3);
    var_r1_2 = 0;
    sp1C = spC * 4;
    sp18 = spC * 2;
    sp10 = arg0->unk8 + 0x9DC;
loop_13:
    var_r8 = 0;
    temp_r7 = var_r1_2 + 0xB;
    sp14 = var_r1_2 + 1;
    temp_r5 = (temp_r7 >> 5) * 2;
    temp_r6 = ((temp_r7 & 0x1F) << 6) + 0x06000000;
    var_r4 = (var_r1_2 * 0xAC) + sp10;
    do {
        temp_r2 = var_r8 + 0x11;
        temp_r0 = (u32) (*var_r4 << 0x1E) >> 0x1E;
        switch (temp_r0) {                          /* irregular */
        case 1:
            *((((temp_r2 >> 5) + temp_r5 + 0x1C) << 0xB) + (((temp_r7 & 0x1F) << 6) + 0x06000000) + ((temp_r2 & 0x1F) * 2)) = 0x9186;
            break;
        case 2:
            *(((temp_r5 + (temp_r2 >> 5) + 0x1C) << 0xB) + temp_r6 + ((temp_r2 & 0x1F) * 2)) = 0x9187;
            break;
        }
        temp_r1 = *var_r4;
        temp_r0_2 = (u32) (temp_r1 << 0x14) >> 0x1C;
        if (((s32) temp_r0_2 <= 8) && ((s32) temp_r0_2 >= 1)) {
            temp_r3 = (u32) (temp_r1 << 0x18) >> 0x1A;
            if (temp_r3 <= 0x26U) {
                *(((temp_r5 + (temp_r2 >> 5) + 0x18) << 0xB) + temp_r6 + ((temp_r2 & 0x1F) * 2)) = *((temp_r3 * 2) + &gUnk_080FBDA4);
            }
        }
        var_r4 += 4;
        var_r8 += 1;
    } while (var_r8 <= 0x2AU);
    var_r1_2 = sp14;
    if (var_r1_2 <= 0x18U) {
        goto loop_13;
    }
    temp_r0_3 = (GetUpgradeLevel__C9FarmHouse(arg0->unk8 + 0x1F4) * 0x10) + &gUnk_080FBDF4;
    func_0806EC28(arg0, 0x18, temp_r0_3->unk8, temp_r0_3->unkA, (s32) temp_r0_3->unkC, (s32) temp_r0_3->unkD, *((u8 *)temp_r0_3 + sp1C));
    temp_r0_4 = (GetUpgradeLevel__C4Coop(arg0->unk8 + 0x410) * 0x10) + &gUnk_080FBE24;
    func_0806EC28(arg0, 0x18, temp_r0_4->unk8, temp_r0_4->unkA, (s32) temp_r0_4->unkC, (s32) temp_r0_4->unkD, *((u8 *)temp_r0_4 + sp1C));
    temp_r0_5 = (GetUpgradeLevel__C4Barn(arg0->unk8 + 0x5F0) * 0x10) + &gUnk_080FBE44;
    func_0806EC28(arg0, 0x18, temp_r0_5->unk8, temp_r0_5->unkA, (s32) temp_r0_5->unkC, (s32) temp_r0_5->unkD, *((u8 *)temp_r0_5 + sp1C));
    temp_r4 = GetDoghouseStyle__C9FarmHouse(arg0->unk8 + 0x1F4);
    var_r1_3 = &gUnk_08529994;
    if (spC != 0) {
        var_r1_3 = &gUnk_0852CC40;
    }
    temp_r2_2 = *var_r1_3;
    func_08008E64(var_r1_3 + 4 + ((temp_r4 * temp_r2_2) << 5), 0x060002C0, temp_r2_2 << 5);
    func_080700B8(arg0, 0x14, 0x18, 3, 2, 2, (s32) *((u8 *)temp_r4 + &gUnk_080FBE64));
    temp_r4_2 = GetMailboxStyle__C9FarmHouse(arg0->unk8 + 0x1F4);
    var_r1_4 = &gUnk_08529BA8;
    if (spC != 0) {
        var_r1_4 = &gUnk_0852CE54;
    }
    temp_r2_3 = *var_r1_4;
    func_08008E64(var_r1_4 + 4 + ((temp_r4_2 * temp_r2_3) << 5), 0x06000340, temp_r2_3 << 5);
    func_080700B8(arg0, 0x14, 0x11, 3, 1, 2, (s32) *((u8 *)temp_r4_2 + (sp18 + spC) + &gUnk_080FBE67));
    var_r4_2 = &gUnk_08529DA4;
    if (spC != 0) {
        var_r4_2 = &gUnk_0852D050;
    }
    temp_r2_4 = *var_r4_2;
    func_08008E64(var_r4_2 + 4 + ((temp_r2_4 * GetWindowStyle__C9FarmHouse(arg0->unk8 + 0x1F4)) << 5), 0x06000000, temp_r2_4 << 5);
}
