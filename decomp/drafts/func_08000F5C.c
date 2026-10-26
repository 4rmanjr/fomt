s32 Unpack(s32 *, s32);                                 /* extern */
s16 *func_08008918(s32);                            /* extern */
s32 func_08008E64(s32 *, s32, s32);                     /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
extern s32 gUnk_0874E648;
extern s32 gUnk_0874EB40;
extern s32 gUnk_0874EB60;

void func_08000F5C(s32 arg0) {
    s16 sp0;
    s16 *temp_r0;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r0_4;

    func_08008EB8(0, 0x06007FE0, 0x20);
    func_08008EB8(-1, 0x0600F800, 0x800);
    Unpack(&gUnk_0874E648, 0x06000000);
    func_08008E64(&gUnk_0874EB40, 0x05000000, 0x20);
    Unpack(&gUnk_0874EB60, 0x0600F800);
    temp_r0 = func_08008918(arg0);
    sp0 = 0x840;
    *temp_r0 = 0x840;
    temp_r0_2 = func_08008918(arg0);
    sp0 = 0x1F43;
    temp_r0_2->unkE = 0x1F43;
    temp_r0_3 = func_08008918(arg0);
    sp0 = 0;
    temp_r0_3->unk1C = 0;
    temp_r0_4 = func_08008918(arg0);
    sp0 = 0;
    temp_r0_4->unk1E = 0;
}
