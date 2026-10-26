s32 __builtin_new(s32);                             /* extern */
s32 func_0807B0F0(s32, s32, s32);                   /* extern */
extern s32 vtable_unk_080E7BF8;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} GenObj;
void *func_0807D070(GenObj *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7BF8;
    arg0->unk4 = func_0807B0F0(__builtin_new(0x231C), arg2, arg3);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    arg0->unkC = arg3;
    arg0->unk10 = arg2;
    return arg0;
}
