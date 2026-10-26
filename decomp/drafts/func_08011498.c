s32 func_08011498(void *arg0, u32 arg1) {
    u16 temp_r2;
    u32 var_r1;

    var_r1 = arg1;
    if (var_r1 > 0x63U) {
        var_r1 = 0x63;
    }
    temp_r2 = arg0->unk2;
    if ((u32) ((u32) (temp_r2 << 0x17) >> 0x19) >= var_r1) {
        return 0;
    }
    arg0->unk2 = (u16) ((0xFFFFFE03 & temp_r2) | ((var_r1 & 0x7F) * 4));
    return 1;
}
