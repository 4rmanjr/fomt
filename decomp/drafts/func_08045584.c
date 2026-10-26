s32 GetDaysSincePlayerEvent_bugged__C12Bachelorette(s32); /* extern */
s32 GetDaysSinceRivalEvent__C12Bachelorette(s32);   /* extern */
s32 GetPlayerEventCount__C12Bachelorette(s32);      /* extern */
s32 GetRivalEventCount__C12Bachelorette(s32);       /* extern */
s32 func_080A0878(s32);                             /* extern */

s32 func_08045584(void *arg0, u8 arg2) {
    s32 temp_r0;

    temp_r0 = func_080A0878(arg0->unk350 + 0x1CD4);
    if (temp_r0 != 0) {
        if (arg2 == 0) {
            if (GetPlayerEventCount__C12Bachelorette(temp_r0) == 5) {
                return GetDaysSincePlayerEvent_bugged__C12Bachelorette(temp_r0);
            }
            goto block_6;
        }
        if (GetRivalEventCount__C12Bachelorette(temp_r0) == 4) {
            return GetDaysSinceRivalEvent__C12Bachelorette(temp_r0);
        }
        goto block_6;
    }
block_6:
    return 0;
}
