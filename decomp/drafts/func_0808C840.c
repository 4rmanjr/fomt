s32 GetAmount__C12ArticleStack(s32 *);                /* extern */
s32 GetArticleStackAt__5ShelfUi(s32, s32);          /* extern */
s8 GetArticle__C12ArticleStack(s32 *);                /* extern */
u16 GetIconId__C7Article();                         /* extern */
s32 IsEmpty__C12ArticleStack(s32 *);                  /* extern */
s32 func_080CC728(s32, u32, s32 *, u16, s32);           /* extern */
s32 func_080CCDEC(s32, u32);                          /* extern */
s32 memcpy(s32 *, s32, s32);                            /* extern */
extern s32 gUnk_086678A0;

typedef struct GenObj {
    u8 _pad0[124];
    s32 unk7C;
    u8 _pad80[132];
    s32 unk104;
} GenObj;
void func_0808C840(GenObj *arg0, s32 arg1) {
s32 sp4;
    s8 sp8;
    u16 temp_r4;
    u32 var_r5;

    var_r5 = 0;
    do {
        memcpy(&sp4, GetArticleStackAt__5ShelfUi(arg0->unk104, (arg1 * 8) + var_r5), 2);
        if ((IsEmpty__C12ArticleStack(&sp4) << 0x18) == 0) {
            sp8 = GetArticle__C12ArticleStack(&sp4);
            temp_r4 = GetIconId__C7Article();
            func_080CC728(arg0->unk7C, var_r5, &gUnk_086678A0, temp_r4, GetAmount__C12ArticleStack(&sp4));
        } else {
            func_080CCDEC(arg0->unk7C, var_r5);
        }
        var_r5 += 1;
    } while (var_r5 <= 7U);
}
