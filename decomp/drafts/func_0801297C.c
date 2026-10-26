s32 func_0800934C(s32, s32, s32, s32);                /* extern */
s32 func_08009378(s32, s32, s32, s32);                /* extern */

void func_0801297C(void *arg0, u32 arg1, s32 arg2, u8 arg3, u8 arg4) {
    s16 *var_r0;
    s32 var_r2;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    s8 var_r1;
    s8 var_r1_2;
    u16 var_r1_3;
    u8 temp_r3;
    void *temp_r4;

    temp_r3 = arg3;
    temp_r4 = arg0->unk4;
    switch (arg1) {                                 /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_r6 = 2;
        var_r7 = 0;
block_9:
        switch (arg2) {                             /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_r5 = 0x1112;
block_18:
            if (temp_r3 != 0) {
                func_08009378(temp_r4->unkA0, var_r5, var_r6, var_r7);
                temp_r4->unk9C = 0x12;
                (temp_r4 + 0x9C)->unk4C = 0;
                var_r1 = 0;
                if (var_r6 == 2) {
                    var_r1 = 1;
                }
                temp_r4->unkE9 = var_r1;
                return;
            }
            if (arg4 != 0) {
                (*temp_r4->unkA8)->unkB8();
            }
            func_0800934C(temp_r4->unkA0, var_r5, var_r6, var_r7);
            temp_r4->unk9C = 0x13;
            temp_r4->unkE8 = temp_r3;
            var_r1_2 = 0;
            if (var_r6 == 2) {
                var_r1_2 = 1;
            }
            temp_r4->unkE9 = var_r1_2;
            temp_r4->unk10 = (u16) (temp_r4->unk10 | 0xE00);
            if (var_r6 == 1) {
                var_r0 = temp_r4 + 0x60;
                var_r1_3 = temp_r4->unk60;
                var_r2 = 0x80;
            } else {
                var_r0 = temp_r4 + 0x60;
                var_r1_3 = temp_r4->unk60;
                var_r2 = 0xC0;
            }
            *var_r0 = var_r1_3 | var_r2;
            return;
        case 1:                                     /* switch 2 */
            var_r5 = 0x889;
            goto block_18;
        case 2:                                     /* switch 2 */
            var_r5 = 0x444;
            goto block_18;
        }
        break;
    case 1:                                         /* switch 1 */
        var_r6 = 1;
        var_r7 = 0;
        goto block_9;
    case 2:                                         /* switch 1 */
        var_r6 = 2;
block_8:
        var_r7 = 1;
        goto block_9;
    case 3:                                         /* switch 1 */
        var_r6 = 1;
        goto block_8;
    case 4:                                         /* switch 1 */
        var_r6 = 0;
        goto block_8;
    }
}
