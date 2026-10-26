void func_0800FFF4(u32 *arg0, s8 arg1) {
    s8 *temp_r0_2;
    u32 temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 <= 0x1DU) {
        temp_r0_2 = (s8 *)((s8 *)arg0 + temp_r0) + 4;
        if (temp_r0_2 != 0) {
            *temp_r0_2 = arg1;
        }
        *arg0 += 1;
    }
}
