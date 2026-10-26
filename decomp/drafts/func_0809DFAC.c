u8 func_0809DFAC(void *arg0) {
    u32 var_r1;
    u8 temp_r2;
    u8 temp_r2_2;

    temp_r2 = arg0->unk625;
    var_r1 = (u32) (temp_r2 << 0x1A) >> 0x1F;
    if ((s32) (temp_r2 << 0x19) < 0) {
        var_r1 += 1;
    }
    if ((temp_r2 >> 7) != 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    temp_r2_2 = arg0->unk626;
    if ((temp_r2_2 << 0x1F) != 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if ((s32) (temp_r2_2 << 0x1E) < 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if ((s32) (temp_r2_2 << 0x1D) < 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if ((s32) (temp_r2_2 << 0x1C) < 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if ((s32) (temp_r2_2 << 0x1B) < 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if ((s32) (temp_r2_2 << 0x1A) < 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    return (u8) var_r1;
}
