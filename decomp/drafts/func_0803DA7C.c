u32 GetLove__C12Bachelorette();                     /* extern */
u32 GetRivalEventCount__C12Bachelorette(void *);    /* extern */
s32 func_0803D52C(s32 *, void *);                       /* extern */
s32 func_0803D644(u8, u8);                          /* extern */
s32 func_080A01F8(void *, s32);                     /* extern */
s32 func_080A0384(void *);                          /* extern */
s32 func_080A0490(void *);                          /* extern */

s32 func_0803DA7C(void *arg0) {
s32 sp0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    u32 temp_r4;
    u8 temp_r6;
    u8 temp_r7;
    u8 temp_r8;
    u8 temp_sb;

    if ((s32) (arg0->unk21CA << 0x1C) < 0) {
        goto block_51;
    }
    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r7 = sp0.unk1;
    temp_r8 = sp0.unk2;
    temp_sb = sp0.unk3;
    temp_r0 = func_080A0490(arg0 + 0x1CD4);
    if (temp_r0 == 3) {
        if ((temp_r7 == 2) && (temp_r8 == 0xD)) {
            return 0x16;
        }
        if (((u32) (arg0->unk216B << 0x19) >> 0x1E) == 1) {
            return 0x17;
        }
        temp_r6 = arg0->unk2148;
        temp_r0_2 = func_080A0384(arg0 + 0x1CD4);
        temp_r4 = (u32) ((0 - temp_r0_2) | temp_r0_2) >> 0x1F;
        if (((func_0803D644(temp_r7, temp_r8) << 0x18) != 0) || (temp_r0_3 = arg0->unk8, (temp_r0_3 == 3)) || (temp_r0_3 == 4)) {
            if (temp_r4 != 0) {
                if (temp_r6 != 0) {
                    return 0xD;
                }
                return 0xC;
            }
            if (temp_r6 != 0) {
                return 0xF;
            }
            return 0xE;
        }
        if ((temp_r6 != 0) && (temp_sb == 0)) {
            if (temp_r4 != 0) {
                return 8;
            }
            return 0xB;
        }
        if (temp_r4 != 0) {
            if (temp_r6 != 0) {
                return 7;
            }
            return 6;
        }
        if (temp_r6 != 0) {
            return 0xA;
        }
        return 9;
    }
    if (GetRivalEventCount__C12Bachelorette(arg0 + 0x1D6C) > 4U) {
        if (temp_r7 == 1) {
            if ((func_0803D644(1U, temp_r8) << 0x18) != 0) {
                return 0x13;
            }
            if (arg0->unk8 == 0) {
                return 0x14;
            }
            return 0x15;
        }
        goto block_51;
    }
    if ((temp_r7 == 2) && (temp_r8 == 0x1E) && (((u32) (arg0->unk21A3 << 0x1E) >> 0x1E) != 2)) {
        return 0x11;
    }
    temp_r0_4 = func_080A01F8(arg0 + 0x1CD4, 3);
    if ((temp_r7 == 3) && (temp_r8 == 0xE) && (temp_r0 == 0) && (temp_r0_4 != 0) && (GetLove__C12Bachelorette() > 0x270FU) && (((u32) (arg0->unk21A3 << 0x1A) >> 0x1E) != 2)) {
        return 0x12;
    }
    if ((func_0803D644(temp_r7, temp_r8) << 0x18) != 0) {
        return 0x10;
    }
    if ((s32) (arg0->unk215A << 0x1C) < 0) {
block_51:
        return 0;
    }
    if (temp_sb == 0) {
        if (arg0->unk8 == 0) {
            if (temp_r7 == 1) {
                return 5;
            }
            return 3;
        }
        return 4;
    }
    if (arg0->unk8 != 0) {
        return 2;
    }
    return 1;
}
