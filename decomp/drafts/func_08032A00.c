s32 func_080324BC(void *, s32, s32, s32, s32, s32, char *);
extern u32 vtable_unk_080E6864;

void *func_08032A00(u8 *arg0, s32 arg1) {
    char z;

    z = 0;
    func_080324BC(arg0, arg1, 6, 0x20, 1, 0, &z);
    *(u32 **)(arg0 + 4) = &vtable_unk_080E6864;
    return arg0;
}
