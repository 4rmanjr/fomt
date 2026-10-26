s32 __builtin_delete(void *);                         /* extern */
s32 free();                                           /* extern */
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080E2B28(void *);                          /* extern */
s32 func_080E2B5C(void *, s32);                       /* extern */
s32 func_080E2B88(void *, s32);                       /* extern */
extern ? vtable_unk_080E7B5C;

void func_080756D0(void *arg0, s32 arg1) {
    void *sp0;
    void *sp4;
    s32 sp8;
    void *spC;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_4;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r1_2;
    void *temp_r2_3;
    void *temp_r6;
    void *var_r0;
    void *var_r1;

    arg0->unk4 = &vtable_unk_080E7B5C;
    temp_r0 = arg0->unk0;
    if (temp_r0 != 0) {
        var_r0 = temp_r0->unk8;
        var_r1 = var_r0->unk8;
        sp0 = var_r1;
        sp4 = var_r0;
loop_3:
        temp_r1 = (s32) var_r1 ^ (s32) var_r0;
        if ((s32) ((0 - temp_r1) | temp_r1) < 0) {
            func_08007C28(temp_r0, sp0->unk14);
            var_r0 = (void *) func_080E2B28(sp0);
            sp0 = var_r0;
            var_r1 = sp4;
            goto loop_3;
        }
        temp_r0_2 = temp_r0 + 0x18;
        temp_r1_2 = temp_r0_2->unk4;
        temp_r2 = temp_r1_2->unk8;
        sp8 = temp_r2;
        spC = temp_r1_2;
        temp_r2_2 = temp_r2 ^ (s32) temp_r1_2;
        temp_r2_3 = temp_r0 + 4;
        temp_r6 = temp_r0 + 0x14;
        if ((s32) ((0 - temp_r2_2) | temp_r2_2) < 0) {
            do {
                func_080073E0(temp_r6, sp8->unk14);
                temp_r0_3 = func_080E2B28((void *) sp8);
                sp8 = temp_r0_3;
                temp_r2_4 = (s32) spC ^ temp_r0_3;
            } while ((s32) ((0 - temp_r2_4) | temp_r2_4) < 0);
        }
        if (temp_r0_2->unk8 != 0) {
            func_080E2B88(temp_r0_2, temp_r0_2->unk4->unk4);
            temp_r0_4 = temp_r0_2->unk4;
            temp_r0_4->unk8 = temp_r0_4;
            temp_r0_2->unk4->unk4 = 0;
            temp_r0_5 = temp_r0_2->unk4;
            temp_r0_5->unkC = temp_r0_5;
            temp_r0_2->unk8 = 0;
        }
        if (temp_r0_2->unk4 != 0) {
            free();
        }
        func_08007184(temp_r6, 2);
        if (temp_r2_3->unk8 != 0) {
            func_080E2B5C(temp_r2_3, temp_r2_3->unk4->unk4);
            temp_r0_6 = temp_r2_3->unk4;
            temp_r0_6->unk8 = temp_r0_6;
            temp_r2_3->unk4->unk4 = 0;
            temp_r0_7 = temp_r2_3->unk4;
            temp_r0_7->unkC = temp_r0_7;
            temp_r2_3->unk8 = 0;
        }
        if (temp_r2_3->unk4 != 0) {
            free();
        }
        func_080079E8(temp_r0, 2);
        __builtin_delete(temp_r0);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
