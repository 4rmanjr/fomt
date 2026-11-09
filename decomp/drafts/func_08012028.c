s32 sub_080D8178(void ***, s32);

typedef struct SP3 {
    void **sp0;
    void ***sp4;
    void **sp8;
} SP3;
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void ***func_08012028(void ***arg0, GenObj *arg1) {
    SP3 sp;

    sub_080D8178(&sp.sp0, arg1->unk4);
    sp.sp8 = sp.sp0;
    sp.sp4 = &sp.sp0;
    sp.sp0 = 0;
    *arg0 = sp.sp8;
    if (*sp.sp8 != 0) {
        ((void (*)(void *, s32))(sp.sp8[2]))(sp.sp8, 3);
    }
    return arg0;
}
