u32 GetCapacity__C4Barn(s32);                       /* extern */
u32 GetCapacity__C4Coop(s32);                       /* extern */
s32 GetChicken__4CoopUi(s32, u32);                  /* extern */
s32 GetCow__4BarnUi(s32, u32);                      /* extern */
s32 *GetName__C6Animal(s32);                          /* extern */
s32 GetSheep__4BarnUi(s32, u32);                    /* extern */
s32 memcpy(s32 *, s32 *, u32);                            /* extern */
s32 method_0809B514__C9Livestock();                 /* extern */
u32 strlen(s32 *);                                    /* extern */
extern s32 gUnk_080F0654;
extern s32 gUnk_080F0658;

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
    u8 _pad14[120];
    s32 unk8C;
} GenObj;
void func_08011934(void *arg0, s32 arg1, s32 *arg2) {
s32 sp0;
s32 sp4;
    GenObj *sp8;
    s32 spC;
    s32 sp10;
    u32 sp14;
    u32 sp18;
    u32 sp1C;
    u32 sp20;
    u32 sp24;
    s32 *sp28;
    s32 *temp_r4;
    s32 *temp_r6;
    s32 *temp_r6_10;
    s32 *temp_r6_2;
    s32 *temp_r6_3;
    s32 *temp_r6_4;
    s32 *temp_r6_5;
    s32 *temp_r6_6;
    s32 *temp_r6_7;
    s32 *temp_r6_8;
    s32 *temp_r6_9;
    s32 *temp_r7;
    s32 *temp_r7_2;
    s32 *temp_r7_3;
    s32 *temp_r8;
    s32 *temp_r8_2;
    s32 temp_r0_10;
    s32 temp_r0_2;
    s32 temp_r0_6;
    u32 temp_r0;
    u32 temp_r0_11;
    u32 temp_r0_12;
    u32 temp_r0_13;
    u32 temp_r0_14;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r0_7;
    u32 temp_r0_8;
    u32 temp_r0_9;
    u32 temp_r1;
    u32 temp_r1_2;
    u32 temp_r5;
    u32 temp_r5_10;
    u32 temp_r5_2;
    u32 temp_r5_3;
    u32 temp_r5_4;
    u32 temp_r5_5;
    u32 temp_r5_6;
    u32 temp_r5_7;
    u32 temp_r5_8;
    u32 temp_r5_9;
    u32 var_r4;
    u32 var_r4_10;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;
    u32 var_r4_5;
    u32 var_r4_6;
    u32 var_r4_7;
    u32 var_r4_8;
    u32 var_r4_9;
    u32 var_sl;

    sp8 = arg0;
    spC = arg1;
    memcpy(&sp0, &gUnk_080F0654, 3U);
    memcpy(&sp4, &gUnk_080F0658, 2U);
    sp10 = 1;
    var_sl = 0;
    sp14 = GetCapacity__C4Coop(sp8->unk8C + 0x410);
    sp18 = 0;
    if (sp14 > 0U) {
        do {
            temp_r0_2 = GetChicken__4CoopUi(sp8->unk8C + 0x410, sp18);
            if ((temp_r0_2 != 0) && (method_0809B514__C9Livestock() == spC)) {
                if (sp10 != 0) {
                    sp10 = 0;
                } else {
                    temp_r0_3 = strlen(arg2);
                    temp_r6 = arg2 + temp_r0_3;
                    temp_r5 = 0x383 - temp_r0_3;
                    if (temp_r5 != 0) {
                        var_r4 = strlen(&gUnk_080F0654);
                        if (var_r4 > temp_r5) {
                            var_r4 = temp_r5;
                        }
                        memcpy(temp_r6, &gUnk_080F0654, var_r4);
                        *((u8 *)temp_r6 + var_r4) = sp0.unk10;
                    }
                }
                temp_r7 = GetName__C6Animal(temp_r0_2);
                temp_r4 = temp_r7;
                temp_r0_4 = strlen(arg2);
                temp_r6_2 = arg2 + temp_r0_4;
                temp_r5_2 = 0x383 - temp_r0_4;
                if (temp_r5_2 != 0) {
                    var_r4_2 = strlen(temp_r4);
                    if (var_r4_2 > temp_r5_2) {
                        var_r4_2 = temp_r5_2;
                    }
                    memcpy(temp_r6_2, temp_r7, var_r4_2);
                    *((u8 *)temp_r6_2 + var_r4_2) = 0;
                }
                var_sl += 1;
                if (var_sl > 2U) {
                    temp_r0_5 = strlen(arg2);
                    temp_r6_3 = arg2 + temp_r0_5;
                    temp_r5_3 = 0x383 - temp_r0_5;
                    if (temp_r5_3 != 0) {
                        var_r4_3 = strlen(&gUnk_080F0658);
                        if (var_r4_3 > temp_r5_3) {
                            var_r4_3 = temp_r5_3;
                        }
                        memcpy(temp_r6_3, &gUnk_080F0658, var_r4_3);
                        *((u8 *)temp_r6_3 + var_r4_3) = 0;
                    }
                    var_sl = 0;
                }
            }
            temp_r0 = sp18 + 1;
            sp18 = temp_r0;
        } while (temp_r0 < sp14);
    }
    sp1C = GetCapacity__C4Barn(sp8->unk8C + 0x5F0);
    sp20 = 0;
    sp28 = (GenObj *)((u8 *)sp8 + 0x8C);
    if (sp1C > 0U) {
        do {
            temp_r0_6 = GetCow__4BarnUi(*sp28 + 0x5F0, sp20);
            if ((temp_r0_6 != 0) && (method_0809B514__C9Livestock() == spC)) {
                if (sp10 != 0) {
                    sp10 = 0;
                } else {
                    temp_r0_7 = strlen(arg2);
                    temp_r6_4 = arg2 + temp_r0_7;
                    temp_r5_4 = 0x383 - temp_r0_7;
                    if (temp_r5_4 != 0) {
                        var_r4_4 = strlen(&gUnk_080F0654);
                        if (var_r4_4 > temp_r5_4) {
                            var_r4_4 = temp_r5_4;
                        }
                        memcpy(temp_r6_4, &gUnk_080F0654, var_r4_4);
                        *((u8 *)temp_r6_4 + var_r4_4) = sp0.unk10;
                    }
                }
                temp_r8 = GetName__C6Animal(temp_r0_6);
                temp_r6_5 = temp_r8;
                temp_r0_8 = strlen(arg2);
                temp_r7_2 = arg2 + temp_r0_8;
                temp_r5_5 = 0x383 - temp_r0_8;
                if (temp_r5_5 != 0) {
                    var_r4_5 = strlen(temp_r6_5);
                    if (var_r4_5 > temp_r5_5) {
                        var_r4_5 = temp_r5_5;
                    }
                    memcpy(temp_r7_2, temp_r8, var_r4_5);
                    *((u8 *)temp_r7_2 + var_r4_5) = 0;
                }
                var_sl += 1;
                if (var_sl > 2U) {
                    temp_r0_9 = strlen(arg2);
                    temp_r6_6 = arg2 + temp_r0_9;
                    temp_r5_6 = 0x383 - temp_r0_9;
                    if (temp_r5_6 != 0) {
                        var_r4_6 = strlen(&gUnk_080F0658);
                        if (var_r4_6 > temp_r5_6) {
                            var_r4_6 = temp_r5_6;
                        }
                        memcpy(temp_r6_6, &gUnk_080F0658, var_r4_6);
                        *((u8 *)temp_r6_6 + var_r4_6) = 0;
                    }
                    var_sl = 0;
                }
            }
            temp_r1 = sp20 + 1;
            sp20 = temp_r1;
        } while (temp_r1 < sp1C);
    }
    sp24 = 0;
    if (sp1C > 0U) {
        do {
            temp_r0_10 = GetSheep__4BarnUi(*sp28 + 0x5F0, sp24);
            if ((temp_r0_10 != 0) && (method_0809B514__C9Livestock() == spC)) {
                if (sp10 != 0) {
                    sp10 = 0;
                } else {
                    temp_r0_11 = strlen(arg2);
                    temp_r6_7 = arg2 + temp_r0_11;
                    temp_r5_7 = 0x383 - temp_r0_11;
                    if (temp_r5_7 != 0) {
                        var_r4_7 = strlen(&gUnk_080F0654);
                        if (var_r4_7 > temp_r5_7) {
                            var_r4_7 = temp_r5_7;
                        }
                        memcpy(temp_r6_7, &gUnk_080F0654, var_r4_7);
                        *((u8 *)temp_r6_7 + var_r4_7) = sp0.unk10;
                    }
                }
                temp_r8_2 = GetName__C6Animal(temp_r0_10);
                temp_r6_8 = temp_r8_2;
                temp_r0_12 = strlen(arg2);
                temp_r7_3 = arg2 + temp_r0_12;
                temp_r5_8 = 0x383 - temp_r0_12;
                if (temp_r5_8 != 0) {
                    var_r4_8 = strlen(temp_r6_8);
                    if (var_r4_8 > temp_r5_8) {
                        var_r4_8 = temp_r5_8;
                    }
                    memcpy(temp_r7_3, temp_r8_2, var_r4_8);
                    *((u8 *)temp_r7_3 + var_r4_8) = 0;
                }
                var_sl += 1;
                if (var_sl > 2U) {
                    temp_r0_13 = strlen(arg2);
                    temp_r6_9 = arg2 + temp_r0_13;
                    temp_r5_9 = 0x383 - temp_r0_13;
                    if (temp_r5_9 != 0) {
                        var_r4_9 = strlen(&gUnk_080F0658);
                        if (var_r4_9 > temp_r5_9) {
                            var_r4_9 = temp_r5_9;
                        }
                        memcpy(temp_r6_9, &gUnk_080F0658, var_r4_9);
                        *((u8 *)temp_r6_9 + var_r4_9) = 0;
                    }
                    var_sl = 0;
                }
            }
            temp_r1_2 = sp24 + 1;
            sp24 = temp_r1_2;
        } while (temp_r1_2 < sp1C);
    }
    if (var_sl != 0) {
        temp_r0_14 = strlen(arg2);
        temp_r6_10 = arg2 + temp_r0_14;
        temp_r5_10 = 0x383 - temp_r0_14;
        if (temp_r5_10 != 0) {
            var_r4_10 = strlen(&gUnk_080F0658);
            if (var_r4_10 > temp_r5_10) {
                var_r4_10 = temp_r5_10;
            }
            memcpy(temp_r6_10, &gUnk_080F0658, var_r4_10);
            *((u8 *)temp_r6_10 + var_r4_10) = 0;
        }
    }
}
