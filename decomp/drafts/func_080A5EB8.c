void *GetMapData(s32);                              /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    s32 unk4;
} GenObj;
s32 func_080A5EB8(GenObj *arg0, GenObj *arg1) {
s32 sp0;
    s16 var_r0;
    s16 var_r0_2;
    s32 temp_r5;
    s32 var_r2;
    u32 temp_r1;
    u32 var_r4;

    if ((((u32) (arg1->unk0 << 0x16) >> 0x16) == 1) && (arg0->unk0 == 1) && (arg0->unk4 == 8)) {
        var_r0 = ((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2);
        if ((s32) var_r0 < 0) {
            var_r0 += 7;
        }
        var_r0_2 = ((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2);
        if ((s32) var_r0_2 < 0) {
            var_r0_2 += 7;
        }
        sp0 = (s16) (var_r0 >> 3);
        sp0.unk2 = (s16) (var_r0_2 >> 3);
        var_r4 = 0;
        temp_r5 = GetMapData(8)->unk20 * sp0.unk2 * 2;
        var_r2 = 8;
loop_8:
        temp_r1 = 0x3FF & *(*(arg0 + 0x10 + var_r2) + (sp0 * 2) + temp_r5);
        if (temp_r1 != 0x3FF) {
            if (((u32) (temp_r1 - 0x58) <= 0x3CU) || (temp_r1 <= 0x33U)) {
                return 1;
            }
            goto block_13;
        }
        var_r2 -= 4;
        var_r4 += 1;
        if (var_r4 > 2U) {
            goto block_13;
        }
        goto loop_8;
    }
block_13:
    return 0;
}
