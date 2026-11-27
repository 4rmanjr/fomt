void *func_08069F14(void *, s32 *, s32, s32);
extern u32 vtable_unk_080E7AB4;

u32 *func_0806D8C8(u32 *arg0, u32 *arg1, s32 arg2, s32 arg3) {
    s32 t;
    void **p;
    void (*fn)(void *, s32);

    *arg0 = (u32) &vtable_unk_080E7AB4;
    t = *arg1;
    *arg1 = 0;
    arg0[1] = (u32) func_08069F14((void *) __builtin_new(0x4178), &t, arg2, arg3);
    arg1 = (u32 *) *arg1;
    if (arg1 != 0) {
        p = (void **) *arg1;
        fn = (void (*)(void *, s32)) ((void **) *p)[2];
        fn(arg1, 3);
    }
    return arg0;
}
