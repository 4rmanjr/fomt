s32 func_08005B68(void ***, s32);                     /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void ***func_080070D4(void ***arg0, GenObj *arg1) {
    void **sp0;
    void ***sp4;
    void **sp8;

    func_08005B68(&sp0, arg1->unk4);
    sp4 = &sp0;
    sp8 = sp0;
    sp0 = 0;
    *arg0 = sp0;
    if (sp0 != 0) {
        (*sp0)->unk8(sp0, 3);
    }
    return arg0;
}
