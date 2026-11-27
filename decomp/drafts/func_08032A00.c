s32 func_080324BC(void *, void *, s32, s32, s32, s32, s32, u8); /* extern */

extern u32 vtable_unk_080E6864[];

void *func_08032A00(void *arg0, void *arg1) {
    s8 z;

    z = 0;
    func_080324BC(arg0, arg1, 6, 0x20, 1, 0, 0, z);
    *(void **) ((u8 *) arg0 + 4) = (void *) vtable_unk_080E6864;
    return arg0;
}
