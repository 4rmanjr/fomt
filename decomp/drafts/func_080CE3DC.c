s32 __builtin_delete(void *);                         /* extern */
s32 free();                                           /* extern */
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080E586C(void *);                            /* extern */
extern ? vtable_unk_080E5A28;

void func_080CE3DC(void *arg0, s32 arg1) {
    ? *sp0;
    ? *sp4;
    ? *var_r0;
    ? *var_r1;
    s32 temp_r1;
    void *temp_r1_2;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;

    var_r0 = (arg0 + 0xC0)->unk4;
    var_r1 = *var_r0;
    sp0 = var_r1;
    sp4 = var_r0;
loop_4:
    temp_r1 = (s32) var_r1 ^ (s32) var_r0;
    if ((s32) ((0 - temp_r1) | temp_r1) < 0) {
        temp_r1_2 = sp0->unk8;
        if (temp_r1_2 != 0) {
            temp_r1_2->unk8->unkC(temp_r1_2, 3);
        }
        var_r0 = sp0->unk0;
        sp0 = var_r0;
        var_r1 = sp4;
        goto loop_4;
    }
    temp_r4 = arg0 + 0xC0;
    func_080E586C(temp_r4);
    if (temp_r4->unk4 != 0) {
        free();
    }
    arg0->unk1C = &vtable_unk_080E5A28;
    temp_r4_2 = arg0 + 0x14;
    func_080073E0(temp_r4_2, temp_r4_2->unk4);
    func_08007184(temp_r4_2, 2);
    temp_r4_3 = temp_r4_2 - 8;
    func_08007C28(temp_r4_3, temp_r4_3->unk4);
    func_080079E8(temp_r4_3, 2);
    temp_r4_4 = arg0 + 4;
    func_08007C28(temp_r4_4, temp_r4_4->unk4);
    func_080079E8(temp_r4_4, 2);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
