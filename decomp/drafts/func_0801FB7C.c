s32 __builtin_new(s32);                             /* extern */
void **func_080175B4(s32, s32, s32, s32 *);         /* extern */
s32 func_080A6474(s32, s32);                        /* extern */

void ***func_0801FB7C(void ***arg0, s32 arg1, s32 arg2, u8 arg3) {
    u8 sp0;
    void **sp4;
    s32 sp8;
    void ***spC;
    void **sp10;
    s32 temp_r0;
    void **temp_r0_2;

    sp8 = func_080A6474(__builtin_new(0xBC), arg1);
    temp_r0 = __builtin_new(0x10CC);
    sp0 = arg3;
    temp_r0_2 = func_080175B4(temp_r0, arg1, arg2, &sp8);
    sp4 = temp_r0_2;
    spC = &sp4;
    sp10 = temp_r0_2;
    sp4 = 0;
    *arg0 = temp_r0_2;
    if (sp4 != 0) {
        (*sp4)->unk8(sp4, 3);
    }
    return arg0;
}
