s32 func_08007874(void *);                            /* extern */
s32 func_08007B54(void *, s32);                       /* extern */
s16 func_08007D4C(void *);                          /* extern */
s32 memset(void *, u8, s32);                          /* extern */
extern ? vtable_unk_080E82D8;

void *func_080A4740(void *arg0, void **arg1, ? arg2, ? arg3) {
    u8 sp0;
    void *temp_r4;

    arg0->unk24 = &vtable_unk_080E82D8;
    arg0->unk0 = arg1;
    temp_r4 = arg0 + 4;
    func_08007874(temp_r4);
    temp_r4->unk4 = func_08007B54(temp_r4, arg2);
    arg0->unkC = func_08007D4C(temp_r4);
    sp0 = 0;
    arg0->unk10 = 0;
    memset(arg0 + 0x14, sp0, 1);
    arg0->unk10 = 1;
    arg0->unk14 = (*arg1)->unk48(arg1, arg3);
    return arg0;
}
