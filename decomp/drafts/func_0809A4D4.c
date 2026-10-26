s32 __builtin_new(s32);                             /* extern */
s32 func_08094AC0(s32, s32, u8);                    /* extern */
extern s32 vtable_unk_080E824C;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
    s32 unk8;
} GenObj;
void *func_0809A4D4(GenObj *arg0, s32 *arg1, s32 arg2, u8 arg3) {
    arg0->unk0 = &vtable_unk_080E824C;
    arg0->unk4 = func_08094AC0(__builtin_new(0x33E0), arg2, arg3);
    *arg1 = 0;
    arg0->unk8 = (s32) *arg1;
    return arg0;
}
