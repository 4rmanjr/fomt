void *GetMapData();                                 /* extern */
s32 func_080A5D14(void *, s32);                       /* extern */
s32 func_080A5DFC(void *, s32, s32);                  /* extern */

void func_080A5760(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    void *sp10;
    void *sp14;
    void *sp18;
    void *sp1C;
    s8 *sp20;
    s8 *sp24;
    void *sp28;
    void *sp2C;
    s8 *sp30;
    s32 *var_r1;
    s32 temp_r1_2;
    s32 temp_r2_2;
    s8 *temp_r0_2;
    s8 *temp_r0_3;
    u32 var_r3;
    u32 var_r6;
    void **var_ip;
    void *temp_r0;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r2;
    void *var_r8;
    void *var_sb;
    void *var_sl;

    sp4 = arg1;
    sp8 = arg2;
    spC = arg3;
    arg0->unk4 = arg0->unk90->unk18(arg0);
    temp_r0 = GetMapData();
    if ((temp_r0->unk1C != 0) && (temp_r0->unk18 != 0)) {
        var_r6 = 0;
        var_ip = arg0 + 0x90;
        temp_r0_2 = arg0 + 0x28;
        sp24 = temp_r0_2;
        sp28 = arg0 + 0x30;
        sp2C = arg0 + 0x34;
        sp30 = temp_r0_2 + 0x10;
        var_r8 = arg0 + 0x3C;
        var_sb = arg0 + 0x40;
        var_sl = arg0 + 0x44;
        temp_r1 = arg0 + 0x48;
        sp10 = temp_r1;
        temp_r2 = arg0 + 0x4C;
        sp14 = temp_r2;
        sp18 = arg0 + 0x50;
        sp1C = temp_r1 + 0xC;
        sp20 = temp_r2 + 0xC;
        if ((u32) temp_r0->unk22 > 0U) {
            do {
                var_r3 = 0;
                if ((u32) temp_r0->unk20 > 0U) {
                    do {
                        temp_r1_2 = var_r3 + (temp_r0->unk20 * var_r6);
                        *((temp_r1_2 * 4) + arg0->unk2C) = *((*(temp_r0->unk1C + temp_r1_2) * 4) + temp_r0->unk18);
                        var_r3 += 1;
                    } while (var_r3 < (u32) temp_r0->unk20);
                }
                var_r6 += 1;
            } while (var_r6 < (u32) temp_r0->unk22);
        }
    } else {
        sp0 = 0;
        var_r1 = arg0->unk2C;
        temp_r2_2 = var_r1 + 0xF200;
        var_ip = arg0 + 0x90;
        temp_r0_3 = arg0 + 0x28;
        sp24 = temp_r0_3;
        temp_r0_4 = temp_r0_3 + 8;
        sp28 = temp_r0_4;
        temp_r0_5 = temp_r0_4 + 4;
        sp2C = temp_r0_5;
        sp30 = temp_r0_5 + 4;
        var_r8 = arg0 + 0x3C;
        var_sb = arg0 + 0x40;
        var_sl = arg0 + 0x44;
        temp_r0_6 = arg0 + 0x48;
        sp10 = temp_r0_6;
        temp_r0_7 = temp_r0_6 + 4;
        sp14 = temp_r0_7;
        temp_r0_8 = temp_r0_7 + 4;
        sp18 = temp_r0_8;
        temp_r0_9 = temp_r0_8 + 4;
        sp1C = temp_r0_9;
        sp20 = temp_r0_9 + 4;
        if (var_r1 != temp_r2_2) {
            do {
                *var_r1 = sp0;
                var_r1 += 4;
            } while (var_r1 != temp_r2_2);
        }
    }
    (*var_ip)->unk20(arg0);
    func_080A5D14(arg0, sp4);
    func_080A5DFC(arg0, sp8, spC);
    *sp24 = 1;
    sp28->unk0 = 0;
    sp28->unk1 = 0;
    sp2C->unk0 = 0;
    sp2C->unk1 = 0;
    sp30->unk0 = 0;
    sp30->unk1 = 0;
    var_r8->unk0 = 0;
    var_r8->unk1 = 0;
    var_sb->unk0 = 0;
    var_sb->unk1 = 0;
    var_sl->unk0 = 0;
    var_sl->unk1 = 0;
    sp10->unk0 = 0;
    sp10->unk1 = 0;
    sp14->unk0 = 0;
    sp14->unk1 = 0;
    sp18->unk0 = 0;
    sp18->unk1 = 0;
    sp1C->unk0 = 0;
    sp1C->unk1 = 0;
    *sp20 = 0;
}
