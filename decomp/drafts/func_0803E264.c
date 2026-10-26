u32 GetLove__C12Bachelorette();                     /* extern */
u32 GetRivalEventCount__C12Bachelorette(void *);    /* extern */
s32 func_0803D52C(s32 *, void *);                       /* extern */
s32 func_0803D644(u8, u8);                          /* extern */
s32 func_080A01F8(void *, s32);                     /* extern */
s32 func_080A0384(void *);                          /* extern */
s32 func_080A0490(void *);                          /* extern */

s32 func_0803E264(void *arg0, ? arg3) {
s32 sp0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r4;
    u32 temp_r7;
    u32 temp_sb;
    u8 temp_r4_2;
    u8 temp_r6;
    u8 temp_r8;

    if ((s32) (arg0->unk21CA << 0x19) < 0) {
        return 0;
    }
    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r8 = sp0.unk1;
    temp_r6 = sp0.unk2;
    temp_r4 = func_080A0490(arg0 + 0x1CD4);
    if ((temp_r8 == 2) && (temp_r6 == 5)) {
        if (temp_r4 != 0x19) {
            return 5;
        }
        goto block_7;
    }
    if (temp_r4 == 0x19) {
block_7:
        if (temp_r8 == 2) {
            if (temp_r6 == 9) {
                return 0x10;
            }
            if (temp_r6 == 0xD) {
                return 0x11;
            }
            goto block_12;
        }
block_12:
        if ((((arg0->unk216C & 1) * 2) | ((u8) arg0->unk216B >> 7)) == 1) {
            return 0x12;
        }
        temp_r4_2 = arg0->unk2148;
        temp_r0 = func_080A0384(arg0 + 0x1CD4);
        temp_r7 = (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
        temp_sb = temp_r7;
        if (((func_0803D644(temp_r8, temp_r6) << 0x18) != 0) || (temp_r0_2 = arg0->unk8, (temp_r0_2 == 3)) || (temp_r0_2 == 4)) {
            if (temp_sb != 0) {
                if (temp_r4_2 != 0) {
                    return 0xD;
                }
                return 0xC;
            }
            if (temp_r4_2 != 0) {
                return 0xF;
            }
            return 0xE;
        }
        if (temp_r7 != 0) {
            if (temp_r4_2 != 0) {
                return 9;
            }
            return 8;
        }
        if (temp_r4_2 != 0) {
            return 0xB;
        }
        return 0xA;
    }
    if (GetRivalEventCount__C12Bachelorette(arg0 + 0x1F38) > 4U) {
        if ((func_0803D644(temp_r8, temp_r6) << 0x18) == 0) {
            if (arg0->unk8 == 0) {
                return 3;
            }
            return 4;
        }
        goto block_44;
    }
    temp_r0_3 = func_080A01F8(arg0 + 0x1CD4, 0x19);
    if ((temp_r8 == 3) && (temp_r6 == 0xE) && (temp_r4 == 0) && (temp_r0_3 != 0) && (GetLove__C12Bachelorette() > 0x270FU) && ((((arg0->unk21A4 & 1) * 2) | ((u8) arg0->unk21A3 >> 7)) != 2)) {
        return 7;
    }
    if ((func_0803D644(temp_r8, temp_r6) << 0x18) != 0) {
block_44:
        return 6;
    }
    if (arg0->unk8 != 0) {
        return 2;
    }
    return 1;
}
