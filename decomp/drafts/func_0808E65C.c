s32 ExtractItemAt__8RucksackUi(s32 *, s32, s32);        /* extern */
s32 GetArticleStackAt__5ShelfUi(s32, s32);          /* extern */
s32 __12ArticleStack(s32 *);                            /* extern */
s32 func_0800F390(s32);                               /* extern */
s32 func_080CBA60(s32, s32);                          /* extern */
s32 func_080CC0B4(s32);                               /* extern */
s32 func_080CCDEC(s32, s32);                          /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
s32 memcpy(s32, ? *, s32);                            /* extern */

void func_0808E65C(void *arg0, s32 arg1) {
s32 sp0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;

    if (arg1 == 0) {
        func_0800F390(arg0->unkFC);
        func_080CC0B4(arg0->unk78);
        return;
    }
    if (arg1 <= 8) {
        temp_r4 = arg0->unk100;
        ExtractItemAt__8RucksackUi(&sp0, temp_r4, func_080CE184(arg0, arg1, 0));
        temp_r4_2 = arg0->unk78;
        func_080CBA60(temp_r4_2, func_080CE184(arg0, arg1, 0));
        return;
    }
    temp_r4_3 = GetArticleStackAt__5ShelfUi(arg0->unk104, func_080CE184(arg0, arg1, arg0->unk94->unkBC));
    __12ArticleStack(&sp0);
    memcpy(temp_r4_3, &sp0, 2);
    temp_r4_4 = arg0->unk7C;
    func_080CCDEC(temp_r4_4, func_080CE184(arg0, arg1, 0));
}
