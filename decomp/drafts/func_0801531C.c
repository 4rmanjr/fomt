s32 __builtin_delete();                               /* extern */
s32 __builtin_new(s32);                             /* extern */
s32 func_08011934(void *, s32, ? *);                  /* extern */
s32 func_08050DC8(s32, s32, s32, s32);                /* extern */
s32 memcpy(s32 *, ? *, u32);                            /* extern */
? *method_08009AF4__C4Farm(s32);                    /* extern */
s32 strcpy(s32, ? *);                                 /* extern */
u32 strlen(s32 *);                                    /* extern */
extern ? gUnk_080F0654;
extern ? gUnk_080F0658;
extern ? gUnk_080F065C;
extern ? gUnk_080F0660;
extern ? gUnk_080F067C;
extern ? gUnk_080F0684;
extern ? gUnk_080F068C;
extern ? gUnk_080F069C;
extern ? gUnk_080F06B4;
extern ? gUnk_080F06D0;

void func_0801531C(void *arg0, ? argDD, ? argDE, ? argDF) {
    ? *temp_r4;
    ? *temp_r6;
    ? *temp_r6_2;
    ? *temp_r6_3;
    ? *temp_r6_4;
    ? *temp_r7;
    ? *temp_r7_10;
    ? *temp_r7_11;
    ? *temp_r7_12;
    ? *temp_r7_13;
    ? *temp_r7_14;
    ? *temp_r7_2;
    ? *temp_r7_3;
    ? *temp_r7_4;
    ? *temp_r7_5;
    ? *temp_r7_6;
    ? *temp_r7_7;
    ? *temp_r7_8;
    ? *temp_r7_9;
    ? *temp_r8;
    s32 temp_r0_20;
    s32 temp_r1;
    u32 temp_r0_10;
    u32 temp_r0_11;
    u32 temp_r0_12;
    u32 temp_r0_13;
    u32 temp_r0_14;
    u32 temp_r0_15;
    u32 temp_r0_16;
    u32 temp_r0_17;
    u32 temp_r0_18;
    u32 temp_r0_19;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r0_8;
    u32 temp_r0_9;
    u32 temp_r5;
    u32 temp_r5_10;
    u32 temp_r5_11;
    u32 temp_r5_12;
    u32 temp_r5_13;
    u32 temp_r5_14;
    u32 temp_r5_15;
    u32 temp_r5_16;
    u32 temp_r5_17;
    u32 temp_r5_18;
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
    u32 var_r4_11;
    u32 var_r4_12;
    u32 var_r4_13;
    u32 var_r4_14;
    u32 var_r4_15;
    u32 var_r4_16;
    u32 var_r4_17;
    u32 var_r4_18;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;
    u32 var_r4_5;
    u32 var_r4_6;
    u32 var_r4_7;
    u32 var_r4_8;
    u32 var_r4_9;
    void *temp_r0;

    temp_r0 = arg0->unk4;
    if (temp_r0->unkF0 != 0) {
        __builtin_delete();
    }
    temp_r0->unkF0 = 0;
    unksp0 = 0;
    memcpy(&argDD, &gUnk_080F0654, 3U);
    memcpy(&argDE, &gUnk_080F0658, 2U);
    memcpy(&argDF, &gUnk_080F065C, 2U);
    temp_r0_2 = strlen(&unksp0);
    temp_r6 = &unksp0 + temp_r0_2;
    temp_r5 = 0x383 - temp_r0_2;
    if (temp_r5 != 0) {
        var_r4 = strlen(&gUnk_080F0660);
        if (var_r4 > temp_r5) {
            var_r4 = temp_r5;
        }
        memcpy(temp_r6, &gUnk_080F0660, var_r4);
        *(temp_r6 + var_r4) = 0;
    }
    temp_r0_3 = strlen(&unksp0);
    temp_r7 = &unksp0 + temp_r0_3;
    temp_r5_2 = 0x383 - temp_r0_3;
    if (temp_r5_2 != 0) {
        var_r4_2 = strlen(&gUnk_080F0654);
        if (var_r4_2 > temp_r5_2) {
            var_r4_2 = temp_r5_2;
        }
        memcpy(temp_r7, &gUnk_080F0654, var_r4_2);
        *(temp_r7 + var_r4_2) = 0;
    }
    temp_r0_4 = strlen(&unksp0);
    temp_r7_2 = &unksp0 + temp_r0_4;
    temp_r5_3 = 0x383 - temp_r0_4;
    if (temp_r5_3 != 0) {
        var_r4_3 = strlen(&gUnk_080F067C);
        if (var_r4_3 > temp_r5_3) {
            var_r4_3 = temp_r5_3;
        }
        memcpy(temp_r7_2, &gUnk_080F067C, var_r4_3);
        *(temp_r7_2 + var_r4_3) = 0;
    }
    temp_r8 = method_08009AF4__C4Farm(temp_r0->unk8C + 0x14);
    temp_r4 = temp_r8;
    temp_r0_5 = strlen(&unksp0);
    temp_r7_3 = &unksp0 + temp_r0_5;
    temp_r5_4 = 0x383 - temp_r0_5;
    if (temp_r5_4 != 0) {
        var_r4_4 = strlen(temp_r4);
        if (var_r4_4 > temp_r5_4) {
            var_r4_4 = temp_r5_4;
        }
        memcpy(temp_r7_3, temp_r8, var_r4_4);
        *(temp_r7_3 + var_r4_4) = 0;
    }
    temp_r0_6 = strlen(&unksp0);
    temp_r7_4 = &unksp0 + temp_r0_6;
    temp_r5_5 = 0x383 - temp_r0_6;
    if (temp_r5_5 != 0) {
        var_r4_5 = strlen(&gUnk_080F0684);
        if (var_r4_5 > temp_r5_5) {
            var_r4_5 = temp_r5_5;
        }
        memcpy(temp_r7_4, &gUnk_080F0684, var_r4_5);
        *(temp_r7_4 + var_r4_5) = 0;
    }
    temp_r0_7 = strlen(&unksp0);
    temp_r7_5 = &unksp0 + temp_r0_7;
    temp_r5_6 = 0x383 - temp_r0_7;
    if (temp_r5_6 != 0) {
        var_r4_6 = strlen(&gUnk_080F0654);
        if (var_r4_6 > temp_r5_6) {
            var_r4_6 = temp_r5_6;
        }
        memcpy(temp_r7_5, &gUnk_080F0654, var_r4_6);
        *(temp_r7_5 + var_r4_6) = 0;
    }
    temp_r0_8 = strlen(&unksp0);
    temp_r7_6 = &unksp0 + temp_r0_8;
    temp_r5_7 = 0x383 - temp_r0_8;
    if (temp_r5_7 != 0) {
        var_r4_7 = strlen(&gUnk_080F068C);
        if (var_r4_7 > temp_r5_7) {
            var_r4_7 = temp_r5_7;
        }
        memcpy(temp_r7_6, &gUnk_080F068C, var_r4_7);
        *(temp_r7_6 + var_r4_7) = 0;
    }
    temp_r0_9 = strlen(&unksp0);
    temp_r7_7 = &unksp0 + temp_r0_9;
    temp_r5_8 = 0x383 - temp_r0_9;
    if (temp_r5_8 != 0) {
        var_r4_8 = strlen(&gUnk_080F0658);
        if (var_r4_8 > temp_r5_8) {
            var_r4_8 = temp_r5_8;
        }
        memcpy(temp_r7_7, &gUnk_080F0658, var_r4_8);
        *(temp_r7_7 + var_r4_8) = 0;
    }
    temp_r0_10 = strlen(&unksp0);
    temp_r7_8 = &unksp0 + temp_r0_10;
    temp_r5_9 = 0x383 - temp_r0_10;
    if (temp_r5_9 != 0) {
        var_r4_9 = strlen(&gUnk_080F0654);
        if (var_r4_9 > temp_r5_9) {
            var_r4_9 = temp_r5_9;
        }
        memcpy(temp_r7_8, &gUnk_080F0654, var_r4_9);
        *(temp_r7_8 + var_r4_9) = 0;
    }
    temp_r0_11 = strlen(&unksp0);
    temp_r7_9 = &unksp0 + temp_r0_11;
    temp_r5_10 = 0x383 - temp_r0_11;
    if (temp_r5_10 != 0) {
        var_r4_10 = strlen(&gUnk_080F069C);
        if (var_r4_10 > temp_r5_10) {
            var_r4_10 = temp_r5_10;
        }
        memcpy(temp_r7_9, &gUnk_080F069C, var_r4_10);
        *(temp_r7_9 + var_r4_10) = 0;
    }
    temp_r0_12 = strlen(&unksp0);
    temp_r7_10 = &unksp0 + temp_r0_12;
    temp_r5_11 = 0x383 - temp_r0_12;
    if (temp_r5_11 != 0) {
        var_r4_11 = strlen(&gUnk_080F0658);
        if (var_r4_11 > temp_r5_11) {
            var_r4_11 = temp_r5_11;
        }
        memcpy(temp_r7_10, &gUnk_080F0658, var_r4_11);
        *(temp_r7_10 + var_r4_11) = 0;
    }
    temp_r0_13 = strlen(&unksp0);
    temp_r7_11 = &unksp0 + temp_r0_13;
    temp_r5_12 = 0x383 - temp_r0_13;
    if (temp_r5_12 != 0) {
        var_r4_12 = strlen(&gUnk_080F0654);
        if (var_r4_12 > temp_r5_12) {
            var_r4_12 = temp_r5_12;
        }
        memcpy(temp_r7_11, &gUnk_080F0654, var_r4_12);
        *(temp_r7_11 + var_r4_12) = 0;
    }
    temp_r0_14 = strlen(&unksp0);
    temp_r6_2 = &unksp0 + temp_r0_14;
    temp_r5_13 = 0x383 - temp_r0_14;
    if (temp_r5_13 != 0) {
        var_r4_13 = strlen(&gUnk_080F065C);
        if (var_r4_13 > temp_r5_13) {
            var_r4_13 = temp_r5_13;
        }
        memcpy(temp_r6_2, &gUnk_080F065C, var_r4_13);
        *(temp_r6_2 + var_r4_13) = 0;
    }
    func_08011934(temp_r0, 1, &unksp0);
    temp_r0_15 = strlen(&unksp0);
    temp_r6_3 = &unksp0 + temp_r0_15;
    temp_r5_14 = 0x383 - temp_r0_15;
    if (temp_r5_14 != 0) {
        var_r4_14 = strlen(&gUnk_080F065C);
        if (var_r4_14 > temp_r5_14) {
            var_r4_14 = temp_r5_14;
        }
        memcpy(temp_r6_3, &gUnk_080F065C, var_r4_14);
        *(temp_r6_3 + var_r4_14) = 0;
    }
    temp_r0_16 = strlen(&unksp0);
    temp_r7_12 = &unksp0 + temp_r0_16;
    temp_r5_15 = 0x383 - temp_r0_16;
    if (temp_r5_15 != 0) {
        var_r4_15 = strlen(&gUnk_080F06B4);
        if (var_r4_15 > temp_r5_15) {
            var_r4_15 = temp_r5_15;
        }
        memcpy(temp_r7_12, &gUnk_080F06B4, var_r4_15);
        *(temp_r7_12 + var_r4_15) = 0;
    }
    temp_r0_17 = strlen(&unksp0);
    temp_r7_13 = &unksp0 + temp_r0_17;
    temp_r5_16 = 0x383 - temp_r0_17;
    if (temp_r5_16 != 0) {
        var_r4_16 = strlen(&gUnk_080F0654);
        if (var_r4_16 > temp_r5_16) {
            var_r4_16 = temp_r5_16;
        }
        memcpy(temp_r7_13, &gUnk_080F0654, var_r4_16);
        *(temp_r7_13 + var_r4_16) = 0;
    }
    temp_r0_18 = strlen(&unksp0);
    temp_r7_14 = &unksp0 + temp_r0_18;
    temp_r5_17 = 0x383 - temp_r0_18;
    if (temp_r5_17 != 0) {
        var_r4_17 = strlen(&gUnk_080F06D0);
        if (var_r4_17 > temp_r5_17) {
            var_r4_17 = temp_r5_17;
        }
        memcpy(temp_r7_14, &gUnk_080F06D0, var_r4_17);
        *(temp_r7_14 + var_r4_17) = 0;
    }
    temp_r0_19 = strlen(&unksp0);
    temp_r6_4 = &unksp0 + temp_r0_19;
    temp_r5_18 = 0x383 - temp_r0_19;
    if (temp_r5_18 != 0) {
        var_r4_18 = strlen(&gUnk_080F0658);
        if (var_r4_18 > temp_r5_18) {
            var_r4_18 = temp_r5_18;
        }
        memcpy(temp_r6_4, &gUnk_080F0658, var_r4_18);
        *(temp_r6_4 + var_r4_18) = 0;
    }
    temp_r0_20 = __builtin_new(0x384);
    strcpy(temp_r0_20, &unksp0);
    if (temp_r0_20 != temp_r0->unkF0) {
        __builtin_delete();
    }
    temp_r0->unkF0 = temp_r0_20;
    temp_r1 = temp_r0->unkAC;
    if (temp_r1 != 0) {
        func_08050DC8(temp_r1, temp_r0_20, 0x100, (temp_r0 + 0xAC)->unk4);
        temp_r0->unk9C = 0x10;
    }
}
