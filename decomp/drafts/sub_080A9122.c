s32 Unpack(s32, s32);                                 /* extern */
s32 free(void *);                                     /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
s32 func_080AAF10(s32);                             /* extern */
s32 func_080AAF1C(s32);                             /* extern */
u16 func_080AAF28(s32, s32);                        /* extern */
void *func_080D3BC0(s32);                           /* extern */
s32 func_080E2B28(void *);                          /* extern */
void *malloc(s32);                                  /* extern */
extern s32 gUnk_08107204;
extern s32 gUnk_08107230;
extern s32 gUnk_0810725C;
extern s32 gUnk_08107288;
extern s32 gUnk_081072B4;
extern s32 gUnk_081072E0;
extern s32 gUnk_0810730C;
extern s32 vtable_unk_080E5A28;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk14;
    u8 _pad18[52];
    s32 unk4C;
    s32 unk4E;
    s32 unk4F;
    s32 unk51;
    s32 unk52;
    s32 unk54;
    s32 unk55;
    s32 unk56;
    u8 _pad5A[3];
    s32 unk5D;
    u8 _pad61[55];
    s32 unk98;
} GenObj;
void sub_080A9122(GenObj *arg1, GenObj *arg4, GenObj *arg12, ? arg18, u16 *arg64, u32 arg66, u32 arg67, GenObj *arg68, GenObj *arg69, s32 arg6B, void *arg6C, s32 arg71, void *arg73, void *arg74) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r1_4;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r8;
    GenObj *var_sl;
    u16 var_r3;
    u32 *var_r0;
    u32 temp_r0_4;
    u32 var_r3_3;
    GenObj *temp_r1_2;
    void *temp_r1_3;
    void *temp_r3;
    void *var_r0_2;
    void *var_r0_3;
    GenObj *var_r2;
    GenObj *var_r2_2;
    GenObj *var_r3_2;
    void *var_r5;

    if (arg1 != 0) {
        arg1->unk0 = (s32) saved_reg_r9->unk0;
        arg1->unk4 = (s32) saved_reg_r9->unk4;
        arg1->unk8 = (s32) saved_reg_r9->unk8;
        arg1->unkC = (s32) saved_reg_r9->unkC;
    }
    saved_reg_r7->unk4 = (void *) (saved_reg_r7->unk4 + 0x10);
    temp_r0 = arg68->unk0;
    switch (temp_r0) {                              /* irregular */
    case 8:
        break;
    case 29:
        arg68->unk98 = 1;
        break;
    case 6:
        if ((((u32) (arg69->unk5D << 0x1E) >> 0x1E) == 1) && (gUnk_0810725C.unk18 != 0)) {
            Unpack(gUnk_0810725C.unk18, (gUnk_0810725C.unk1C << 5) + 0x06000000);
        }
        if ((((u32) (arg69->unk54 << 0x1E) >> 0x1E) == 1) && (gUnk_0810730C.unk18 != 0)) {
            Unpack(gUnk_0810730C.unk18, (gUnk_0810730C.unk1C << 5) + 0x06000000);
        }
        if ((((u32) (arg69->unk4E << 0x17) >> 0x1E) == 1) && (gUnk_08107230.unk18 != 0)) {
            Unpack(gUnk_08107230.unk18, (gUnk_08107230.unk1C << 5) + 0x06000000);
        }
        if ((((u32) (arg69->unk4F << 0x1A) >> 0x1E) == 1) && (gUnk_08107230.unk18 != 0)) {
            Unpack(gUnk_08107230.unk18, (gUnk_08107230.unk1C << 5) + 0x06000000);
        }
        if (((u32) ((u8) arg69->unk4E << 0x1C) >> 0x1E) == 1) {
            if (gUnk_08107204.unk18 != 0) {
                Unpack(gUnk_08107204.unk18, (gUnk_08107204.unk1C << 5) + 0x06000000);
            }
            if (gUnk_081072B4.unk18 != 0) {
                Unpack(gUnk_081072B4.unk18, (gUnk_081072B4.unk1C << 5) + 0x06000000);
            }
        }
        if ((((u32) (arg69->unk51 << 0x1B) >> 0x1E) == 1) && (gUnk_08107288.unk18 != 0)) {
            Unpack(gUnk_08107288.unk18, (gUnk_08107288.unk1C << 5) + 0x06000000);
        }
        if ((((u32) (arg69->unk52 << 0x1D) >> 0x1E) == 1) && (gUnk_08107204.unk18 != 0)) {
            Unpack(gUnk_08107204.unk18, (gUnk_08107204.unk1C << 5) + 0x06000000);
        }
        if (((u32) (arg69->unk55 << 0x1B) >> 0x1E) == 1) {
            if (gUnk_08107204.unk18 != 0) {
                Unpack(gUnk_08107204.unk18, (gUnk_08107204.unk1C << 5) + 0x06000000);
            }
            if (gUnk_081072B4.unk18 != 0) {
                Unpack(gUnk_081072B4.unk18, (gUnk_081072B4.unk1C << 5) + 0x06000000);
            }
        }
        if ((((u32) (arg69->unk56 << 0x1D) >> 0x1E) == 1) && (gUnk_08107204.unk18 != 0)) {
            Unpack(gUnk_08107204.unk18, (gUnk_08107204.unk1C << 5) + 0x06000000);
        }
        if (((u8) arg69->unk4C >> 6) == 1) {
            if (gUnk_081072E0.unk18 != 0) {
                Unpack(gUnk_081072E0.unk18, (gUnk_081072E0.unk1C << 5) + 0x06000000);
            }
            if (gUnk_08107230.unk18 != 0) {
                Unpack(gUnk_08107230.unk18, (gUnk_08107230.unk1C << 5) + 0x06000000);
            }
        }
        break;
    }
    var_sl = func_080AAF10(arg71);
    temp_r0_2 = func_080AAF1C(arg71);
    arg6B = temp_r0_2;
    temp_r1 = var_sl ^ temp_r0_2;
    if ((s32) ((0 - temp_r1) | temp_r1) >= 0) {

    } else {
        arg6C = &(GenObj *)((u8 *)arg4 + 0x30);
loop_76:
        arg4->unkC(&arg64, &arg4, func_080AAF28(var_sl->unk10, 0));
        arg4->unk10(arg6C, &arg4, *arg64);
        var_r3 = 0;
        if (arg12 != 0) {
            var_r3 = arg12.unk4;
        }
        func_08008F0C(&arg18, arg12, (var_sl->unk14 << 5) + 0x06000000, var_r3);
        temp_r1_2 = saved_reg_r7->unk4;
        if (temp_r1_2 != saved_reg_r7->unkC) {
            if (temp_r1_2 != 0) {
                temp_r1_2->unk0 = (s32) arg18.unk0;
                temp_r1_2->unk4 = (s32) arg18.unk4;
                temp_r1_2->unk8 = (s32) arg18.unk8;
                temp_r1_2->unkC = (s32) arg18.unkC;
            }
            saved_reg_r7->unk4 = (void *) (saved_reg_r7->unk4 + 0x10);
        } else {
            arg74 = temp_r1_2;
            arg67 = 1;
            temp_r4 = (s32) (arg74 - saved_reg_r7->unk0) >> 4;
            var_r0 = &arg66;
            *var_r0 = temp_r4;
            if ((u32) temp_r4 < (u32) arg67) {
                var_r0 = &arg67;
            }
            temp_r0_3 = temp_r4 + *var_r0;
            if (temp_r0_3 != 0) {
                temp_r4_2 = temp_r0_3 * 0x10;
                var_r0_2 = malloc(temp_r4_2);
                var_r8 = temp_r4_2;
                if (var_r0_2 == 0) {
                    var_r0_2 = func_080D3BC0(var_r8);
                }
            } else {
                var_r0_2 = 0;
                var_r8 = 0;
            }
            arg73 = var_r0_2;
            var_r2 = saved_reg_r7->unk0;
            var_r3_2 = var_r0_2;
            if (var_r2 != arg74) {
                do {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) var_r2->unk0;
                        var_r3_2->unk4 = (s32) var_r2->unk4;
                        var_r3_2->unk8 = (s32) var_r2->unk8;
                        var_r3_2->unkC = (s32) var_r2->unkC;
                    }
                    var_r2 += 0x10;
                    var_r3_2 += 0x10;
                } while (var_r2 != arg74);
            }
            temp_r0_4 = arg67;
            if (temp_r0_4 == 1) {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) arg18.unk0;
                    var_r3_2->unk4 = (s32) arg18.unk4;
                    var_r3_2->unk8 = (s32) arg18.unk8;
                    var_r3_2->unkC = (s32) arg18.unkC;
                }
                var_r5 = (GenObj *)((u8 *)var_r3_2 + 0x10);
            } else {
                var_r3_3 = temp_r0_4;
                var_r2_2 = var_r3_2;
                if (var_r3_3 != 0) {
                    do {
                        if (var_r2_2 != 0) {
                            var_r2_2->unk0 = (s32) arg18.unk0;
                            var_r2_2->unk4 = (s32) arg18.unk4;
                            var_r2_2->unk8 = (s32) arg18.unk8;
                            var_r2_2->unkC = (s32) arg18.unkC;
                        }
                        var_r3_3 -= 1;
                        var_r2_2 += 0x10;
                    } while (var_r3_3 != 0);
                }
                var_r5 = var_r2_2;
            }
            temp_r1_3 = saved_reg_r7->unk4;
            temp_r3 = saved_reg_r7->unk0;
            var_r0_3 = temp_r3;
            if (temp_r3 != temp_r1_3) {
                do {
                    var_r0_3 += 0x10;
                } while (var_r0_3 != temp_r1_3);
            }
            if (temp_r3 != 0) {
                free(temp_r3);
            }
            saved_reg_r7->unk0 = arg73;
            saved_reg_r7->unk4 = var_r5;
            saved_reg_r7->unkC = (void *) (arg73 + var_r8);
        }
        var_sl = func_080E2B28((void *) var_sl);
        temp_r1_4 = var_sl ^ arg6B;
        if ((s32) ((0 - temp_r1_4) | temp_r1_4) < 0) {
            goto loop_76;
        }
    }
    arg4 = &vtable_unk_080E5A28;
}
