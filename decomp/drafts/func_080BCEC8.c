s32 func_08007B54(void *, s32);                     /* extern */
s32 func_08007C28(void *, s32);                       /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_080BCEC8(s32 arg0) {
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r5;

    temp_r4 = arg0 + 0x5B0;
    func_08007C28(temp_r4, temp_r4->unk4);
    temp_r4->unk4 = func_08007B54(temp_r4, 3);
    temp_r4_2 = arg0 + 0x5B8;
    func_08007C28(temp_r4_2, temp_r4_2->unk4);
    temp_r4_2->unk4 = func_08007B54(temp_r4_2, 6);
    temp_r4_3 = arg0 + 0x5C0;
    func_08007C28(temp_r4_3, temp_r4_3->unk4);
    temp_r4_3->unk4 = func_08007B54(temp_r4_3, 2);
    temp_r4_4 = arg0 + 0x5C8;
    func_08007C28(temp_r4_4, temp_r4_4->unk4);
    temp_r4_4->unk4 = func_08007B54(temp_r4_4, 5);
    temp_r4_5 = arg0 + 0x5D0;
    func_08007C28(temp_r4_5, temp_r4_5->unk4);
    temp_r4_5->unk4 = func_08007B54(temp_r4_5, 5);
    temp_r4_6 = arg0 + 0x5D8;
    func_08007C28(temp_r4_6, temp_r4_6->unk4);
    temp_r4_6->unk4 = func_08007B54(temp_r4_6, 2);
    temp_r4_7 = arg0 + 0x5F0;
    func_08007C28(temp_r4_7, temp_r4_7->unk4);
    temp_r4_7->unk4 = func_08007B54(temp_r4_7, 4);
    temp_r4_8 = arg0 + 0x5E8;
    func_08007C28(temp_r4_8, temp_r4_8->unk4);
    temp_r4_8->unk4 = func_08007B54(temp_r4_8, 2);
    temp_r5 = arg0 + 0x5E0;
    func_08007C28(temp_r5, temp_r5->unk4);
    temp_r5->unk4 = func_08007B54(temp_r5, 6);
}
