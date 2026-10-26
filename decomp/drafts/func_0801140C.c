s32 GetValueShipped__C11ShippingBin(s32);           /* extern */
s32 ResetValueShipped__11ShippingBin(s32);            /* extern */
s32 func_0809ABD8(s32, s32);                          /* extern */

typedef struct GenObj {
    u8 _pad0[13509];
    s32 unk34C5;
} GenObj;
u32 func_0801140C(GenObj *arg0) {
    s32 temp_r0;
    s32 temp_r6;
    s32 temp_r7;

    temp_r7 = arg0 + 0x54;
    temp_r0 = GetValueShipped__C11ShippingBin(temp_r7);
    temp_r6 = arg0 + 0x1AA8;
    func_0809ABD8(temp_r6, temp_r0);
    if (arg0->unk34C5 != 0) {
        func_0809ABD8(temp_r6, temp_r0);
        arg0->unk34C5 = 0U;
    }
    ResetValueShipped__11ShippingBin(temp_r7);
    return (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
}
