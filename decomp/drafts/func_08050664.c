s32 func_0804F0E0(s32);                               /* extern */
s8 func_080507D0(s32, s32);                         /* extern */
s32 func_080507F8(void *, s8 *, ? *, s32);            /* extern */
s32 func_0805E850(void *, void *, s32);               /* extern */
u32 strlen(s32 *);                                    /* extern */
extern ? gUnk_080F9F3C;

void func_08050664(void *arg0, ? *arg1, ? *arg2, ? *arg3, ? *arg4, ? *arg5, s32 arg6) {
    s8 sp0;
    s8 sp4;
    ? *sp8;
    ? *var_r6;
    ? *var_r7;
    ? *var_sb;
    ? *var_sl;
    s32 var_r4;
    u32 var_r8;

    var_r7 = arg1;
    sp8 = arg2;
    var_sl = arg3;
    var_sb = arg4;
    var_r6 = arg5;
    if ((var_r7 == 0) || (strlen(var_r7) > 0x1CU)) {
        var_r7 = &gUnk_080F9F3C;
    }
    var_r4 = 7;
    var_r8 = 0xC;
    if (var_r6 == 0) {
        var_r4 = 6;
        if (var_sb == 0) {
            var_r8 = 0x1A;
            var_r4 = 5;
        }
    }
    switch (var_r4) {                               /* switch 1; irregular */
    case 5:                                         /* switch 1 */
        break;
    default:                                        /* switch 1 */
        var_r4 = 5;
        /* fallthrough */
    case 7:                                         /* switch 1 */
        if ((var_r6 == 0) || (strlen(var_r6) > var_r8)) {
            var_r6 = &gUnk_080F9F3C;
        }
        /* fallthrough */
    case 6:                                         /* switch 1 */
        if ((var_sb == 0) || (strlen(var_sb) > var_r8)) {
            var_sb = &gUnk_080F9F3C;
        }
        break;
    }
    if ((var_sl == 0) || (strlen() > var_r8)) {
        var_sl = &gUnk_080F9F3C;
    }
    if ((sp8 == 0) || (strlen(sp8) > var_r8)) {
        sp8 = &gUnk_080F9F3C;
    }
    func_0804F0E0(arg0 + 0xD0);
    sp0.unk0 = 0;
    func_080507F8(arg0, &sp0, var_r7, arg6);
    switch (var_r4) {                               /* switch 2; irregular */
    case 7:                                         /* switch 2 */
        sp0.unk1 = func_080507D0(7, 4);
        func_080507F8(arg0, &sp0 + 1, var_r6, arg6);
        /* fallthrough */
    case 6:                                         /* switch 2 */
        sp0.unk2 = func_080507D0(var_r4, 3);
        func_080507F8(arg0, &sp0 + 2, var_sb, arg6);
        /* fallthrough */
    case 5:                                         /* switch 2 */
        sp0.unk3 = func_080507D0(var_r4, 2);
        func_080507F8(arg0, &sp0 + 3, var_sl, arg6);
        sp4 = func_080507D0(var_r4, 1);
        func_080507F8(arg0, &sp4, sp8, arg6);
        break;
    default:                                        /* switch 2 */
        var_r4 = 5;
        break;
    }
    arg0->unk15C = var_r4;
    arg0->unk158 = 1;
    arg0->unk8 = 6;
    func_0805E850(arg0 + 0x1C0, arg0 + 0x160, 0);
}
