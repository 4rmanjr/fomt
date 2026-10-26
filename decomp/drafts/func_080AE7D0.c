s32 Unpack(s32 *, s32);                                 /* extern */
s16 *func_08008918(?);                              /* extern */
s32 func_08008E64(s32 *, s32, s32);                     /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
extern ? gUnk_0872FC34;
extern ? gUnk_0872FE6C;
extern ? gUnk_0872FEF8;
extern ? gUnk_08731940;

void func_080AE7D0(s32 arg0) {
    s16 sp0;
    s16 *temp_r0;
    s16 *temp_r0_2;
    s16 *temp_r0_3;

    func_08008EB8(0, 0x06007FE0, 0x20);
    func_08008EB8(-1, 0x0600F000, 0x800);
    func_08008EB8(-1, 0x0600F800, 0x800);
    Unpack(&gUnk_0872FC34, 0x0600F800);
    Unpack(&gUnk_0872FE6C, 0x0600F000);
    Unpack(&gUnk_0872FEF8, 0x06000000);
    func_08008E64(&gUnk_08731940, 0x05000000, 0x200);
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
