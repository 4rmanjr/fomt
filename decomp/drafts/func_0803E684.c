s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct GenObj {
    u8 _pad0[1];
    s32 unk1;
    s32 unk2;
    u8 _pad6[10];
    s32 unk10;
} GenObj;
s32 func_0803E684(GenObj *arg0) {
GenObj sp0;
    u32 sp4;
    u32 sp8;
    u32 *var_r0;
    u32 temp_r1;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;

    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r0 = sp0.unk1;
    temp_r0_2 = sp0.unk2;
    if ((func_0803D644(temp_r0, temp_r0_2) << 0x18) != 0) {
        return 2;
    }
    sp4 = 0xC8;
    temp_r0_3 = arg0->unk10;
    temp_r1 = ((temp_r0_3 >> 3) * 7) + ((u32) (temp_r0_3 << 0x1D) >> 0x1D);
    sp8 = temp_r1;
    var_r0 = &sp4;
    if (temp_r1 < 0xC8U) {
        var_r0 = &sp8;
    }
    if (((u32) *var_r0 <= 1U) && (temp_r0 == 0) && ((u32) temp_r0_2 <= 2U)) {
        return 0;
    }
    return 1;
}
