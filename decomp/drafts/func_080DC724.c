void *__builtin_delete(void *);                        /* extern */
void func_080A47B4(void *, s32);                       /* extern */
extern s32 vtable_unk_080E65E0;

void func_080DC724(u8 *arg0, s32 arg1) {
    func_080A47B4(arg0 + 0x8C, 2);
    func_080A47B4(arg0 + 0x48, 2);
    func_080A47B4(arg0 + 8, 2);
    *(s32 *) (arg0 + 4) = (s32) &vtable_unk_080E65E0;
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
