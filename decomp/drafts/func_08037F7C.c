s32 func_030004DC(s32, s32, s32, s32, s32, void *, s32, s32, void *); /* extern */
s32 func_080A480C(void *, s32, void *);               /* extern */
s32 func_080A4944(void *, void *, s32);               /* extern */

void func_08037F7C(void *arg0, void *arg1) {
    s32 sp14;
    s32 sp18;
    s16 temp_r3_2;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r0;
    s32 var_r2;
    void *temp_r3;
    void *temp_r5;
    void *temp_r6;

    temp_r3 = arg0->unk0;
    temp_r3_2 = temp_r3->unkE;
    var_r2 = temp_r3_2 - arg1->unkE;
    temp_r1 = arg1->unk8;
    sp14 = arg1->unk0;
    sp18 = temp_r1;
    if (arg0->unk54 != 0) {
        var_r2 -= 2;
    }
    temp_r5 = arg0 + 8;
    temp_r6 = arg0 + 0x30;
    temp_r1_2 = arg0->unk10;
    if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {
        var_r0 = func_030004DC(temp_r1, temp_r3->unkA - arg1->unkC, var_r2, 0xAA, 0x8000 - temp_r3_2, temp_r6, arg0->unk8, (s32) temp_r5->unkC, arg0 + 0x18);
    } else {
        var_r0 = 0;
    }
    if ((var_r0 != 0) && (temp_r5->unk48 != 0)) {
        func_080A480C(temp_r5, sp14, temp_r6 + 8);
        func_080A4944(temp_r5, temp_r6 + 0x10, 1);
        temp_r5->unk48 = 0U;
    }
}
