void *__builtin_new(s32);                           /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_08008724(void *);                            /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s16 *func_08008918(void *);                         /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08009300(void *, s16 *);                     /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_08050D8C(void *, s32 *);                       /* extern */
s16 func_080975F4(void *);                          /* extern */
s32 func_08097D38(void *);                            /* extern */
s32 func_080989DC(void *, void *);                    /* extern */
s32 func_08099144(void *, u32, u8, s32);              /* extern */
s32 func_080CD8A0(void *);                            /* extern */
extern s32 gUnk_08100AC0;
extern s32 vtable_unk_080E5B80;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    s32 unkC;
    s32 unk10;
    u8 _pad14[100];
    s32 unk78;
    s32 unk7C;
    u8 _pad80[400];
    struct GenObj *unk210;
    u8 _pad214[326];
    s32 unk35A;
    s32 unk35C;
    u8 _pad360[12402];
    s32 unk33D2;
    s32 unk33D3;
    s32 unk33D4;
} GenObj;
s8 func_080972AC(GenObj *arg0) {
    s16 sp0;
    GenObj *sp4;
    s32 sp8;
    s16 *temp_r0;
    s16 *temp_r0_6;
    s16 *temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_6;
    s32 temp_r1_7;
    s32 var_sl;
    s8 temp_r0_3;
    s8 var_r8;
    u32 temp_r0_5;
    u32 var_r7;
    u32 var_sb;
    GenObj *temp_r0_2;
    GenObj *temp_r0_4;
    GenObj *temp_r0_7;
    GenObj *temp_r0_8;
    GenObj *temp_r1_4;
    GenObj *temp_r1_5;
    GenObj *temp_r4;
    GenObj *temp_r4_2;
    GenObj *temp_r4_3;
    void *temp_r5;

    var_r8 = 0;
    var_r7 = 0;
    sp8 = 1;
    var_sb = 0;
    func_08008724(arg0);
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x320);
    func_080073E0(temp_r4, temp_r4->unk4);
    temp_r4->unk4 = func_0800736C(temp_r4);
    func_080989DC(arg0, (GenObj *)((u8 *)arg0 + 0x348));
    temp_r0 = func_08008918(arg0);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r4_2 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg0);
    temp_r4_2->unk0 = 0;
    temp_r4_2->unk4 = 0;
    temp_r4_2->unk8 = &vtable_unk_080E5B80;
    temp_r5 = (GenObj *)((u8 *)temp_r4_2 + 0xC);
    func_08009300(temp_r5, temp_r1);
    sp4 = temp_r4_2;
    func_0800934C(temp_r5, 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg0);
    ((void (*)(void *,...))(temp_r0_2->unk8->unk10))(temp_r0_2, sp4);
    arg0->unk33D2 = 2U;
    var_sl = 0;
loop_1:
    func_080087C8(arg0);
    func_080088B8(arg0);
    switch (var_r7) {                               /* irregular */
    case 0:
        temp_r1_2 = sp4->unk0;
        if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {

        } else {
            arg0->unk33D4 = 2;
            arg0->unk33D2 = 0U;
            var_r7 = 1;
        }
        break;
    case 1:
        if ((s8) arg0->unk33D2 != 2) {

        } else {
            temp_r0_3 = (s8) arg0->unk33D3;
            if (temp_r0_3 == 0) {
                var_r7 = 2;
            } else if (((s32) temp_r0_3 >= 0) && ((s32) temp_r0_3 <= 2)) {
                var_r8 = temp_r0_3;
                var_r7 = 7;
            }
            func_08050D8C((GenObj *)((u8 *)arg0 + 0x80), &gUnk_08100AC0);
        }
        break;
    case 2:
        func_08009378((GenObj *)((u8 *)sp4 + 0xC), 0x889, 2, 1);
        temp_r0_4 = func_08008940(arg0);
        ((void (*)(void *,...))(temp_r0_4->unk8->unk10))(temp_r0_4, sp4);
        var_r7 = 3;
        break;
    case 3:
        temp_r1_3 = sp4->unk0;
        if ((s32) ((0 - temp_r1_3) | temp_r1_3) < 0) {

        } else {
            func_08008B6C((GenObj *)((u8 *)arg0 + 0x94), 0xAD);
            var_sb = 0x78;
            var_r7 = 4;
        }
        break;
    case 4:
        temp_r0_5 = (var_sb << 0x10) + 0xFFFF0000;
        var_sb = temp_r0_5 >> 0x10;
        if ((s32) temp_r0_5 >= 0) {

        } else {
            temp_r0_6 = func_08008918(arg0);
            sp0 = 0x1040;
            *temp_r0_6 = 0x1040;
            temp_r1_4 = arg0->unk7C;
            if ((temp_r1_4 != 0) && (temp_r1_4 != 0)) {
                ((void (*)(void *,...))(temp_r1_4->unk210->unk8))(temp_r1_4, 3);
            }
            arg0->unk7C = 0;
            temp_r1_5 = arg0->unk78;
            if ((temp_r1_5 != 0) && (temp_r1_5 != 0)) {
                ((void (*)(void *,...))(temp_r1_5->unk210->unk8))(temp_r1_5, 3);
            }
            arg0->unk78 = 0;
            *(s16 *)0x05000000 = 0;
            sp8 = 0;
            func_0800934C((GenObj *)((u8 *)sp4 + 0xC), 0x889, 2, 1);
            temp_r0_7 = func_08008940(arg0);
            ((void (*)(void *,...))(temp_r0_7->unk8->unk10))(temp_r0_7, sp4);
            var_r7 = 5;
        }
        break;
    case 5:
        temp_r1_6 = sp4->unk0;
        if ((s32) ((0 - temp_r1_6) | temp_r1_6) >= 0) {
            var_r8 = 4;
            if (func_080975F4(arg0) != 3) {
                var_r8 = 3;
            }
            var_r7 = 6;
        }
        break;
    case 6:
        if ((s8) arg0->unk33D2 == 2) {
            func_08050D8C((GenObj *)((u8 *)arg0 + 0x80), &gUnk_08100AC0);
            var_r7 = 7;
        }
        break;
    case 7:
        func_08009378((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 1);
        temp_r0_8 = func_08008940(arg0);
        ((void (*)(void *,...))(temp_r0_8->unk8->unk10))(temp_r0_8, sp4);
        var_r7 = 8;
        break;
    case 8:
        temp_r1_7 = sp4->unk0;
        if ((s32) ((0 - temp_r1_7) | temp_r1_7) >= 0) {
            var_sl = 1;
        }
        break;
    }
    if (sp8 != 0) {
        func_08099144(arg0, (u32) (arg0->unk35A << 0x14) >> 0x14, arg0->unk35C, 0);
    }
    func_080CD8A0(arg0);
    func_08097D38(arg0);
    if (var_sl == 0) {
        goto loop_1;
    }
    temp_r4_3 = (GenObj *)((u8 *)arg0 + 0x320);
    func_080073E0(temp_r4_3, temp_r4_3->unk4);
    temp_r4_3->unk4 = 0;
    if (sp4 != 0) {
        ((void (*)(void *,...))(sp4->unk8->unkC))(sp4, 3);
    }
    return var_r8;
}
