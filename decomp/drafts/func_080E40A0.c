s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080086BC(void *, s32);                       /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
extern s32 vtable_unk_080E5A28;
extern s32 vtable_unk_080E76F8;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[8];
    s32 unk10;
    u8 _pad14[12];
    void *unk20;
    u8 _pad24[44];
    void *unk50;
    u8 _pad54[44];
    void *unk80;
    u8 _pad84[408];
    void *unk21C;
} GenObj;
void func_080E40A0(GenObj *arg0, s32 arg1) {
    s32 temp_r0;
    GenObj *temp_r4;
    GenObj *temp_r4_2;
    GenObj *temp_r4_3;
    GenObj *temp_r4_4;
    GenObj *temp_r4_5;
    GenObj *temp_r4_6;
    GenObj *temp_r4_7;
    GenObj *temp_r4_8;

    arg0->unk21C = &vtable_unk_080E76F8;
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x1AC);
    func_080073E0(temp_r4, temp_r4->unk4);
    func_08007184(temp_r4, 2);
    temp_r4_2 = (GenObj *)((u8 *)arg0 + 0x1A4);
    func_08007C28(temp_r4_2, temp_r4_2->unk4);
    func_080079E8(temp_r4_2, 2);
    temp_r4_3 = (GenObj *)((u8 *)arg0 + 0x19C);
    func_080073E0(temp_r4_3, temp_r4_3->unk4);
    func_08007184(temp_r4_3, 2);
    temp_r4_4 = (GenObj *)((u8 *)arg0 + 0x194);
    func_08007C28(temp_r4_4, temp_r4_4->unk4);
    func_080079E8(temp_r4_4, 2);
    temp_r4_5 = (GenObj *)((u8 *)arg0 + 0x18C);
    func_080073E0(temp_r4_5, temp_r4_5->unk4);
    func_08007184(temp_r4_5, 2);
    temp_r4_6 = (GenObj *)((u8 *)arg0 + 0x184);
    func_080073E0(temp_r4_6, temp_r4_6->unk4);
    func_08007184(temp_r4_6, 2);
    temp_r4_7 = (GenObj *)((u8 *)arg0 + 0x17C);
    func_080073E0(temp_r4_7, temp_r4_7->unk4);
    func_08007184(temp_r4_7, 2);
    temp_r4_8 = (GenObj *)((u8 *)arg0 + 0x174);
    func_08007C28(temp_r4_8, temp_r4_8->unk4);
    func_080079E8(temp_r4_8, 2);
    arg0->unk80 = &vtable_unk_080E5A28;
    arg0->unk50 = &vtable_unk_080E5A28;
    arg0->unk20 = &vtable_unk_080E5A28;
    temp_r0 = arg0->unk10;
    if (temp_r0 != 0) {
        func_08050D0C(temp_r0, 3);
    }
    func_080086BC(arg0, arg1);
}
