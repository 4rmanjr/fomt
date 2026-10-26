s32 func_0801740C(s32 *arg0) {
    u32 temp_r0;

    temp_r0 = ((u32) (*arg0 << 0x18) >> 0x1A) - 0x1B;
    switch (temp_r0) {
    default:
        return 0;
    case 1:
    case 5:
    case 9:
        return 1;
    case 2:
    case 6:
    case 10:
        return 2;
    case 3:
    case 7:
    case 11:
        return 3;
    }
}
