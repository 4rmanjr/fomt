s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080086BC(void *, s32);                         /* extern */
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
    u8 _pad84[44];
    void *unkB0;
    u8 _padB4[44];
    void *unkE0;
    u8 _padE4[44];
    void *unk110;
    u8 _pad114[44];
    void *unk140;
    u8 _pad144[44];
    void *unk170;
    u8 _pad174[44];
    void *unk1A0;
    u8 _pad1A4[44];
    void *unk1D0;
    u8 _pad1D4[8652];
    void *unk23A0;
} GenObj;
void func_080E11EC(GenObj *arg0, ? arg1) {
    s32 temp_r0_3;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r4;
    GenObj *temp_r4_10;
    GenObj *temp_r4_11;
    GenObj *temp_r4_12;
    GenObj *temp_r4_13;
    GenObj *temp_r4_14;
    GenObj *temp_r4_15;
    GenObj *temp_r4_16;
    GenObj *temp_r4_17;
    GenObj *temp_r4_18;
    GenObj *temp_r4_19;
    GenObj *temp_r4_20;
    GenObj *temp_r4_2;
    GenObj *temp_r4_3;
    GenObj *temp_r4_4;
    GenObj *temp_r4_5;
    GenObj *temp_r4_6;
    GenObj *temp_r4_7;
    GenObj *temp_r4_8;
    GenObj *temp_r4_9;
    GenObj *temp_r5;
    GenObj *var_r4;
    GenObj *var_r5;

    arg0->unk23A0 = &vtable_unk_080E76F8;
    temp_r5 = (GenObj *)((u8 *)arg0 + 0x540);
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x548);
    if (temp_r0 != 0) {
        var_r4 = (GenObj *)((u8 *)arg0 + 0x558);
        if (temp_r0 != var_r4) {
            do {
                var_r4 -= 8;
                func_080073E0(var_r4, var_r4->unk4);
                func_08007184(var_r4, 2);
            } while (temp_r0 != var_r4);
        }
    }
    func_08007C28(temp_r5, temp_r5->unk4);
    func_080079E8(temp_r5, 2);
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x500);
    if (temp_r0_2 != 0) {
        var_r5 = (GenObj *)((u8 *)arg0 + 0x540);
        if (temp_r0_2 != var_r5) {
            do {
                var_r5 -= 0x10;
                temp_r4 = (GenObj *)((u8 *)var_r5 + 8);
                func_080073E0(temp_r4, temp_r4->unk4);
                func_08007184(temp_r4, 2);
                func_08007C28(var_r5, var_r5->unk4);
                func_080079E8(var_r5, 2);
            } while (((GenObj *)((u8 *)arg0 + 0x500)) != var_r5);
        }
    }
    temp_r4_2 = (GenObj *)((u8 *)arg0 + 0x4F8);
    func_080073E0(temp_r4_2, temp_r4_2->unk4);
    func_08007184(temp_r4_2, 2);
    temp_r4_3 = (GenObj *)((u8 *)arg0 + 0x4F0);
    func_08007C28(temp_r4_3, temp_r4_3->unk4);
    func_080079E8(temp_r4_3, 2);
    temp_r4_4 = (GenObj *)((u8 *)arg0 + 0x4E8);
    func_080073E0(temp_r4_4, temp_r4_4->unk4);
    func_08007184(temp_r4_4, 2);
    temp_r4_5 = (GenObj *)((u8 *)arg0 + 0x4E0);
    func_08007C28(temp_r4_5, temp_r4_5->unk4);
    func_080079E8(temp_r4_5, 2);
    temp_r4_6 = (GenObj *)((u8 *)arg0 + 0x4D8);
    func_080073E0(temp_r4_6, temp_r4_6->unk4);
    func_08007184(temp_r4_6, 2);
    temp_r4_7 = (GenObj *)((u8 *)arg0 + 0x4D0);
    func_08007C28(temp_r4_7, temp_r4_7->unk4);
    func_080079E8(temp_r4_7, 2);
    temp_r4_8 = (GenObj *)((u8 *)arg0 + 0x4C8);
    func_08007C28(temp_r4_8, temp_r4_8->unk4);
    func_080079E8(temp_r4_8, 2);
    temp_r4_9 = (GenObj *)((u8 *)arg0 + 0x4C0);
    func_080073E0(temp_r4_9, temp_r4_9->unk4);
    func_08007184(temp_r4_9, 2);
    temp_r4_10 = (GenObj *)((u8 *)arg0 + 0x4B8);
    func_08007C28(temp_r4_10, temp_r4_10->unk4);
    func_080079E8(temp_r4_10, 2);
    temp_r4_11 = (GenObj *)((u8 *)arg0 + 0x4B0);
    func_080073E0(temp_r4_11, temp_r4_11->unk4);
    func_08007184(temp_r4_11, 2);
    temp_r4_12 = (GenObj *)((u8 *)arg0 + 0x4A8);
    func_08007C28(temp_r4_12, temp_r4_12->unk4);
    func_080079E8(temp_r4_12, 2);
    temp_r4_13 = (GenObj *)((u8 *)arg0 + 0x4A0);
    func_080073E0(temp_r4_13, temp_r4_13->unk4);
    func_08007184(temp_r4_13, 2);
    temp_r4_14 = (GenObj *)((u8 *)arg0 + 0x498);
    func_08007C28(temp_r4_14, temp_r4_14->unk4);
    func_080079E8(temp_r4_14, 2);
    temp_r4_15 = (GenObj *)((u8 *)arg0 + 0x490);
    func_080073E0(temp_r4_15, temp_r4_15->unk4);
    func_08007184(temp_r4_15, 2);
    temp_r4_16 = (GenObj *)((u8 *)arg0 + 0x488);
    func_08007C28(temp_r4_16, temp_r4_16->unk4);
    func_080079E8(temp_r4_16, 2);
    temp_r4_17 = (GenObj *)((u8 *)arg0 + 0x480);
    func_080073E0(temp_r4_17, temp_r4_17->unk4);
    func_08007184(temp_r4_17, 2);
    temp_r4_18 = (GenObj *)((u8 *)arg0 + 0x478);
    func_08007C28(temp_r4_18, temp_r4_18->unk4);
    func_080079E8(temp_r4_18, 2);
    temp_r4_19 = (GenObj *)((u8 *)arg0 + 0x470);
    func_080073E0(temp_r4_19, temp_r4_19->unk4);
    func_08007184(temp_r4_19, 2);
    temp_r4_20 = (GenObj *)((u8 *)arg0 + 0x468);
    func_08007C28(temp_r4_20, temp_r4_20->unk4);
    func_080079E8(temp_r4_20, 2);
    arg0->unk1D0 = &vtable_unk_080E5A28;
    arg0->unk1A0 = &vtable_unk_080E5A28;
    arg0->unk170 = &vtable_unk_080E5A28;
    arg0->unk140 = &vtable_unk_080E5A28;
    arg0->unk110 = &vtable_unk_080E5A28;
    arg0->unkE0 = &vtable_unk_080E5A28;
    arg0->unkB0 = &vtable_unk_080E5A28;
    arg0->unk80 = &vtable_unk_080E5A28;
    arg0->unk50 = &vtable_unk_080E5A28;
    arg0->unk20 = &vtable_unk_080E5A28;
    temp_r0_3 = arg0->unk10;
    if (temp_r0_3 != 0) {
        func_08050D0C(temp_r0_3, 3);
    }
    func_080086BC(arg0, arg1);
}
