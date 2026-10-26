s32 func_080D078C(s32 *);                           /* extern */
s32 func_080D091C();                                /* extern */
s32 func_080D0A14();                                  /* extern */
s32 func_080D0A54(s32);                               /* extern */
extern void *gUnk_03000420;

void func_080D0704(void) {
    s32 sp0;
    s32 var_r5;
    u16 temp_r0;

    var_r5 = 0;
    temp_r0 = *(u16 *)0x04000140;
    if (gUnk_03000420->unk17C == 0) {
        if (2 & temp_r0) {
            sp0 = *(s32 *)0x04000150;
            var_r5 = func_080D078C(&sp0);
        }
        if ((var_r5 == 0) && (4 & temp_r0)) {
            var_r5 = func_080D091C();
        }
        if (1 & temp_r0) {
            func_080D0A14();
        }
    }
    if (var_r5 != 0) {
        *(s16 *)0x04000158 = 0;
        func_080D0A54(var_r5);
    }
    *(void *)0x04000140 = temp_r0;
    gUnk_03000420->unkC = 0;
    gUnk_03000420->unk10 = 0;
}
