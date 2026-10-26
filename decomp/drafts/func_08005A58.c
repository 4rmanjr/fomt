s32 __builtin_new(s32);                             /* extern */
s32 func_0800770C(s32 *);                               /* extern */
s32 func_08007714(s32 *, s32);                          /* extern */
s32 func_0800835C(s32 *);                               /* extern */
s32 func_08008364(s32 *, s32);                          /* extern */
s32 func_08008444();                                  /* extern */
s32 func_08008B54(void *, s32);                       /* extern */
s32 func_08050CC0(s32, s32, s32, s32, s32, ? *, ? *); /* extern */
extern ? gUnk_080E8BE4;
extern ? vtable_unk_080E5AB4;

void *func_08005A58(void *arg0, s32 arg1, u8 *arg2) {
s32 spC;
s32 sp10;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r3;
    u8 *var_r2;
    void *temp_r2;

    func_08008444();
    arg0->unk4 = &vtable_unk_080E5AB4;
    var_r0 = 7;
    do {
        var_r0 -= 1;
    } while (var_r0 != -1);
    func_08008B54(arg0 + 0x45F0, 1);
    func_08008B54(arg0 + 0x45F4, 2);
    temp_r4 = __builtin_new(4);
    func_0800835C(&spC);
    func_0800770C(&sp10);
    arg0->unk45F8 = func_08050CC0(temp_r4, 0, 0xF, 4, 0, &spC, &sp10);
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    arg0->unk45FC = arg1;
    temp_r2 = arg0 + 0x461C;
    arg0->unk461C = (s32) gUnk_080E8BE4.unk0;
    temp_r2->unk4 = (s32) gUnk_080E8BE4.unk4;
    temp_r2->unk8 = (s32) gUnk_080E8BE4.unk8;
    temp_r2->unkC = (u8) gUnk_080E8BE4.unkC;
    if (arg2 != 0) {
        var_r3 = 0;
        if (*arg2 != 0) {
            var_r2 = arg2;
loop_5:
            *(temp_r2 + var_r3) = *var_r2;
            var_r2 += 1;
            var_r3 += 1;
            if (var_r3 <= 0xC) {
                if (*var_r2 != 0) {
                    goto loop_5;
                }
            }
        }
    }
    return arg0;
}
