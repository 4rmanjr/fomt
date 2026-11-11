s32 func_080A47B4(s32, s32);
s32 __builtin_delete(s32);

typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
} GenObj;
void func_08038EB8(GenObj *arg0) {
    s32 *slot = &arg0->unkC;
    s32 zero = 0;
    s32 v = *slot;

    if (v != zero && v != 0) {
        func_080A47B4(v, 2);
        __builtin_delete(v);
    }
    *slot = zero;
}
