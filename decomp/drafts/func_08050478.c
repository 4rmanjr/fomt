s32 func_0804F0E0(void *);                            /* extern */
s32 func_080503E4(void *);                            /* extern */
s8 func_080507D0(u32, s32);                         /* extern */
s32 func_080507F8(void *, s8 *, ? *, s32);            /* extern */
s32 func_0805E850(void *, void *, s32);               /* extern */
u32 strlen(s32 *);                                    /* extern */
extern ? gUnk_080F9F3C;

void func_08050478(void *arg0, ? *arg1, ? *arg2, s32 arg3, ? *arg4, ? *arg5, ? *arg6, s32 arg7) {
    s8 sp0;
    s8 sp4;
    ? *sp8;
    ? *spC;
    ? *var_r7;
    ? *var_r8;
    ? *var_sl;
    s32 temp_r0;
    s32 var_sb;
    u32 var_r5;
    u32 var_r6;

    sp8 = arg1;
    spC = arg2;
    var_sb = arg3;
    var_sl = arg4;
    var_r8 = arg5;
    var_r7 = arg6;
    temp_r0 = arg0->unk8;
    if (temp_r0 >= 0) {
        if (temp_r0 <= 2) {
            func_080503E4(arg0);
        } else if (temp_r0 <= 6) {
            func_0804F0E0(arg0 + 0xD0);
        }
    }
    var_r5 = 4;
    var_r6 = 0xC;
    if (var_r7 == 0) {
        var_r5 = 3;
        if (var_r8 == 0) {
            var_r5 = 2;
            if (var_sl == 0) {
                var_r6 = 0x1A;
                var_r5 = (u32) ((0 - var_sb) | var_sb) >> 0x1F;
            }
        }
    }
    switch (var_r5) {                               /* switch 1 */
    default:                                        /* switch 1 */
        var_r5 = 0;
        /* fallthrough */
    case 4:                                         /* switch 1 */
        if ((var_r7 == 0) || (strlen(var_r7) > var_r6)) {
            var_r7 = &gUnk_080F9F3C;
        }
        /* fallthrough */
    case 3:                                         /* switch 1 */
        if ((var_r8 == 0) || (strlen(var_r8) > var_r6)) {
            var_r8 = &gUnk_080F9F3C;
        }
        /* fallthrough */
    case 2:                                         /* switch 1 */
        if ((var_sl == 0) || (strlen(var_sl) > var_r6)) {
            var_sl = &gUnk_080F9F3C;
        }
        /* fallthrough */
    case 1:                                         /* switch 1 */
        if ((var_sb == 0) || (strlen() > var_r6)) {
            var_sb = (s32) &gUnk_080F9F3C;
        }
        break;
    }
    if ((spC == 0) || (strlen(spC) > var_r6)) {
        spC = &gUnk_080F9F3C;
    }
    if ((sp8 == 0) || (strlen(sp8) > var_r6)) {
        sp8 = &gUnk_080F9F3C;
    }
    switch (var_r5) {                               /* switch 2 */
    case 4:                                         /* switch 2 */
        sp0.unk0 = func_080507D0(var_r5, 6);
        func_080507F8(arg0, &sp0, var_r7, arg7);
        /* fallthrough */
    case 3:                                         /* switch 2 */
        sp0.unk1 = func_080507D0(var_r5, 5);
        func_080507F8(arg0, &sp0 + 1, var_r8, arg7);
        /* fallthrough */
    case 2:                                         /* switch 2 */
        sp0.unk2 = func_080507D0(var_r5, 4);
        func_080507F8(arg0, &sp0 + 2, var_sl, arg7);
        /* fallthrough */
    case 1:                                         /* switch 2 */
        sp0.unk3 = func_080507D0(var_r5, 3);
        func_080507F8(arg0, &sp0 + 3, (s32 *) var_sb, arg7);
        /* fallthrough */
        sp4 = func_080507D0(var_r5, 2);
        func_080507F8(arg0, &sp4, spC, arg7);
        sp0.unk5 = func_080507D0(var_r5, 1);
        func_080507F8(arg0, &sp0 + 5, sp8, arg7);
        break;
    default:                                        /* switch 2 */
        var_r5 = 0;
        break;
    }
    arg0->unk15C = var_r5;
    arg0->unk158 = 1;
    arg0->unk8 = 6;
    func_0805E850(arg0 + 0x1C0, arg0 + 0x160, 0);
}
