s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_0803601C { s32 a; s32 b; s32 c; };

s32 func_0803601C(s32 arg0) {
    s32 t;
    struct Params_func_0803601C w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
