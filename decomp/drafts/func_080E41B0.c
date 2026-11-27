s32 func_080007EC();

void func_080E41B0(u8 *arg0, s32 arg1) {
    void **p;
    void (*fn)(void *, s32);

    p = *(void ***)(arg0 + 8);
    if (p != 0) {
        fn = (void (*)(void *, s32))((void **)*p)[2];
        fn(p, 3);
    }
    p = *(void ***)(arg0 + 4);
    if (p != 0) {
        fn = (void (*)(void *, s32))((void **)*(void ***)((u8 *)p + 4))[2];
        fn(p, 3);
    }
    ((s32 (*)(void *, s32))func_080007EC)(arg0, arg1);
}
