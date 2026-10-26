s32 func_03000C2C(s32, s32, s32, s32);                /* extern */

void func_080A5DFC(void *arg0, s32 arg1, s32 arg2) {
    u32 sp0;
    s32 sp4;
    s32 temp_r5;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;
    u32 temp_r1;

    var_r5 = saved_reg_r8;
    sp0 = 0;
    var_r8 = arg0->unk20;
    var_r7 = arg0->unk1C;
    var_r6 = arg0->unk24;
    sp4 = (arg2 & 0x1F) << 5;
    do {
        temp_r5 = (var_r5 & 0xFFFFFF00) | (u8) ((var_r5 & ~0x1F) | (arg1 & 0x1F));
        var_r5 = (temp_r5 & 0xFFFF0000) | (u16) ((temp_r5 & 0xFFFFFC1F) | sp4);
        func_03000C2C(var_r6, var_r7, var_r8, var_r5);
        var_r8 += 0x20;
        var_r7 += 0x20;
        var_r6 += 0x20;
        temp_r1 = sp0 + 1;
        sp0 = temp_r1;
    } while (temp_r1 <= 0xEU);
    arg0->unk2A = 1;
}
