void *func_08008AE0(s32);                           /* extern */
s32 func_08008AF0(s32);                               /* extern */
s32 func_080098AC(s32 *, s32);                        /* extern */
s32 func_080098DC(s32 *, s32);                        /* extern */
s32 func_08009940(s32 *, s32 *);                      /* extern */
extern s32 vtable_unk_080E5AD0;
extern s32 vtable_unk_080E5AE0;
extern s32 vtable_unk_080E5AF0;
extern s32 vtable_unk_080E5BB4;
extern s32 vtable_unk_080E5BD8;
extern s32 vtable_unk_080E5BE8;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    struct GenObj *unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} GenObj;
void func_08011CD8(s32 arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    s32 *sp8;
    s32 spC;
    GenObj *sp10;
    s32 *sp18;
    s32 sp1C;
    GenObj *sp20;
    s32 *sp28;
    s32 sp2C;
    GenObj *sp30;
    s32 *sp38;
s32 sp3C;
    GenObj *sp40;
    s32 *sp48;
    s32 temp_r5;
    GenObj *temp_r0;
    GenObj *temp_r0_2;

    sp0 = 0;
    sp4 = 0;
    sp8 = &vtable_unk_080E5AF0;
    spC = arg0 + 0x10;
    sp10 = 0;
    sp10.unk4 = 0;
    sp18 = &vtable_unk_080E5AE0;
    sp1C = arg1;
    sp20 = 0;
    sp20.unk4 = 0;
    sp28 = &vtable_unk_080E5AD0;
    sp2C = arg0;
    sp30 = 0;
    sp30.unk4 = 0;
    sp38 = &vtable_unk_080E5BB4;
    sp30.unkC = &sp40;
    sp48 = &vtable_unk_080E5BE8;
    sp40 = 0;
    sp40.unk4 = 0;
    sp40.unk8 = &vtable_unk_080E5BD8;
    sp30.unk10 = &sp3C;
    sp30.unk14 = &sp40;
    func_08009940(&sp30, arg0 + 0x6C);
    func_08009940(&sp30, &sp0);
    func_08009940(&sp30, &sp20);
    func_08009940(&sp30, &sp10);
    temp_r5 = arg0 + 0x68;
    temp_r0 = func_08008AE0(temp_r5);
    ((void (*)(void *,...))(temp_r0->unk8->unk10))(temp_r0, &sp30);
    func_08008AF0(temp_r5);
    temp_r0_2 = func_08008AE0(temp_r5);
    ((void (*)(void *,...))(temp_r0_2->unk8->unk14))(temp_r0_2, &sp30);
    func_080098DC(&sp30, 2);
    func_080098AC(&sp20, 2);
    func_080098AC(&sp10, 2);
    func_080098AC(&sp0, 2);
}
