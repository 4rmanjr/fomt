extern u8 gUnk_08104957;

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[4];
    s32 unk8;
    u8 _padC[468];
    s32 unk1E0;
    s32 unk1E2;
    s32 unk1E4;
    s32 unk1E5;
    s32 unk1E6;
    s32 unk1E8;
    s32 unk1EA;
    struct GenObj *unk1EC;
    struct GenObj *unk1ED;
    struct GenObj *unk1EF;
} GenObj;
void func_080A303C(GenObj *arg0) {
    GenObj *sp0;
    s32 sp4;
    s32 sp8;
    u8 *spC;
    s16 *sp10;
    s32 sp14;
    s16 *sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s16 temp_r2;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_4;
    s32 var_r2;
    s32 var_sb;
    s8 *var_r0;
    s8 var_r5;
    u8 *var_r1_3;
    u8 *var_r2_2;
    u8 *var_r4;
    u8 *var_r6;
    u8 temp_r0;
    void *var_ip;
    GenObj *var_sl;

    var_r1 = 0;
    do {
        var_r1_2 = 6;
        var_r0 = (var_r1 * 7) + ((GenObj *)((u8 *)arg0 + 0x1B4)) + 6;
loop_2:
        *var_r0 = 0;
        var_r0 -= 1;
        var_r1_2 -= 1;
        if (var_r1_2 >= 0) {
            goto loop_2;
        }
        var_r1 += 1;
    } while (var_r1 <= 5);
    var_r1_3 = (GenObj *)((u8 *)arg0 + 0x1EC);
    var_r2 = 9;
    do {
        *var_r1_3 |= 0xFF;
        var_r1_3 += 4;
        var_r2 -= 1;
    } while (var_r2 >= 0);
    var_sb = (s32) (((arg0->unk1E0 * 4) + arg0->unk1E2) * 2) % 7;
    sp0 = 0;
    sp4 = 1;
    sp8 = 1;
    spC = (GenObj *)((u8 *)arg0 + 0x1DE);
    var_sl = (GenObj *)((u8 *)arg0 + 4);
    var_r6 = (GenObj *)((u8 *)arg0 + 0x1F2);
    sp18 = (GenObj *)((u8 *)arg0 + 0x1E2);
    sp24 = 0;
loop_7:
    *((u8 *)(GenObj *)((u8 *)arg0 + 0x1B4) + (sp24 + var_sb)) = sp0.unk8;
    if ((((u32) (*spC << 0x19) >> 0x1B) + 1) == sp8) {
        arg0->unk1E4 = (s8) var_sb;
        arg0->unk1E5 = (u8) sp0.unk0;
    }
    var_r5 = 0;
    sp20 = var_sb + 1;
    sp1C = sp8 + 1;
    sp10 = (GenObj *)((u8 *)arg0 + 0x1E2);
    sp2C = sp0 & 0xF;
    var_r4 = &gUnk_08104957;
    var_ip = (sp4 * 4) + arg0;
    sp14 = var_sb * 0x10;
    var_r2_2 = (GenObj *)((u8 *)var_ip + 0x1EE);
    do {
        sp28 = var_r5 * 2;
        if ((*var_r4 == *sp10) && ((&gUnk_08104957 + 1)[sp28] == sp8)) {
            var_ip->unk1EC = var_r5;
            var_ip->unk1ED = (s8) sp8;
            *var_r2_2 = (((-0x10 & *var_r2_2) | 1) & 0xF) | sp14;
            var_ip->unk1EF = (u8) ((-0x10 & var_ip->unk1EF) | sp2C);
            var_r2_2 += 4;
            var_ip += 4;
            var_sl += 4;
            var_r6 += 4;
            sp4 += 1;
        }
        var_r4 += 2;
        var_r5 += 1;
    } while ((s32) var_r5 <= 0x10);
    temp_r2 = arg0->unk1E0;
    if ((temp_r2 != -1) && (*sp18 == arg0->unk1E8) && (sp8 == arg0->unk1EA)) {
        if (temp_r2 == arg0->unk1E6) {
            var_sl->unk1EC = 0x11;
            var_r0_2 = -0x10 & *var_r6;
            var_r1_4 = 2;
        } else {
            var_sl->unk1EC = 0x12;
            var_r0_2 = -0x10 & *var_r6;
            var_r1_4 = 3;
        }
        *var_r6 = var_r0_2 | var_r1_4;
        var_sl->unk1ED = (u8) sp0.unk8;
        *var_r6 = (0xF & *var_r6) | (var_sb * 0x10);
        var_sl->unk1EF = (u8) ((-0x10 & var_sl->unk1EF) | (sp0 & 0xF));
        var_sl += 4;
        var_r6 += 4;
        sp4 += 1;
    }
    var_sb = sp20;
    if (sp20 > 6) {
        var_sb = 0;
        sp24 += 7;
        sp0 += 1;
    }
    temp_r0 = (u8) sp1C;
    sp8 = (s32) temp_r0;
    if ((u32) temp_r0 <= 0x1EU) {
        goto loop_7;
    }
}
