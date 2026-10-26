s32 func_080088DC(void *);                          /* extern */
s16 *func_08008918(void *);                         /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_0800894C(void *);                          /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_08050D3C(s32, s32, s32, s16 *, s32, s32, s32); /* extern */

typedef struct GenObj {
    u8 _pad0[157];
    s32 unk9D;
    u8 _padA1[60];
    s32 unkDD;
    u8 _padE1[1591];
    s32 unk718;
} GenObj;
void func_080B87C4(GenObj *arg0) {
    s16 spC;
    s16 *temp_r0;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r0_4;
    s16 *temp_r6;
    s32 temp_r5;
    s32 temp_r8;
    s32 temp_sb;
    s32 temp_sl;

    temp_r0 = func_08008918();
    spC = 0x1F40;
    *temp_r0 = 0x1F40;
    temp_r0_2 = func_08008918(arg0);
    spC = 0x1F45;
    temp_r0_2->unkA = 0x1F45;
    temp_r0_3 = func_08008918(arg0);
    spC = 0x1E43;
    temp_r0_3->unkC = 0x1E43;
    temp_r0_4 = func_08008918(arg0);
    spC = 0x1D46;
    temp_r0_4->unkE = 0x1D46;
    func_08008EB8(0, 0x0600BFE0, 0x20);
    temp_sl = arg0->unk718;
    temp_sb = func_080088DC(arg0);
    temp_r8 = func_08008920(arg0);
    temp_r6 = func_08008918(arg0);
    temp_r5 = func_08008940(arg0);
    func_08050D3C(temp_sl, temp_sb, temp_r8, temp_r6, temp_r5, func_0800894C(arg0), 0);
    arg0->unkDD = 1;
    arg0->unk9D = 1;
}
