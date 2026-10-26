typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
} GenObj;
void *func_0803D52C(GenObj *arg0, GenObj *arg1) {
    u32 sp0;
    u32 sp4;
    u8 sp8;
    s32 var_r1;
    s32 var_r2_2;
    s32 var_r6;
    u32 *var_r2;
    u32 temp_r0_2;
    u32 temp_r1;
    u32 temp_r2;
    u32 var_r3;
    u32 var_r4;
    u8 temp_r0;
    u8 temp_r1_2;
    u8 temp_r3;
    u8 temp_r3_2;

    temp_r3 = arg1->unk1;
    sp8 = temp_r3;
    var_r3 = ((u32) (temp_r3 << 0x19) >> 0x1B) + ((((u32) (temp_r3 << 0x1E) >> 0x1E) * 0x1E) + ((((u32) (arg1->unk0 << 0x1D) >> 0x1D) + 6) * 0x78));
    if (var_r3 > 6U) {
        var_r3 = var_r3 % 7U;
    }
    var_r6 = (-8 & saved_reg_r9) | (7 & var_r3);
    sp0 = 0xC8;
    temp_r0 = arg1->unk0;
    temp_r1 = ((temp_r0 >> 3) * 7) + ((u32) (temp_r0 << 0x1D) >> 0x1D);
    sp4 = temp_r1;
    var_r2 = &sp0;
    if (temp_r1 < 0xC8U) {
        var_r2 = &sp4;
    }
    var_r4 = *var_r2;
    if ((u32) ((u32) ((s32) arg1->unk0 << 0xB) >> 0x1B) <= 5U) {
        temp_r3_2 = sp8;
        temp_r2 = (u32) (temp_r3_2 << 0x19) >> 0x1B;
        if (temp_r2 == 0) {
            sp8 = (-4 & temp_r3_2) | ((((u32) (temp_r3_2 << 0x1E) >> 0x1E) - 1) & 3);
            var_r2_2 = 0x1D;
        } else {
            var_r2_2 = temp_r2 - 1;
        }
        sp8 = (-0x7D & sp8) | ((var_r2_2 & 0x1F) * 4);
        temp_r1_2 = sp8;
        if ((((u32) (temp_r1_2 << 0x1E) >> 0x1E) == 3) && (((u32) (temp_r1_2 << 0x19) >> 0x1B) == 0x1D)) {
            var_r4 -= 1;
        }
        temp_r0_2 = (u32) (var_r6 << 0x1D) >> 0x1D;
        var_r1 = 6;
        if ((s32) temp_r0_2 > 1) {
            var_r1 = temp_r0_2 - 1;
        }
        var_r6 = (-8 & var_r6) | (var_r1 & 7);
    }
    arg0->unk0 = (s8) var_r4;
    arg0->unk1 = (s8) ((u32) (sp8 << 0x1E) >> 0x1E);
    arg0->unk2 = (s8) (((u32) (sp8 << 0x19) >> 0x1B) + 1);
    arg0->unk3 = (s8) ((u32) (var_r6 << 0x1D) >> 0x1D);
    return arg0;
}
