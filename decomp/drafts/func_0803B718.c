s32 __13AScriptEngine(s32 **);                          /* extern */
? **__builtin_new(s32);                             /* extern */
s32 func_08008444(s32);                               /* extern */
s32 func_08008B54(s32 **, s32);                         /* extern */
extern ? __vt_6AScene;
extern ? vtable_unk_080E7708;
extern ? vtable_unk_080E7714;
extern ? vtable_unk_080E7728;
extern ? vtable_unk_080E7738;

? ***func_0803B718(s32 ***arg0, void *arg1) {
    ? **sp0;
    void **sp4;
    ? ***spC;
    ? **sp10;
    ? **temp_r5;
    s32 temp_r4;
    void **temp_r0;

    temp_r5 = __builtin_new(0x3A4);
    temp_r0 = arg1->unk4;
    arg1->unk4 = 0;
    sp4 = temp_r0;
    temp_r4 = arg1->unk8;
    temp_r5->unk0 = &__vt_6AScene;
    temp_r5->unk0 = &vtable_unk_080E7738;
    func_08008444(temp_r5 + 4);
    __13AScriptEngine(temp_r5 + 0xC);
    temp_r5->unk8 = &vtable_unk_080E7708;
    temp_r5->unk358 = &vtable_unk_080E7714;
    temp_r5->unk0 = &vtable_unk_080E7728;
    sp4 = 0;
    temp_r5->unk35C = temp_r0;
    temp_r5->unk360 = temp_r4;
    temp_r5->unk368 = 0;
    temp_r5->unk36C = 0;
    temp_r5->unk370 = 0;
    func_08008B54(temp_r5 + 0x374, 0);
    func_08008B54(temp_r5 + 0x378, 1);
    func_08008B54(temp_r5 + 0x37C, 2);
    func_08008B54(temp_r5 + 0x380, 3);
    func_08008B54(temp_r5 + 0x384, 4);
    temp_r5->unk388 = 0;
    (temp_r5 + 0x388)->unk4 = 0;
    (temp_r5 + 0x390)->unk4 = 0;
    temp_r5->unk398 = 0;
    temp_r5->unk39C = 0;
    temp_r5->unk3A0 = 1;
    temp_r5->unk3A1 = 0;
    if (sp4 != 0) {
        (*sp4)->unk8(sp4, 3);
    }
    sp0 = temp_r5;
    spC = &sp0;
    sp10 = temp_r5;
    sp0 = 0;
    *arg0 = temp_r5;
    if (sp0 != 0) {
        (*sp0)->unk8(sp0, 3);
    }
    return arg0;
}
