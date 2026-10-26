s32 __builtin_new(s32);                               /* extern */
s32 func_0803BDFC(void *, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_080E0A94();                                /* extern */
extern s32 vtable_unk_080E77A4;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    s32 unk8;
    s32 unkC;
    s32 unkD;
    s32 unkE;
    s32 unkF;
} GenObj;
void *func_0803BF78(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_0803BDFC(arg0, 0, 0x88, 0xF0, 0x18, arg1, arg2, arg3, arg4);
    arg0->unk4 = &vtable_unk_080E77A4;
    __builtin_new(0x41C);
    arg0->unk8 = func_080E0A94();
    arg0->unkC = (s8) arg5;
    arg0->unkD = 0;
    arg0->unkE = 1;
    arg0->unkF = 1;
    return arg0;
}
