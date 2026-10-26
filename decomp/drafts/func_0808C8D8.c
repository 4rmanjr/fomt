s32 func_0808C840(void *, s32);                       /* extern */
s32 func_080CEBC0(s32);                             /* extern */

typedef struct GenObj {
    u8 _pad0[148];
    s32 unk94;
} GenObj;
void func_0808C8D8(GenObj *arg0) {
    func_0808C840(arg0, func_080CEBC0(arg0->unk94));
}
