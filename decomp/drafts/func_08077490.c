void *__builtin_new(s32);                           /* extern */
s32 func_08008724(void *);                            /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s16 *func_08008918(void *);                         /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08009300(void *, s16 *);                     /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_08077810(void *);                            /* extern */
s32 func_080779B4(void *);                            /* extern */
s32 func_08077A1C(void *);                            /* extern */
extern s32 vtable_unk_080E5B80;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    struct GenObj *unk8;
    s32 unkC;
    s32 unk10;
    u8 _pad14[1792];
    s32 unk714;
    s32 unk716;
    s32 unk718;
    s32 unk71C;
    s32 unk720;
    s32 unk724;
    u8 _pad728[2];
    s32 unk72A;
} GenObj;
s32 *func_08077490(s32 *arg0, GenObj *arg1) {
    u16 sp0;
    GenObj *sp4;
    void **sp8;
    void ***spC;
    s16 *temp_r0;
    s16 *temp_r0_15;
    s16 *temp_r0_16;
    s16 *temp_r0_7;
    s16 *temp_r1;
    s16 temp_r0_3;
    s32 temp_r0_10;
    s32 temp_r0_11;
    s32 temp_r0_12;
    s32 temp_r0_13;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_9;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r1_5;
    s32 var_r7;
    u16 temp_r1_6;
    u16 temp_r1_7;
    GenObj *temp_r0_14;
    GenObj *temp_r0_2;
    GenObj *temp_r0_6;
    GenObj *temp_r0_8;
    GenObj *temp_r4;

    func_08008724(arg1);
    temp_r0 = func_08008918(arg1);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg1);
    temp_r4->unk0 = 0;
    temp_r4->unk4 = 0;
    temp_r4->unk8 = &vtable_unk_080E5B80;
    func_08009300((GenObj *)((u8 *)temp_r4 + 0xC), temp_r1);
    sp4 = temp_r4;
    func_08077810(arg1);
    func_080779B4(arg1);
    func_08008B6C((GenObj *)((u8 *)arg1 + 8), 0x24);
    func_0800934C((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 0);
    temp_r0_2 = func_08008940(arg1);
    ((void (*)(void *,...))(temp_r0_2->unk8->unk10))(temp_r0_2, sp4);
    var_r7 = 0;
loop_1:
    func_080087C8(arg1);
    func_080088B8(arg1);
    temp_r0_3 = arg1->unk72A;
    switch ((u32) temp_r0_3) {                      /* irregular */
    case 0:
        arg1->unk716 = 0U;
        arg1->unk718 = 0U;
        arg1->unk720 = (s32) (arg1->unk716 << 0x10);
        arg1->unk72A = 1;
        break;
    case 1:
        temp_r1_2 = sp4->unk0;
        if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {

        } else {
            arg1->unk72A = 2;
        }
        break;
    case 2:
        arg1->unk718 = (u16) (0xFFF0 & arg1->unk716);
        temp_r0_4 = arg1->unk720 + 0x8000;
        arg1->unk720 = temp_r0_4;
        temp_r0_5 = temp_r0_4 >> 0x10;
        arg1->unk716 = (u16) temp_r0_5;
        if (arg1->unk718 != (temp_r0_5 & 0xFFF0)) {
            func_08077A1C(arg1);
        }
        if ((s32) arg1->unk71C <= 0x8A) {

        } else {
            arg1->unk724 = (s32) (arg1->unk714 << 0x10);
            func_08009378((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 0);
            temp_r0_6 = func_08008940(arg1);
            ((void (*)(void *,...))(temp_r0_6->unk8->unk10))(temp_r0_6, sp4);
            arg1->unk72A = 7;
        }
        break;
    case 7:
        temp_r1_3 = sp4->unk0;
        if ((s32) ((0 - temp_r1_3) | temp_r1_3) < 0) {

        } else {
            arg1->unk72A = 8;
            func_08077A1C(arg1);
            temp_r0_7 = func_08008918(arg1);
            sp0 = 0x640;
            *temp_r0_7 = 0x640;
            func_0800934C((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 0);
            temp_r0_8 = func_08008940(arg1);
            ((void (*)(void *,...))(temp_r0_8->unk8->unk10))(temp_r0_8, sp4);
        }
        break;
    case 8:
        temp_r1_4 = sp4->unk0;
        if ((s32) ((0 - temp_r1_4) | temp_r1_4) >= 0) {
            arg1->unk72A = 3;
        }
        break;
    case 3:
        arg1->unk718 = (u16) (0xFFF0 & arg1->unk716);
        temp_r0_9 = arg1->unk720 + 0x8000;
        arg1->unk720 = temp_r0_9;
        temp_r0_10 = temp_r0_9 >> 0x10;
        arg1->unk716 = (u16) temp_r0_10;
        if (arg1->unk718 != (temp_r0_10 & 0xFFF0)) {
            func_08077A1C(arg1);
        }
        temp_r0_11 = arg1->unk724 + 0x8000;
        arg1->unk724 = temp_r0_11;
        temp_r0_12 = temp_r0_11 >> 0x10;
        arg1->unk714 = (u16) temp_r0_12;
        if ((temp_r0_12 << 0x10) == 0x02000000) {
            arg1->unk720 = 0x12C;
            arg1->unk72A = 4;
        }
        break;
    case 4:
        temp_r0_13 = arg1->unk720 - 1;
        arg1->unk720 = temp_r0_13;
        if (temp_r0_13 < 0) {
            arg1->unk72A = 5;
        }
        break;
    case 5:
        func_08009378((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 0);
        temp_r0_14 = func_08008940(arg1);
        ((void (*)(void *,...))(temp_r0_14->unk8->unk10))(temp_r0_14, sp4);
        arg1->unk72A = 6;
        break;
    case 6:
        temp_r1_5 = sp4->unk0;
        if ((s32) ((0 - temp_r1_5) | temp_r1_5) >= 0) {
            var_r7 = 1;
        }
        break;
    }
    temp_r0_15 = func_08008918(arg1);
    temp_r1_6 = arg1->unk716;
    sp0 = temp_r1_6;
    temp_r0_15->unk16 = temp_r1_6;
    temp_r0_16 = func_08008918(arg1);
    temp_r1_7 = arg1->unk714;
    sp0 = temp_r1_7;
    temp_r0_16->unk1A = temp_r1_7;
    if (var_r7 != 1) {
        goto loop_1;
    }
    sp8 = 0;
    spC = &sp8;
    spC.unk4 = 0;
    sp8 = 0;
    *arg0 = 0;
    if (sp8 != 0) {
        (*sp8)->unk8(sp8, 3);
    }
    if (sp4 != 0) {
        ((void (*)(void *,...))(sp4->unk8->unkC))(sp4, 3);
    }
    return arg0;
}
