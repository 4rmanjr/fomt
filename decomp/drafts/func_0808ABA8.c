s32 func_0808A55C(s32);                               /* extern */

s32 *func_0808ABA8(s32 *arg0, void *arg1) {
    s32 temp_r1;

    func_0808A55C(arg1->unk4);
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
