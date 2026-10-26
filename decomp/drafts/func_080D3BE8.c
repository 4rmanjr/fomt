s32 __builtin_new(s32);                               /* extern */
void **func_08004C48();                             /* extern */

void ***func_080D3BE8(void ***arg0) {
    void **sp0;
    void ***sp4;
    void **sp8;
    void **temp_r0;

    __builtin_new(4);
    temp_r0 = func_08004C48();
    sp0 = temp_r0;
    sp4 = &sp0;
    sp8 = temp_r0;
    sp0 = 0;
    *arg0 = temp_r0;
    if (sp0 != 0) {
        (*sp0)->unk8(sp0, 3);
    }
    return arg0;
}
