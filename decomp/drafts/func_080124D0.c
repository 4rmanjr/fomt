s32 __builtin_new(s32);                             /* extern */
s32 func_0800770C(s32 *);                               /* extern */
s32 func_08007714(s32 *, s32);                          /* extern */
s32 func_0800835C(s32 *);                               /* extern */
s32 func_08008364(s32 *, s32);                          /* extern */
s32 func_08050CC0(s32, s32, s32, s32, s32, ? *, ? *); /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
s32 func_08050D34(s32);                             /* extern */
s32 func_08050D5C(s32);                               /* extern */

void func_080124D0(void *arg0) {
s32 spC;
s32 sp10;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r7;

    temp_r7 = arg0->unk4;
    temp_r1 = temp_r7->unkB4;
    if ((temp_r1 != 0) && (temp_r1 != 0)) {
        temp_r1->unk4->unk8(temp_r1, 3);
    }
    temp_r7->unkB4 = 0;
    temp_r1_2 = temp_r7->unkB8;
    if ((temp_r1_2 != 0) && (temp_r1_2 != 0)) {
        temp_r1_2->unk4->unk8(temp_r1_2, 3);
    }
    temp_r7->unkB8 = 0;
    temp_r5 = temp_r7->unkAC;
    if (temp_r5 == 0) {
        if ((temp_r7 + 0xAC)->unk3C == 0) {
            temp_r4 = __builtin_new(4);
            func_0800835C(&spC);
            func_0800770C(&sp10);
            temp_r0 = func_08050CC0(temp_r4, 0, 0x1F, 0, 1, &spC, &sp10);
            temp_r0_2 = temp_r7->unkAC;
            if ((temp_r0 != temp_r0_2) && (temp_r0_2 != 0)) {
                func_08050D0C(temp_r0_2, 3);
            }
            temp_r7->unkAC = temp_r0;
            func_08007714(&sp10, 2);
            func_08008364(&spC, 2);
        } else {
            temp_r4_2 = __builtin_new(4);
            func_0800835C(&spC);
            func_0800770C(&sp10);
            temp_r0_3 = func_08050CC0(temp_r4_2, 0, 0x1F, 0, temp_r5, &spC, &sp10);
            temp_r0_4 = temp_r7->unkAC;
            if ((temp_r0_3 != temp_r0_4) && (temp_r0_4 != 0)) {
                func_08050D0C(temp_r0_4, 3);
            }
            temp_r7->unkAC = temp_r0_3;
            func_08007714(&sp10, 2);
            func_08008364(&spC, 2);
        }
    }
    if (func_08050D34(temp_r7->unkAC) != 3) {
        func_08050D5C(temp_r7->unkAC);
        temp_r7->unk9C = 0xE;
    }
}
