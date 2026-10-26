s32 func_030004DC(s32, s32, s32, s32);              /* extern */
s32 func_0803836C(void *);                          /* extern */
s32 func_0803AE58(s32, s32, s32, s32);                /* extern */
s32 func_080A480C(void *, s32, void *);               /* extern */
s32 func_080A4944(void *, void *, s32);               /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    s32 unk8;
    struct GenObj *unkA;
    struct GenObj *unkC;
    struct GenObj *unkE;
    s32 unk10;
    u8 _pad14[18];
    struct GenObj *unk26;
    u8 _pad2A[6];
    s32 unk30;
    s32 unk34;
    u8 _pad38[4];
    struct GenObj *unk3C;
    struct GenObj *unk3D;
    struct GenObj *unk3E;
} GenObj;
void func_080385B0(GenObj *arg0, GenObj *arg1) {
    s32 sp0;
    s32 *sp4;
    s32 sp8;
    s32 spC;
    void *sp10;
s32 sp14;
    GenObj *sp34;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 *sp4C;
    s16 temp_r4;
    s16 temp_r6;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 temp_r1_2;
    s32 var_r0;
    s32 var_r7;
    s32 var_r8;
    u16 temp_r0_4;
    u8 temp_r0_2;
    void **temp_r1;
    GenObj *temp_r0;
    GenObj *temp_r6_2;

    temp_r0 = arg0->unk0;
    temp_r6 = temp_r0->unkA;
    sp3C = temp_r6 - arg1->unkC;
    temp_r4 = temp_r0->unkE;
    sp40 = temp_r4 - arg1->unkE;
    temp_r0_2 = temp_r0->unk26;
    sp44 = (s32) temp_r0_2;
    var_r8 = 0x8000 - temp_r4;
    if (temp_r0_2 != 0) {
        var_r8 -= 1;
    }
    sp34 = arg1->unk0;
    sp34.unk4 = (s32) arg1->unk8;
    sp48 = sp40;
    var_r7 = 2;
    if (sp44 == 0) {
        temp_r0_3 = func_0803836C(temp_r0);
        sp48 = sp40 - temp_r0_3;
        if ((temp_r0_3 > 0xF) && ((temp_r0_4 = temp_r0->unk4, ((s32) temp_r0_4 > 8)) || ((temp_r0_4 == 2) && ((u32) (temp_r6 + 0xFFFFFEF0) <= 0x2AFU) && ((s32) temp_r4 > 0xAF) && ((s32) temp_r4 <= 0x24F)))) {
            var_r7 = 1;
        }
    }
    temp_r6_2 = (GenObj *)((u8 *)arg0 + 8);
    sp4C = &sp0 + 0x34;
    temp_r1 = arg0->unk30;
    (*temp_r1)->unk10(&sp14, temp_r1, *(arg0->unk34 + (arg0->unk3C * 4)));
    temp_r1_2 = arg0->unk10;
    if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {
        sp0 = var_r8;
        sp4 = &sp14;
        sp8 = arg0->unk8;
        spC = (s32) temp_r6_2->unkC;
        sp10 = (GenObj *)((u8 *)arg0 + 0x18);
        var_r0 = func_030004DC(sp4C->unk4, sp3C, sp48, (var_r7 * 4) | var_r7 | (var_r7 * 0x10) | (var_r7 << 6));
    } else {
        var_r0 = 0;
    }
    if ((var_r0 != 0) && (temp_r6_2->unk3C != 0)) {
        func_080A480C(temp_r6_2, sp4C->unk0, &sp14 + 8);
        if (temp_r6_2->unk3D != 0) {
            func_080A4944(temp_r6_2, &sp14 + 0x10, 1);
        } else if (temp_r6_2->unk3E == 0) {
            func_080A4944(temp_r6_2, &sp14 + 0x10, 1);
            temp_r6_2->unk3E = 1U;
        }
        temp_r6_2->unk3C = 0U;
    }
    if (sp44 == 0) {
        temp_r0_5 = (*temp_r0->unk0)->unk58();
        sp0 = sp44;
        func_0803AE58(temp_r0_5, arg1->unk8, sp3C, sp40);
    }
}
