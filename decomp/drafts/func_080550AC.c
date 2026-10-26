s32 free(void *);                                     /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008F0C(s32 *, void *, s32, s32);             /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk2;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    u8 _pad10[8908];
    s32 unk22DC;
} GenObj;
void func_080550AC(GenObj *arg0, s32 arg1) {
GenObj sp0;
    s32 sp10;
    s32 sp14;
    void *sp18;
    s32 *var_r0_3;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 var_r1;
    s32 var_r3_2;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r8;
    GenObj *temp_r1_3;
    void *temp_r1_4;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r3;
    GenObj *temp_r6;
    GenObj *var_r0;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_5;
    GenObj *var_r2;
    GenObj *var_r2_2;
    GenObj *var_r3;
    void *var_r4_3;

    var_r1 = arg1;
    var_r4 = 0x11;
    if (var_r1 > 0) {
        var_r0 = (GenObj *)((u8 *)arg0 + 0x219E);
        do {
            var_r0->unk0 = 0x3046;
            var_r0->unk2 = 0x3047;
            var_r1 -= 0x19;
            var_r0 -= 0x40;
            var_r4 -= 1;
        } while (var_r1 > 0);
    }
    arg0->unk22DC = (s8) ((var_r4 * 8) + 8);
    temp_r1 = var_r4 << 6;
    temp_r3 = (GenObj *)((u8 *)arg0 + 0x1D5E);
    *((u8 *)temp_r3 + temp_r1) = 0x304A;
    temp_r2 = (GenObj *)((u8 *)arg0 + 0x1D60);
    *((u8 *)temp_r2 + temp_r1) = 0x304B;
    temp_r4 = var_r4 - 1;
    temp_r1_2 = temp_r4 << 6;
    *((u8 *)temp_r3 + temp_r1_2) = 0x3048;
    *((u8 *)temp_r2 + temp_r1_2) = 0x3049;
    var_r4_2 = temp_r4 - 1;
    if (var_r4_2 > 5) {
        var_r0_2 = (var_r4_2 << 6) + 0x1D5E + arg0;
        do {
            var_r0_2->unk0 = 0x3044;
            var_r0_2->unk2 = 0x3045;
            var_r0_2 -= 0x40;
            var_r4_2 -= 1;
        } while (var_r4_2 > 5);
    }
    temp_r6 = func_08008910(arg0);
    func_08008F0C(&sp0, (GenObj *)((u8 *)arg0 + 0x1D5A), 0x0600F000, 0x500);
    temp_r1_3 = temp_r6->unk4;
    if (temp_r1_3 != temp_r6->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) sp0;
            temp_r1_3->unk4 = (s32) sp0.unk4;
            temp_r1_3->unk8 = (s32) sp0.unk8;
            temp_r1_3->unkC = (s32) sp0.unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
        return;
    }
    sp14 = 1;
    temp_r4_2 = (s32) (temp_r1_3 - temp_r6->unk0) >> 4;
    sp10 = temp_r4_2;
    var_r0_3 = &sp10;
    if ((u32) temp_r4_2 < 1U) {
        var_r0_3 = &sp14;
    }
    temp_r0 = temp_r4_2 + *var_r0_3;
    if (temp_r0 != 0) {
        temp_r4_3 = temp_r0 * 0x10;
        var_r0_4 = malloc(temp_r4_3);
        var_r8 = temp_r4_3;
        if (var_r0_4 == 0) {
            var_r0_4 = func_080D3BC0(var_r8);
        }
    } else {
        var_r0_4 = 0;
        var_r8 = 0;
    }
    sp18 = var_r0_4;
    var_r2 = temp_r6->unk0;
    var_r3 = var_r0_4;
    if (var_r2 != temp_r1_3) {
        do {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) var_r2->unk0;
                var_r3->unk4 = (s32) var_r2->unk4;
                var_r3->unk8 = (s32) var_r2->unk8;
                var_r3->unkC = (s32) var_r2->unkC;
            }
            var_r2 += 0x10;
            var_r3 += 0x10;
        } while (var_r2 != temp_r1_3);
    }
    if (sp14 == 1) {
        if (var_r3 != 0) {
            var_r3->unk0 = (s32) sp0;
            var_r3->unk4 = (s32) sp0.unk4;
            var_r3->unk8 = (s32) sp0.unk8;
            var_r3->unkC = (s32) sp0.unkC;
        }
        var_r4_3 = (GenObj *)((u8 *)var_r3 + 0x10);
    } else {
        var_r3_2 = sp14;
        var_r2_2 = var_r3;
        if (var_r3_2 != 0) {
            do {
                if (var_r2_2 != 0) {
                    var_r2_2->unk0 = (s32) sp0;
                    var_r2_2->unk4 = (s32) sp0.unk4;
                    var_r2_2->unk8 = (s32) sp0.unk8;
                    var_r2_2->unkC = (s32) sp0.unkC;
                }
                var_r3_2 -= 1;
                var_r2_2 += 0x10;
            } while (var_r3_2 != 0);
        }
        var_r4_3 = var_r2_2;
    }
    temp_r2_2 = temp_r6->unk4;
    temp_r1_4 = temp_r6->unk0;
    var_r0_5 = temp_r1_4;
    if (temp_r1_4 != temp_r2_2) {
        do {
            var_r0_5 += 0x10;
        } while (var_r0_5 != temp_r2_2);
    }
    if (temp_r1_4 != 0) {
        free(temp_r1_4);
    }
    temp_r6->unk0 = sp18;
    temp_r6->unk4 = var_r4_3;
    temp_r6->unkC = (void *) (sp18 + var_r8);
}
