s32 GetValueShipped__C11ShippingBin(s32);           /* extern */
s32 func_0801140C(s32);                               /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[316];
    s32 unk140;
    u8 _pad144[3828];
    s32 unk1038;
} GenObj;
void func_0801DCD4(GenObj *arg0) {
    s32 sp0;
    s32 sp4;
    s32 temp_r6;

    temp_r6 = GetValueShipped__C11ShippingBin(arg0->unk1038 + 0x54);
    func_0801140C(arg0->unk1038);
    sp0 = 0x3DB;
    sp4 = temp_r6;
    ((void (*)(void *,...))(arg0->unk0->unk140))(arg0, &sp0, 1);
}
