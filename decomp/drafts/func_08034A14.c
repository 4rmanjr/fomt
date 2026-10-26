s32 func_080324BC(void *, void *, s32, s32, s32, s32); /* extern */
s32 func_080A4A00(void *, s32, u16, void **, s32, s32); /* extern */
extern ? gUnk_080F14B8;
extern ? gUnk_080F14F0;
extern ? vtable_unk_080E6904;

void *func_08034A14(void *arg0, void *arg1) {
    s32 sp8;
    s8 spC;
    s32 temp_r1;
    u8 temp_r5;

    sp8 = 0;
    spC = 0;
    func_080324BC(arg0, arg1, 3, *((arg1->unk30 * 4) + &gUnk_080F14B8), 0, 4);
    arg0->unk4 = &vtable_unk_080E6904;
    temp_r1 = (*arg1->unk0)->unk68();
    temp_r5 = arg1->unk30;
    sp8 = 0;
    func_080A4A00(arg0 + 0x8C, temp_r1, *((temp_r5 * 2) + &gUnk_080F14F0), arg1->unk0, 2, *((temp_r5 * 4) + &gUnk_080F14B8));
    arg0->unkD0 = 0;
    return arg0;
}
