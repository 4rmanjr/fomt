s32 free();                                           /* extern */
s16 func_080074C0(void *, s32);                     /* extern */
s16 func_08007D4C(void *, s32);                     /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
s32 func_0805E8F0(void *);                            /* extern */
s32 func_0805E99C(s32, s32, u16, s32 *);                /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk11;
    u8 _pad15[3];
    s32 unk18;
    u8 _pad1C[4];
    s32 unk20;
    u8 _pad24[4];
    s32 unk28;
    u8 _pad2C[20];
    s32 unk40;
    s32 unk44;
    u8 _pad48[12];
    s32 unk54;
    u8 _pad58[28];
    s32 unk74;
    s32 unk78;
    u8 _pad7C[12];
    s32 unk88;
    u8 _pad8C[2092];
    s32 unk8B8;
} GenObj;
void func_08051D70(GenObj *arg0) {
s32 sp0;
    s32 spC;
    s32 sp14;
    GenObj *sp1C;
    GenObj *sp24;
    GenObj *sp2C;
    GenObj *sp34;
GenObj sp3C;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    GenObj *sp6C;
    void *sp70;
    s16 temp_r2;
    s16 temp_r2_3;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 temp_r0_11;
    s32 temp_r0_5;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 var_ip;
    s32 var_ip_2;
    s32 var_sb;
    s32 var_sb_2;
    u16 var_r2_3;
    u16 var_r2_6;
    u16 var_r3;
    u16 var_r3_3;
    void **temp_r1;
    void **temp_r1_5;
    void *temp_r0;
    GenObj *temp_r0_10;
    void *temp_r0_12;
    GenObj *temp_r0_2;
    void *temp_r0_3;
    GenObj *temp_r0_4;
    void *temp_r0_6;
    void *temp_r0_7;
    GenObj *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1_2;
    void *temp_r1_3;
    GenObj *temp_r1_4;
    void *temp_r1_6;
    void *temp_r1_7;
    GenObj *temp_r1_8;
    void *temp_r2_2;
    void *temp_r2_4;
    GenObj *temp_r4;
    GenObj *temp_r4_2;
    GenObj *temp_r4_5;
    GenObj *temp_r4_6;
    GenObj *temp_r5;
    void *temp_r5_2;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r1;
    void *var_r1_2;
    GenObj *var_r2;
    GenObj *var_r2_2;
    GenObj *var_r2_4;
    GenObj *var_r2_5;
    GenObj *var_r3_2;
    GenObj *var_r3_4;
    void *var_r4;
    void *var_r4_2;

    sp0 = 0;
    sp0.unk2 = 0;
    sp0.unk4 = 0;
    sp0.unk6 = 0;
    sp0.unk8 = 0;
    spC = 0;
    sp0.unk10 = 0;
    sp0.unk11 = 0;
    sp14 = 0;
    sp0.unk18 = 0;
    sp1C = 0;
    sp1C.unk4 = 0;
    sp24 = 0;
    sp24.unk4 = 0;
    sp2C = 0;
    sp2C.unk4 = 0;
    sp34 = 0;
    sp34.unk4 = 0;
    if ((s32) arg0->unk8B8 <= 0) {

    } else {
        temp_r4 = (GenObj *)((u8 *)arg0 + 0x40);
        func_0805E8F0(temp_r4);
        temp_r1 = arg0->unk40;
        (*temp_r1)->unk10(&sp3C, temp_r1, *(arg0->unk44 + (temp_r4->unkC * 4)));
        memcpy(&sp3C, &sp3C, 0x20);
        temp_r0 = &(GenObj *)((u8 *)sp3C + 0xC);
        sp1C.unk0 = sp3C;
        sp1C.unk4 = (s32) sp3C.unk4;
        sp1C.unk8 = (s32) sp3C.unk8;
        temp_r1_2 = &(GenObj *)((u8 *)sp1C + 0xC);
        sp1C.unkC = (s32) sp3C.unkC;
        temp_r1_2->unk4 = (s32) temp_r0->unk4;
        temp_r1_2->unk8 = (s32) temp_r0->unk8;
        temp_r1_2->unkC = (s32) temp_r0->unkC;
        ((GenObj *)((u8 *)temp_r1_2 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0 + 0xC))->unk4;
        temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x54);
        temp_r0_3 = (GenObj *)((u8 *)temp_r0_2 + 0xC);
        sp0 = (s32) arg0->unk54;
        sp0.unk4 = (s32) temp_r0_2->unk4;
        sp0.unk8 = (s32) temp_r0_2->unk8;
        temp_r1_3 = &(GenObj *)((u8 *)sp0 + 0xC);
        sp0.unkC = (s32) temp_r0_2->unkC;
        temp_r1_3->unk4 = (s32) temp_r0_3->unk4;
        temp_r1_3->unk8 = (s32) temp_r0_3->unk8;
        temp_r1_3->unkC = (s32) temp_r0_3->unkC;
        sp0 = 0xE8;
        sp0.unk2 = 0x1A;
        temp_r4_2 = (GenObj *)((u8 *)arg0 + 0xA8);
        sp0.unk6 = func_08007D4C(temp_r4_2, temp_r4_2->unk4);
        temp_r0_4 = (GenObj *)((u8 *)arg0 + 0xB0);
        sp0.unk4 = func_080074C0(temp_r0_4, temp_r0_4->unk4);
        sp0.unk8 = 1;
        sp0.unk18 = 1;
        temp_r5 = func_08008910(arg0);
        temp_r2 = func_08007D4C(temp_r4_2, temp_r4_2->unk4);
        var_r3 = 0;
        if (sp24 != 0) {
            var_r3 = sp0.unk28;
        }
        sp6C = temp_r5;
        func_08008F0C(&sp3C, sp24, (temp_r2 << 5) + 0x06010000, var_r3);
        temp_r1_4 = temp_r5->unk4;
        if (temp_r1_4 != temp_r5->unkC) {
            if (temp_r1_4 != 0) {
                temp_r1_4->unk0 = (s32) sp3C;
                temp_r1_4->unk4 = (s32) sp3C.unk4;
                temp_r1_4->unk8 = (s32) sp3C.unk8;
                temp_r1_4->unkC = (s32) sp3C.unkC;
            }
            sp6C->unk4 = (void *) (sp6C->unk4 + 0x10);
        } else {
            sp70 = temp_r1_4;
            sp60 = 1;
            temp_r4_3 = (s32) (temp_r1_4 - sp6C->unk0) >> 4;
            sp5C = temp_r4_3;
            var_r0 = &sp5C;
            if ((u32) temp_r4_3 < 1U) {
                var_r0 = &sp60;
            }
            temp_r0_5 = temp_r4_3 + *var_r0;
            if (temp_r0_5 != 0) {
                temp_r4_4 = temp_r0_5 * 0x10;
                var_r0_2 = malloc(temp_r4_4);
                var_sb = temp_r4_4;
                if (var_r0_2 == 0) {
                    var_r0_2 = func_080D3BC0(var_sb);
                }
            } else {
                var_r0_2 = 0;
                var_sb = 0;
            }
            var_r2 = sp6C->unk0;
            var_r3_2 = var_r0_2;
            if (var_r2 != sp70) {
                do {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) var_r2->unk0;
                        var_r3_2->unk4 = (s32) var_r2->unk4;
                        var_r3_2->unk8 = (s32) var_r2->unk8;
                        var_r3_2->unkC = (s32) var_r2->unkC;
                    }
                    var_r2 += 0x10;
                    var_r3_2 += 0x10;
                } while (var_r2 != sp70);
            }
            if (sp60 == 1) {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) sp3C;
                    var_r3_2->unk4 = (s32) sp3C.unk4;
                    var_r3_2->unk8 = (s32) sp3C.unk8;
                    var_r3_2->unkC = (s32) sp3C.unkC;
                }
                var_r4 = (GenObj *)((u8 *)var_r3_2 + 0x10);
            } else {
                var_ip = sp60;
                var_r2_2 = var_r3_2;
                if (sp60 != 0) {
                    do {
                        if (var_r2_2 != 0) {
                            var_r2_2->unk0 = (s32) sp3C;
                            var_r2_2->unk4 = (s32) sp3C.unk4;
                            var_r2_2->unk8 = (s32) sp3C.unk8;
                            var_r2_2->unkC = (s32) sp3C.unkC;
                        }
                        var_ip -= 1;
                        var_r2_2 += 0x10;
                    } while (var_ip != 0);
                }
                var_r4 = var_r2_2;
            }
            temp_r2_2 = sp6C->unk4;
            temp_r0_6 = sp6C->unk0;
            var_r1 = temp_r0_6;
            if (temp_r0_6 != temp_r2_2) {
                do {
                    var_r1 += 0x10;
                } while (var_r1 != temp_r2_2);
            }
            if (temp_r0_6 != 0) {
                free();
            }
            sp6C->unk0 = var_r0_2;
            sp6C->unk4 = var_r4;
            sp6C->unkC = (void *) (var_sb + var_r0_2);
        }
        temp_r3 = func_08008920(arg0);
        var_r2_3 = 0;
        if (sp1C != 0) {
            var_r2_3 = sp0.unk20;
        }
        func_0805E99C(temp_r3, sp1C, var_r2_3, &sp0);
    }
    if ((s32) arg0->unk8B8 > 0x1F) {
        return;
    }
    temp_r4_5 = (GenObj *)((u8 *)arg0 + 0x74);
    func_0805E8F0(temp_r4_5);
    temp_r1_5 = arg0->unk74;
    (*temp_r1_5)->unk10(&sp3C, temp_r1_5, *(arg0->unk78 + (temp_r4_5->unkC * 4)));
    memcpy(&sp3C, &sp3C, 0x20);
    temp_r0_7 = &(GenObj *)((u8 *)sp3C + 0xC);
    sp1C.unk0 = sp3C;
    sp1C.unk4 = (s32) sp3C.unk4;
    sp1C.unk8 = (s32) sp3C.unk8;
    temp_r1_6 = &(GenObj *)((u8 *)sp1C + 0xC);
    sp1C.unkC = (s32) sp3C.unkC;
    temp_r1_6->unk4 = (s32) temp_r0_7->unk4;
    temp_r1_6->unk8 = (s32) temp_r0_7->unk8;
    temp_r1_6->unkC = (s32) temp_r0_7->unkC;
    ((GenObj *)((u8 *)temp_r1_6 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_7 + 0xC))->unk4;
    temp_r0_8 = (GenObj *)((u8 *)arg0 + 0x88);
    temp_r0_9 = (GenObj *)((u8 *)temp_r0_8 + 0xC);
    sp0 = (s32) arg0->unk88;
    sp0.unk4 = (s32) temp_r0_8->unk4;
    sp0.unk8 = (s32) temp_r0_8->unk8;
    temp_r1_7 = &(GenObj *)((u8 *)sp0 + 0xC);
    sp0.unkC = (s32) temp_r0_8->unkC;
    temp_r1_7->unk4 = (s32) temp_r0_9->unk4;
    temp_r1_7->unk8 = (s32) temp_r0_9->unk8;
    temp_r1_7->unkC = (s32) temp_r0_9->unkC;
    sp0 = 0xE8;
    sp0.unk2 = 0x98;
    temp_r4_6 = (GenObj *)((u8 *)arg0 + 0xA8);
    sp0.unk6 = (s16) (func_08007D4C(temp_r4_6, temp_r4_6->unk4) + 4);
    temp_r0_10 = (GenObj *)((u8 *)arg0 + 0xB0);
    sp0.unk4 = func_080074C0(temp_r0_10, temp_r0_10->unk4);
    sp0.unk8 = 1;
    sp0.unk18 = 1;
    temp_r5_2 = func_08008910(arg0);
    temp_r2_3 = func_08007D4C(temp_r4_6, temp_r4_6->unk4);
    var_r3_3 = 0;
    if (sp24 != 0) {
        var_r3_3 = sp0.unk28;
    }
    sp6C = temp_r5_2;
    func_08008F0C(&sp3C, sp24, (temp_r2_3 << 5) + 0x06010080, var_r3_3);
    temp_r1_8 = sp6C->unk4;
    if (temp_r1_8 != sp6C->unkC) {
        if (temp_r1_8 != 0) {
            temp_r1_8->unk0 = (s32) sp3C;
            temp_r1_8->unk4 = (s32) sp3C.unk4;
            temp_r1_8->unk8 = (s32) sp3C.unk8;
            temp_r1_8->unkC = (s32) sp3C.unkC;
        }
        sp6C->unk4 = (void *) (sp6C->unk4 + 0x10);
    } else {
        sp70 = temp_r1_8;
        sp68 = 1;
        temp_r4_7 = (s32) (sp70 - sp6C->unk0) >> 4;
        sp64 = temp_r4_7;
        var_r0_3 = &sp64;
        if ((u32) temp_r4_7 < 1U) {
            var_r0_3 = &sp68;
        }
        temp_r0_11 = temp_r4_7 + *var_r0_3;
        if (temp_r0_11 != 0) {
            temp_r4_8 = temp_r0_11 * 0x10;
            var_r0_4 = malloc(temp_r4_8);
            var_sb_2 = temp_r4_8;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_sb_2);
            }
        } else {
            var_r0_4 = 0;
            var_sb_2 = 0;
        }
        var_r2_4 = sp6C->unk0;
        var_r3_4 = var_r0_4;
        if (var_r2_4 != sp70) {
            do {
                if (var_r3_4 != 0) {
                    var_r3_4->unk0 = (s32) var_r2_4->unk0;
                    var_r3_4->unk4 = (s32) var_r2_4->unk4;
                    var_r3_4->unk8 = (s32) var_r2_4->unk8;
                    var_r3_4->unkC = (s32) var_r2_4->unkC;
                }
                var_r2_4 += 0x10;
                var_r3_4 += 0x10;
            } while (var_r2_4 != sp70);
        }
        if (sp68 == 1) {
            if (var_r3_4 != 0) {
                var_r3_4->unk0 = (s32) sp3C;
                var_r3_4->unk4 = (s32) sp3C.unk4;
                var_r3_4->unk8 = (s32) sp3C.unk8;
                var_r3_4->unkC = (s32) sp3C.unkC;
            }
            var_r4_2 = (GenObj *)((u8 *)var_r3_4 + 0x10);
        } else {
            var_ip_2 = sp68;
            var_r2_5 = var_r3_4;
            if (sp68 != 0) {
                do {
                    if (var_r2_5 != 0) {
                        var_r2_5->unk0 = (s32) sp3C;
                        var_r2_5->unk4 = (s32) sp3C.unk4;
                        var_r2_5->unk8 = (s32) sp3C.unk8;
                        var_r2_5->unkC = (s32) sp3C.unkC;
                    }
                    var_ip_2 -= 1;
                    var_r2_5 += 0x10;
                } while (var_ip_2 != 0);
            }
            var_r4_2 = var_r2_5;
        }
        temp_r2_4 = sp6C->unk4;
        temp_r0_12 = sp6C->unk0;
        var_r1_2 = temp_r0_12;
        if (temp_r0_12 != temp_r2_4) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_4);
        }
        if (temp_r0_12 != 0) {
            free();
        }
        sp6C->unk0 = var_r0_4;
        sp6C->unk4 = var_r4_2;
        sp6C->unkC = (void *) (var_sb_2 + var_r0_4);
    }
    temp_r3_2 = func_08008920(arg0);
    var_r2_6 = 0;
    if (sp1C != 0) {
        var_r2_6 = sp0.unk20;
    }
    func_0805E99C(temp_r3_2, sp1C, var_r2_6, &sp0);
}
