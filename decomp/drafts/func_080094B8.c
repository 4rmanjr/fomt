s32 func_08009324(void *, s32);                     /* extern */
s32 func_080098AC(void *, void *);                  /* extern */
extern s32 vtable_unk_080E5B80;

void func_080094B8(void *arg0, void *arg1) {
    *(s32 *) ((u8 *) arg0 + 8) = (s32) &vtable_unk_080E5B80;
    func_08009324((u8 *) arg0 + 0xC, 2);
    func_080098AC(arg0, arg1);
}
