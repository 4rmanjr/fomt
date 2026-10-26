s32 *GetDesc__C7Article(s32 *);                         /* extern */
s32 __7ArticleUi(s32 *, s32);                           /* extern */
s32 func_080CABEC(s32, s32 *);                          /* extern */
extern s32 gUnk_080FE8FC;
extern s32 gUnk_080FE974;

void func_08081108(s32 arg0, s32 arg1) {
s32 sp0;

    if (arg1 != 0xA) {
        __7ArticleUi(&sp0, *((arg1 * 8) + &gUnk_080FE8FC));
        func_080CABEC(arg0, GetDesc__C7Article(&sp0));
        return;
    }
    func_080CABEC(arg0, &gUnk_080FE974);
}
