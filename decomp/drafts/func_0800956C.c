typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    s32 unk10;
} GenObj;
s32 func_080004F4();                                  /* extern */
s32 func_08000528(s32);                             /* extern */
void func_08009984(GenObj *);

void func_0800956C(void *arg0) {
    register volatile u16 *q __asm__("r1");
    s32 t;
    volatile u16 sp0;
    volatile u16 *p;

    p = &sp0;
    t = 1;
    t &= func_08000528(1);
    *p = (u16) t;
    func_08009984((GenObj *) arg0);
    q = &sp0;
    if (*q != 0) {
        func_080004F4();
    }
}
