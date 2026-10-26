s32 __builtin_new(s32);                             /* extern */
s32 func_0807DDC4(s32, s32, s32);                   /* extern */
extern s32 vtable_unk_080E7C20;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
    s32 unk8;
} GenObj;
void *func_0807E438(GenObj *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = &vtable_unk_080E7C20;
    arg0->unk4 = func_0807DDC4(__builtin_new(0x710), arg2, arg3);
    *arg1 = 0;
    arg0->unk8 = (s32) *arg1;
    return arg0;
}
