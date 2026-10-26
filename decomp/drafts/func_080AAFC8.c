void *__builtin_new(s32);                           /* extern */
s32 func_08007874(void *);                            /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080E4438(void *, s32 *);                       /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk1;
    struct GenObj *unk4;
    s32 unk5;
    s32 unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
} GenObj;
void **func_080AAFC8(void **arg0, void **arg1, s32 arg2) {
s32 sp0;
s32 sp44;
s32 sp54;
    void **sp7C;
    void **sp80;
    void *sp84;
    void *sp88;
    void *sp8C;
    void *sp90;
    void *sp94;
    u32 sp98;
    u32 *sp9C;
    s32 spA0;
    s32 spA4;
    s32 var_r1_2;
    s32 var_r1_4;
    s32 var_r1_5;
    s32 var_r1_6;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r3;
    s32 var_r5;
    s32 var_r6;
    s8 *temp_r0_4;
    s8 temp_r2;
    u16 var_r1_7;
    u16 var_r1_8;
    u32 temp_r0_3;
    u32 var_r3_2;
    u32 var_r7;
    u8 var_r1;
    void **temp_r8;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r1;
    GenObj *temp_r4;
    GenObj *var_r0;
    GenObj *var_r0_2;
    void *var_r0_3;
    void *var_r1_3;
    void *var_r4;
    void *var_r4_2;
    GenObj *var_r4_3;
    void *var_r5_2;

    sp7C = arg0;
    sp80 = arg1;
    temp_r0 = __builtin_new(0x3E8);
    temp_r0->unk0 = arg1;
    if (arg2 != 0xD) {
        if (arg2 <= 0xD) {
            if (arg2 != 1) {
                goto block_5;
            }
            goto block_6;
        }
        if (arg2 != 0xF) {
block_5:
            var_r1 = 0;
        } else {
            goto block_6;
        }
    } else {
block_6:
        var_r1 = 1;
    }
    temp_r0->unk4 = var_r1;
    temp_r0->unk5 = 0;
    temp_r0->unk6 = 0;
    var_r0 = (GenObj *)((u8 *)temp_r0 + 8);
    var_r1_2 = 9;
    sp9C = (GenObj *)((u8 *)temp_r0 + 0x350);
    sp88 = (GenObj *)((u8 *)temp_r0 + 0x368);
    sp94 = &(GenObj *)((u8 *)sp0 + 0x74);
    sp90 = &(GenObj *)((u8 *)sp0 + 0x54);
    sp8C = &(GenObj *)((u8 *)sp0 + 0x44);
    var_r3 = -1;
    do {
        var_r0->unk0 = 0;
        var_r0->unk1 = 0;
        var_r2 = 1;
        var_r1_3 = (GenObj *)((u8 *)var_r0 + 4);
loop_9:
        var_r1_3->unk0 = 0;
        var_r1_3->unk4 = 0;
        var_r1_3->unk8 = 0;
        var_r1_3->unkC = 0;
        var_r1_3->unk10 = 0;
        var_r1_3->unk14 = 0;
        var_r1_3->unk18 = 0;
        var_r1_3->unk1C = 0;
        var_r1_3 += 0x20;
        var_r2 -= 1;
        if (var_r2 != var_r3) {
            goto loop_9;
        }
        var_r4 = (GenObj *)((u8 *)var_r0 + 0x44);
        var_r6 = 1;
        var_r1_4 = 0;
loop_11:
        spA0 = var_r1_4;
        spA4 = var_r3;
        func_08007874(var_r4);
        var_r4->unk4 = var_r1_4;
        var_r4 += 8;
        var_r6 -= 1;
        if (var_r6 != -1) {
            goto loop_11;
        }
        var_r0 += 0x54;
        var_r1_2 -= 1;
    } while (var_r1_2 != var_r3);
    *sp9C = 0;
    var_r0_2 = sp88;
    var_r1_5 = 0xF;
    do {
        var_r0_2->unk4 = 0;
        var_r0_2 += 8;
        var_r1_5 -= 1;
    } while (var_r1_5 != -1);
    temp_r8 = (*sp80)->unk64(sp80);
    var_r3_2 = 0;
loop_16:
    sp84 = (var_r3_2 * 0x54) + 8 + temp_r0;
    if (temp_r0->unk4 != 0) {
        switch (var_r3_2) {                         /* switch 1; irregular */
        case 2:                                     /* switch 1 */
            var_r2_2 = 0x1A1;
            break;
        case 1:                                     /* switch 1 */
            var_r2_2 = 0x1A0;
            break;
        case 3:                                     /* switch 1 */
            var_r2_2 = 0x1A3;
            break;
        case 4:                                     /* switch 1 */
            var_r2_2 = 0x19F;
            break;
        case 6:                                     /* switch 1 */
            var_r2_2 = 0x1A2;
            break;
        case 7:                                     /* switch 1 */
            var_r2_2 = 0x1A4;
            break;
        case 8:                                     /* switch 1 */
            var_r2_2 = 0x19E;
            break;
        case 9:                                     /* switch 1 */
            var_r2_2 = 0x19D;
            break;
        }
    } else {
        switch (var_r3_2) {                         /* switch 2 */
        case 0:                                     /* switch 2 */
        case 0:                                     /* switch 1 */
            var_r2_2 = 0x1D6;
            break;
        case 2:                                     /* switch 2 */
            var_r2_2 = 0x117;
            break;
        case 1:                                     /* switch 2 */
            var_r2_2 = 0xD3;
            break;
        case 3:                                     /* switch 2 */
            var_r2_2 = 0x1AD;
            break;
        case 4:                                     /* switch 2 */
            var_r2_2 = 0x4D;
            break;
        case 5:                                     /* switch 2 */
        case 5:                                     /* switch 1 */
            var_r2_2 = 0x145;
            break;
        case 6:                                     /* switch 2 */
            var_r2_2 = 0x188;
            break;
        case 7:                                     /* switch 2 */
            var_r2_2 = 0x1B2;
            break;
        case 8:                                     /* switch 2 */
            var_r2_2 = 0x3E;
            break;
        case 9:                                     /* switch 2 */
            var_r2_2 = 0x3C;
            break;
        default:                                    /* switch 2 */
            var_r2_2 = 0;
            break;
        }
    }
    sp0 = 0;
    sp0.unk1 = 0;
    var_r2_3 = 1;
    sp98 = var_r3_2 + 1;
    var_r0_3 = &(GenObj *)((u8 *)sp0 + 4);
    do {
        var_r0_3->unk0 = 0;
        var_r0_3->unk4 = 0;
        var_r0_3->unk8 = 0;
        var_r0_3->unkC = 0;
        var_r0_3->unk10 = 0;
        var_r0_3->unk14 = 0;
        var_r0_3->unk18 = 0;
        var_r0_3->unk1C = 0;
        var_r0_3 += 0x20;
        var_r2_3 -= 1;
    } while (var_r2_3 != -1);
    var_r4_2 = &(GenObj *)((u8 *)sp0 + 0x44);
    var_r5 = 1;
    var_r1_6 = 0;
    do {
        spA0 = var_r1_6;
        func_08007874(var_r4_2);
        var_r4_2->unk4 = var_r1_6;
        var_r4_2 += 8;
        var_r5 -= 1;
    } while (var_r5 != -1);
    var_r7 = 0;
    var_r5_2 = &(GenObj *)((u8 *)sp0 + 4);
loop_46:
    temp_r4 = *temp_r8;
    temp_r4->unkC(sp94, temp_r8, var_r2_2);
    temp_r4->unk10(&sp54, temp_r8, *((u8 *)sp74 + (var_r7 * 4)));
    memcpy(&sp54, &sp54, 0x20);
    temp_r0_2 = (GenObj *)((u8 *)sp90 + 0xC);
    var_r5_2->unk0 = (s32) sp90->unk0;
    var_r5_2->unk4 = (s32) sp90->unk4;
    var_r5_2->unk8 = (s32) sp90->unk8;
    temp_r1 = (GenObj *)((u8 *)var_r5_2 + 0xC);
    var_r5_2->unkC = (s32) sp90->unkC;
    temp_r1->unk4 = (s32) temp_r0_2->unk4;
    temp_r1->unk8 = (s32) temp_r0_2->unk8;
    temp_r1->unkC = (s32) temp_r0_2->unkC;
    ((GenObj *)((u8 *)temp_r1 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_2 + 0xC))->unk4;
    var_r1_7 = 0;
    if (var_r5_2->unk8 != 0) {
        var_r1_7 = (u16) var_r5_2->unkC;
    }
    if (var_r1_7 != 0) {
        var_r1_8 = 0;
        if (var_r5_2->unk10 != 0) {
            var_r1_8 = var_r5_2->unk14;
        }
        if (var_r1_8 != 0) {
            var_r5_2 += 0x20;
            var_r7 += 1;
            if (var_r7 <= 1U) {
                goto loop_46;
            }
        }
    }
    func_080E4438(sp84, &sp0);
    var_r4_3 = sp90;
    if (sp8C != var_r4_3) {
        do {
            var_r4_3 -= 8;
            func_08007C28(var_r4_3, var_r4_3->unk4);
            func_080079E8(var_r4_3, 2);
        } while (&sp44 != var_r4_3);
    }
    var_r3_2 = sp98;
    if (var_r3_2 <= 9U) {
        goto loop_16;
    }
    temp_r2 = (*sp80)->unk48(sp80, 3);
    temp_r0_3 = *sp9C;
    if (temp_r0_3 <= 0xFU) {
        temp_r0_4 = sp9C + (temp_r0_3 + 4);
        if (temp_r0_4 != 0) {
            *temp_r0_4 = temp_r2;
        }
        *sp9C += 1;
    }
    *sp7C = temp_r0;
    return sp7C;
}
