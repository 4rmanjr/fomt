s32 _call_via_r2(void *, s32);

void func_080DC42C(u8 *arg0, s32 arg1) {
    void **p;
    void (*fn)(void *, s32);

    p = *(void ***)(arg0 + 4);
    if (p != 0) {
        fn = (void (*)(void *, s32))((void **)*p)[2];
        fn(p, 3);
    }
    _call_via_r2(arg0, arg1);
}
