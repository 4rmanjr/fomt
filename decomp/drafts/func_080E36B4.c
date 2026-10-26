s32 func_08050D34(void *);                          /* extern */
s32 func_08050DF0(void *);                          /* extern */
s32 func_08050E30(void *, ? *, ? *, ? *, s32, s32, s32); /* extern */
extern ? gUnk_08100588;
extern ? gUnk_0810058C;
extern ? gUnk_08100590;

s32 func_080E36B4(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;
    s32 var_r6;
    void *temp_r4;
    void *temp_r5;

    var_r6 = 0;
    temp_r1 = arg0->unk3DC;
    switch (temp_r1) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        temp_r5 = arg0 + 0x1C8;
        if (func_08050D34(temp_r5) == 3) {
            arg0->unk3DC = 1;
            func_08050E30(temp_r5, &gUnk_08100588, &gUnk_0810058C, &gUnk_08100590, 0, 0, 0);
        }
        break;
    case 1:                                         /* switch 1 */
        temp_r4 = arg0 + 0x1C8;
        if (func_08050D34(temp_r4) == 3) {
            temp_r0 = func_08050DF0(temp_r4);
            switch (temp_r0) {                      /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                var_r6 = 2;
                break;
            case 2:                                 /* switch 2 */
                var_r6 = 3;
                break;
            }
        }
        break;
    }
    return var_r6;
}
