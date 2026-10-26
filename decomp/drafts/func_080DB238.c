s32 __builtin_new(s32, void ***);                   /* extern */
void **func_08011DC4(s32, s32, void ***);           /* extern */

void ***func_080DB238(void ***arg0, void ***arg1) {
    void **sp0;
    s32 sp4;
    void **spC;
    void ***sp18;
    void **sp1C;
    s32 temp_r0;
    u8 temp_r0_2;
    void ***temp_r5;
    void ***var_r1;
    void ***var_r4;
    void **temp_r0_3;
    void **var_r0;

    var_r1 = arg1;
    temp_r5 = var_r1;
    sp0 = (void **)0x2A;
    temp_r0 = temp_r5->unk10;
    if (temp_r0 != 1) {
        if (temp_r0 <= 1) {
            if (temp_r0 != 0) {
                var_r4 = &spC;
            } else {
                var_r0 = (void **)1;
                goto block_8;
            }
        } else if (temp_r0 != 2) {
            var_r4 = &spC;
        } else {
            var_r1 = &sp0;
            temp_r0_2 = temp_r5->unk4;
            var_r1->unk4 = temp_r0_2;
            var_r4 = &spC;
            if ((temp_r0_2 << 0x18) != 0) {
                sp4 = (sp4 & 0xFF0000FF) | ((u32) (temp_r5->unk6 << 0x16) >> 0xE);
                sp0.unk8 = (s16) (((temp_r5->unk8 & 0x3FF) << 6) | ((u8) temp_r5->unk7 >> 2));
                var_r1 = &sp0;
                var_r1->unkA = (s16) ((u32) temp_r5->unk8 >> 0xA);
            }
        }
    } else {
        var_r0 = (void **)5;
block_8:
        spC = var_r0;
        sp0.unk0 = spC;
        sp0.unk4 = (s32) spC.unk4;
        sp0.unk8 = (s32) spC.unk8;
        var_r1 = &sp0 + 0xC;
        var_r4 = &spC;
    }
    temp_r0_3 = func_08011DC4(__builtin_new(8, var_r1), temp_r5->unkC, &sp0);
    spC = temp_r0_3;
    sp18 = var_r4;
    sp1C = temp_r0_3;
    *var_r4 = 0;
    *arg0 = temp_r0_3;
    if (spC != 0) {
        (*spC)->unk8(spC, 3);
    }
    return arg0;
}
