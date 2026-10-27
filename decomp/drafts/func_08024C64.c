typedef struct GenObj6 {
    u8 _pad0[6];
    u8 unk6;
} GenObj6;
s32 func_080323C8(GenObj6 *);                            /* extern */

void func_08024C64(GenObj6 *arg0) {
    arg0->unk6 = 0;
    func_080323C8(arg0);
}
