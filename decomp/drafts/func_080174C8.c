s32 func_080A1C94(s32, s32, s32);                       /* extern */
s32 func_080A1CBC(s32 *, s32);                        /* extern */
s32 func_080A1EF4(s32, s32);                        /* extern */
s32 func_080A1FC4(s32, s32);                          /* extern */
s32 method_08009B68__4FarmUi(?, s32);                 /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkA;
    s32 unkC;
    s32 unk10;
} GenObj;
s32 func_080174C8(s32 arg0, s32 arg1, s32 arg2, ? arg3, s32 arg4, u8 arg5, GenObj *arg6) {
    GenObj sp0;
    s32 temp_r0;
    s32 var_r0;
    s32 var_r2;
    u8 temp_r4;

    temp_r4 = arg5;
    func_080A1CBC(&sp0, arg1);
    var_r2 = 0;
    if (temp_r4 != 0) {
        switch (sp0) {                              /* switch 1; irregular */
        case 19:                                    /* switch 1 */
            var_r2 = 2;
            goto block_9;
        case 20:                                    /* switch 1 */
            var_r2 = 7;
            goto block_9;
        }
    } else {
        if (sp0 != 0x12) {
            if (sp0 == 0x15) {
                var_r2 = 1;
                goto block_9;
            }
            goto block_25;
        }
block_9:
        arg6->unk10 = 0;
        if (((s32) (arg4 - var_r2) > 0) && ((sp0 == 0x12) || (func_080A1FC4(arg1, arg2), (sp0 == 0x12)) || (func_080A1EF4(arg1, arg2) == 0))) {
            func_080A1C94(arg1, arg2, arg3);
            arg6->unk0 = 1;
            arg6->unk8 = (s32) sp0.unk8;
            arg6->unkC = (s32) sp0.unkA;
            temp_r0 = sp0;
            switch (temp_r0) {                      /* switch 2; irregular */
            case 21:                                /* switch 2 */
                method_08009B68__4FarmUi(arg0, 6);
                var_r0 = 7;
block_23:
                arg6->unk4 = var_r0;
                break;
            case 18:                                /* switch 2 */
                method_08009B68__4FarmUi(arg0, 1);
                var_r0 = 4;
                goto block_23;
            case 19:                                /* switch 2 */
                var_r0 = 6;
                goto block_23;
            case 20:                                /* switch 2 */
                var_r0 = 9;
                goto block_23;
            }
            return 1;
        }
block_25:
        return 0;
    }
}
