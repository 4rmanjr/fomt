s32 __builtin_delete();                               /* extern */
void *__builtin_new(s32);                           /* extern */
s32 func_0805E824(void *, s32, s32, s32);           /* extern */
s32 func_0805E860(void *, u16);                       /* extern */
u16 func_080B8DAC(void *, s32, s32, u8);            /* extern */

void func_080B8DF4(void *arg0, u8 arg1) {
    s32 temp_r0;
    s32 temp_r2;
    s32 temp_r7;
    u8 temp_r1;
    void *temp_r0_2;
    void *temp_r4;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r7_2;

    temp_r1 = arg1;
    temp_r0 = func_0805E824(__builtin_new(0x14), arg0->unk77C, 0, 0x100);
    temp_r7 = temp_r1 * 4;
    temp_r5 = temp_r7 + arg0;
    if (temp_r0 != temp_r5->unk7A4) {
        __builtin_delete();
    }
    temp_r5->unk7A4 = temp_r0;
    temp_r0_2 = __builtin_new(0x1C);
    temp_r0_2->unk0 = 0;
    temp_r0_2->unk2 = 0;
    temp_r0_2->unk4 = 0;
    temp_r0_2->unk6 = 0;
    temp_r0_2->unk8 = 0;
    temp_r0_2->unkC = 0;
    temp_r0_2->unk10 = 0;
    temp_r0_2->unk11 = 0;
    temp_r0_2->unk14 = 0;
    temp_r0_2->unk18 = 0;
    temp_r4 = temp_r7 + arg0;
    temp_r7_2 = temp_r7 + arg0;
    if (temp_r0_2 != temp_r4->unk7AC) {
        __builtin_delete();
    }
    temp_r4->unk7AC = temp_r0_2;
    temp_r5_2 = temp_r7_2->unk7A4;
    temp_r2 = temp_r1 << 6;
    func_0805E860(temp_r5_2, func_080B8DAC(arg0, *(arg0 + 0x6C + temp_r2), *(arg0 + 0x74 + temp_r2), temp_r1));
    temp_r7_2->unk7A4->unk10 = 0x100;
}
