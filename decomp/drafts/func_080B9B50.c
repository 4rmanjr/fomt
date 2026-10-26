s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_080B96AC(void *, u16, u16, s32, s32, s32, s32, s32); /* extern */
u8 func_080B9F64(void *, s32, u32);                 /* extern */
u16 rand();                                         /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[13];
    s32 unk11;
    u8 _pad15[87];
    s32 unk6C;
    u8 _pad70[26];
    s32 unk8A;
    s32 unk8C;
    s32 unk8E;
    u8 _pad92[1];
    s32 unk93;
    s32 unk94;
    u8 _pad98[1];
    s32 unk99;
    s32 unk9C;
    u8 _padA0[12];
    s32 unkAC;
    u8 _padB0[44];
    s32 unkDC;
    u8 _padE0[2683];
    s32 unkB5B;
} GenObj;
void func_080B9B50(GenObj *arg0, u8 arg1) {
    s32 sp10;
    u32 sp14;
    s32 *temp_r3_2;
    s32 *temp_r6;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 var_r7;
    u32 temp_ip;
    u32 temp_r1;
    u32 var_r4;
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r1_2;
    void *temp_r3;
    void *temp_r6_2;

    sp10 = (s32) arg1;
    temp_r1 = (u32) ((arg1 << 0x18) + 0x01000000) >> 0x18;
    sp14 = temp_r1;
    if (temp_r1 > 1U) {
        sp14 = (u32) (u8) (temp_r1 - 2);
    }
    temp_r4 = sp10 << 6;
    temp_r5 = arg0 + 0x74;
    temp_r6 = temp_r5 + temp_r4;
    var_r7 = *temp_r6;
    temp_ip = rand() >> 8;
    temp_r3 = arg0 + temp_r4;
    if ((s32) temp_r3->unk93 <= (s32) (arg0->unkB5B - 1)) {

    } else {
        temp_r3->unk93 = 0U;
        if ((s32) temp_ip <= (s32) temp_r3->unk8E) {
            var_r4 = (u32) (0x64 * rand()) >> 0x10;
            temp_r0 = func_080B9F64(arg0, sp10, sp14);
            switch (temp_r0) {                      /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                if ((u32) (var_r4 - 0x5A) > 4U) {
                    goto block_46;
                }
                goto block_45;
            case 1:                                 /* switch 1 */
                if ((u32) (var_r4 - 0x5F) > 4U) {
                    if ((s32) var_r4 <= 0x59) {
                        goto block_47;
                    }
                } else {
                    goto block_43;
                }
                break;
            case 2:                                 /* switch 1 */
                if ((u32) (var_r4 - 0x5A) > 4U) {
                    if ((u32) (var_r4 - 0x5F) > 4U) {
                        goto block_43;
                    }
                    goto block_47;
                }
                goto block_45;
            case 3:                                 /* switch 1 */
                if ((u32) (var_r4 - 0x5F) > 4U) {
                    if ((s32) var_r4 <= 0x59) {
                        goto block_45;
                    }
                } else {
                    goto block_43;
                }
                break;
            }
        } else {
            var_r4 = (u32) (0x64 * rand()) >> 0x10;
            temp_r0_2 = func_080B9F64(arg0, sp10, sp14);
            switch (temp_r0_2) {                    /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                if ((u32) (var_r4 - 0x4B) > 4U) {
                    if ((u32) (var_r4 - 0x50) > 9U) {
                        if ((u32) (var_r4 - 0x5A) <= 9U) {
block_47:
                            var_r7 = *temp_r6 + 1;
                        }
                    } else {
block_45:
                        var_r7 = *temp_r6 + 3;
                    }
                } else {
block_43:
                    var_r7 = *temp_r6 + 2;
                }
                break;
            case 1:                                 /* switch 2 */
                if ((u32) (var_r4 - 0xA) > 9U) {
                    if ((u32) (var_r4 - 0x14) > 4U) {
                        if ((u32) (var_r4 - 0x19) <= 0x4AU) {
                            goto block_47;
                        }
                    } else {
                        goto block_45;
                    }
                } else {
                    goto block_43;
                }
                break;
            case 2:                                 /* switch 2 */
                if ((u32) (var_r4 - 5) > 0x4AU) {
                    if ((u32) (var_r4 - 0x50) > 9U) {
                        if ((u32) (var_r4 - 0x5A) <= 9U) {
                            goto block_47;
                        }
                    } else {
                        goto block_45;
                    }
                } else {
                    goto block_43;
                }
                break;
            case 3:                                 /* switch 2 */
                if ((u32) (var_r4 - 0xA) <= 9U) {
                    goto block_43;
                }
                if ((u32) (var_r4 - 0x14) <= 0x4AU) {
                    goto block_45;
                }
block_46:
                if ((u32) (var_r4 - 0x5F) <= 4U) {
                    goto block_47;
                }
                break;
            }
        }
    }
    if (var_r7 > 3) {
        var_r7 -= 4;
    }
    temp_r3_2 = temp_r5 + temp_r4;
    *temp_r3_2 = var_r7;
    temp_r6_2 = arg0 + temp_r4;
    if ((u32) temp_r6_2->unk94 <= 1U) {

    } else {
        temp_r6_2->unk94 = 0U;
        temp_r0_3 = (sp14 << 6) + arg0;
        if ((func_080B96AC(arg0, temp_r6_2->unk8A, (temp_r6_2 + 0x8A)->unk2, *temp_r3_2, (s32) temp_r0_3->unk8A, (s32) temp_r0_3->unk8C, 0x10, 0x2000) << 0x18) != 0) {
            if (((u32) temp_r6_2->unk8E > 0xEFU) && ((u32) ((u32) (0xFFFF & rand()) >> 9) > 0x78U)) {
                if (sp10 == 0) {
                    if ((u32) arg0->unk6C <= 1U) {
                        arg0->unk9C = 0;
                        *((arg0 + 0x9C) - 0x14) = 0;
                        arg0->unk99 = 1;
                        arg0->unk6C = 5U;
                        goto block_61;
                    }
                } else if ((sp10 == 1) && ((u32) arg0->unkAC <= 1U)) {
                    arg0->unkDC = 0;
                    temp_r0_4 = (arg0 + 0xDC) - 0x14;
                    temp_r0_4->unk0 = 0;
                    temp_r0_4->unk11 = (s8) sp10;
                    arg0->unkAC = 5U;
block_61:
                    func_08008B6C(arg0 + 0x70C, 0xCC);
                }
            } else {
                *((u8 *)arg0 + 0x6C + temp_r4) = 0;
            }
        } else {
            temp_r4_2 = *((u8 *)arg0 + 0x84 + temp_r4);
            if ((temp_r4_2 == 0) && (((u32) (rand() >> 9) < (u32) temp_r6_2->unk8E) || ((u32) (rand() >> 9) <= 0x6EU))) {
                *((u8 *)arg0 + 0x6C + temp_r4) = temp_r4_2;
            } else {
                *((u8 *)arg0 + 0x6C + temp_r4) = 1;
            }
        }
    }
    temp_r1_2 = arg0 + temp_r4;
    temp_r1_2->unk94 = (u8) (temp_r1_2->unk94 + 1);
    temp_r1_2->unk93 = (u8) (temp_r1_2->unk93 + 1);
}
