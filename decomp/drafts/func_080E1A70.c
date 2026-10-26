u8 *func_08008920(s32);                             /* extern */
s32 func_0804EA94(s32 *, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_08076EA8();                                  /* extern */

s32 func_080E1A70(void *arg0) {
    s32 sp10;
    s32 sp18;
    s16 *sp20;
    s16 *var_r1;
    s16 *var_r1_2;
    s16 temp_r1;
    s16 temp_r1_3;
    u32 var_r8;
    u32 var_r8_2;
    u8 *temp_r4;
    u8 *temp_r4_2;
    u8 temp_r2;
    u8 temp_r2_2;
    void *temp_r1_2;
    void *temp_r1_4;
    void *var_r5;
    void *var_r6;

    func_08076EA8();
    var_r8 = 0;
    temp_r1 = arg0->unk590;
    if ((s32) (arg0->unk1268 + 0x30) < (s32) temp_r1) {
        var_r1 = arg0 + 0x1268;
        do {
            var_r1 += 0x10;
            var_r8 += 1;
        } while ((s32) (*var_r1 + 0x30) < (s32) temp_r1);
    }
    sp20 = arg0 + 0x163C;
    if (var_r8 < (u32) arg0->unk1264) {
        var_r5 = (var_r8 * 0x10) + 0x1268 + arg0;
        do {
            if ((s32) var_r5->unk0 <= (s32) (arg0->unk590 + 0xA0)) {
                temp_r4 = func_08008920(arg0->unk0);
                func_0804EA94(&sp10, var_r5->unk4, var_r5->unk0 - arg0->unk590, 0x10, 2, 1, 1, 0);
                temp_r2 = *temp_r4;
                if ((u32) temp_r2 <= 0x7FU) {
                    temp_r1_2 = temp_r4 + ((temp_r2 * 8) + 4);
                    temp_r1_2->unk0 = sp10;
                    temp_r1_2->unk4 = (u16) sp10.unk4;
                    *temp_r4 = temp_r2 + 1;
                }
            }
            var_r5 += 0x10;
            var_r8 += 1;
        } while (var_r8 < (u32) arg0->unk1264);
    }
    var_r8_2 = 0;
    temp_r1_3 = arg0->unk590;
    if ((s32) (*sp20 + 0x30) < (s32) temp_r1_3) {
        var_r1_2 = arg0 + 0x163C;
        do {
            var_r1_2 += 0x10;
            var_r8_2 += 1;
        } while ((s32) (*var_r1_2 + 0x30) < (s32) temp_r1_3);
    }
    if (var_r8_2 < (u32) arg0->unk1638) {
        var_r6 = (var_r8_2 * 0x10) + 0x163C + arg0;
        do {
            if ((s32) var_r6->unk0 <= (s32) (arg0->unk590 + 0xA0)) {
                temp_r4_2 = func_08008920(arg0->unk0);
                func_0804EA94(&sp18, var_r6->unk4, var_r6->unk0 - arg0->unk590, 5, 1, 1, 0, 0);
                temp_r2_2 = *temp_r4_2;
                if ((u32) temp_r2_2 <= 0x7FU) {
                    temp_r1_4 = temp_r4_2 + ((temp_r2_2 * 8) + 4);
                    temp_r1_4->unk0 = sp18;
                    temp_r1_4->unk4 = (u16) sp18.unk4;
                    *temp_r4_2 = temp_r2_2 + 1;
                }
            }
            var_r6 += 0x10;
            var_r8_2 += 1;
        } while (var_r8_2 < (u32) arg0->unk1638);
    }
    return 1;
}
