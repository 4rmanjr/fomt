s32 Unpack(s32 *, s32);                                 /* extern */
s16 *func_08008918(?);                              /* extern */
s32 func_08008E64(s32 *, s32, s32);                     /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
extern s32 gUnk_0873BE24;
extern s32 gUnk_0873BF48;
extern s32 gUnk_0873BFF0;
extern s32 gUnk_0873CBF4;

void func_080BCFAC(s32 arg0) {
    s16 sp0;
    s16 *temp_r0;
    s16 *temp_r0_2;
    s16 *temp_r0_3;

    func_08008EB8(-1, 0x0600F000, 0x800);
    func_08008EB8(-1, 0x0600F800, 0x800);
    Unpack(&gUnk_0873BE24, 0x0600F800);
    Unpack(&gUnk_0873BF48, 0x0600F000);
    Unpack(&gUnk_0873BFF0, 0x06000000);
    func_08008E64(&gUnk_0873CBF4, 0x05000000, 0x200);
    temp_r0 = func_08008918(arg0);
    sp0 = 0x1640;
    *temp_r0 = 0x1640;
    temp_r0_2 = func_08008918(arg0);
    sp0 = 0x1E41;
    temp_r0_2->unkA = 0x1E41;
    temp_r0_3 = func_08008918(arg0);
    sp0 = 0x1F42;
    temp_r0_3->unkC = 0x1F42;
}
