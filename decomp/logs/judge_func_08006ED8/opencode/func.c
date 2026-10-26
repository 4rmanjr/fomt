#include "common.h"
s32 func_080088DC(void *);                          /* extern */
s32 func_08008918(void *);                          /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_0800894C(void *);                          /* extern */
s32 func_08050D34(s32);                             /* extern */
u32 func_08050D3C(s32, s32, s32, s32, s32, s32, void *); /* extern */
s32 func_08050D5C(s32);                               /* extern */
s32 func_08050D74(s32);                               /* extern */
u8 func_08050DF0(s32);                              /* extern */
s32 func_08050E30(s32, ? *, ? *, ? *, s32, s32, s32); /* extern */
s32 strcpy(void *, void *);                           /* extern */
extern ? gUnk_080E8C2C;
extern ? gUnk_080E8C44;
extern ? gUnk_080E8C48;

void func_08006ED8(void *arg0, ? arg3) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;
    s32 temp_sl;
    u32 temp_r0;
    u8 temp_r0_2;

    if (arg0->unk463C == 0) {
        return;
    }
    temp_r6 = func_08050D34(arg0->unk45F8);
    temp_sb = arg0->unk45F8;
    temp_r8 = func_080088DC(arg0);
    temp_sl = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    temp_r0 = func_08050D3C(temp_sb, temp_r8, temp_sl, temp_r5, temp_r4, func_0800894C(arg0), arg0 + 0x45F0);
    switch (temp_r0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (arg0->unk4638 != 0) {
            arg0->unk463C = 0;
            arg0->unk4638 = 0U;
        }
        if (arg0->unk4639 != 0) {
            arg0->unk4639 = 0U;
            arg0->unk4636 = 1;
            strcpy(arg0 + 0x461C, arg0 + 0x4629);
        }
        func_08050D5C(arg0->unk45F8);
        return;
    case 3:                                         /* switch 1 */
        switch (temp_r6) {                          /* switch 2; irregular */
        default:                                    /* switch 2 */
            func_08050D74(arg0->unk45F8);
            return;
        case 1:                                     /* switch 2 */
            if (arg0->unk463C == 1) {
                func_08050E30(arg0->unk45F8, &gUnk_080E8C2C, &gUnk_080E8C44, &gUnk_080E8C48, 0, 0, 0);
                return;
            }
        case 1:                                     /* switch 1 */
        case 2:                                     /* switch 1 */
        case 4:                                     /* switch 1 */
        case 5:                                     /* switch 1 */
        case 6:                                     /* switch 1 */
            return;
        case 6:                                     /* switch 2 */
            temp_r0_2 = func_08050DF0(arg0->unk45F8);
            switch (temp_r0_2) {                    /* switch 3; irregular */
            case 1:                                 /* switch 3 */
                arg0->unk4639 = temp_r0_2;
                return;
            case 2:                                 /* switch 3 */
                arg0->unk4638 = 1U;
                break;
            }
            break;
        }
        break;
    }
}

