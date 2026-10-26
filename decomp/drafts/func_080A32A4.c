s16 func_080074C0(void *, s32);                     /* extern */
s16 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_0805E860(void *, u32);                       /* extern */
s32 func_0805E8F0(void *);                            /* extern */
s32 func_0805E99C(s32, s32, u16, s32 *);                /* extern */
s32 func_080A3588(void *, s32, s32, s16, s32, s32);   /* extern */
s32 func_080A3618(void *, s32, s32, s32, s32);        /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk2;
    struct GenObj *unk3;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk11;
    u8 _pad15[3];
    s32 unk18;
    u8 _pad1C[200];
    s32 unkE4;
    u8 _padE8[12];
    s32 unkF4;
    u8 _padF8[24];
    s32 unk110;
    s32 unk114;
    u8 _pad118[12];
    s32 unk124;
    u8 _pad128[184];
    s32 unk1E0;
    s32 unk1E2;
    s32 unk1E4;
    s32 unk1E5;
} GenObj;
void func_080A32A4(GenObj *arg0) {
s32 sp8;
    s32 sp14;
    s32 sp1C;
    GenObj *sp24;
    GenObj *sp2C;
    GenObj *sp34;
    GenObj *sp3C;
GenObj sp44;
    GenObj *sp64;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r0;
    s32 var_r1;
    s32 var_r2_3;
    s32 var_r4_2;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r7;
    s32 var_r8;
    u16 temp_r0_11;
    u16 var_r2;
    u16 var_r2_2;
    u16 var_r3;
    u8 *var_r4_3;
    void **temp_r1;
    void **temp_r1_4;
    void *temp_r0;
    GenObj *temp_r0_10;
    GenObj *temp_r0_2;
    void *temp_r0_3;
    GenObj *temp_r0_4;
    GenObj *temp_r0_5;
    void *temp_r0_6;
    GenObj *temp_r0_7;
    void *temp_r0_8;
    GenObj *temp_r0_9;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_5;
    void *temp_r1_6;
    GenObj *temp_r4;
    GenObj *var_r4;

    sp8 = 0;
    sp8.unk2 = 0;
    sp8.unk4 = 0;
    sp8.unk6 = 0;
    sp8.unk8 = 0;
    sp14 = 0;
    sp8.unk10 = 0;
    sp8.unk11 = 0;
    sp1C = 0;
    sp8.unk18 = 0;
    sp24 = 0;
    sp24.unk4 = 0U;
    sp2C = 0;
    sp2C.unk4 = 0;
    sp34 = 0;
    sp34.unk4 = 0;
    sp3C = 0;
    sp3C.unk4 = 0;
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x110);
    func_0805E8F0(temp_r4);
    temp_r1 = arg0->unk110;
    (*temp_r1)->unk10(&sp44, temp_r1, *(arg0->unk114 + (temp_r4->unkC * 4)));
    memcpy(&sp44, &sp44, 0x20);
    temp_r0 = &(GenObj *)((u8 *)sp44 + 0xC);
    sp24.unk0 = sp44;
    sp24.unk4 = (s32) sp44.unk4;
    sp24.unk8 = (s32) sp44.unk8;
    temp_r1_2 = &(GenObj *)((u8 *)sp24 + 0xC);
    sp24.unkC = (s32) sp44.unkC;
    temp_r1_2->unk4 = (s32) temp_r0->unk4;
    temp_r1_2->unk8 = (s32) temp_r0->unk8;
    temp_r1_2->unkC = (s32) temp_r0->unkC;
    ((GenObj *)((u8 *)temp_r1_2 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0 + 0xC))->unk4;
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x124);
    temp_r0_3 = (GenObj *)((u8 *)temp_r0_2 + 0xC);
    sp8 = (s32) arg0->unk124;
    sp8.unk4 = (s32) temp_r0_2->unk4;
    sp8.unk8 = (s32) temp_r0_2->unk8;
    temp_r1_3 = &(GenObj *)((u8 *)sp8 + 0xC);
    sp8.unkC = (s32) temp_r0_2->unkC;
    temp_r1_3->unk4 = (s32) temp_r0_3->unk4;
    temp_r1_3->unk8 = (s32) temp_r0_3->unk8;
    temp_r1_3->unkC = (s32) temp_r0_3->unkC;
    sp8 = (s16) ((arg0->unk1E4 * 0x22) + 0x10);
    sp8.unk2 = (s16) ((arg0->unk1E5 * 0x14) + 0x30);
    temp_r0_4 = (GenObj *)((u8 *)arg0 + 0x1A4);
    sp8.unk6 = func_08007D4C(temp_r0_4, temp_r0_4->unk4);
    temp_r0_5 = (GenObj *)((u8 *)arg0 + 0x1AC);
    sp8.unk4 = func_080074C0(temp_r0_5, temp_r0_5->unk4);
    sp8.unk8 = 1;
    sp8.unk18 = 1;
    temp_r3 = func_08008920(arg0);
    var_r2 = 0;
    if (sp24 != 0) {
        var_r2 = sp24.unk4;
    }
    func_0805E99C(temp_r3, sp24, var_r2, &sp8);
    sp64 = (GenObj *)((u8 *)arg0 + 0xE0);
    var_r4 = (GenObj *)((u8 *)arg0 + 0x1EC);
    var_r8 = 9;
    do {
        if (var_r4->unk0 != -1) {
            func_0805E860(sp64, (u32) (var_r4->unk2 << 0x1C) >> 0x1C);
            temp_r1_4 = sp64->unk0;
            (*temp_r1_4)->unk10(&sp44, temp_r1_4, *(arg0->unkE4 + (sp64->unkC * 4)));
            memcpy(&sp44, &sp44, 0x20);
            temp_r0_6 = &(GenObj *)((u8 *)sp44 + 0xC);
            sp24.unk0 = sp44;
            sp24.unk4 = (s32) sp44.unk4;
            sp24.unk8 = (s32) sp44.unk8;
            temp_r1_5 = &(GenObj *)((u8 *)sp24 + 0xC);
            sp24.unkC = (s32) sp44.unkC;
            temp_r1_5->unk4 = (s32) temp_r0_6->unk4;
            temp_r1_5->unk8 = (s32) temp_r0_6->unk8;
            temp_r1_5->unkC = (s32) temp_r0_6->unkC;
            ((GenObj *)((u8 *)temp_r1_5 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_6 + 0xC))->unk4;
            temp_r0_7 = (GenObj *)((u8 *)arg0 + 0xF4);
            temp_r0_8 = (GenObj *)((u8 *)temp_r0_7 + 0xC);
            sp8 = (s32) arg0->unkF4;
            sp8.unk4 = (s32) temp_r0_7->unk4;
            sp8.unk8 = (s32) temp_r0_7->unk8;
            temp_r1_6 = &(GenObj *)((u8 *)sp8 + 0xC);
            sp8.unkC = (s32) temp_r0_7->unkC;
            temp_r1_6->unk4 = (s32) temp_r0_8->unk4;
            temp_r1_6->unk8 = (s32) temp_r0_8->unk8;
            temp_r1_6->unkC = (s32) temp_r0_8->unkC;
            sp8 = (s16) ((((u8) var_r4->unk2 >> 4) * 0x22) + 0xA);
            sp8.unk2 = (s16) ((((u32) (var_r4->unk3 << 0x1C) >> 0x1C) * 0x14) + 0x2A);
            temp_r0_9 = (GenObj *)((u8 *)arg0 + 0x194);
            sp8.unk6 = (s16) (*((GenObj *)((u8 *)arg0 + 0x16C) + ((u32) (var_r4->unk2 << 0x1C) >> 0x1B)) + func_08007D4C(temp_r0_9, temp_r0_9->unk4));
            temp_r0_10 = (GenObj *)((u8 *)arg0 + 0x19C);
            sp8.unk4 = func_080074C0(temp_r0_10, temp_r0_10->unk4);
            sp8.unk8 = 1;
            sp8.unk18 = 1;
            temp_r3_2 = func_08008920(arg0);
            var_r2_2 = 0;
            if (sp24 != 0) {
                var_r2_2 = sp24.unk4;
            }
            func_0805E99C(temp_r3_2, sp24, var_r2_2, &sp8);
        }
        var_r4 += 4;
        var_r8 -= 1;
    } while (var_r8 >= 0);
    temp_r0_11 = arg0->unk1E0 + 1;
    var_r3 = temp_r0_11;
    if ((s32) (s16) temp_r0_11 > 0xC8) {
        var_r3 = 0xC8;
    }
    var_r4_2 = 0;
    func_080A3588(arg0, 0x11, 1, (s16) var_r3, 3, 0);
    func_080A3618(arg0, 0x41, 2, 0xA, 0);
    func_080A3618(arg0, 0x80, 2, arg0->unk1E2 + 0xB, 0);
    var_r5 = 6;
    do {
        var_r0 = 0;
        if (var_r4_2 == 0) {
            var_r0 = 1;
        } else if (var_r4_2 == 6) {
            var_r0 = 2;
        }
        func_080A3618(arg0, var_r5, 0x15, var_r4_2 + 0xF, var_r0);
        var_r5 += 0x22;
        var_r4_2 += 1;
    } while (var_r4_2 <= 6);
    var_r2_3 = 0;
    do {
        var_r5_2 = 0;
        var_r7 = 2;
        var_r4_3 = (var_r2_3 * 7) + 0x1B4 + arg0;
loop_18:
        if (*var_r4_3 != 0) {
            var_r1 = 0;
            if (var_r5_2 == 0) {
                var_r1 = 1;
            } else if (var_r5_2 == 6) {
                var_r1 = 2;
            }
            func_080A3588(arg0, var_r7, (var_r2_3 * 0x14) + 0x2A, (s16) *var_r4_3, 2, var_r1);
        }
        var_r4_3 += 1;
        var_r7 += 0x22;
        var_r5_2 += 1;
        if (var_r5_2 <= 6) {
            goto loop_18;
        }
        var_r2_3 += 1;
    } while (var_r2_3 <= 5);
}
