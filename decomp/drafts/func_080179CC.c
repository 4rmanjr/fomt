s32 __builtin_delete(void *);                         /* extern */
s32 __builtin_vec_delete();                           /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
s32 func_0800ED2C(s32);                               /* extern */
s32 func_0801D9A8(void *, s32 *, s32);                /* extern */
void *func_0801DB44(void *);                        /* extern */
s32 func_0803B0A8(s32, s32);                          /* extern */
s32 func_080A1484(s32, s32, s32);                     /* extern */
s32 func_080A45A8(s32);                             /* extern */
s32 func_080AC85C(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5EC4;
extern s32 vtable_unk_080E61A0;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
    struct GenObj *unk8;
    u8 _padC[24];
    struct GenObj *unk24;
    u8 _pad28[4112];
    s32 unk1038;
    u8 _pad103C[20];
    s32 unk1050;
    u8 _pad1054[4];
    s32 unk1058;
    s32 unk105C;
    u8 _pad1060[4];
    s32 unk1064;
    s32 unk1068;
    u8 _pad106C[16];
    s32 unk107C;
    u8 _pad1080[72];
    s32 unk10C8;
    s32 unk10C9;
} GenObj;
void func_080179CC(GenObj *arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    s32 *var_r4;
    s32 temp_r0_3;
    s32 temp_r2;
    s32 temp_r5;
    s32 temp_r7;
    s32 var_r0;
    void **var_r4_2;
    void **var_r4_4;
    void **var_r4_5;
    GenObj *temp_r0;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r0_5;
    GenObj *temp_r1;
    void *temp_r1_2;
    GenObj *temp_r1_3;
    GenObj *temp_r1_4;
    GenObj *temp_r1_5;
    GenObj *temp_r1_6;
    GenObj *temp_r1_7;
    GenObj *temp_r1_8;
    void *temp_r5_2;
    GenObj *var_r4_3;

    arg0->unk0 = &vtable_unk_080E5EC4;
    if (arg0->unk10C8 != 0) {
        func_0800ED2C(arg0->unk1038 + 0x1BD8);
        temp_r7 = arg0->unk1038 + 0x1CCC;
        if (arg0->unk10C9 == 0) {
            temp_r0 = func_0801DB44(arg0);
            var_r4 = temp_r0->unk0;
            temp_r5 = temp_r0->unk4;
            if (var_r4 != temp_r5) {
loop_3:
                if ((func_08008CD0(*var_r4) << 0x18) != 0) {
                    var_r4 += 4;
                    if (var_r4 == temp_r5) {
                        goto block_5;
                    }
                    goto loop_3;
                }
                var_r0 = *var_r4;
            } else {
block_5:
                var_r0 = *(temp_r5 - 4);
            }
            func_08008B6C(var_r0, 0x6D);
            if (func_080A45A8(temp_r7) != 2) {
                temp_r2 = arg0->unk1038;
                func_080A1484(temp_r2 + 0x1CD4, temp_r7, temp_r2 + 0x214C);
            } else {
                sp0 = 0x23B;
                sp4 = 0;
                func_0801D9A8(arg0, &sp0, 0);
            }
        }
    }
    if (arg0->unk1050 != 0) {
        __builtin_vec_delete();
    }
    temp_r5_2 = (GenObj *)((u8 *)arg0 + 0x10B0);
    if (temp_r5_2 != 0) {
        var_r4_2 = (GenObj *)((u8 *)arg0 + 0x10C8);
loop_14:
        if (temp_r5_2 != var_r4_2) {
            var_r4_2 -= 4;
            temp_r1 = *var_r4_2;
            if (temp_r1 != 0) {
                ((void (*)(void *,...))(temp_r1->unk24->unk8))(temp_r1, 3);
            }
            goto loop_14;
        }
    }
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x1080);
    if (temp_r0_2 != 0) {
        var_r4_3 = (GenObj *)((u8 *)arg0 + 0x10B0);
        if (temp_r0_2 != var_r4_3) {
            do {
                var_r4_3 -= 0xC;
                temp_r1_2 = var_r4_3->unk8;
                if (temp_r1_2 != 0) {
                    ((void (*)(void *,...))(temp_r1_2->unk24->unk8))(temp_r1_2, 3);
                }
            } while (((GenObj *)((u8 *)arg0 + 0x1080)) != var_r4_3);
        }
    }
    var_r4_4 = (GenObj *)((u8 *)arg0 + 0x107C);
    temp_r0_3 = arg0->unk107C;
    if (temp_r0_3 != 0) {
        func_0803B0A8(temp_r0_3, 3);
    }
    temp_r0_4 = (GenObj *)((u8 *)arg0 + 0x1074);
    if ((temp_r0_4 != 0) && (temp_r0_4 != var_r4_4)) {
        do {
            var_r4_4 -= 4;
            temp_r1_3 = *var_r4_4;
            if (temp_r1_3 != 0) {
                ((void (*)(void *,...))(temp_r1_3->unk24->unk8))(temp_r1_3, 3);
            }
        } while (temp_r0_4 != var_r4_4);
    }
    temp_r0_5 = (GenObj *)((u8 *)arg0 + 0x106C);
    if (temp_r0_5 != 0) {
        var_r4_5 = (GenObj *)((u8 *)arg0 + 0x1074);
        if (temp_r0_5 != var_r4_5) {
            do {
                var_r4_5 -= 4;
                temp_r1_4 = *var_r4_5;
                if (temp_r1_4 != 0) {
                    ((void (*)(void *,...))(temp_r1_4->unk24->unk8))(temp_r1_4, 3);
                }
            } while (((GenObj *)((u8 *)arg0 + 0x106C)) != var_r4_5);
        }
    }
    temp_r1_5 = arg0->unk1068;
    if (temp_r1_5 != 0) {
        ((void (*)(void *,...))(temp_r1_5->unk24->unk8))(temp_r1_5, 3);
    }
    temp_r1_6 = arg0->unk1064;
    if (temp_r1_6 != 0) {
        ((void (*)(void *,...))(temp_r1_6->unk24->unk8))(temp_r1_6, 3);
    }
    temp_r1_7 = arg0->unk105C;
    if (temp_r1_7 != 0) {
        ((void (*)(void *,...))(temp_r1_7->unk24->unk8))(temp_r1_7, 3);
    }
    temp_r1_8 = arg0->unk1058;
    if (temp_r1_8 != 0) {
        ((void (*)(void *,...))(temp_r1_8->unk24->unk8))(temp_r1_8, 3);
    }
    func_080AC85C((GenObj *)((u8 *)arg0 + 4), 2);
    arg0->unk0 = &vtable_unk_080E61A0;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
