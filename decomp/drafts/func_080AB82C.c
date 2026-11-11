u32 func_080AB788(s32);                             /* extern */

u32 func_080AB82C(u8 *arg0, u32 arg1) {
    u32 temp_r3;
    u32 i;
    u32 acc;

    temp_r3 = func_080AB788(0x64);
    i = 0;
    acc = *arg0;
loop_1:
    if (temp_r3 >= acc) {
        i += 1;
        if (i < arg1) {
            acc += *((i * 4) + arg0);
            goto loop_1;
        }
        i = 0;
    }
    return i;
}
