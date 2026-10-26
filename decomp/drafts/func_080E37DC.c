s32 func_08050DF0(void *);                          /* extern */
s32 func_08050E0C(void *, ? *, ? *, s32, s32, s32, s32, s32); /* extern */
extern ? gUnk_0810058C;
extern ? gUnk_08100590;

s32 func_080E37DC(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r4;

    var_r4 = 0;
    temp_r0 = arg0->unk3DC;
    switch (temp_r0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (arg0->unk1D4 == 3) {
            arg0->unk3DC = 1;
            func_08050E0C(arg0 + 0x1C8, &gUnk_0810058C, &gUnk_08100590, 0, 0, 0, 0, 0);
        }
        break;
    case 1:                                         /* switch 1 */
        if (arg0->unk1D4 == 3) {
            temp_r0_2 = func_08050DF0(arg0 + 0x1C8);
            switch (temp_r0_2) {                    /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                var_r4 = 2;
                break;
            case 2:                                 /* switch 2 */
                var_r4 = 3;
                break;
            }
        }
        break;
    }
    return var_r4;
}
