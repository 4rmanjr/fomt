struct GenObj__func_080CADA8;
s32 func_080CADA8(struct GenObj__func_080CADA8 *);               /* extern */
s32 func_080CAE60(s32, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 gUnk_08117860;

void func_080CCDEC(s32 arg0, s32 arg1) {
    u32 spC;
    u8 *spC_bytes;
    s32 temp_r1;
    u8 b;
    u32 t1, t0, t01, tin;

    func_080CADA8((struct GenObj__func_080CADA8 *)(((arg1 * 2) + arg1) * 4 + arg0 + 0x218));
    temp_r1 = *(&gUnk_08117860 + arg1);
    b = (u8) (temp_r1 + 0xF);
    spC = (temp_r1 & 0xFFFFFF00) | b;
    spC_bytes = (u8 *)&spC;
    t1 = spC_bytes[1] << 6;
    t0 = spC_bytes[0];
    t01 = t0 * 2;
    tin = t01 + 0x0600F080;
    func_080CAE60(arg0, t1 + tin, 0x54, 2, 1, 0, 0x20);
}
