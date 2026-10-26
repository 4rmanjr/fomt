s32 GetChicken__4CoopUi(s32, s32);                  /* extern */
u8 *GetDesc__C4Food(s32 *);                           /* extern */
u8 *GetDesc__C7Article();                           /* extern */
s32 GetGrowthStage__C3Dog(s32);                     /* extern */
s32 GetGrowthStage__C7Chicken();                    /* extern */
u8 *GetName__C4Food(s32 *);                           /* extern */
u8 *GetName__C6Animal(s32);                         /* extern */
u8 *GetName__C7Article();                           /* extern */
u8 IsSick__C9Livestock(s32);                        /* extern */
u8 IsUnhappy__C9Livestock(s32);                     /* extern */
u32 func_0800F204(s32);                             /* extern */
s32 func_0800F20C(s32 *, s32);                          /* extern */
s8 func_0800F258(s32);                              /* extern */
s32 func_0800F344(s32);                             /* extern */
s32 func_0800F388(s32);                             /* extern */
s32 func_0800FFD0(s32);                             /* extern */
s32 func_0804EC84(s32, u8 *, s32);                    /* extern */
s32 memcpy(u8 *, u8 *, u32);                          /* extern */
u32 strlen(u8 *);                                   /* extern */
extern u8 gUnk_08117A0C;
extern u8 gUnk_08117A14;
extern u8 gUnk_08117A1C;
extern u8 gUnk_08117A28;
extern u8 gUnk_08117A30;
extern u8 gUnk_08117A38;
extern u8 gUnk_08117A44;
extern u8 gUnk_08117A50;
extern u8 gUnk_08117A5C;
extern u8 gUnk_08117A78;
extern u8 gUnk_08117A84;
extern u8 *gUnk_08117AA4;

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[5];
    s32 unk11;
} GenObj;
u8 *func_080CF67C(GenObj *arg0, u8 *arg1, s32 arg2) {
s32 sp0;
    u8 sp4;
    s8 sp10;
    s32 temp_r4;
    s32 temp_sb;
    u32 temp_r0;
    u32 temp_r0_10;
    u32 temp_r0_11;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_7;
    u32 temp_r0_8;
    u32 temp_r0_9;
    u32 temp_r5;
    u32 temp_r5_2;
    u32 temp_r5_3;
    u32 temp_r5_4;
    u32 temp_r5_5;
    u32 temp_r5_6;
    u32 temp_r5_7;
    u32 var_r0_4;
    u32 var_r4_10;
    u32 var_r4_11;
    u32 var_r4_12;
    u32 var_r4_13;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;
    u32 var_r4_5;
    u32 var_r4_6;
    u32 var_r4_7;
    u32 var_r4_8;
    u32 var_r4_9;
    u32 var_r5_2;
    u8 *temp_r1;
    u8 *temp_r4_2;
    u8 *temp_r7;
    u8 *temp_r7_2;
    u8 *temp_r7_3;
    u8 *temp_r7_4;
    u8 *temp_r7_5;
    u8 *temp_r7_6;
    u8 *temp_r8;
    u8 *temp_r8_2;
    u8 *var_r0;
    u8 *var_r0_2;
    u8 *var_r0_3;
    u8 *var_r4;
    u8 *var_r5;
    u8 *var_r5_3;
    u8 *var_r7;
    u8 *var_r8;
    u8 temp_r0_5;
    u8 temp_r0_6;
    u8 var_r1;

    var_r4 = 0;
    *arg1 = 0;
    temp_r0 = func_0800F204(arg2);
    switch (temp_r0) {                              /* irregular */
    case 0:
        if ((func_0800F388(arg2) << 0x18) != 0) {
            func_0800F20C(&sp0, arg2);
            var_r0 = GetName__C4Food(&sp0);
block_8:
            var_r4_2 = strlen();
            if (var_r4_2 > 0x63U) {
                var_r4_2 = 0x63;
            }
            memcpy(arg1, var_r0, var_r4_2);
            arg1[var_r4_2] = 0;
            temp_r8 = gUnk_08117AA4;
            temp_r0_2 = strlen(arg1);
            temp_r7 = &arg1[temp_r0_2];
            temp_r5 = 0x63 - temp_r0_2;
            if (temp_r5 == 0) {

            } else {
                var_r4_3 = strlen(temp_r8);
                if (var_r4_3 > temp_r5) {
                    var_r4_3 = temp_r5;
                }
                memcpy(temp_r7, temp_r8, var_r4_3);
                var_r0_2 = &temp_r7[var_r4_3];
                var_r1 = 0;
block_15:
                *var_r0_2 = var_r1;
            }
block_67:
            var_r4 = arg1;
        } else {
            func_0800F20C(&sp0, arg2);
            var_r4 = GetDesc__C4Food(&sp0);
        }
        break;
    case 1:
        if ((func_0800F388(arg2) << 0x18) != 0) {
            sp10 = func_0800F258(arg2);
            var_r0 = GetName__C7Article();
            goto block_8;
        }
        sp0.unk11 = func_0800F258(arg2);
        var_r4 = GetDesc__C7Article();
        break;
    case 2:
        if (GetGrowthStage__C3Dog(arg0->unk8 + 0x1C70) == 1) {
            var_r5 = &gUnk_08117A0C;
        } else {
            var_r5 = &gUnk_08117A14;
        }
        var_r4_4 = strlen(var_r5);
        if (var_r4_4 > 0x63U) {
            var_r4_4 = 0x63;
        }
        memcpy(arg1, var_r5, var_r4_4);
        arg1[var_r4_4] = 0;
        var_r8 = GetName__C6Animal(arg0->unk8 + 0x1C70);
        temp_r0_3 = strlen(arg1);
        var_r7 = &arg1[temp_r0_3];
        var_r5_2 = 0x63 - temp_r0_3;
        if (var_r5_2 == 0) {

        } else {
            var_r0_3 = var_r8;
block_64:
            var_r4_5 = strlen(var_r0_3);
            if (var_r4_5 > var_r5_2) {
                var_r4_5 = var_r5_2;
            }
            memcpy(var_r7, var_r8, var_r4_5);
            var_r7[var_r4_5] = 0;
        }
        goto block_67;
    case 3:
        temp_r4 = arg0->unk8 + 0x410;
        temp_sb = GetChicken__4CoopUi(temp_r4, func_0800F344(arg2));
        if (GetGrowthStage__C7Chicken() == 1) {
            var_r5_3 = &gUnk_08117A1C;
        } else {
            var_r5_3 = &gUnk_08117A28;
        }
        var_r4_6 = strlen(var_r5_3);
        if (var_r4_6 > 0x63U) {
            var_r4_6 = 0x63;
        }
        memcpy(arg1, var_r5_3, var_r4_6);
        arg1[var_r4_6] = 0;
        temp_r8_2 = GetName__C6Animal(temp_sb);
        temp_r4_2 = temp_r8_2;
        temp_r0_4 = strlen(arg1);
        temp_r7_2 = &arg1[temp_r0_4];
        temp_r5_2 = 0x63 - temp_r0_4;
        if (temp_r5_2 != 0) {
            var_r4_7 = strlen(temp_r4_2);
            if (var_r4_7 > temp_r5_2) {
                var_r4_7 = temp_r5_2;
            }
            memcpy(temp_r7_2, temp_r8_2, var_r4_7);
            temp_r7_2[var_r4_7] = 0;
        }
        temp_r0_5 = IsSick__C9Livestock(temp_sb);
        if (temp_r0_5 != 0) {
            var_r8 = &gUnk_08117A30;
            var_r0_4 = strlen(arg1);
            var_r7 = &arg1[var_r0_4];
block_62:
            var_r5_2 = 0x63 - var_r0_4;
            if (var_r5_2 != 0) {
                var_r0_3 = var_r8;
                goto block_64;
            }
        } else {
            temp_r0_6 = IsUnhappy__C9Livestock(temp_sb);
            if (temp_r0_6 != 0) {
                temp_r0_7 = strlen(arg1);
                temp_r7_3 = &arg1[temp_r0_7];
                temp_r5_3 = 0x63 - temp_r0_7;
                if (temp_r5_3 == 0) {

                } else {
                    var_r4_8 = strlen(&gUnk_08117A38);
                    if (var_r4_8 > temp_r5_3) {
                        var_r4_8 = temp_r5_3;
                    }
                    memcpy(temp_r7_3, &gUnk_08117A38, var_r4_8);
                    var_r0_2 = &temp_r7_3[var_r4_8];
                    var_r1 = temp_r0_5;
                    goto block_15;
                }
            } else {
                temp_r0_8 = strlen(arg1);
                temp_r7_4 = &arg1[temp_r0_8];
                temp_r5_4 = 0x63 - temp_r0_8;
                if (temp_r5_4 == 0) {

                } else {
                    var_r4_9 = strlen(&gUnk_08117A44);
                    if (var_r4_9 > temp_r5_4) {
                        var_r4_9 = temp_r5_4;
                    }
                    memcpy(temp_r7_4, &gUnk_08117A44, var_r4_9);
                    var_r0_2 = &temp_r7_4[var_r4_9];
                    var_r1 = temp_r0_6;
                    goto block_15;
                }
            }
        }
        goto block_67;
    case 4:
        var_r4_10 = strlen(&gUnk_08117A50);
        if (var_r4_10 > 0x63U) {
            var_r4_10 = 0x63;
        }
        memcpy(arg1, &gUnk_08117A50, var_r4_10);
        arg1[var_r4_10] = 0;
        func_0804EC84(func_0800FFD0(arg0->unk8 + 0x1CA0), &sp4, 0);
        temp_r0_9 = strlen(arg1);
        temp_r7_5 = &arg1[temp_r0_9];
        temp_r5_5 = 0x63 - temp_r0_9;
        if (temp_r5_5 != 0) {
            var_r4_11 = strlen(&gUnk_08117A5C);
            if (var_r4_11 > temp_r5_5) {
                var_r4_11 = temp_r5_5;
            }
            memcpy(temp_r7_5, &gUnk_08117A5C, var_r4_11);
            temp_r7_5[var_r4_11] = 0;
        }
        temp_r0_10 = strlen(arg1);
        temp_r7_6 = &arg1[temp_r0_10];
        temp_r5_6 = 0x63 - temp_r0_10;
        if (temp_r5_6 != 0) {
            var_r4_12 = strlen(&gUnk_08117A78);
            if (var_r4_12 > temp_r5_6) {
                var_r4_12 = temp_r5_6;
            }
            memcpy(temp_r7_6, &gUnk_08117A78, var_r4_12);
            temp_r7_6[var_r4_12] = 0;
        }
        temp_r0_11 = strlen(arg1);
        temp_r1 = &arg1[temp_r0_11];
        temp_r5_7 = 0x63 - temp_r0_11;
        if (temp_r5_7 != 0) {
            var_r4_13 = strlen(&sp4);
            if (var_r4_13 > temp_r5_7) {
                var_r4_13 = temp_r5_7;
            }
            memcpy(temp_r1, &sp4, var_r4_13);
            temp_r1[var_r4_13] = 0;
        }
        var_r8 = &gUnk_08117A84;
        var_r0_4 = strlen(arg1);
        var_r7 = &arg1[var_r0_4];
        goto block_62;
    }
    return var_r4;
}
