void *GetMapData(s32);                              /* extern */

void func_080A5F78(void *arg0, s32 arg1, void *arg2, u32 arg3, u32 arg4) {
    s32 sp0;
    s32 temp_r1;
    s32 temp_r1_2;
    u16 temp_sl;
    u32 var_r4;
    u32 var_r6;
    u8 *temp_r2;
    void *temp_r1_3;

    temp_sl = GetMapData(arg0->unk4)->unk20;
    var_r6 = 0;
    if (arg4 > 0U) {
        sp0 = arg1 * 4;
        do {
            var_r4 = 0;
            if (arg3 > 0U) {
                do {
                    temp_r1 = arg2->unk0 + var_r4 + ((arg2->unk2 + var_r6) * temp_sl);
                    *(*(arg0 + 0x10 + sp0) + (temp_r1 * 2)) = 0x3FF;
                    temp_r1_2 = temp_r1 * 4;
                    temp_r2 = temp_r1_2 + arg0->unk2C;
                    *temp_r2 &= -2;
                    temp_r1_3 = temp_r1_2 + arg0->unk2C;
                    temp_r1_3->unk2 = (u16) (1 & temp_r1_3->unk2);
                    var_r4 += 1;
                } while (var_r4 < arg3);
            }
            var_r6 += 1;
        } while (var_r6 < arg4);
    }
    arg0->unk29 = 1;
}
