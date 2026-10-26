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
    struct GenObj *unk8;
    u8 _padC[4];
    void *unk10;
    u8 _pad14[100];
    s32 unk78;
    s32 unk7C;
    u8 _pad80[120];
    void *unkF8;
    u8 _padFC[44];
    void *unk128;
    u8 _pad12C[228];
    struct GenObj *unk210;
    u8 _pad214[240];
    s32 unk304;
    u8 _pad308[12496];
    void *unk33D8;
} GenObj;
void func_080E3C3C(GenObj *arg0, s32 arg1) {
    s32 **temp_r0;
    s32 **temp_r0_2;
    GenObj *temp_r1;
    GenObj *temp_r1_2;
    GenObj *temp_r4;
    GenObj *temp_r4_10;
    GenObj *temp_r4_2;
    GenObj *temp_r4_3;
    GenObj *temp_r4_4;
    GenObj *temp_r4_5;
    void *temp_r4_6;
    GenObj *temp_r4_7;
    GenObj *temp_r4_8;
    GenObj *temp_r4_9;

    arg0->unk33D8 = &vtable_unk_080E76F8;
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x328);
    func_08007C28(temp_r4, temp_r4->unk4);
    func_080079E8(temp_r4, 2);
    temp_r4_2 = (GenObj *)((u8 *)arg0 + 0x320);
    func_080073E0(temp_r4_2, temp_r4_2->unk4);
    func_08007184(temp_r4_2, 2);
    temp_r4_3 = (GenObj *)((u8 *)arg0 + 0x318);
    func_08007C28(temp_r4_3, temp_r4_3->unk4);
    func_080079E8(temp_r4_3, 2);
    temp_r4_4 = (GenObj *)((u8 *)arg0 + 0x310);
    func_08007C28(temp_r4_4, temp_r4_4->unk4);
    func_080079E8(temp_r4_4, 2);
    temp_r4_5 = (GenObj *)((u8 *)arg0 + 0x308);
    func_080073E0(temp_r4_5, temp_r4_5->unk4);
    func_08007184(temp_r4_5, 2);
    temp_r4_6 = (GenObj *)((u8 *)arg0 + 0x300);
    func_08007C28(temp_r4_6, arg0->unk304);
    func_080079E8(temp_r4_6, 2);
    temp_r4_7 = (GenObj *)((u8 *)arg0 + 0x2F8);
    func_080073E0(temp_r4_7, temp_r4_7->unk4);
    func_08007184(temp_r4_7, 2);
    temp_r4_8 = (GenObj *)((u8 *)arg0 + 0x2F0);
    func_08007C28(temp_r4_8, temp_r4_8->unk4);
    func_080079E8(temp_r4_8, 2);
    temp_r4_9 = (GenObj *)((u8 *)arg0 + 0x2E8);
    func_080073E0(temp_r4_9, temp_r4_9->unk4);
    func_08007184(temp_r4_9, 2);
    temp_r4_10 = (GenObj *)((u8 *)arg0 + 0x2E0);
    func_08007C28(temp_r4_10, temp_r4_10->unk4);
    func_080079E8(temp_r4_10, 2);
    arg0->unk128 = &vtable_unk_080E5A28;
    arg0->unkF8 = &vtable_unk_080E5A28;
    temp_r0 = ((GenObj *)((u8 *)arg0 + 0xF8)) - 0x30;
    *temp_r0 = &vtable_unk_080E5A28;
    temp_r0_2 = temp_r0 - 0x30;
    *temp_r0_2 = &vtable_unk_080E5A28;
    func_08050D0C(temp_r0_2 - 0x18, 2);
    temp_r1 = arg0->unk7C;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk210->unk8))(temp_r1, 3);
    }
    temp_r1_2 = arg0->unk78;
    if (temp_r1_2 != 0) {
        ((void (*)(void *,...))(temp_r1_2->unk210->unk8))(temp_r1_2, 3);
    }
    arg0->unk10 = &vtable_unk_080E5A28;
    func_080086BC(arg0, arg1);
}
