extern u32 vtable_unk_080E5B0C;
extern u32 vtable_unk_080E5B18;
s32 func_080D7944(void *, s32);
s32 func_0800959C(void *, s32);

void func_080D7AD4(u8 *arg0, s32 arg1) {
    *(u32 **)(arg0 + 0x30) = &vtable_unk_080E5B0C;
    *(u32 **)(arg0 + 8) = &vtable_unk_080E5B18;
    func_080D7944(arg0 + 0x1C, 0);
    func_0800959C(arg0, arg1);
}
