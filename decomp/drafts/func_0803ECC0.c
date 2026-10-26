u32 GetUpgradeLevel__C9FarmHouse(void *);           /* extern */
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */
u32 func_0809EB68(void *);                          /* extern */
s32 func_0809EB70(void *);                          /* extern */
s32 func_0809EB8C(void *);                          /* extern */

typedef struct GenObj {
    u8 _pad0[1];
    s32 unk1;
    s32 unk2;
    s32 unk3;
    u8 _pad7[1];
    s32 unk8;
} GenObj;
s32 func_0803ECC0(GenObj *arg0) {
GenObj sp0;
    s32 temp_r7;
    u32 temp_r0;
    u32 temp_r0_2;
    u8 temp_r6;
    void *temp_r4;

    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r6 = sp0.unk3;
    if ((func_0803D644(sp0.unk1, sp0.unk2) << 0x18) != 0) {
        return 5;
    }
    temp_r7 = arg0->unk8;
    temp_r4 = arg0 + 0x1F64;
    if ((func_0809EB68(temp_r4) != 0) && ((func_0809EB70(temp_r4) << 0x18) == 0) && ((func_0809EB8C(temp_r4) << 0x18) == 0) && ((u32) (temp_r7 - 3) > 1U)) {
        temp_r0 = func_0809EB68(temp_r4);
        switch (temp_r0) {
        case 1:
            temp_r0_2 = GetUpgradeLevel__C9FarmHouse(arg0 + 0x1F4);
            if (temp_r0_2 != 1) {
                if (temp_r0_2 >= 1U) {
                    if (temp_r0_2 != 2) {
                        goto block_21;
                    }
                    return 0xD;
                }
                return 6;
            }
            return 7;
        case 2:
            return 8;
        case 3:
            return 9;
        case 4:
            return 0xE;
        case 5:
        case 6:
        case 7:
            return 0xA;
        case 8:
        case 9:
        case 10:
            return 0xB;
        case 11:
        case 12:
        case 13:
            return 0xC;
        }
    } else {
    default:
block_21:
        if ((s32) temp_r6 <= 5) {
            if ((s32) temp_r6 < 4) {
                if (temp_r6 != 0) {
                    goto block_26;
                }
                return 4;
            }
            return 2;
        }
        if (temp_r6 != 6) {
block_26:
            return 1;
        }
        return 3;
    }
}
