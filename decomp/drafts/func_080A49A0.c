s32 func_0805E824(void *, s32, s32, s32);             /* extern */
s32 func_080A46AC(void *, s32, s32, s32, s32);        /* extern */
extern s32 vtable_unk_080E681C;

typedef struct GenObj {
    u8 _pad0[36];
    void *unk24;
    u8 _pad28[20];
    s32 unk3C;
    s32 unk3D;
} GenObj;
void *func_080A49A0(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, u8 arg7) {
    u8 temp_r8;

    temp_r8 = arg7;
    func_080A46AC(arg0, arg3, arg4, arg5, arg6);
    arg0->unk24 = &vtable_unk_080E681C;
    func_0805E824(arg0 + 0x28, arg1, arg2, 0x100);
    arg0->unk3C = 1;
    arg0->unk3D = temp_r8;
    (arg0 + 0x3D)->unk1 = 0;
    return arg0;
}
