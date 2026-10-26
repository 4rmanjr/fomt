s32 func_080074C0(void *, s32);                     /* extern */
void *func_08008918(s32);                           /* extern */
s32 func_08008E64(s32 *, s32, s32);                     /* extern */
s32 func_08008EB8(s32, ? *, s32);                     /* extern */
s32 func_08051320(s32, s32, s32, s32);                /* extern */
extern ? *gUnk_080F9F70;
extern s32 gUnk_080F9F74;
extern ? *gUnk_080F9F78;

void func_08079860(s32 arg0) {
    s16 *var_r1;
    s16 *var_r2_2;
    s16 var_r3;
    s32 var_r2;
    s32 var_r5;
    u16 temp_r4;
    u16 var_r6;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r5;

    temp_r0 = func_08008918();
    unkspC = 0;
    temp_r0->unk14 = 0;
    temp_r0_2 = func_08008918(arg0);
    unkspC = 0;
    temp_r0_2->unk16 = 0;
    temp_r0_3 = func_08008918(arg0);
    unkspC = 0;
    temp_r0_3->unk18 = 0;
    temp_r0_4 = func_08008918(arg0);
    unkspC = 0;
    temp_r0_4->unk1A = 0;
    temp_r0_5 = func_08008918(arg0);
    unkspC = 0;
    temp_r0_5->unk1C = 0;
    temp_r0_6 = func_08008918(arg0);
    unkspC = 0;
    temp_r0_6->unk1E = 0;
    func_08008EB8(0, (s32 *)0x06007FE0, 0x20);
    func_08008EB8(-1, (s32 *)0x0600E000, 0x800);
    func_08008EB8(-1, (s32 *)0x0600E800, 0x800);
    func_08008EB8(-1, (s32 *)0x0600F000, 0x800);
    temp_r0_7 = func_08008918(arg0);
    unkspC = 0x1C43;
    temp_r0_7->unkE = 0x1C43;
    temp_r0_8 = func_08008918(arg0);
    unkspC = 0x1D41;
    temp_r0_8->unkC = 0x1D41;
    temp_r0_9 = func_08008918(arg0);
    unkspC = 0x1E42;
    temp_r0_9->unkA = 0x1E42;
    func_08008E64(gUnk_080F9F70, 0x06000000, gUnk_080F9F74);
    func_08008EB8(0x30003, (s32 *)0x0600E000, 0x800);
    unksp0 = 3;
    unksp4 = 0;
    unksp8 = 0;
    func_08051320(0x0600E800, 0, 0, 0x20);
    func_08008E64(gUnk_080F9F78, 0x05000000, 0x20);
    (void *)0x05000040->unk0 = 0x3E0;
    (void *)0x05000040->unk2 = 0;
    ((void *)0x05000040 + 2)->unk2 = 0x4218;
    temp_r5 = arg0 + 0x828;
    *(0x05000200 + (func_080074C0(temp_r5, temp_r5->unk4) << 5)) = 0x3E0;
    *(0x05000202 + (func_080074C0(temp_r5, temp_r5->unk4) << 5)) = 0;
    *(0x05000204 + (func_080074C0(temp_r5, temp_r5->unk4) << 5)) = 0x4218;
    func_08008EB8(-1, &unksp10, 0x800);
    var_r6 = 0x2060;
    var_r2 = 0;
    do {
        var_r5 = 0;
        temp_r4 = var_r6 + 0x38;
        var_r3 = var_r6 + 0x1C;
        var_r2_2 = (((var_r2 * 2) + 1) << 6) + &unksp12;
        var_r1 = (var_r2 << 7) + &unksp12;
loop_2:
        *var_r1 = var_r6 + var_r5;
        *var_r2_2 = var_r3;
        var_r3 += 1;
        var_r2_2 += 2;
        var_r1 += 2;
        var_r5 += 1;
        if (var_r5 <= 0x1B) {
            goto loop_2;
        }
        var_r6 = temp_r4;
        var_r2 += 1;
    } while (var_r2 <= 0xF);
    func_08008E64(&unksp10, 0x0600F000, 0x800);
}
