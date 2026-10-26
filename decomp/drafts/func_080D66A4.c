s32 strcpy(void *, void *);                           /* extern */

void *func_080D66A4(void *arg0, void *arg1) {
    s32 *var_r1;
    s32 *var_r2_3;
    s32 temp_r0_4;
    s32 var_r3_2;
    s32 var_r8;
    s32 var_r8_2;
    u8 temp_r2;
    u8 temp_r2_2;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *var_ip;
    void *var_r2;
    void *var_r2_2;
    void *var_r3;

    arg0->unk0 = (u8) ((-2 & arg0->unk0) | ((u32) (arg1->unk0 << 0x1F) >> 0x1F));
    arg0->unk0 = (s16) ((0xFFFFF801 & (u16) arg0->unk0) | (0x7FE & (u16) arg1->unk0));
    arg0->unk1 = (u8) ((-9 & arg0->unk1) | (8 & arg1->unk1));
    arg0->unk0 = (s32) (((s32) arg0->unk0 & 0xFFF00FFF) | ((s32) arg1->unk0 & 0xFF000));
    temp_r2 = arg1->unk2;
    arg0->unk2 = (u8) ((((-0x11 & arg0->unk2) | (0x10 & temp_r2)) & 0x1F) | ((temp_r2 >> 5) << 5));
    temp_r2_2 = arg1->unk3;
    arg0->unk3 = temp_r2_2;
    arg0->unk4 = (u8) ((-4 & arg0->unk4) | (((temp_r2_2 >> 8) | (arg1->unk4 & 3)) & 3));
    strcpy(arg0 + 8, arg1 + 8);
    var_ip = arg0 + 0x18;
    var_r8 = 7;
    var_r2 = arg1 + 0x18;
    do {
        temp_r0 = var_r2 + 0xC;
        var_ip->unk0 = (s32) var_r2->unk0;
        var_ip->unk4 = (s32) var_r2->unk4;
        var_ip->unk8 = (s32) var_r2->unk8;
        temp_r1 = var_ip + 0xC;
        temp_r0_2 = temp_r0 + 0xC;
        var_ip->unkC = (s32) var_r2->unkC;
        temp_r1->unk4 = (s32) temp_r0->unk4;
        temp_r1->unk8 = (s32) temp_r0->unk8;
        temp_r1_2 = temp_r1 + 0xC;
        temp_r0_3 = temp_r0_2 + 0xC;
        temp_r1->unkC = (s32) temp_r0->unkC;
        temp_r1_2->unk4 = (s32) temp_r0_2->unk4;
        temp_r1_2->unk8 = (s32) temp_r0_2->unk8;
        temp_r1_3 = temp_r1_2 + 0xC;
        temp_r1_2->unkC = (s32) temp_r0_2->unkC;
        temp_r1_3->unk4 = (s32) temp_r0_3->unk4;
        temp_r1_3->unk8 = (s32) temp_r0_3->unk8;
        var_ip += 0x30;
        var_r2 += 0x30;
        var_r8 -= 1;
    } while (var_r8 != -1);
    var_r3 = arg0 + 0x198;
    var_r8_2 = 7;
    var_r2_2 = arg1 + 0x198;
    do {
        var_r3->unk0 = (s32) var_r2_2->unk0;
        var_r3->unk4 = (s32) var_r2_2->unk4;
        var_r3 += 8;
        var_r2_2 += 8;
        var_r8_2 -= 1;
    } while (var_r8_2 != -1);
    var_r2_3 = arg0 + 0x1D8;
    var_r3_2 = 1;
    var_r1 = arg1 + 0x1D8;
    do {
        temp_r0_4 = *var_r1;
        var_r1 += 4;
        *var_r2_3 = temp_r0_4;
        var_r2_3 += 4;
        var_r3_2 -= 1;
    } while (var_r3_2 != -1);
    return arg0;
}
