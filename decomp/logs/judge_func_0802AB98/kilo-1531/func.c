#include "common.h"
void *func_0802AB98(void *arg0, void *arg1, s32 arg2) {
    s16 temp_r1;
    s16 temp_r1_2;
    s16 temp_r1_3;
    s16 temp_r1_4;
    s16 temp_r2;
    s16 var_r1;

    switch (arg2) {                                 /* irregular */
    case 1:
        temp_r1 = arg1->unkA;
        arg0->unk0 = (s16) (temp_r1 - 4);
        arg0->unk2 = (s16) (arg1->unkE - 0x14);
        var_r1 = temp_r1 + 4;
block_11:
        arg0->unk4 = var_r1;
        arg0->unk6 = (s16) (arg1->unkE + 2);
        break;
    case 0:
        temp_r1_2 = arg1->unkA;
        temp_r2 = arg1->unkE;
        arg0->unk0 = (s16) (temp_r1_2 - 4);
        arg0->unk2 = (s16) (temp_r2 - 6);
        arg0->unk4 = (s16) (temp_r1_2 + 4);
        arg0->unk6 = (s16) (temp_r2 + 0x12);
        break;
    case 2:
        temp_r1_3 = arg1->unkA;
        arg0->unk0 = (s16) (temp_r1_3 - 0x14);
        arg0->unk2 = (s16) (arg1->unkE - 0xE);
        var_r1 = temp_r1_3 + 4;
        goto block_11;
    case 3:
        temp_r1_4 = arg1->unkA;
        arg0->unk0 = (s16) (temp_r1_4 - 4);
        arg0->unk2 = (s16) (arg1->unkE - 0xE);
        var_r1 = temp_r1_4 + 0x14;
        goto block_11;
    default:
        arg0->unk0 = 0;
        arg0->unk2 = 0;
        arg0->unk4 = 0;
        arg0->unk6 = 0;
        break;
    }
    return arg0;
}

