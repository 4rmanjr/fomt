s32 __builtin_new(s32);                             /* extern */
s32 func_0803B8CC(s32, s32, ?, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 vtable_unk_080E7778;

typedef struct GenObj {
    s32 unk0;
    void *unk4;
} GenObj;
void *func_0803BDFC(GenObj *arg0, ? arg1, ? arg2, ? arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    arg0->unk4 = &vtable_unk_080E7778;
    arg0->unk0 = func_0803B8CC(__builtin_new(0x64), arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    return arg0;
}
