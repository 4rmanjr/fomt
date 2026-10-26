s32 func_080D657C(void *, void *);                    /* extern */
s32 func_080D66A4(void *, void *);                    /* extern */
s32 memcpy(void *, void *, s32);                      /* extern */
s32 strcpy();                                         /* extern */

void *func_080D64C8(void *arg0, void *arg1) {
    s32 *var_r2;
    s32 *var_r3;
    s32 temp_r0;
    s32 var_r1;
    u8 temp_r3;

    strcpy();
    arg0->unk10 = (u16) ((0xFFFFFC00 & arg0->unk10) | ((u32) (arg1->unk10 << 0x16) >> 0x16));
    temp_r3 = arg1->unk11;
    arg0->unk11 = (u8) ((((((-5 & arg0->unk11) | (4 & temp_r3)) & ~8) | (8 & temp_r3)) & ~0x10) | (0x10 & temp_r3));
    var_r3 = arg0 + 0x14;
    var_r1 = 0xA;
    var_r2 = arg1 + 0x14;
    do {
        temp_r0 = *var_r2;
        var_r2 += 4;
        *var_r3 = temp_r0;
        var_r3 += 4;
        var_r1 -= 1;
    } while (var_r1 != -1);
    memcpy(arg0 + 0x40, arg1 + 0x40, 0x1A0);
    memcpy(arg0 + 0x1E0, arg1 + 0x1E0, 0x21C);
    func_080D66A4(arg0 + 0x3FC, arg1 + 0x3FC);
    func_080D657C(arg0 + 0x5DC, arg1 + 0x5DC);
    memcpy(arg0 + 0x9C8, arg1 + 0x9C8, 0x10CC);
    return arg0;
}
