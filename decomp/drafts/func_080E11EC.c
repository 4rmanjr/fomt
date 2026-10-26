s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080086BC(void *, s32);                         /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
extern ? vtable_unk_080E5A28;
extern ? vtable_unk_080E76F8;

void func_080E11EC(void *arg0, ? arg1) {
    s32 temp_r0_3;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r4;
    void *temp_r4_10;
    void *temp_r4_11;
    void *temp_r4_12;
    void *temp_r4_13;
    void *temp_r4_14;
    void *temp_r4_15;
    void *temp_r4_16;
    void *temp_r4_17;
    void *temp_r4_18;
    void *temp_r4_19;
    void *temp_r4_20;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;
    void *temp_r5;
    void *var_r4;
    void *var_r5;

    arg0->unk23A0 = &vtable_unk_080E76F8;
    temp_r5 = arg0 + 0x540;
    temp_r0 = arg0 + 0x548;
    if (temp_r0 != 0) {
        var_r4 = arg0 + 0x558;
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
    temp_r0_2 = arg0 + 0x500;
    if (temp_r0_2 != 0) {
        var_r5 = arg0 + 0x540;
        if (temp_r0_2 != var_r5) {
            do {
                var_r5 -= 0x10;
                temp_r4 = var_r5 + 8;
                func_080073E0(temp_r4, temp_r4->unk4);
                func_08007184(temp_r4, 2);
                func_08007C28(var_r5, var_r5->unk4);
                func_080079E8(var_r5, 2);
            } while ((arg0 + 0x500) != var_r5);
        }
    }
    temp_r4_2 = arg0 + 0x4F8;
    func_080073E0(temp_r4_2, temp_r4_2->unk4);
    func_08007184(temp_r4_2, 2);
    temp_r4_3 = arg0 + 0x4F0;
    func_08007C28(temp_r4_3, temp_r4_3->unk4);
    func_080079E8(temp_r4_3, 2);
    temp_r4_4 = arg0 + 0x4E8;
    func_080073E0(temp_r4_4, temp_r4_4->unk4);
    func_08007184(temp_r4_4, 2);
    temp_r4_5 = arg0 + 0x4E0;
    func_08007C28(temp_r4_5, temp_r4_5->unk4);
    func_080079E8(temp_r4_5, 2);
    temp_r4_6 = arg0 + 0x4D8;
    func_080073E0(temp_r4_6, temp_r4_6->unk4);
    func_08007184(temp_r4_6, 2);
    temp_r4_7 = arg0 + 0x4D0;
    func_08007C28(temp_r4_7, temp_r4_7->unk4);
    func_080079E8(temp_r4_7, 2);
    temp_r4_8 = arg0 + 0x4C8;
    func_08007C28(temp_r4_8, temp_r4_8->unk4);
    func_080079E8(temp_r4_8, 2);
    temp_r4_9 = arg0 + 0x4C0;
    func_080073E0(temp_r4_9, temp_r4_9->unk4);
    func_08007184(temp_r4_9, 2);
    temp_r4_10 = arg0 + 0x4B8;
    func_08007C28(temp_r4_10, temp_r4_10->unk4);
    func_080079E8(temp_r4_10, 2);
    temp_r4_11 = arg0 + 0x4B0;
    func_080073E0(temp_r4_11, temp_r4_11->unk4);
    func_08007184(temp_r4_11, 2);
    temp_r4_12 = arg0 + 0x4A8;
    func_08007C28(temp_r4_12, temp_r4_12->unk4);
    func_080079E8(temp_r4_12, 2);
    temp_r4_13 = arg0 + 0x4A0;
    func_080073E0(temp_r4_13, temp_r4_13->unk4);
    func_08007184(temp_r4_13, 2);
    temp_r4_14 = arg0 + 0x498;
    func_08007C28(temp_r4_14, temp_r4_14->unk4);
    func_080079E8(temp_r4_14, 2);
    temp_r4_15 = arg0 + 0x490;
    func_080073E0(temp_r4_15, temp_r4_15->unk4);
    func_08007184(temp_r4_15, 2);
    temp_r4_16 = arg0 + 0x488;
    func_08007C28(temp_r4_16, temp_r4_16->unk4);
    func_080079E8(temp_r4_16, 2);
    temp_r4_17 = arg0 + 0x480;
    func_080073E0(temp_r4_17, temp_r4_17->unk4);
    func_08007184(temp_r4_17, 2);
    temp_r4_18 = arg0 + 0x478;
    func_08007C28(temp_r4_18, temp_r4_18->unk4);
    func_080079E8(temp_r4_18, 2);
    temp_r4_19 = arg0 + 0x470;
    func_080073E0(temp_r4_19, temp_r4_19->unk4);
    func_08007184(temp_r4_19, 2);
    temp_r4_20 = arg0 + 0x468;
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
