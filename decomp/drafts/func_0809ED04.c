s32 func_0809ED04(void *arg0) {
    u32 var_r1;
    u8 temp_r2;

    temp_r2 = arg0->unk15;
    var_r1 = (u32) (0 - (u8) (2 & temp_r2)) >> 0x1F;
    if (4 & temp_r2) {
        var_r1 += 1;
    }
    if (8 & temp_r2) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if (0x10 & temp_r2) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if (0x20 & temp_r2) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if (0x40 & temp_r2) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if (var_r1 != 6) {
        return 0;
    }
    return 1;
}
