s32 func_080BA1A4(s32);                               /* extern */
s32 func_080BA1F4(s32);                               /* extern */
s32 func_080BA1F8(s32);                               /* extern */
s32 func_080BA1FC(s32);                               /* extern */
s32 func_080BA200(s32);                               /* extern */
s32 func_080BA204(s32);                               /* extern */

void func_080B9AC0(s32 arg0) {
    s32 temp_r1;
    u32 temp_r0;
    u32 var_r5;

    var_r5 = 0;
    do {
        temp_r1 = var_r5 << 6;
        temp_r0 = *((u8 *)arg0 + 0x6C + temp_r1);
        switch (temp_r0) {
        case 1:
            func_080BA1A4(arg0 + (temp_r1 + 0x6C));
            break;
        case 2:
            func_080BA1F4(arg0 + (temp_r1 + 0x6C));
            break;
        case 4:
            func_080BA1F8(arg0 + (temp_r1 + 0x6C));
            break;
        case 0:
            func_080BA1FC(arg0 + (temp_r1 + 0x6C));
            break;
        case 3:
            func_080BA200(arg0 + (temp_r1 + 0x6C));
            break;
        case 5:
            func_080BA204(arg0 + (temp_r1 + 0x6C));
            break;
        }
        var_r5 += 1;
    } while (var_r5 <= 1U);
}
