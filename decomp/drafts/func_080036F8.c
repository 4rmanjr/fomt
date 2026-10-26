s32 __builtin_new(s32);                               /* extern */
s32 func_08000914();                                /* extern */
extern ? vtable_unk_080E5A18;

void *func_080036F8(void *arg0) {
    arg0->unk0 = &vtable_unk_080E5A18;
    __builtin_new(0x6D34);
    arg0->unk4 = func_08000914();
    return arg0;
}
