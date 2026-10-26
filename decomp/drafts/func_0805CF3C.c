s32 func_080588AC(void ***, s32);                     /* extern */

s32 *func_0805CF3C(s32 *arg0, void *arg1) {
    void **sp0;
    s32 temp_r1;

    func_080588AC(&sp0, arg1->unk4);
    if (sp0 != 0) {
        (*sp0)->unk8(sp0, 3);
    }
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
