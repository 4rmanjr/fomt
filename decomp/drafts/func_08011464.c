s32 func_08011464(s32 *arg0, u32 arg1) {
    s32 temp_r3;
    u32 var_r2;

    var_r2 = arg1;
    if (var_r2 > 0x63U) {
        var_r2 = 0x63;
    }
    temp_r3 = *arg0;
    if ((u32) ((u32) (temp_r3 << 0xE) >> 0x1B) < var_r2) {
        *arg0 = (0xFFFC1FFF & temp_r3) | ((0x1F & var_r2) << 0xD);
        return 1;
    } else {
        return 0;
    }
}

/* ATTEMPT-NOTE opencode: if-else agar urutan blok pas (return0-depan+push-r4?). */
