s32 func_080A45A8(s32);                             /* extern */
s32 rand();                                         /* extern */
extern ? gUnk_08104E74;

void *func_080A3E90(void *arg0, s32 arg1, u16 *arg2) {
    s32 sp0;
    s32 sp4;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r1;
    s32 var_r4;
    u32 temp_r2;

    temp_r0 = func_080A45A8(arg1);
    sp4 = temp_r0;
    if (temp_r0 == 7) {
        sp0 = 0;
    } else {
        var_r1 = 3;
        temp_r2 = *arg2 << 0x1B;
        if ((u32) ((u32) ((temp_r2 >> 3) + 0xFA000000) >> 0x18) <= 2U) {
            var_r1 = 0;
        } else if ((u32) ((u32) ((temp_r2 >> 3) + 0xF7000000) >> 0x18) <= 7U) {
            var_r1 = 1;
        } else if ((u32) ((u32) ((temp_r2 >> 3) + 0xEF000000) >> 0x18) <= 2U) {
            var_r1 = 2;
        }
        sp0 = (sp0 & 0xFFFF0000) | (u16) (*((var_r1 * 2) + (sp4 * 8) + &gUnk_08104E74) * 0x3C);
        var_r4 = 0;
        temp_r0_2 = rand() >> 8;
        if ((sp4 <= 6) && (sp4 >= 0)) {
            var_r4 = (temp_r0_2 % 6) + 5;
        }
        sp0 = (u16) sp0 | (var_r4 * 0x60000);
    }
    arg0->unk0 = sp0;
    arg0->unk4 = sp4;
    return arg0;
}
