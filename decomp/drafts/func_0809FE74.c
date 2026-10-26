s32 func_0809EAD0(s32);                             /* extern */
extern s32 gUnk_08104258;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk5;
} GenObj;
s32 func_0809FE74(s32 arg0, u32 arg1, u8 *arg2) {
    u8 sp0;
    s32 temp_r3;
    s32 var_r0;
    s32 var_r5;
    u32 var_r0_2;
    u32 var_r0_3;
    u32 var_r1;
    u8 temp_r0;
    u8 temp_r0_3;
    u8 temp_r1;
    u8 temp_r2;
    void *temp_r0_2;

    var_r0 = 0;
    if (arg1 <= 0x2AU) {
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        return (-4 & saved_reg_r9 & ~0x7C) | 0x3C;
    }
    switch (arg1) {                                 /* irregular */
    case 3:
    case 12:
    case 19:
    case 21:
    case 25:
    case 31:
        temp_r0_2 = (arg1 * 8) + &gUnk_08104258;
        temp_r0_3 = temp_r0_2->unk4;
        var_r0_2 = ((u32) (temp_r0_3 << 0x19) >> 0x1B) - 1;
        if (var_r0_2 > 0x1DU) {
            var_r0_2 = var_r0_2 % 30U;
        }
        temp_r3 = (-0x7D & ((-4 & saved_reg_r8) | ((u32) (temp_r0_3 << 0x1E) >> 0x1E))) | ((var_r0_2 & 0x1F) * 4);
        var_r5 = temp_r3;
        temp_r2 = *arg2;
        if (((temp_r2 << 0x1E) == (temp_r3 << 0x1E)) && ((((u32) (temp_r2 << 0x19) >> 0x1B) + 1) == (((u32) (temp_r3 << 0x19) >> 0x1B) + 1))) {
            temp_r1 = temp_r0_2->unk5;
            var_r0_3 = ((u32) (temp_r1 << 0x19) >> 0x1B) - 1;
            if (var_r0_3 > 0x1DU) {
                var_r0_3 = var_r0_3 % 30U;
            }
            var_r5 = (((-4 & sp0) | (((u32) (temp_r1 << 0x1E) >> 0x1E) & 3)) & ~0x7C) | ((var_r0_3 & 0x1F) * 4);
        }
        return var_r5;
    case 35:
        return func_0809EAD0(arg0 + 4);
    default:
        temp_r0 = ((arg1 * 8) + &gUnk_08104258)->unk4;
        var_r1 = ((u32) (temp_r0 << 0x19) >> 0x1B) - 1;
        if (var_r1 > 0x1DU) {
            var_r1 = var_r1 % 30U;
        }
        return (((-4 & saved_reg_r10) | ((u32) (temp_r0 << 0x1E) >> 0x1E)) & ~0x7C) | ((var_r1 & 0x1F) * 4);
    }
}
