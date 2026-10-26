s32 GetArticleStackAt__5ShelfUi(s32, s32);            /* extern */
s8 GetArticle__C12ArticleStack();                   /* extern */
s32 *GetDesc__C7Article();                            /* extern */
s32 *GetItemAt__8RucksackUi(s32, s32);              /* extern */
s32 IsEmpty__C12ArticleStack();                     /* extern */
s32 IsEmpty__C12RucksackItem(s32 *);                /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_08050DC8(void *, s32 *, s32, s32);             /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
s32 *func_080CF67C(void *, s32, s32);                 /* extern */
s32 *func_080CFA38(void *, s32);                      /* extern */
extern s32 gUnk_081000D0;

typedef struct GenObj {
    u8 _pad0[148];
    void *unk94;
    s32 unk98;
    u8 _pad9C[32];
    s32 unkBC;
    u8 _padC0[60];
    s32 unkFC;
    s32 unk100;
    s32 unk104;
} GenObj;
void func_0808C8F4(GenObj *arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    s8 sp8;
    s32 *var_r0;
    s32 *var_r7;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r6;
    s32 temp_r6_2;

    var_r7 = 0;
    temp_r6 = arg0 + 0x98;
    arg0->unk98 = 0;
    if (arg1 == 0) {
        if ((func_0800F190(arg0->unkFC) << 0x18) == 0) {
            var_r0 = func_080CF67C(arg0, temp_r6, arg0->unkFC);
            goto block_8;
        }
    } else if (arg1 <= 8) {
        temp_r4 = arg0->unk100;
        sp0 = *GetItemAt__8RucksackUi(temp_r4, func_080CE184(arg0, arg1, 0));
        if ((IsEmpty__C12RucksackItem(&sp0) << 0x18) == 0) {
            sp4 = sp0;
            var_r0 = func_080CFA38(arg0, temp_r6);
            goto block_8;
        }
    } else {
        temp_r4_2 = arg0->unk94->unkBC;
        temp_r6_2 = (temp_r4_2 * 8) + func_080CE184(arg0, arg1, 0);
        GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r6_2);
        if ((IsEmpty__C12ArticleStack() << 0x18) == 0) {
            GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r6_2);
            sp8 = GetArticle__C12ArticleStack();
            var_r0 = GetDesc__C7Article();
block_8:
            var_r7 = var_r0;
        }
    }
    if (var_r7 != 0) {
        func_08050DC8(arg0 + 0x80, var_r7, 0, 0);
        return;
    }
    func_08050DC8(arg0 + 0x80, &gUnk_081000D0, 0, 0);
}
