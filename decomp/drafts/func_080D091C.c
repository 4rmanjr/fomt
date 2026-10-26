s32 func_080D0A74();                                  /* extern */
extern void *gUnk_0300041C;
extern void *gUnk_03000420;

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
} GenObj;
s32 func_080D091C(void) {
    s32 sp0;
    u16 temp_r2;
    u32 temp_r0_2;
    void *temp_r0;
    void *temp_r1;

    switch (gUnk_0300041C->unk0) {
    case 1:
        if (gUnk_0300041C->unk4 == 1) {
            gUnk_0300041C->unk4 = (u32) (gUnk_0300041C->unk4 + 1);
        }
block_13:
        return 0;
    case 2:
    case 4:
        if (gUnk_0300041C->unk4 == 1) {
            if ((u32) gUnk_0300041C->unk8 < (u32) gUnk_0300041C->unk18) {
                temp_r1 = (gUnk_0300041C->unk8 * 2) + gUnk_0300041C->unk10;
                sp0 = 0x44;
                sp0.unk1 = (s8) gUnk_0300041C->unk8;
                sp0.unk2 = (u8) temp_r1->unk0;
                sp0.unk3 = (u8) temp_r1->unk1;
                temp_r0 = (gUnk_0300041C->unk8 * 2) + gUnk_0300041C->unk10;
                gUnk_0300041C->unk1C = (u16) ((temp_r0->unk0 | (temp_r0->unk1 << 8)) + gUnk_0300041C->unk1C);
                *(s32 *)0x04000154 = sp0;
                gUnk_0300041C->unk8 = (u32) (gUnk_0300041C->unk8 + 1);
                if (gUnk_0300041C->unk0 != 4) {
                    gUnk_03000420->unk184 = (s32) (gUnk_03000420->unk184 + 1);
                }
            } else {
                temp_r2 = gUnk_0300041C->unk1C;
                sp0 = 0x45;
                sp0.unk1 = 0;
                sp0.unk2 = (u8) temp_r2;
                sp0.unk3 = (u8) (temp_r2 >> 8);
                *(void *)0x04000154 = sp0;
                gUnk_0300041C->unk4 = (u32) (gUnk_0300041C->unk4 + 1);
            }
        }
        goto block_13;
    case 3:
        temp_r0_2 = gUnk_0300041C->unk4;
        if ((temp_r0_2 > 1U) && (temp_r0_2 == 2)) {
            func_080D0A74();
        }
        goto block_13;
    default:
        return 9;
    }
}
