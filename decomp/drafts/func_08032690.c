s32 func_030004DC(s32, s32, s32, s32, s32, s32 *, s32, s32, void *); /* extern */
s32 func_0803AE58(s32, s32, s32, s32, s32);           /* extern */
s32 func_080A480C(void *, s32, void *);               /* extern */
s32 func_080A4944(void *, void *, s32);               /* extern */
extern s32 gUnk_080F1328;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk8;
    struct GenObj *unkA;
    struct GenObj *unkC;
    struct GenObj *unkE;
    s32 unk10;
    u8 _pad14[12];
    struct GenObj *unk20;
    struct GenObj *unk21;
    u8 _pad25[11];
    s32 unk30;
    s32 unk34;
    u8 _pad38[4];
    struct GenObj *unk3C;
    struct GenObj *unk3D;
    struct GenObj *unk3E;
    u8 _pad42[6];
    s32 unk48;
    u8 _pad4C[4];
    s32 unk50;
    u8 _pad54[28];
    s32 unk70;
    s32 unk74;
    u8 _pad78[16];
    s32 unk88;
    s32 unk89;
    s32 unk8A;
    s32 unk8B;
} GenObj;
void func_08032690(GenObj *arg0, GenObj *arg1) {
s32 sp14;
    GenObj *sp34;
    void **sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s16 temp_r1;
    s32 temp_r0_4;
    s32 temp_r1_5;
    s32 temp_r1_7;
    s32 temp_sb;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r4;
    s32 var_r4_2;
    u32 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_5;
    u8 temp_r1_2;
    void **temp_r1_4;
    void **temp_r1_6;
    GenObj *temp_r0;
    void *temp_r1_3;
    GenObj *temp_r5;
    GenObj *temp_r5_2;

    temp_r0 = arg0->unk0;
    sp3C = temp_r0->unk0;
    sp40 = temp_r0->unkA - arg1->unkC;
    temp_r1 = temp_r0->unkE;
    sp44 = temp_r1 - arg1->unkE;
    sp48 = 0x8000 - temp_r1;
    sp34 = arg1->unk0;
    sp34.unk4 = (s32) arg1->unk8;
    temp_r1_2 = arg0->unk8A;
    temp_r0_2 = (u32) (temp_r1_2 << 0x1E) >> 0x1E;
    if ((temp_r0_2 != 0) && ((s32) temp_r0_2 >= 0) && ((s32) temp_r0_2 <= 2)) {
        temp_r1_3 = ((temp_r1_2 >> 2) * 0x10) + ((temp_r0->unk20 * 4) + &gUnk_080F1328);
        temp_r5 = (GenObj *)((u8 *)arg0 + 0x48);
        sp4C = sp40 + temp_r1_3->unk0;
        temp_sb = sp44 + temp_r1_3->unk2;
        temp_r1_4 = arg0->unk70;
        (*temp_r1_4)->unk10(&sp14, temp_r1_4, *(arg0->unk74 + (((GenObj *)((u8 *)arg0 + 0x70))->unkC * 4)));
        temp_r1_5 = arg0->unk50;
        if ((s32) ((0 - temp_r1_5) | temp_r1_5) < 0) {
            var_r0 = func_030004DC(sp38, sp4C, temp_sb, 0x55, sp48, &sp14, arg0->unk48, (s32) temp_r5->unkC, (GenObj *)((u8 *)arg0 + 0x58));
        } else {
            var_r0 = 0;
        }
        if ((var_r0 != 0) && (temp_r5->unk3C != 0)) {
            func_080A480C(temp_r5, sp34, &sp14 + 8);
            if (temp_r5->unk3D != 0) {
                func_080A4944(temp_r5, &sp14 + 0x10, 1);
            } else if (temp_r5->unk3E == 0) {
                func_080A4944(temp_r5, &sp14 + 0x10, 1);
                temp_r5->unk3E = 1U;
            }
            temp_r5->unk3C = 0U;
        }
    }
    temp_r0_3 = arg0->unk8B;
    switch (temp_r0_3) {                            /* switch 1; irregular */
    default:                                        /* switch 1 */
        temp_r0_4 = temp_r0->unk21 & 3;
        var_r4 = (temp_r0_4 * 4) | temp_r0_4 | (temp_r0_4 * 0x10) | (temp_r0_4 << 6);
        break;
    case 1:                                         /* switch 1 */
        var_r4 = 0x19;
        break;
    case 2:                                         /* switch 1 */
        var_r4 = 0x1A;
        break;
    }
    temp_r5_2 = (GenObj *)((u8 *)arg0 + 8);
    temp_r1_6 = arg0->unk30;
    (*temp_r1_6)->unk10(&sp14, temp_r1_6, *(arg0->unk34 + (arg0->unk3C * 4)));
    temp_r1_7 = arg0->unk10;
    if ((s32) ((0 - temp_r1_7) | temp_r1_7) < 0) {
        var_r0_2 = func_030004DC(sp34.unk4, sp40, sp44, var_r4, sp48, &sp14, arg0->unk8, (s32) temp_r5_2->unkC, (GenObj *)((u8 *)arg0 + 0x18));
    } else {
        var_r0_2 = 0;
    }
    if ((var_r0_2 != 0) && (temp_r5_2->unk3C != 0)) {
        func_080A480C(temp_r5_2, sp34.unk0, &sp14 + 8);
        if (temp_r5_2->unk3D != 0) {
            func_080A4944(temp_r5_2, &sp14 + 0x10, 1);
        } else if (temp_r5_2->unk3E == 0) {
            func_080A4944(temp_r5_2, &sp14 + 0x10, 1);
            temp_r5_2->unk3E = 1U;
        }
        temp_r5_2->unk3C = 0U;
    }
    temp_r0_5 = arg0->unk88;
    switch (temp_r0_5) {                            /* switch 2; irregular */
    case 3:                                         /* switch 2 */
        return;
    case 0:                                         /* switch 2 */
        var_r4_2 = 0;
block_39:
        func_0803AE58((*sp3C)->unk58(sp3C), arg1->unk8, sp40, sp44 + arg0->unk89, var_r4_2);
        return;
    default:                                        /* switch 2 */
    case 1:                                         /* switch 2 */
        var_r4_2 = 1;
        goto block_39;
    case 2:                                         /* switch 2 */
        var_r4_2 = 2;
        goto block_39;
    }
}
