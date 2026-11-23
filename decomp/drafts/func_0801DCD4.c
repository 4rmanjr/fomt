typedef struct GenObj__func_0801140C GenObj__func_0801140C;

s32 GetValueShipped__C11ShippingBin(s32);             /* extern */
u32 func_0801140C(GenObj__func_0801140C *);           /* extern */

void func_0801DCD4(void **arg0) {
    s32 args[2];
    s32 a;
    void **slot;

    a = GetValueShipped__C11ShippingBin((s32) ((u8 *) *(void **) ((u8 *) arg0 + 0x1038) + 0x54));
    func_0801140C((GenObj__func_0801140C *) *(void **) ((u8 *) arg0 + 0x1038));
    slot = (void **) ((u8 *) *arg0 + 0x140);
    args[0] = 0x3DB;
    args[1] = a;
    ((void (*)(void **, s32 *, s32)) *slot)(arg0, args, 1);
}
