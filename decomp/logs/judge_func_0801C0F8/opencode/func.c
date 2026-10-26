#include "common.h"
typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    s32 unk4;
    s32 unk6;
    s32 unk8;
    s32 unkA;
    u8 _padE[4138];
    s32 unk1038;
} GenObj;
s32 func_0801C0F8(GenObj *arg0, GenObj *arg1, GenObj *arg2) {
    s16 var_r0;
    s16 var_r0_2;
    s32 temp_r0;
    s32 temp_r2;
    s32 var_r7;
    u32 temp_r2_2;
    u32 temp_r3;

    var_r7 = 0;
    if (((u32) (arg1->unk0 << 0x16) >> 0x16) == 2) {
        var_r0 = ((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2);
        if ((s32) var_r0 < 0) {
            var_r0 += 7;
        }
        temp_r2 = var_r0 >> 3;
        var_r0_2 = ((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2);
        if ((s32) var_r0_2 < 0) {
            var_r0_2 += 7;
        }
        temp_r0 = var_r0_2 >> 3;
        if (((u32) temp_r2 >= 0x22U) && ((u32) temp_r0 >= 0x16U) && ((u32) temp_r2 <= 0x77U) && ((u32) temp_r0 <= 0x47U)) {
            temp_r3 = (u32) (temp_r2 - 0x22) >> 1;
            temp_r2_2 = (u32) (temp_r0 - 0x16) >> 1;
            arg2->unk0 = (s32) (arg0->unk1038 + 0x9DC + ((temp_r3 + (temp_r2_2 * 0x2B)) * 4));
            arg2->unk4 = (s16) ((temp_r3 * 2) + 0x22);
            arg2->unk6 = (s16) ((temp_r2_2 * 2) + 0x16);
            arg2->unk8 = (s16) temp_r3;
            arg2->unkA = (s16) temp_r2_2;
            var_r7 = 1;
        }
    }
    return var_r7;
}

