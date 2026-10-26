s32 __builtin_delete(void *);                         /* extern */
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080098AC(s32, s32);                          /* extern */
extern ? vtable_unk_080E5A28;

void func_080E0C38(void *arg0, s32 arg1) {
    s32 sp0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r5;
    s32 temp_r7;
    void **var_r5;
    void *temp_r0_3;
    void *temp_r4;
    void *temp_r4_2;
    void *var_r4;
    void *var_r4_2;

    sp0 = arg1;
    temp_r0 = arg0 + 0x70;
    temp_r0_2 = arg0 + 0x38C;
    if (temp_r0_2 != 0) {
        var_r4 = arg0 + 0x41C;
        if (temp_r0_2 != var_r4) {
            do {
                var_r4 -= 0x18;
                var_r4->unk8->unkC(var_r4, 0);
            } while ((arg0 + 0x38C) != var_r4);
        }
    }
    temp_r5 = temp_r0 + 0x304;
    temp_r7 = arg0 + 0x54;
    temp_r0_3 = arg0 + 0x30;
    if (temp_r5 != 0) {
        var_r4_2 = temp_r0 + 0x31C;
        if (temp_r5 != var_r4_2) {
            do {
                var_r4_2 -= 8;
                func_08007C28(var_r4_2, var_r4_2->unk4);
                func_080079E8(var_r4_2, 2);
            } while (temp_r5 != var_r4_2);
        }
    }
    if (temp_r7 != 0) {
        var_r5 = arg0 + 0x70;
loop_9:
        if (temp_r7 != var_r5) {
            var_r5 -= 4;
            temp_r4 = *var_r5;
            if (temp_r4 != 0) {
                func_080098AC(temp_r4 + 8, 2);
                func_08007C28(temp_r4, temp_r4->unk4);
                func_080079E8(temp_r4, 2);
                __builtin_delete(temp_r4);
            }
            goto loop_9;
        }
    }
    temp_r4_2 = arg0->unk50;
    if (temp_r4_2 != 0) {
        func_080098AC(temp_r4_2 + 8, 2);
        func_08007C28(temp_r4_2, temp_r4_2->unk4);
        func_080079E8(temp_r4_2, 2);
        __builtin_delete(temp_r4_2);
    }
    func_080098AC(arg0 + 0x38, 2);
    func_080073E0(temp_r0_3, temp_r0_3->unk4);
    func_08007184(temp_r0_3, 2);
    arg0->unk0 = &vtable_unk_080E5A28;
    if (1 & sp0) {
        __builtin_delete(arg0);
    }
}
