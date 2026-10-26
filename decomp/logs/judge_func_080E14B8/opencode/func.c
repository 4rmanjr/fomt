#include "common.h"
s32 func_0804EC84(s32, s8 *, s32);                    /* extern */
s32 memcpy(s8 *, s8 *, u32);                          /* extern */
s32 strcpy(void *, s8 *);                             /* extern */
u32 strlen(s8 *);                                   /* extern */
extern ? gUnk_080FA796;

s8 *func_080E14B8(s8 *arg0, void *arg1, s32 arg2) {
    s8 sp0;
    s8 sp8;
    s32 var_r1;
    s8 *temp_r5;
    s8 *temp_r5_2;
    u32 temp_r0;
    u32 var_r4;
    u32 var_r4_2;
    u32 var_r4_3;

    temp_r0 = arg2 - 0xFA;
    switch (temp_r0) {
    case 0:
        func_0804EC84(arg1->unk14, &sp0, 0);
        var_r4 = strlen(&sp0);
        if (var_r4 > 0x1FU) {
            var_r4 = 0x1F;
        }
        memcpy(&sp8, &sp0, var_r4);
        (&sp8)[var_r4] = 0;
        *arg0 = 1;
        strcpy(arg0 + 4, &sp8);
        break;
    case 2:
        var_r1 = arg1->unk4;
block_9:
        if (var_r1 != 0x80) {
            temp_r5 = (0xD * var_r1) + &gUnk_080FA796;
            var_r4_2 = strlen(temp_r5);
            if (var_r4_2 > 0x1FU) {
                var_r4_2 = 0x1F;
            }
            memcpy(&sp8, temp_r5, var_r4_2);
            (&sp8)[var_r4_2] = 0;
            *arg0 = 1;
            strcpy(arg0 + 4, &sp8);
        } else {
        case 1:
            temp_r5_2 = arg1->unk18;
            var_r4_3 = strlen(temp_r5_2);
            if (var_r4_3 > 0x1FU) {
                var_r4_3 = 0x1F;
            }
            memcpy(&sp0, temp_r5_2, var_r4_3);
            (&sp0)[var_r4_3] = 0;
            *arg0 = 1;
            strcpy(arg0 + 4, &sp0);
        }
        break;
    case 3:
        var_r1 = arg1->unk8;
        goto block_9;
    case 4:
        var_r1 = arg1->unkC;
        goto block_9;
    case 5:
        var_r1 = arg1->unk10;
        goto block_9;
    default:
        sp8 = 0;
        *arg0 = 0;
        strcpy(arg0 + 4);
        break;
    }
    return arg0;
}

