s32 free(void *);                                     /* extern */
void *func_08008910();                              /* extern */
s32 func_08008F0C(s32 *, s32 *, s32, s32);                /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern s32 gUnk_08750C8C;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
} GenObj;
void *func_080CA770(void *arg0, s32 arg1) {
GenObj sp0;
    s32 sp10;
    s32 sp14;
    GenObj *sp18;
    void *sp1C;
    s32 *var_r0;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r3_2;
    s32 var_sb;
    GenObj *temp_r1;
    void *temp_r1_2;
    void *temp_r2;
    GenObj *temp_r5;
    void *var_r0_2;
    void *var_r0_3;
    GenObj *var_r2;
    GenObj *var_r2_2;
    GenObj *var_r3;
    void *var_r4;

    sp18 = arg0;
    sp18->unk0 = 0;
    sp18->unk4 = 0x63;
    sp18->unk8 = 0;
    sp18->unkC = 0;
    sp18->unk10 = 0;
    sp18->unk14 = 1;
    sp18->unk18 = arg1;
    temp_r5 = func_08008910();
    func_08008F0C(&sp0, &gUnk_08750C8C, 0x06000480, 0x1C0);
    temp_r1 = temp_r5->unk4;
    if (temp_r1 != temp_r5->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) sp0;
            temp_r1->unk4 = (s32) sp0.unk4;
            temp_r1->unk8 = (s32) sp0.unk8;
            temp_r1->unkC = (s32) sp0.unkC;
        }
        temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
    } else {
        sp1C = temp_r1;
        sp14 = 1;
        temp_r4 = (s32) (sp1C - temp_r5->unk0) >> 4;
        sp10 = temp_r4;
        var_r0 = &sp10;
        if ((u32) temp_r4 < 1U) {
            var_r0 = &sp14;
        }
        temp_r0 = temp_r4 + *var_r0;
        if (temp_r0 != 0) {
            temp_r4_2 = temp_r0 * 0x10;
            var_r0_2 = malloc(temp_r4_2);
            var_sb = temp_r4_2;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sb);
            }
        } else {
            var_r0_2 = 0;
            var_sb = 0;
        }
        var_r2 = temp_r5->unk0;
        var_r3 = var_r0_2;
        if (var_r2 != sp1C) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != sp1C);
        }
        if (sp14 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) sp0;
                var_r3->unk4 = (s32) sp0.unk4;
                var_r3->unk8 = (s32) sp0.unk8;
                var_r3->unkC = (s32) sp0.unkC;
            }
            var_r4 = (GenObj *)((u8 *)var_r3 + 0x10);
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
            var_r4 = var_r2_2;
        }
        temp_r2 = temp_r5->unk4;
        temp_r1_2 = temp_r5->unk0;
        var_r0_3 = temp_r1_2;
        if (temp_r1_2 != temp_r2) {
            do {
                var_r0_3 += 0x10;
            } while (var_r0_3 != temp_r2);
        }
        if (temp_r1_2 != 0) {
            free(temp_r1_2);
        }
        temp_r5->unk0 = var_r0_2;
        temp_r5->unk4 = var_r4;
        temp_r5->unkC = (void *) (var_sb + var_r0_2);
    }
    return sp18;
}
