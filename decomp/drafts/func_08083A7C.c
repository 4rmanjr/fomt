s32 __builtin_new(s32);                             /* extern */
s32 func_080821D0(s32, s32, u8, s32, s32, s32, s32); /* extern */
extern s32 vtable_unk_080E7D04;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
} GenObj;
void *func_08083A7C(GenObj *arg0, s32 *arg1, s32 arg2, u8 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    arg0->unk0 = &vtable_unk_080E7D04;
    arg0->unk4 = func_080821D0(__builtin_new(0x48E8), arg2, arg3, arg4, arg5, arg6, arg7);
    *arg1 = 0;
    arg0->unk8 = (s32) *arg1;
    arg0->unkC = arg4;
    arg0->unk10 = arg5;
    arg0->unk14 = arg6;
    arg0->unk18 = arg7;
    arg0->unk1C = arg2;
    return arg0;
}
