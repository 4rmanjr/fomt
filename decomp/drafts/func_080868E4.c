s32 GetCow__4BarnUi(s32);                             /* extern */
u32 GetProductRank__C9Livestock();                  /* extern */
s32 GetSheep__4BarnUi(s32);                           /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
} GenObj;
s32 func_080868E4(GenObj *arg0, s32 arg2) {
    s32 var_r4;
    u32 temp_r0;
    u32 temp_r0_2;

    var_r4 = 0xBB8;
    if (arg2 == 0) {
        GetCow__4BarnUi(arg0->unk8 + 0x5F0);
        temp_r0 = GetProductRank__C9Livestock();
        switch (temp_r0) {                          /* switch 1 */
        case 3:                                     /* switch 1 */
            var_r4 = 0x1770;
            break;
        case 4:                                     /* switch 1 */
            var_r4 = 0x1B58;
            break;
        }
    } else if (arg2 == 1) {
        GetSheep__4BarnUi(arg0->unk8 + 0x5F0);
        temp_r0_2 = GetProductRank__C9Livestock();
        switch (temp_r0_2) {                        /* switch 2 */
        case 0:                                     /* switch 2 */
            var_r4 = 0x7D0;
            break;
        case 1:                                     /* switch 2 */
            var_r4 = 0x9C4;
            break;
        case 2:                                     /* switch 2 */
        case 0:                                     /* switch 1 */
            var_r4 = 0xBB8;
            break;
        case 3:                                     /* switch 2 */
        case 1:                                     /* switch 1 */
            var_r4 = 0xFA0;
            break;
        case 4:                                     /* switch 2 */
        case 2:                                     /* switch 1 */
            var_r4 = 0x1388;
            break;
        }
    }
    return var_r4;
}
