s32 ExtractItemAt__8RucksackUi(s32 *, s32, s32);        /* extern */
s8 GetArticle__C12RucksackItem(s32 *);                /* extern */
s32 GetId__C7Article();                             /* extern */
s32 GetKind__C12RucksackItem(s32 *);                  /* extern */
s32 func_0800ED2C(s32);                               /* extern */
s32 func_0800F204(s32);                             /* extern */
s8 func_0800F258(s32);                              /* extern */
s32 func_0800F390(s32);                               /* extern */
s32 func_080CCDEC(s32, s32);                          /* extern */
s32 func_080CD4D4(s32);                               /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */

void func_0808BC14(void *arg0, s32 arg1) {
s32 sp0;
    s8 sp4;
    s32 temp_r4;
    s32 temp_r4_2;

    if (arg1 == 9) {
        if (func_0800F204(arg0->unk100) == 1) {
            sp4 = func_0800F258(arg0->unk100);
            if (GetId__C7Article() == 0x35) {
                func_0800ED2C(arg0->unk8 + 0x1BD8);
            }
        }
        func_0800F390(arg0->unk100);
        func_080CD4D4(arg0->unk7C);
        return;
    }
    temp_r4 = arg0->unk104;
    ExtractItemAt__8RucksackUi(&sp0, temp_r4, func_080CE184(arg0, arg1, 0));
    if (GetKind__C12RucksackItem(&sp0) == 1) {
        sp0.unk5 = GetArticle__C12RucksackItem(&sp0);
        if (GetId__C7Article() == 0x35) {
            func_0800ED2C(arg0->unk8 + 0x1BD8);
        }
    }
    temp_r4_2 = arg0->unk7C;
    func_080CCDEC(temp_r4_2, func_080CE184(arg0, arg1, 0));
}
