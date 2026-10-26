s32 __builtin_new(s32);                             /* extern */
s32 func_0803AB30(s32, void *);                     /* extern */
s32 func_0803AC78(s32, s32);                          /* extern */
s32 func_080A56DC(void *, s32, s32, s32, s32);        /* extern */
s32 func_080AAFC8(s32, void *, s32);                /* extern */
s32 func_080AB2E4(s32, s32);                          /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[8];
    s32 unk10;
    struct GenObj *unk14;
    u8 _pad18[4108];
    s32 unk1024;
    s32 unk1028;
} GenObj;
void func_080AD3B0(GenObj *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r5;
    void **var_r4;
    void **var_r4_2;
    GenObj *temp_r2;
    GenObj *temp_r2_2;
    void *temp_r5_2;

    var_r4 = (GenObj *)((u8 *)arg0 + 8);
    temp_r5 = (GenObj *)((u8 *)arg0 + 0x198);
    if (var_r4 != temp_r5) {
        do {
            temp_r2 = *var_r4;
            if (temp_r2 != 0) {
                ((void (*)(void *,...))(temp_r2->unk14->unk14))(temp_r2);
            }
            var_r4 += 4;
        } while (var_r4 != temp_r5);
    }
    temp_r0 = arg0->unk1024;
    if ((temp_r0 != 0) && (temp_r0 != 0)) {
        func_0803AC78(temp_r0, 3);
    }
    arg0->unk1024 = 0;
    temp_r0_2 = arg0->unk1028;
    if ((temp_r0_2 != 0) && (temp_r0_2 != 0)) {
        func_080AB2E4(temp_r0_2, 3);
    }
    arg0->unk1028 = 0;
    func_080A56DC(arg0->unk4, arg1, 0, 0, 0x1E);
    temp_r0_3 = func_0803AB30(__builtin_new(0xA0), arg0);
    temp_r0_4 = arg0->unk1024;
    if ((temp_r0_3 != temp_r0_4) && (temp_r0_4 != 0)) {
        func_0803AC78(temp_r0_4, 3);
    }
    arg0->unk1024 = temp_r0_3;
    temp_r0_5 = func_080AAFC8(__builtin_new(4), arg0, arg0->unk4->unk4);
    temp_r0_6 = arg0->unk1028;
    if ((temp_r0_5 != temp_r0_6) && (temp_r0_6 != 0)) {
        func_080AB2E4(temp_r0_6, 3);
    }
    arg0->unk1028 = temp_r0_5;
    var_r4_2 = (GenObj *)((u8 *)arg0 + 8);
    temp_r5_2 = (GenObj *)((u8 *)arg0 + 0x198);
    if (var_r4_2 != temp_r5_2) {
        do {
            temp_r2_2 = *var_r4_2;
            if (temp_r2_2 != 0) {
                ((void (*)(void *,...))(temp_r2_2->unk14->unk10))(temp_r2_2);
            }
            var_r4_2 += 4;
        } while (var_r4_2 != temp_r5_2);
    }
}
