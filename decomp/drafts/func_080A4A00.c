s32 func_0805E824(void *, s32, s32, s32);             /* extern */
s32 func_080A4740(void *, s32, s32, s32);             /* extern */
extern ? vtable_unk_080E681C;

void *func_080A4A00(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6) {
    u8 temp_r6;

    temp_r6 = arg6;
    func_080A4740(arg0, arg3, arg4, arg5);
    arg0->unk24 = &vtable_unk_080E681C;
    func_0805E824(arg0 + 0x28, arg1, arg2, 0x100);
    arg0->unk3C = 1;
    arg0->unk3D = temp_r6;
    (arg0 + 0x3D)->unk1 = 0;
    return arg0;
}
