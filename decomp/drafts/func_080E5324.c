s32 __builtin_delete(void *);                         /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */

void func_080E5324(void *arg0, s32 arg1) {
    void *temp_r4;
    void *temp_r4_10;
    void *temp_r4_11;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;

    temp_r4 = arg0 + 0x58;
    func_08007C28(temp_r4, temp_r4->unk4);
    func_080079E8(temp_r4, 2);
    temp_r4_2 = temp_r4 - 8;
    func_08007C28(temp_r4_2, temp_r4_2->unk4);
    func_080079E8(temp_r4_2, 2);
    temp_r4_3 = temp_r4_2 - 8;
    func_08007C28(temp_r4_3, temp_r4_3->unk4);
    func_080079E8(temp_r4_3, 2);
    temp_r4_4 = temp_r4_3 - 8;
    func_08007C28(temp_r4_4, temp_r4_4->unk4);
    func_080079E8(temp_r4_4, 2);
    temp_r4_5 = temp_r4_4 - 8;
    func_08007C28(temp_r4_5, temp_r4_5->unk4);
    func_080079E8(temp_r4_5, 2);
    temp_r4_6 = temp_r4_5 - 8;
    func_08007C28(temp_r4_6, temp_r4_6->unk4);
    func_080079E8(temp_r4_6, 2);
    temp_r4_7 = temp_r4_6 - 8;
    func_08007C28(temp_r4_7, temp_r4_7->unk4);
    func_080079E8(temp_r4_7, 2);
    temp_r4_8 = temp_r4_7 - 8;
    func_08007C28(temp_r4_8, temp_r4_8->unk4);
    func_080079E8(temp_r4_8, 2);
    temp_r4_9 = temp_r4_8 - 8;
    func_08007C28(temp_r4_9, temp_r4_9->unk4);
    func_080079E8(temp_r4_9, 2);
    temp_r4_10 = temp_r4_9 - 8;
    func_08007C28(temp_r4_10, temp_r4_10->unk4);
    func_080079E8(temp_r4_10, 2);
    temp_r4_11 = temp_r4_10 - 8;
    func_08007C28(temp_r4_11, temp_r4_11->unk4);
    func_080079E8(temp_r4_11, 2);
    func_08007C28(arg0, arg0->unk4);
    func_080079E8(arg0, 2);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
