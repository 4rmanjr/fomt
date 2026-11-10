typedef struct GenObj__func_08009940 {
    void *unk0;
    void *unk4;
    u8 _pad8[8];
    void *unk10;
} GenObj__func_08009940;
s32 func_080004F4();                                  /* extern */
s32 func_08000528(s32);                             /* extern */
void func_08009940(GenObj__func_08009940 *, GenObj__func_08009940 *);

void func_080095C0(s32 arg0, s32 arg1) {
    register s32 a1 __asm__("r8");
    register volatile u16 *q __asm__("r1");
    s32 t;
    volatile u16 sp0;
    volatile u16 *p;

    a1 = arg1;
    p = &sp0;
    t = 1;
    t &= func_08000528(1);
    *p = (u16) t;
    func_08009940((GenObj__func_08009940 *) arg0, (GenObj__func_08009940 *) a1);
    q = &sp0;
    if (*q != 0) {
        func_080004F4();
    }
}
