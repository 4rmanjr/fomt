s32 func_0800050C(s32);                               /* extern */
s32 func_08000528(s32);                             /* extern */
s32 func_080D100C(s32, ? *);                        /* extern */
extern ? func_080D78E0;
extern void *gUnk_03000410;
extern ? vtable_unk_080E5B3C;
extern ? vtable_unk_080E5B48;

void *func_080D78F8(void *arg0, s32 *arg1) {
    void *temp_r1;

    arg0->unk14 = &vtable_unk_080E5B3C;
    arg0->unk0 = (s32) *arg1;
    arg0->unk4 = (s16) (1 & func_08000528(1));
    temp_r1 = gUnk_03000410;
    gUnk_03000410 = arg0;
    arg0->unk8 = temp_r1;
    arg0->unkC = &vtable_unk_080E5B48;
    arg0->unk10 = func_080D100C(0, &func_080D78E0);
    func_0800050C(1);
    return arg0;
}
