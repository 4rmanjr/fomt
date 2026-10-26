s32 sub_080D8178(void ***, s32);                      /* extern */

void ***func_08012028(void ***arg0, void *arg1) {
    void **sp0;
    void ***sp4;
    void **sp8;

    sub_080D8178(&sp0, arg1->unk4);
    sp4 = &sp0;
    sp8 = sp0;
    sp0 = 0;
    *arg0 = sp0;
    if (sp0 != 0) {
        (*sp0)->unk8(sp0, 3);
    }
    return arg0;
}
