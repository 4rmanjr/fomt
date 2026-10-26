/* Warning: missing "bx $lr" in last block of func_08052984 (initial). */

void *__builtin_new(s32);                           /* extern */
s32 func_08008724(s32);                               /* extern */
void *func_08008918(s32);                           /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08009300(void *, void *);                    /* extern */
s32 func_08054F40(s32);                               /* extern */
s32 func_08055264(s32);                               /* extern */
extern s32 .L08052A70;
extern s32 .L08052A74;
extern s32 .L08052A78;
extern s32 .L08052A7C;

void func_08052984(s32 arg0, s32 arg1) {
s32 sp0;
    void *sp4;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    void *sp3C;
    void *sp40;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r4;

    sp2C = arg0;
    sp30 = 0;
    func_08008724(arg1);
    temp_r0 = func_08008918(arg1);
    sp0.unk0 = 0xBF;
    temp_r0->unk50 = 0xBF;
    temp_r0_2 = func_08008918(arg1);
    sp0.unk0 = 0x10;
    temp_r0_2->unk54 = 0x10;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg1);
    temp_r4->unk0 = sp30;
    temp_r4->unk4 = sp30;
    temp_r4->unk8 = (s32) .L08052A70;
    func_08009300(temp_r4 + 0xC, temp_r1);
    sp4 = temp_r4;
    func_08054F40(arg1);
    func_08055264(arg1);
    *(arg1 + .L08052A74) = (s16) .L08052A78;
    func_08008B6C(arg1 + 0x18, 0x21);
    *(arg1 + .L08052A7C) = sp0.unk30;
    sp34 = 0;
    sp38 = 0;
    sp3C = &sp0 + 8;
    sp40 = &sp0 + 0x24;
}
