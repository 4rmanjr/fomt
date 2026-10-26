s32 func_080D0A94(s32);                               /* extern */
s32 func_080D0B14(s32, s32);                          /* extern */
s32 func_080D0BE0();                                  /* extern */
s32 func_080D0C10();                                /* extern */
s32 func_080D0C2C();                                  /* extern */
extern u32 *gUnk_0300041C;
extern void *gUnk_03000420;

void func_080D035C(void) {
    u32 temp_r0;
    u32 temp_r4;

    if (gUnk_03000420->unk0 != 0) {
        gUnk_03000420->unk1C = (s32) gUnk_03000420->unk184;
        if (*gUnk_0300041C == 0) {
            if ((func_080D0C10() == 0) && (temp_r4 = gUnk_03000420->unk180, (temp_r4 == 0))) {
                func_080D0BE0();
                gUnk_03000420->unk10 = temp_r4;
            } else if (gUnk_03000420->unk14 != 0) {
                gUnk_03000420->unk14 = 0;
                gUnk_03000420->unk18 = (u32) gUnk_03000420->unk180;
                gUnk_03000420->unk180 = 0U;
                func_080D0C2C();
            }
        }
        gUnk_03000420->unkC = (u32) (gUnk_03000420->unkC + 1);
        if ((u32) gUnk_03000420->unkC > 0xAU) {
            gUnk_03000420->unkC = 0U;
            temp_r0 = *gUnk_0300041C;
            if (temp_r0 != 0) {
                if (temp_r0 == 1) {
                    func_080D0B14(1, 0);
                } else {
                    func_080D0B14(1, 1);
                }
            }
        }
        gUnk_03000420->unk10 = (u32) (gUnk_03000420->unk10 + 1);
        if (((u32) *gUnk_0300041C > 1U) && ((u32) gUnk_03000420->unk10 > 0xB4U)) {
            func_080D0A94(0xB);
            gUnk_03000420->unk14 = 0;
            gUnk_03000420->unk18 = 0xAU;
            gUnk_03000420->unk180 = 0U;
            func_080D0C2C();
        }
    }
}
