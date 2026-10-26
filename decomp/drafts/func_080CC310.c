s32 free(void *);                                     /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_08008F0C(s32 *, void *, s32, s32);             /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E958(s32, void *, s32, s32, void *, s32, s32); /* extern */
s32 func_080CAE60(void *, s32, s32, s32, s32, s32, s32); /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 strlen(void *);                                 /* extern */
extern s32 gUnk_0811785C;
extern s32 gUnk_08117860;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk1;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk8;
    struct GenObj *unkC;
    u8 _pad10[516];
    s32 unk214;
    u8 _pad218[96];
    s32 unk278;
    s32 unk27C;
    u8 _pad280[12];
    s32 unk28C;
} GenObj;
void func_080CC310(GenObj *arg0) {
GenObj spC;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    void *sp30;
    void *sp34;
    s32 *var_r0;
    s32 temp_r0;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 var_r1;
    s32 var_r3_2;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_sb;
    u32 var_r4_2;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r2_3;
    void *temp_r4;
    GenObj *temp_r6;
    void *temp_r7;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r2;
    GenObj *var_r2_2;
    GenObj *var_r3;
    void *var_r5_2;

    var_r6 = 0x0600F01E;
    var_r5 = 0x0600F822;
    var_r4 = 0x13;
    do {
        func_08008EB8(0x30003, var_r5, 0x1C);
        func_08008EB8(0x03FF03FF, var_r6, 0x20);
        var_r6 += 0x40;
        var_r5 += 0x40;
        var_r4 -= 1;
    } while (var_r4 >= 0);
    sp1C = (gUnk_0811785C & 0xFFFFFF00) | (u8) (gUnk_0811785C + 0xF);
    if (arg0->unk27C != 0) {
        func_080CAE60(arg0, (sp1C.unk1 << 6) + ((sp1C * 2) + 0x0600F800), 0x1C, 2, 2, 1, 0x20);
    }
    var_r4_2 = 0;
    if ((u32) arg0->unk214 > 0U) {
        do {
            temp_r2 = *((var_r4_2 * 4) + &gUnk_08117860);
            sp1C = (temp_r2 & 0xFFFFFF00) | (u8) (temp_r2 + 0xF);
            func_080CAE60(arg0, (sp1C.unk1 << 6) + ((sp1C * 2) + 0x0600F800), 0x1C, 2, 2, 1, 0x20);
            var_r4_2 += 1;
        } while (var_r4_2 < (u32) arg0->unk214);
    }
    temp_r7 = (GenObj *)((u8 *)arg0 + 0x28C);
    var_r1 = 0;
    if (arg0->unk28C == 0) {
        var_r1 = 1;
    }
    if (var_r1 != 0) {
        return;
    }
    sp20 = 8;
    sp20.unk2 = 2;
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x10);
    func_0804E7A0(sp20, temp_r4, 0);
    temp_r2_2 = 0x40 - (strlen(temp_r7) * 8);
    sp24 = 8;
    sp24.unk2 = 2;
    func_0804E958(sp24, temp_r4, temp_r2_2, 0, temp_r7, var_r1, 1);
    temp_r6 = arg0->unk278;
    func_08008F0C(&spC, temp_r4, 0x06000D00, 0x200);
    temp_r1 = temp_r6->unk4;
    if (temp_r1 != temp_r6->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) spC;
            temp_r1->unk4 = (s32) spC.unk4;
            temp_r1->unk8 = (s32) spC.unk8;
            temp_r1->unkC = (s32) spC.unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
    } else {
        sp30 = temp_r1;
        sp2C = 1;
        temp_r4_2 = (s32) (sp30 - temp_r6->unk0) >> 4;
        sp28 = temp_r4_2;
        var_r0 = &sp28;
        if ((u32) temp_r4_2 < 1U) {
            var_r0 = &sp2C;
        }
        temp_r0 = temp_r4_2 + *var_r0;
        if (temp_r0 != 0) {
            temp_r4_3 = temp_r0 * 0x10;
            var_r0_2 = malloc(temp_r4_3);
            var_sb = temp_r4_3;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sb);
            }
        } else {
            var_r0_2 = 0;
            var_sb = 0;
        }
        sp34 = var_r0_2;
        var_r2 = temp_r6->unk0;
        var_r3 = var_r0_2;
loop_26:
        if (var_r2 != sp30) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) var_r2->unk0;
                var_r3->unk4 = (s32) var_r2->unk4;
                var_r3->unk8 = (s32) var_r2->unk8;
                var_r3->unkC = (s32) var_r2->unkC;
            }
            var_r2 += 0x10;
            var_r3 += 0x10;
            goto loop_26;
        }
        if (sp2C == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) spC;
                var_r3->unk4 = (s32) spC.unk4;
                var_r3->unk8 = (s32) spC.unk8;
                var_r3->unkC = (s32) spC.unkC;
            }
            var_r5_2 = (GenObj *)((u8 *)var_r3 + 0x10);
        } else {
            var_r3_2 = sp2C;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) spC;
                        var_r2_2->unk4 = (s32) spC.unk4;
                        var_r2_2->unk8 = (s32) spC.unk8;
                        var_r2_2->unkC = (s32) spC.unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r5_2 = var_r2_2;
        }
        temp_r2_3 = temp_r6->unk4;
        temp_r1_2 = temp_r6->unk0;
        var_r0_3 = temp_r1_2;
        if (temp_r1_2 != temp_r2_3) {
            do {
                var_r0_3 += 0x10;
            } while (var_r0_3 != temp_r2_3);
        }
        if (temp_r1_2 != 0) {
            free(temp_r1_2);
        }
        temp_r6->unk0 = sp34;
        temp_r6->unk4 = var_r5_2;
        temp_r6->unkC = (void *) (sp34 + var_sb);
    }
    func_080CAE60(arg0, 0x0600F02A, 0x68, 8, 2, 0, 0x20);
}
