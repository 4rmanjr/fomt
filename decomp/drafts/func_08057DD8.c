s32 __builtin_new(s32);                             /* extern */
s32 func_080522F8(s32, s32, u8);                    /* extern */
extern ? vtable_unk_080E7960;

void *func_08057DD8(void *arg0, s32 *arg1, s32 arg2, u8 arg3) {
    arg0->unk0 = &vtable_unk_080E7960;
    arg0->unk4 = func_080522F8(__builtin_new(0x23A8), arg2, arg3);
    *arg1 = 0;
    arg0->unk8 = (s32) *arg1;
    return arg0;
}
