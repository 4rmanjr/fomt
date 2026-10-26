#include "common.h"
s32 func_080088DC(void *);                          /* extern */
s32 func_08008918(void *);                          /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_0800894C(void *);                          /* extern */
u32 func_08050D3C(s32, s32, s32, s32, s32, s32, void *); /* extern */
s32 func_08050D68(s32);                               /* extern */
s32 func_08050D80(s32);                               /* extern */
s32 func_08050DC8(s32, ? *, s32, void *);             /* extern */
s32 func_0809FE3C(s32, s32);                        /* extern */
s32 func_080A041C(s32);                             /* extern */
extern ? gUnk_0810497C;
extern ? gUnk_081049C4;
extern ? gUnk_081049F8;
extern ? gUnk_08104A40;
extern ? gUnk_08104A84;
extern ? gUnk_08104AC4;
extern ? gUnk_08104B08;
extern ? gUnk_08104B4C;
extern ? gUnk_08104B94;
extern ? gUnk_08104BD4;
extern ? gUnk_08104C18;
extern ? gUnk_08104C54;
extern ? gUnk_08104C98;
extern ? gUnk_08104CDC;
extern ? gUnk_08104D04;
extern ? gUnk_08104D28;
extern ? gUnk_08104D58;
extern ? gUnk_08104D98;
extern ? gUnk_08104DB8;
extern ? gUnk_08104DDC;

void func_080A2940(void *arg0) {
    ? *var_r1;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;
    s8 temp_r0_2;
    u16 temp_r0_3;
    u32 temp_r0;

    temp_sb = arg0->unk10;
    temp_r8 = func_080088DC(arg0);
    temp_r6 = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    temp_r0 = func_08050D3C(temp_sb, temp_r8, temp_r6, temp_r5, temp_r4, func_0800894C(arg0), arg0 + 0x14);
    switch (temp_r0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (arg0->unk216 == 0) {
            func_08050D68(arg0->unk10);
            arg0->unk216 = 3;
            return;
        }
        arg0->unk216 = 2;
        return;
    case 3:                                         /* switch 1 */
        temp_r0_2 = arg0->unk216;
        switch (temp_r0_2) {                        /* switch 2; irregular */
        case 5:                                     /* switch 2 */
            func_08050D80(arg0->unk10);
            arg0->unk216 = 1;
            return;
        case 3:                                     /* switch 2 */
            arg0->unk216 = 5;
            temp_r0_3 = arg0->unk218;
            switch ((u32) temp_r0_3) {              /* switch 3; irregular */
            case 0:                                 /* switch 3 */
                var_r1 = &gUnk_0810497C;
block_32:
block_33:
                func_08050DC8(arg0->unk10, var_r1, 0, arg0 + 0x21C);
                return;
            case 1:                                 /* switch 3 */
                var_r1 = &gUnk_081049C4;
                goto block_32;
            case 2:                                 /* switch 3 */
                var_r1 = &gUnk_081049F8;
                goto block_32;
            case 3:                                 /* switch 3 */
                var_r1 = &gUnk_08104A40;
                goto block_32;
            case 4:                                 /* switch 3 */
                var_r1 = &gUnk_08104A84;
                goto block_32;
            case 5:                                 /* switch 3 */
                var_r1 = &gUnk_08104AC4;
                goto block_32;
            case 6:                                 /* switch 3 */
                var_r1 = &gUnk_08104B08;
                goto block_32;
            case 7:                                 /* switch 3 */
                var_r1 = &gUnk_08104B4C;
                goto block_32;
            case 8:                                 /* switch 3 */
                var_r1 = &gUnk_08104B94;
                goto block_32;
            case 9:                                 /* switch 3 */
                var_r1 = &gUnk_08104BD4;
                goto block_32;
            case 10:                                /* switch 3 */
                var_r1 = &gUnk_08104C18;
                goto block_32;
            case 11:                                /* switch 3 */
                var_r1 = &gUnk_08104C54;
                goto block_32;
            case 12:                                /* switch 3 */
                var_r1 = &gUnk_08104C98;
                goto block_32;
            case 13:                                /* switch 3 */
                var_r1 = &gUnk_08104CDC;
                goto block_32;
            case 14:                                /* switch 3 */
                var_r1 = &gUnk_08104D04;
                goto block_32;
            case 15:                                /* switch 3 */
                var_r1 = &gUnk_08104D28;
                goto block_32;
            case 16:                                /* switch 3 */
                var_r1 = &gUnk_08104D58;
                goto block_32;
            case 17:                                /* switch 3 */
                temp_r4_2 = arg0->unk8 + 0x1CD4;
                arg0->unk224 = func_0809FE3C(temp_r4_2, func_080A041C(temp_r4_2));
                var_r1 = &gUnk_08104D98;
                goto block_33;
            case 18:                                /* switch 3 */
                var_r1 = &gUnk_08104DB8;
                goto block_32;
            default:                                /* switch 3 */
                func_08050DC8(arg0->unk10, &gUnk_08104DDC, 0, arg0 + 0x21C);
            case 1:                                 /* switch 1 */
            case 2:                                 /* switch 1 */
            case 4:                                 /* switch 1 */
            case 5:                                 /* switch 1 */
            case 6:                                 /* switch 1 */
                return;
            }
            break;
        }
        break;
    }
}

