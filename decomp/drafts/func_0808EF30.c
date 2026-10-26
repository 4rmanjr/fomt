s32 func_0808EE9C(void *, s32);                       /* extern */
s32 func_080CEB80(s32);                             /* extern */

typedef struct GenObj {
    u8 _pad0[148];
    s32 unk94;
} GenObj;
void func_0808EF30(GenObj *arg0) {
    func_0808EE9C(arg0, func_080CEB80(arg0->unk94));
}
