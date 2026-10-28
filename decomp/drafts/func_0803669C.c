s32 __builtin_new(s32);                             /* extern */
struct Params_func_0803669C { s32 a; s32 b; s32 c; };

s32 func_080324BC(s32, s32, s32, s32); /* extern */
s32 func_080365CC();                                  /* extern */

s32 func_0803669C(s32 arg0) {
    s32 t;
    struct Params_func_0803669C w;
    volatile u8 flag;

    func_080365CC();
    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 5, 0x1B);
}
