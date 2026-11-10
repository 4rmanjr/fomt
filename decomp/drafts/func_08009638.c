typedef struct GenObj__func_080099B0 {
    u8 _pad0[12];
    void *unkC;
    void *unk10;
} GenObj__func_080099B0;
s32 func_080004F4();                                  /* extern */
s32 func_08000528(s32);                             /* extern */
void func_080099B0(GenObj__func_080099B0 *, GenObj__func_080099B0 *);

void func_08009638(s32 arg0, s32 arg1) {
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
    func_080099B0((GenObj__func_080099B0 *) arg0, (GenObj__func_080099B0 *) a1);
    q = &sp0;
    if (*q != 0) {
        func_080004F4();
    }
}
