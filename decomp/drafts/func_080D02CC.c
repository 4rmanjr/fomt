s32 func_080D0B88();                                  /* extern */
extern s32 *gUnk_03000420;

void func_080D02CC(s32 *arg0) {
    gUnk_03000420 = arg0;
    *arg0 = 0;
    func_080D0B88();
    gUnk_03000420->unk4 = 0;
    gUnk_03000420->unk8 = 0;
}
