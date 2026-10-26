s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s16 *func_08008918(s32);                            /* extern */
s32 func_08008E64(s32 *, s32, s32);                     /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_0804E5AC(s32, s32 *, s32, s32, s32, s32, s32); /* extern */
s32 func_08051320(s32, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 *gUnk_080F9F70;
extern s32 gUnk_080F9F74;
extern s32 *gUnk_080F9F78;
extern s32 gUnk_080FBD30;

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
} GenObj;
void func_0806E234(s32 arg0) {
    s16 spC;
s32 sp14;
    s32 sp54;
    s16 *temp_r0;
    s16 *temp_r0_10;
    s16 *temp_r0_11;
    s16 *temp_r0_12;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r0_4;
    s16 *temp_r0_5;
    s16 *temp_r0_6;
    s16 *temp_r0_7;
    s16 *temp_r0_8;
    s16 *temp_r0_9;
    s32 temp_r4_2;
    s32 var_r5;
    void *temp_r4;
    void *temp_r6;

    temp_r0 = func_08008918();
    spC = 0;
    temp_r0->unk18 = 0;
    temp_r0_2 = func_08008918(arg0);
    spC = 0;
    temp_r0_2->unk1A = 0;
    temp_r0_3 = func_08008918(arg0);
    spC = 0;
    temp_r0_3->unk1C = 0;
    temp_r0_4 = func_08008918(arg0);
    spC = 0;
    temp_r0_4->unk1E = 0;
    func_08008EB8(0, 0x06007FE0, 0x20);
    func_08008EB8(-1, 0x0600E000, 0x800);
    func_08008EB8(-1, 0x0600E800, 0x800);
    temp_r0_5 = func_08008918(arg0);
    spC = 0x1840;
    var_r5 = 0;
    *temp_r0_5 = 0x1840;
    temp_r0_6 = func_08008918(arg0);
    spC = 0x1C03;
    temp_r0_6->unkE = 0x1C03;
    func_08008E64(gUnk_080F9F70, 0x06000000, gUnk_080F9F74);
    func_08008EB8(0x30003, 0x0600E000, 0x800);
    temp_r0_7 = func_08008918(arg0);
    spC = 0;
    temp_r0_7->unk1C = 0;
    temp_r0_8 = func_08008918(arg0);
    spC = 0;
    temp_r0_8->unk1E = 0;
    func_08051320(0x0600E800, 0, 0, 0x20, 3, 0, 0);
    temp_r0_9 = func_08008918(arg0);
    spC = 0;
    temp_r0_9->unk18 = 0;
    temp_r0_10 = func_08008918(arg0);
    spC = 0;
    temp_r0_10->unk1A = 0;
    temp_r0_11 = func_08008918(arg0);
    spC = 0;
    temp_r0_11->unk14 = 0;
    temp_r0_12 = func_08008918(arg0);
    spC = 0;
    temp_r0_12->unk16 = 0;
    func_08008E64(gUnk_080F9F78, 0x05000000, 0x20);
    (void *)0x05000040->unk0 = 0x3E0;
    (void *)0x05000040->unk2 = 0;
    ((void *)0x05000040 + 2)->unk2 = 0x4218;
    temp_r4 = arg0 + 0x20;
    *(0x05000200 + (func_080074C0(temp_r4, temp_r4->unk4) << 5)) = 0x3E0;
    *(0x05000202 + (func_080074C0(temp_r4, temp_r4->unk4) << 5)) = 0;
    *(0x05000204 + (func_080074C0(temp_r4, temp_r4->unk4) << 5)) = 0x4218;
    temp_r6 = arg0 + 0x18;
    do {
        temp_r4_2 = var_r5 * 2;
        sp54 = 1;
        sp54.unk2 = 2;
        func_0804E5AC(sp54, &sp14, 0, 0, (s32) *((u8 *)temp_r4_2 + &gUnk_080FBD30), 0, 1);
        func_08008E64(&sp14, ((func_08007D4C(temp_r6, temp_r6->unk4) + temp_r4_2) << 5) + 0x06010000, 0x40);
        var_r5 += 1;
    } while (var_r5 <= 0x2A);
}
