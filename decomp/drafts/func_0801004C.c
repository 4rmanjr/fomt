s32 __builtin_new(s32);                             /* extern */
s32 func_0800082C(void ***);                          /* extern */
s32 func_08008980(s32 *);                               /* extern */
s32 func_08008A68(s32 *, s32);                          /* extern */
void **func_08011DC4(s32, s32, void ***);           /* extern */

s32 *func_0801004C(s32 *arg0, void *arg1) {
s32 sp0;
    void **sp4;
    void **sp8;
    void ***sp14;
    void **temp_r0;
    void **temp_r0_2;

    func_08008980(&sp0);
    sp4 = 0;
    if (arg1->unk364 != 0) {
        sp8 = 0;
    } else {
        sp8 = (void **)1;
    }
    temp_r0 = func_08011DC4(__builtin_new(8), arg1->unk4, &sp8);
    if ((temp_r0 != sp4) && (sp4 != 0)) {
        (*sp4)->unk8(sp4, 3);
    }
    sp4 = temp_r0;
    temp_r0_2 = sp4;
    sp4 = 0;
    sp8 = temp_r0_2;
    func_0800082C(&sp8);
    sp8 = 0;
    sp14 = &sp8;
    sp14.unk4 = 0;
    sp8 = 0;
    *arg0 = 0;
    if (sp8 != 0) {
        (*sp8)->unk8(sp8, 3);
    }
    if (sp4 != 0) {
        (*sp4)->unk8(sp4, 3);
    }
    func_08008A68(&sp0, 2);
    return arg0;
}
