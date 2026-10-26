s32 __builtin_delete(s32);                            /* extern */
s32 func_080086BC(void *, s32);                       /* extern */
s32 func_080098AC(s32, s32);                          /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
s32 func_080E5324(s32, s32);                          /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    struct GenObj *unkC;
    u8 _pad10[1292];
    s32 unk51C;
    s32 unk520;
    s32 unk524;
    s32 unk528;
    s32 unk52C;
    s32 unk530;
    s32 unk534;
    s32 unk538;
    s32 unk53C;
    s32 unk540;
    s32 unk544;
    u8 _pad548[8];
    s32 unk550;
    s32 unk554;
    u8 _pad558[32];
    s32 unk578;
    s32 unk57C;
    u8 _pad580[32];
    s32 unk5A0;
    s32 unk5A4;
    u8 _pad5A8[32];
    s32 unk5C8;
    s32 unk5CC;
    u8 _pad5D0[32];
    s32 unk5F0;
    s32 unk5F4;
    u8 _pad5F8[32];
    s32 unk618;
    u8 _pad61C[132];
    s32 unk6A0;
    u8 _pad6A4[132];
    s32 unk728;
    s32 unk72C;
    u8 _pad730[32];
    s32 unk750;
    s32 unk754;
    u8 _pad758[64];
    s32 unk798;
    s32 unk79C;
    u8 _pad7A0[32];
    s32 unk7C0;
    s32 unk7C4;
    u8 _pad7C8[32];
    s32 unk7E8;
    s32 unk7EC;
} GenObj;
void func_080E4FF0(GenObj *arg0, s32 arg1) {
    s32 *var_r4;
    s32 *var_r4_2;
    s32 temp_r0_3;
    void **temp_r1_10;
    void **temp_r1_2;
    void **temp_r1_3;
    void **temp_r1_4;
    void **temp_r1_5;
    void **temp_r1_6;
    void **temp_r1_7;
    void **temp_r1_8;
    void **temp_r1_9;
    void *temp_r0;
    void *temp_r0_2;
    GenObj *temp_r1;

    func_080E5324((GenObj *)((u8 *)arg0 + 0x83C), 2);
    func_080098AC((GenObj *)((u8 *)arg0 + 0x830), 2);
    func_080098AC((GenObj *)((u8 *)arg0 + 0x824), 2);
    __builtin_delete(arg0->unk7EC);
    __builtin_delete(arg0->unk7E8);
    __builtin_delete(arg0->unk7C4);
    __builtin_delete(arg0->unk7C0);
    __builtin_delete(arg0->unk79C);
    __builtin_delete(arg0->unk798);
    __builtin_delete(arg0->unk754);
    __builtin_delete(arg0->unk750);
    __builtin_delete(arg0->unk72C);
    __builtin_delete(arg0->unk728);
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x6A4);
    if (temp_r0 != 0) {
        var_r4 = (GenObj *)((u8 *)arg0 + 0x708);
        if (temp_r0 != var_r4) {
            do {
                var_r4 -= 4;
                __builtin_delete(*var_r4);
            } while (((GenObj *)((u8 *)arg0 + 0x6A4)) != var_r4);
        }
    }
    __builtin_delete(arg0->unk6A0);
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x61C);
    if (temp_r0_2 != 0) {
        var_r4_2 = (GenObj *)((u8 *)arg0 + 0x680);
        if (temp_r0_2 != var_r4_2) {
            do {
                var_r4_2 -= 4;
                __builtin_delete(*var_r4_2);
            } while (((GenObj *)((u8 *)arg0 + 0x61C)) != var_r4_2);
        }
    }
    __builtin_delete(arg0->unk618);
    __builtin_delete(arg0->unk5F4);
    __builtin_delete(arg0->unk5F0);
    __builtin_delete(arg0->unk5CC);
    __builtin_delete(arg0->unk5C8);
    __builtin_delete(arg0->unk5A4);
    __builtin_delete(arg0->unk5A0);
    __builtin_delete(arg0->unk57C);
    __builtin_delete(arg0->unk578);
    __builtin_delete(arg0->unk554);
    __builtin_delete(arg0->unk550);
    temp_r1 = arg0->unk544;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk8->unkC))(temp_r1, 3);
    }
    temp_r1_2 = arg0->unk540;
    if (temp_r1_2 != 0) {
        (*temp_r1_2)->unk8(temp_r1_2, 3);
    }
    temp_r1_3 = arg0->unk53C;
    if (temp_r1_3 != 0) {
        (*temp_r1_3)->unk8(temp_r1_3, 3);
    }
    temp_r1_4 = arg0->unk538;
    if (temp_r1_4 != 0) {
        (*temp_r1_4)->unk8(temp_r1_4, 3);
    }
    temp_r1_5 = arg0->unk534;
    if (temp_r1_5 != 0) {
        (*temp_r1_5)->unk8(temp_r1_5, 3);
    }
    temp_r1_6 = arg0->unk530;
    if (temp_r1_6 != 0) {
        (*temp_r1_6)->unk8(temp_r1_6, 3);
    }
    temp_r1_7 = arg0->unk52C;
    if (temp_r1_7 != 0) {
        (*temp_r1_7)->unk8(temp_r1_7, 3);
    }
    temp_r1_8 = arg0->unk528;
    if (temp_r1_8 != 0) {
        (*temp_r1_8)->unk8(temp_r1_8, 3);
    }
    temp_r1_9 = arg0->unk524;
    if (temp_r1_9 != 0) {
        (*temp_r1_9)->unk8(temp_r1_9, 3);
    }
    temp_r1_10 = arg0->unk520;
    if (temp_r1_10 != 0) {
        (*temp_r1_10)->unk8(temp_r1_10, 3);
    }
    temp_r0_3 = arg0->unk51C;
    if (temp_r0_3 != 0) {
        func_08050D0C(temp_r0_3, 3);
    }
    func_080086BC(arg0, arg1);
}
