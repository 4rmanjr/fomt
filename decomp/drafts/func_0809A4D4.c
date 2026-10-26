s32 __builtin_new(s32);                             /* extern */
s32 func_08094AC0(s32, s32, u8);                    /* extern */
extern ? vtable_unk_080E824C;

void *func_0809A4D4(void *arg0, s32 *arg1, s32 arg2, u8 arg3) {
    arg0->unk0 = &vtable_unk_080E824C;
    arg0->unk4 = func_08094AC0(__builtin_new(0x33E0), arg2, arg3);
    *arg1 = 0;
    arg0->unk8 = (s32) *arg1;
    return arg0;
}
