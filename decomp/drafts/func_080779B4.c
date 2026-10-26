s32 func_08008E64(s32, s32, s32);                     /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_0804E7A0(s32, s32, s32);                     /* extern */

void func_080779B4(s32 arg0) {
    s32 sp0;
    s32 temp_r4;
    s32 var_r6;
    s32 var_r7;

    func_08008EB8(0, 0x06000C00, 0xE00);
    temp_r4 = arg0 + 0x14;
    var_r7 = 0x06001A00;
    var_r6 = 8;
    do {
        sp0.unk0 = 0x1C;
        sp0.unk2 = 2;
        func_0804E7A0(sp0, temp_r4, 0);
        func_08008E64(temp_r4, var_r7, 0x700);
        var_r7 += 0x700;
        var_r6 -= 1;
    } while (var_r6 >= 0);
}
