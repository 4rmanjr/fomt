s32 memcpy(void *, void *, s32);                      /* extern */
s32 memset(void *, s32, s32);                          /* extern */
extern s32 gUnk_0875A440;

void func_0803D2E8(s32 *arg0, s32 arg1) {
u8 sp0[32];
s32 temp_r4;
s32 shifted;
s8 *var_r1;
u8 *gbase;

    shifted = arg1 << 0x18;
    temp_r4 = *arg0;
    if (shifted != 0) {
        u8 *src;
        gbase = (u8 *)&gUnk_0875A440;
        src = gbase + 0x140;
        memcpy((void *)(temp_r4 + 0x228), src, 0x20);
        var_r1 = (s8 *)(temp_r4 + 0x2B0);
    } else {
        memset(sp0, 0, 0x20);
        memcpy((void *)(temp_r4 + 0x228), sp0, 0x20);
        var_r1 = (s8 *)(temp_r4 + 0x2B0);
    }
    *var_r1 = 1;
}
