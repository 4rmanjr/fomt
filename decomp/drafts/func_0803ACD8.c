s32 free(void *);                                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

void func_0803ACD8(void *arg0, void *arg1) {
s32 sp0;
    s32 sp10;
    s32 sp14;
    ? *sp18;
    u8 *sp1C;
    void *sp20;
    void *sp24;
    s32 *var_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r7;
    s32 var_r3_3;
    s32 var_r8;
    u16 var_r3;
    u32 var_sl;
    void **temp_r0_3;
    void *temp_r0;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r2_2;
    void *temp_r4;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r2;
    void *var_r2_2;
    void *var_r3_2;
    void *var_r4;

    var_sl = 0;
loop_1:
    temp_r1 = 0x2C * var_sl;
    temp_r4 = temp_r1 + 4 + arg0;
    temp_r7 = temp_r4->unk8;
    temp_r0 = temp_r1 + arg0 + 0x24;
    temp_r2 = func_08007D4C(temp_r0, temp_r0->unk4);
    var_r3 = 0;
    if (temp_r4->unk8 != 0) {
        var_r3 = (temp_r4 + 8)->unk4;
    }
    func_08008F0C(&sp0, temp_r7, (temp_r2 << 5) + 0x06010000, var_r3);
    sp18 = &sp0;
    temp_r1_2 = arg1->unk4;
    if (temp_r1_2 != arg1->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) sp0.unk0;
            temp_r1_2->unk4 = (s32) sp0.unk4;
            temp_r1_2->unk8 = (s32) sp0.unk8;
            temp_r1_2->unkC = (s32) sp0.unkC;
        }
        arg1->unk4 = (void *) (arg1->unk4 + 0x10);
        var_sl += 1;
        sp1C = arg0 + 0x8C;
    } else {
        sp20 = temp_r1_2;
        sp14 = 1;
        temp_r4_2 = (s32) (sp20 - arg1->unk0) >> 4;
        sp10 = temp_r4_2;
        var_r0 = &sp10;
        if ((u32) temp_r4_2 < 1U) {
            var_r0 = &sp14;
        }
        temp_r0_2 = temp_r4_2 + *var_r0;
        if (temp_r0_2 != 0) {
            temp_r4_3 = temp_r0_2 * 0x10;
            var_r0_2 = malloc(temp_r4_3);
            var_r8 = temp_r4_3;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_2 = 0;
            var_r8 = 0;
        }
        sp24 = var_r0_2;
        var_r2 = arg1->unk0;
        var_r3_2 = var_r0_2;
        var_sl += 1;
        sp1C = arg0 + 0x8C;
        if (var_r2 != sp20) {
            do {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) var_r2->unk0;
                    var_r3_2->unk4 = (s32) var_r2->unk4;
                    var_r3_2->unk8 = (s32) var_r2->unk8;
                    var_r3_2->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3_2 += 0x10;
            } while (var_r2 != sp20);
        }
        if (sp14 == 1) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) sp18->unk0;
                var_r3_2->unk4 = (s32) sp18->unk4;
                var_r3_2->unk8 = (s32) sp18->unk8;
                var_r3_2->unkC = (s32) sp18->unkC;
            }
            var_r4 = var_r3_2 + 0x10;
        } else {
            var_r3_3 = sp14;
            var_r2_2 = var_r3_2;
            if (var_r3_3 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp18->unk0;
                        var_r2_2->unk4 = (s32) sp18->unk4;
                        var_r2_2->unk8 = (s32) sp18->unk8;
                        var_r2_2->unkC = (s32) sp18->unkC;
                    }
                    var_r3_3 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_3 != 0);
            }
            var_r4 = var_r2_2;
        }
        temp_r2_2 = arg1->unk4;
        temp_r1_3 = arg1->unk0;
        var_r0_3 = temp_r1_3;
        if (temp_r1_3 != temp_r2_2) {
            do {
                var_r0_3 += 0x10;
            } while (var_r0_3 != temp_r2_2);
        }
        if (temp_r1_3 != 0) {
            free(temp_r1_3);
        }
        arg1->unk0 = sp24;
        arg1->unk4 = var_r4;
        arg1->unkC = (void *) (sp24 + var_r8);
    }
    if (var_sl <= 2U) {
        goto loop_1;
    }
    temp_r0_3 = arg0->unk0;
    (*temp_r0_3)->unk54(temp_r0_3, arg0->unk14, *sp1C, 1);
}
