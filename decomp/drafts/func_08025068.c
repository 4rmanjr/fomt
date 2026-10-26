u32 func_0800E4F0(s32);                             /* extern */
u32 func_0800E4FC(s32);                             /* extern */
u32 func_0800E51C(s32);                             /* extern */
s32 func_0800E9E4(s32, s32);                          /* extern */
s32 func_0800EA68(s32, s32);                          /* extern */

s32 func_08025068(void *arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s8 *var_r1;
    s8 var_r0;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r6;
    u32 temp_r7;
    u32 temp_r8;
    u32 temp_sb;
    u32 temp_sl;
    void *temp_r1;

    sp0 = arg2;
    if (arg0->unk34->unk34C4 != 0) {
        goto block_44;
    }
    temp_r1 = arg0->unk10;
    if (temp_r1 != 0) {
        temp_r1->unk281 = 1;
    }
    temp_sl = func_0800E4F0(arg0->unk38);
    temp_r8 = func_0800E51C(arg0->unk38);
    func_0800E9E4(arg0->unk38, arg1);
    temp_r6 = func_0800E4F0(arg0->unk38);
    temp_sb = func_0800E4FC(arg0->unk38);
    func_0800EA68(arg0->unk38, sp0);
    temp_r7 = func_0800E4FC(arg0->unk38);
    if ((arg1 > 0) || (sp0 < 0)) {
        temp_r0 = arg0->unkC3 - 0x24;
        switch (temp_r0) {
        case 0:
            if (temp_r6 > (u32) (temp_r8 >> 1)) {
block_21:
                arg0->unkC3 = 0U;
            }
            break;
        case 1:
            if (temp_r6 > (u32) (temp_r8 / 5U)) {
                goto block_21;
            }
            break;
        case 2:
            if (temp_r6 > (u32) (temp_r8 / 20U)) {
                goto block_21;
            }
            break;
        case 3:
            if (temp_r6 != 0) {
                goto block_21;
            }
            break;
        case 4:
            if (temp_r7 <= 0x31U) {
                goto block_21;
            }
            break;
        case 5:
            if (temp_r7 <= 0x4FU) {
                goto block_21;
            }
            break;
        case 6:
            if (temp_r7 != 0x64) {
                goto block_21;
            }
            break;
        }
    }
    if ((temp_sb != 0x64) && (temp_r7 == 0x64)) {
        arg0->unkC3 = 0x2AU;
        return 1;
    }
    if ((temp_sb <= 0x4FU) && (temp_r7 > 0x4FU)) {
        var_r1 = arg0 + 0xC3;
        var_r0 = 0x29;
        goto block_43;
    }
    if ((temp_sb <= 0x31U) && (temp_r7 > 0x31U)) {
        var_r1 = arg0 + 0xC3;
        var_r0 = 0x28;
        goto block_43;
    }
    if ((temp_sl != 0) && (temp_r6 == 0)) {
        var_r1 = arg0 + 0xC3;
        var_r0 = 0x27;
        goto block_43;
    }
    temp_r0_2 = temp_r8 / 20U;
    if ((temp_sl > temp_r0_2) && (temp_r6 <= temp_r0_2)) {
        var_r1 = arg0 + 0xC3;
        var_r0 = 0x26;
        goto block_43;
    }
    temp_r0_3 = temp_r8 / 5U;
    if ((temp_sl > temp_r0_3) && (temp_r6 <= temp_r0_3)) {
        var_r1 = arg0 + 0xC3;
        var_r0 = 0x25;
        goto block_43;
    }
    temp_r0_4 = temp_r8 >> 1;
    if ((temp_sl > temp_r0_4) && (temp_r6 <= temp_r0_4)) {
        var_r1 = arg0 + 0xC3;
        var_r0 = 0x24;
block_43:
        *var_r1 = var_r0;
    }
block_44:
    return 0;
}
