s32 func_080D0EBC(s32, s32, s32, s32);                /* extern */

s32 func_080A5670(void *arg0) {
    s32 temp_r0;
    s32 temp_r2;
    s32 temp_r6;
    s32 temp_sb;
    s32 var_r4;
    s32 var_r5;
    u32 var_r1;

    temp_sb = arg0->unk24 * 2;
    var_r1 = 0;
    do {
        temp_r2 = var_r1 * 8;
        temp_r0 = *(arg0 + 0xC + temp_r2);
        if (temp_r0 != 0) {
            var_r5 = temp_r0;
            var_r4 = *(arg0 + 0x10 + temp_r2);
            temp_r6 = var_r4 + 0x540;
            do {
                func_080D0EBC(var_r5, var_r4, 0x8000001F, 0x040000D4);
                var_r5 += temp_sb;
                var_r4 += 0x40;
            } while (var_r4 != temp_r6);
        }
        var_r1 += 1;
    } while (var_r1 <= 2U);
    return 0;
}
