u32 GetLove__C12Bachelorette();                     /* extern */
u32 GetRivalEventCount__C12Bachelorette(void *);    /* extern */
s32 func_0803D52C(s32 *, void *);                       /* extern */
s32 func_0803D644(u8, u8);                          /* extern */
s32 func_080A01F8(void *, s32);                     /* extern */
s32 func_080A0384(void *);                          /* extern */
s32 func_080A0490(void *);                          /* extern */

s32 func_0803E780(void *arg0, ? arg3) {
s32 sp0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    u32 temp_r4_2;
    u32 temp_r8;
    u8 temp_r6;
    u8 temp_r7;
    u8 temp_sb;
    void *temp_r4;

    if ((s32) (arg0->unk21CA << 0x1A) < 0) {
        return 0;
    }
    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r7 = sp0.unk1;
    temp_r6 = sp0.unk2;
    temp_sb = sp0.unk3;
    temp_r4 = arg0 + 0x1CD4;
    temp_r0 = func_080A0490(temp_r4);
    if (temp_r0 == 0x15) {
        if (temp_r7 == 2) {
            if (temp_r6 == 9) {
                return 0xE;
            }
            if (temp_r6 == 0xD) {
                return 0xF;
            }
            goto block_8;
        }
block_8:
        if (((u32) (arg0->unk216C << 0x1D) >> 0x1E) == 1) {
            return 0x10;
        }
        temp_r0_2 = func_080A0384(arg0 + 0x1CD4);
        temp_r4_2 = (u32) ((0 - temp_r0_2) | temp_r0_2) >> 0x1F;
        temp_r8 = temp_r4_2;
        if (((func_0803D644(temp_r7, temp_r6) << 0x18) != 0) || (temp_r0_3 = arg0->unk8, (temp_r0_3 == 3)) || (temp_r0_3 == 4)) {
            if (temp_r8 != 0) {
                return 0xC;
            }
            return 0xD;
        }
        if (temp_sb == 3) {
            if (temp_r4_2 != 0) {
                return 9;
            }
            return 0xB;
        }
        if (temp_r4_2 != 0) {
            return 8;
        }
        return 0xA;
    }
    if (GetRivalEventCount__C12Bachelorette(arg0 + 0x1EE4) > 4U) {
        if ((func_0803D644(temp_r7, temp_r6) << 0x18) != 0) {
            return 7;
        }
        if (temp_sb == 3) {
            return 4;
        }
        return 3;
    }
    temp_r0_4 = func_080A01F8(temp_r4, 0x15);
    if ((temp_r7 == 3) && (temp_r6 == 0xE) && (temp_r0 == 0) && (temp_r0_4 != 0) && (GetLove__C12Bachelorette() > 0x270FU) && (((u32) (arg0->unk21A4 << 0x1C) >> 0x1E) != 2)) {
        return 6;
    }
    if ((func_0803D644(temp_r7, temp_r6) << 0x18) != 0) {
        return 5;
    }
    if (temp_sb != 3) {
        return 1;
    }
    return 2;
}
