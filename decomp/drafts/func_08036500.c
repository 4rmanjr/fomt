s32 __builtin_new(s32);                             /* extern */
struct Params_func_08036500 { s32 a; s32 b; s32 c; };

s32 func_080324BC(s32, s32, s32, s32); /* extern */
s32 func_08036430();                                  /* extern */

s32 func_08036500(s32 arg0) {
    s32 t;
    struct Params_func_08036500 w;
    volatile u8 flag;

    func_08036430();
    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 5, 0x1B);
}
