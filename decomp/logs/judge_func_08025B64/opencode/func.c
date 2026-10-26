#include "common.h"
s32 __12RucksackItemG4Food(s32 *, s32);                 /* extern */
s32 __12RucksackItemG7Article(s32 *, u8);               /* extern */
s32 __4FoodUi(u8 *, s32);                             /* extern */
s32 __4ToolUi(s32 *, s32);                              /* extern */
s32 __7ArticleUi(u8 *, s32);                          /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
s32 func_0802720C(void *, ? *);                       /* extern */
s32 func_0802771C(void *, s32);                       /* extern */
s32 rand();                                         /* extern */

void func_08025B64(void *arg0, u32 arg1) {
s32 sp0;
    u8 sp4;
s32 sp8;
s32 spC;
    u8 sp10;
    u8 sp14;
    u8 sp18;
    u8 sp1C;
    u8 sp20;
    u8 sp24;
    ? *temp_r4;
    ? *var_r0;
    ? *var_r4;
    s32 *var_r4_2;
    s32 temp_r0_2;
    s32 temp_r5;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    u8 *var_r0_3;
    u8 *var_r4_3;
    void *temp_r0;
    void *temp_r5_2;
    void *var_r5;

    switch (arg1) {
    default:
        arg0->unk3C = 0;
        return;
    case 3:
        arg0->unk14->unk80(arg0);
        return;
    case 4:
        var_r4 = &sp8;
        var_r0 = var_r4;
        var_r1 = 5;
block_10:
        __4ToolUi(var_r0, var_r1);
        func_0802720C(arg0, var_r4);
        return;
    case 5:
        var_r4 = &sp0 + 9;
        var_r0 = var_r4;
        var_r1 = 0xD;
        goto block_10;
    case 6:
        var_r4 = &sp0 + 0xA;
        var_r0 = var_r4;
        var_r1 = 0x15;
        goto block_10;
    case 7:
        var_r4 = &sp0 + 0xB;
        var_r0 = var_r4;
        var_r1 = 0x1D;
        goto block_10;
    case 8:
        var_r4 = &spC;
        var_r0 = var_r4;
        var_r1 = 0x25;
        goto block_10;
    case 9:
        var_r4 = &sp0 + 0xD;
        var_r0 = var_r4;
        var_r1 = 0x2D;
        goto block_10;
    case 10:
        temp_r4 = &sp0 + 0xE;
        __4ToolUi(temp_r4, 0x4D);
        func_0802720C(arg0, temp_r4);
        temp_r0 = (*arg0->unk0)->unk14C();
        var_r4_2 = temp_r0->unk0;
        temp_r5 = temp_r0->unk4;
        if (var_r4_2 != temp_r5) {
loop_13:
            if ((func_08008CD0(*var_r4_2) << 0x18) != 0) {
                var_r4_2 += 4;
                if (var_r4_2 == temp_r5) {
                    goto block_15;
                }
                goto loop_13;
            }
            var_r0_2 = *var_r4_2;
        } else {
block_15:
            var_r0_2 = *(temp_r5 - 4);
        }
        func_08008B6C(var_r0_2, 0xB6);
        return;
    case 2:
        temp_r0_2 = rand();
        var_r1_2 = temp_r0_2;
        if (temp_r0_2 < 0) {
            var_r1_2 += 0xF;
        }
        func_0802771C(arg0, (temp_r0_2 - ((var_r1_2 >> 4) * 0x10)) + 5);
        return;
    case 11:
        var_r5 = arg0->unk14;
        __4FoodUi(&sp4, 0x36);
        __12RucksackItemG4Food(&sp0, (sp0.unk6 << 0x10) | ((sp0.unk5 << 8) | sp4));
block_44:
        var_r5->unk5C(arg0, &sp0, 0);
        return;
    case 12:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp0 + 0xF;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x11;
block_43:
        __7ArticleUi(var_r0_3, var_r1_3);
        __12RucksackItemG7Article(&sp0, *var_r4_3);
        goto block_44;
    case 13:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp10;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x12;
        goto block_43;
    case 14:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp0 + 0x11;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x13;
        goto block_43;
    case 15:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp0 + 0x12;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x14;
        goto block_43;
    case 16:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp0 + 0x13;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x15;
        goto block_43;
    case 17:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp14;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x16;
        goto block_43;
    case 18:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp0 + 0x15;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x17;
        goto block_43;
    case 19:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp0 + 0x16;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x18;
        goto block_43;
    case 20:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp0 + 0x17;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x19;
        goto block_43;
    case 21:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp18;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x1A;
        goto block_43;
    case 22:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp0 + 0x19;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x1B;
        goto block_43;
    case 23:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp0 + 0x1A;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x1C;
        goto block_43;
    case 24:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp0 + 0x1B;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x1D;
        goto block_43;
    case 25:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp1C;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x1E;
        goto block_43;
    case 26:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp0 + 0x1D;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x1F;
        goto block_43;
    case 27:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp0 + 0x1E;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x20;
        goto block_43;
    case 28:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp0 + 0x1F;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x21;
        goto block_43;
    case 29:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp20;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x22;
        goto block_43;
    case 30:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp0 + 0x21;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x23;
        goto block_43;
    case 31:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp0 + 0x22;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x24;
        goto block_43;
    case 32:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp0 + 0x23;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x25;
        goto block_43;
    case 33:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp24;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x26;
        goto block_43;
    case 34:
        temp_r5_2 = arg0->unk14;
        __7ArticleUi(&sp0 + 0x25, 0x33);
        __12RucksackItemG7Article(&sp0, sp0.unk25);
        temp_r5_2->unk5C(arg0, &sp0, 0);
        return;
    }
}

