s32 func_080D0ABC();                                  /* extern */
s32 func_080D0B14(s32, s32);                          /* extern */
s32 func_080D0BA8(s32 *);                             /* extern */
extern void *gUnk_03000420;

void func_080D02F0(void) {
    s32 sp0;
    s32 temp_r2;

    temp_r2 = gUnk_03000420->unk0;
    if (temp_r2 == 0) {
        gUnk_03000420->unk0 = 1;
        gUnk_03000420->unk14 = temp_r2;
        gUnk_03000420->unk18 = temp_r2;
        gUnk_03000420->unk1C = temp_r2;
        gUnk_03000420->unk20 = 1;
        gUnk_03000420->unk180 = temp_r2;
        gUnk_03000420->unk184 = temp_r2;
        gUnk_03000420->unk17C = temp_r2;
        gUnk_03000420->unkC = temp_r2;
        gUnk_03000420->unk10 = temp_r2;
        sp0 = temp_r2;
        func_080D0BA8(&sp0);
        func_080D0B14(0, 0);
        func_080D0ABC();
    }
}
