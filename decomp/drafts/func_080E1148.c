s32 func_080073E0(void *, s32);
s32 func_08007184(void *, s32);
s32 func_08007C28(void *, s32);
s32 func_080079E8(void *, s32);
s32 func_080086BC(void *, void *);
extern u32 vtable_unk_080E5A28;

void func_080E1148(u8 *arg0, void *arg1) {
    u8 *p;

    p = arg0 + 0xB0;
    func_080073E0(p, *(s32 *)(p + 4));
    func_08007184(p, 2);
    p -= 8;
    func_08007C28(p, *(s32 *)(p + 4));
    func_080079E8(p, 2);
    *(u32 **)(arg0 + 0x10) = &vtable_unk_080E5A28;
    func_080086BC(arg0, arg1);
}
