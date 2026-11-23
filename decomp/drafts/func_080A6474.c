s32 func_080A4A94(void);                               /* extern */
s32 func_080E43FC(void *);                             /* extern */
extern s32 vtable_unk_080E831C;

void *func_080A6474(u8 *arg0, s32 arg1) {
    u8 *p;

    func_080A4A94();
    *(void **) (arg0 + 0x90) = &vtable_unk_080E831C;
    *(s32 *) (arg0 + 0x94) = arg1;
    *(u8 *) (arg0 + 0x98) = 0;
    func_080E43FC(arg0 + 0x9C);
    p = arg0 + 0xB4;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p += 4;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    return arg0;
}
