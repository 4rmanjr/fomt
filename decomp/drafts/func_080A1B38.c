s32 __12RucksackItem(s32 *);                          /* extern */
s32 __12RucksackItemG4Food(s32 *, s32);               /* extern */
s32 __12RucksackItemG7Article(s32 *, u8);             /* extern */
s32 __4FoodUi(u8 *, s32);                             /* extern */
s32 __7ArticleUi(u8 *, s32);                          /* extern */
s32 func_080A1C94(?, s32, s32);                       /* extern */
s32 func_080A1D20(?, s32, s32, s32);                /* extern */
extern ? gUnk_081043BC;

s32 *func_080A1B38(s32 *arg0, ? arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 sp4;
    u8 sp8;
    u8 spC;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r1;
    s32 var_r1_2;
    u32 temp_r0_3;

    __12RucksackItem(&sp0);
    temp_r0 = func_080A1D20(arg1, arg2, arg3, arg4);
    if (temp_r0 < 0) {

    } else {
        temp_r0_2 = *((temp_r0 * 0xC) + &gUnk_081043BC);
        if (temp_r0_2 > 0x12) {

        } else {
            if (temp_r0_2 <= 0xD) {
                var_r1 = 0x2A;
                switch (temp_r0_2) {                /* switch 1 */
                case 0:                             /* switch 1 */
                    var_r1 = 0x2A;
                    break;
                case 1:                             /* switch 1 */
                    var_r1 = 0x2B;
                    break;
                case 2:                             /* switch 1 */
                    var_r1 = 0x2C;
                    break;
                case 3:                             /* switch 1 */
                    var_r1 = 0x2D;
                    break;
                case 4:                             /* switch 1 */
                    var_r1 = 0x2E;
                    break;
                case 5:                             /* switch 1 */
                    var_r1 = 0x2F;
                    break;
                case 6:                             /* switch 1 */
                    var_r1 = 0x30;
                    break;
                case 7:                             /* switch 1 */
                    var_r1 = 0x31;
                    break;
                case 8:                             /* switch 1 */
                    var_r1 = 0x32;
                    break;
                case 9:                             /* switch 1 */
                    var_r1 = 0x33;
                    break;
                case 10:                            /* switch 1 */
                    var_r1 = 0x34;
                    break;
                case 11:                            /* switch 1 */
                    var_r1 = 0x35;
                    break;
                case 12:                            /* switch 1 */
                    var_r1 = 0x37;
                    break;
                case 13:                            /* switch 1 */
                    var_r1 = 0x28;
                    break;
                }
                __4FoodUi(&sp8, var_r1);
                __12RucksackItemG4Food(&sp4, (sp0.unkA << 0x10) | ((sp0.unk9 << 8) | sp8));
            } else {
                var_r1_2 = 0;
                temp_r0_3 = temp_r0_2 - 0xE;
                switch (temp_r0_3) {                /* switch 2 */
                case 0:                             /* switch 2 */
                    var_r1_2 = 0;
                    break;
                case 1:                             /* switch 2 */
                    var_r1_2 = 1;
                    break;
                case 2:                             /* switch 2 */
                    var_r1_2 = 2;
                    break;
                case 3:                             /* switch 2 */
                    var_r1_2 = 4;
                    break;
                case 4:                             /* switch 2 */
                    var_r1_2 = 0x32;
                    break;
                }
                __7ArticleUi(&spC, var_r1_2);
                __12RucksackItemG7Article(&sp4, spC);
            }
            sp0 = sp4;
            func_080A1C94(arg1, temp_r0, arg4);
        }
    }
    *arg0 = sp0;
    return arg0;
}
