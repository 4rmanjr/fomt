s32 func_08009300(void *);                          /* extern */
extern s32 vtable_unk_080E5B80;

void *func_08009548(void *arg0) {
    s32 zero;

    zero = 0;
    *(s32 *) arg0 = zero;
    *(s32 *) ((u8 *) arg0 + 4) = zero;
    *(s32 *) ((u8 *) arg0 + 8) = (s32) &vtable_unk_080E5B80;
    func_08009300((u8 *) arg0 + 0xC);
    return arg0;
}
