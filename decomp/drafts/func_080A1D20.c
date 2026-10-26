s32 func_080A1ED4(s32, s32, s32);                   /* extern */
extern ? gUnk_081043BC;

s32 func_080A1D20(s32 arg0, s32 arg1, void *arg2, s32 arg3) {
s32 sp0;
s32 sp8;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s16 temp_r0_2;
    s16 temp_r0_4;
    s16 temp_r1;
    s16 temp_r1_2;
    s32 *var_r8;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 var_ip;
    s32 var_r2;
    s32 var_r6;
    void *var_r4;
    void *var_r7;

    sp10 = arg0;
    var_r6 = 0;
    var_ip = 0x1A;
    switch (arg3) {                                 /* irregular */
    case 1:
        var_r6 = 0x1A;
        var_ip = 0x3A;
        break;
    case 2:
        var_r6 = 0x3A;
        var_ip = 0x5E;
        break;
    case 3:
        var_r6 = 0x5E;
        var_ip = 0x60;
        break;
    }
    if (var_r6 < var_ip) {
        temp_r0 = var_r6 * 0xC;
        var_r4 = temp_r0 + 8 + &gUnk_081043BC;
        sp18 = temp_r0;
loop_10:
        if ((*(sp18 + (&gUnk_081043BC + 4)) != arg1) || (temp_r0_2 = var_r4->unk0, temp_r1 = var_r4->unk2, sp0.unk0 = temp_r0_2, sp0.unk2 = temp_r1, sp0.unk4 = (s16) (temp_r0_2 + 0x10), sp0.unk6 = (s16) (temp_r1 + 0x10), ((s32) ((sp0.unk0 - arg2->unk4) & (arg2->unk0 - sp0.unk4) & (sp0.unk2 - arg2->unk6) & (arg2->unk2 - sp0.unk6)) >= 0))) {
            var_r4 += 0xC;
            sp18 += 0xC;
            var_r6 += 1;
            if (var_r6 < var_ip) {
                goto loop_10;
            }
        }
    }
    if (var_r6 == var_ip) {
        var_r6 = 0x60;
        var_r7 = &gUnk_081043BC + 0x480;
        var_r8 = &gUnk_081043BC + 0x484;
loop_15:
        if (*var_r8 == arg1) {
            var_r2 = 0x20;
            sp14 = 0x20;
            temp_r0_3 = var_r7->unk0;
            if (temp_r0_3 == 0x14) {
                var_r2 = 0x30;
            }
            if (temp_r0_3 == 0x12) {
                sp14 = 0x10;
                var_r2 = 0x10;
            }
            temp_r0_4 = var_r7->unk8;
            temp_r1_2 = var_r7->unkA;
            sp8.unk0 = temp_r0_4;
            sp8.unk2 = temp_r1_2;
            sp8.unk4 = (s16) (temp_r0_4 + var_r2);
            sp8.unk6 = (s16) (temp_r1_2 + sp14);
            if ((s32) ((sp8.unk0 - arg2->unk4) & (arg2->unk0 - sp8.unk4) & (sp8.unk2 - arg2->unk6) & (arg2->unk2 - sp8.unk6)) >= 0) {
                goto block_21;
            }
        } else {
block_21:
            var_r7 += 0xC;
            var_r8 += 0xC;
            var_r6 += 1;
            if (var_r6 < 0x74) {
                goto loop_15;
            }
        }
        if (var_r6 == 0x74) {
            var_r6 = -1;
        }
    }
    if ((var_r6 >= 0) && ((func_080A1ED4(sp10, var_r6, arg3) << 0x18) == 0)) {
        var_r6 = -1;
    }
    return var_r6;
}
