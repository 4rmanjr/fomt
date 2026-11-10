s32 func_0804E7A0(s32, s32, s32);                     /* extern */
s32 func_0804E8F0(s32, s32, s32, s32, s32);           /* extern */

typedef union P {
    s16 h[2];
    s32 w;
} P;

s32 func_08063E04(s32 arg0, u32 arg1, s32 arg2) {
    P sp4;
    P sp8;
    s32 temp_r4;

    if (arg1 > 0xFU) {
        return 0;
    }
    sp4.h[0] = 0xC;
    sp4.h[1] = 2;
    temp_r4 = (arg1 * 0x304) + arg0 + 0x12E0;
    func_0804E7A0(sp4.w, temp_r4, 0);
    sp8.h[0] = 0xC;
    sp8.h[1] = 2;
    func_0804E8F0(sp8.w, temp_r4, 0, 0, arg2);
    return temp_r4;
}
