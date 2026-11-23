typedef struct Art_81108 {
    s32 f0;
    s32 f1;
} Art_81108;

extern Art_81108 gUnk_080FE8FC[];
extern s32 gUnk_080FE974;
void __7ArticleUi(void *, s32);                        /* extern */
s32 GetDesc__C7Article(void *);                        /* extern */
s32 func_080CABEC(s32, s32);                            /* extern */

void func_08081108(s32 arg0, u32 arg1) {
    u8 sp[4];

    if (arg1 != 0xA) {
        __7ArticleUi(sp, gUnk_080FE8FC[arg1].f0);
        func_080CABEC((s32) arg0, (s32) GetDesc__C7Article(sp));
    } else {
        func_080CABEC((s32) arg0, (s32) &gUnk_080FE974);
    }
}
