s32 __builtin_new(s32);
s32 func_08037008(void *, s32, s32, s32, s32);
extern u32 vtable_unk_080E725C;

void *func_08037B48(s32 arg0, s32 arg1) {
    u8 *p;

    p = (u8 *)__builtin_new(0x44);
    func_08037008(p, arg0, arg1, 0x379, 0xC);
    *(u32 **)(p + 0x14) = &vtable_unk_080E725C;
    return p;
}
