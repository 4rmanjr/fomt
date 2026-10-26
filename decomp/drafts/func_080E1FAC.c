s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080086BC(void *, s32);                       /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */

void func_080E1FAC(void *arg0, s32 arg1) {
    s32 temp_r0;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;

    temp_r4 = arg0 + 0x30;
    func_080073E0(temp_r4, temp_r4->unk4);
    func_08007184(temp_r4, 2);
    temp_r4_2 = temp_r4 - 8;
    func_08007C28(temp_r4_2, temp_r4_2->unk4);
    func_080079E8(temp_r4_2, 2);
    temp_r4_3 = temp_r4_2 - 8;
    func_080073E0(temp_r4_3, temp_r4_3->unk4);
    func_08007184(temp_r4_3, 2);
    temp_r4_4 = temp_r4_3 - 8;
    func_08007C28(temp_r4_4, temp_r4_4->unk4);
    func_080079E8(temp_r4_4, 2);
    temp_r0 = arg0->unkC;
    if (temp_r0 != 0) {
        func_08050D0C(temp_r0, 3);
    }
    func_080086BC(arg0, arg1);
}
