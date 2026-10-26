#include "common.h"
s32 func_080088DC(void *);                          /* extern */
s32 func_08008918(void *);                          /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_0800894C(void *);                          /* extern */
u32 func_08050D3C(s32, s32, s32, s32, s32, s32, void *); /* extern */
s32 func_08050D5C(s32);                               /* extern */
s32 func_08050D74(s32);                               /* extern */
s32 func_08050DF0(s32);                             /* extern */
s32 func_08050E30(s32, s32 *, s32 *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080FBD18;
extern s32 gUnk_080FBD28;
extern s32 gUnk_080FBD2C;

typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    u8 _pad10[1086];
    s32 unk44E;
    s32 unk450;
} GenObj;
void func_0806DD9C(GenObj *arg0) {
    s16 temp_r0_2;
    s16 var_r0;
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;
    u32 temp_r0;

    temp_sb = arg0->unkC;
    temp_r8 = func_080088DC(arg0);
    temp_r6 = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    temp_r0 = func_08050D3C(temp_sb, temp_r8, temp_r6, temp_r5, temp_r4, func_0800894C(arg0), arg0 + 0x10);
    switch (temp_r0) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
        if (arg0->unk44E == 0) {
            func_08050D5C(arg0->unkC);
            arg0->unk44E = 3;
            return;
        }
        arg0->unk44E = 2;
        return;
    case 3:                                         /* switch 1 */
        temp_r0_2 = arg0->unk44E;
        switch (temp_r0_2) {                        /* switch 2; irregular */
        case 5:                                     /* switch 2 */
            func_08050D74(arg0->unkC);
            var_r0 = 1;
block_14:
            arg0->unk44E = var_r0;
        default:                                    /* switch 1 */
        case 1:                                     /* switch 1 */
        case 2:                                     /* switch 1 */
        case 4:                                     /* switch 1 */
        case 5:                                     /* switch 1 */
        case 6:                                     /* switch 1 */
            return;
        case 4:                                     /* switch 2 */
            temp_r1 = func_08050DF0(arg0->unkC);
            arg0->unk44E = 5;
            switch (temp_r1) {                      /* switch 3; irregular */
            case 1:                                 /* switch 3 */
                arg0->unk450 = 0;
                return;
            case 2:                                 /* switch 3 */
                arg0->unk450 = 1;
                return;
            }
            break;
        case 3:                                     /* switch 2 */
            arg0->unk44E = 5;
            func_08050E30(arg0->unkC, &gUnk_080FBD18, &gUnk_080FBD28, &gUnk_080FBD2C, 0, 0, 0);
            var_r0 = 4;
            goto block_14;
        }
        break;
    }
}

