u32 GetMinigameExp__C13HarvestSpriteQ213HarvestSprite4Task(s32, s32); /* extern */
s32 func_080A031C(s32, s32);                        /* extern */

s32 func_08075450(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;
    s32 var_r6;
    u32 temp_r0_2;
    u32 var_r5;

    var_r5 = 0;
    var_r6 = 0;
    var_r4 = 0;
    do {
        temp_r0 = func_080A031C(arg0->unk58C + 0x1CD4, var_r4);
        if (temp_r0 != 0) {
            temp_r0_2 = GetMinigameExp__C13HarvestSpriteQ213HarvestSprite4Task(temp_r0, arg1);
            if (var_r5 < temp_r0_2) {
                var_r6 = var_r4;
                var_r5 = temp_r0_2;
            }
        }
        var_r4 += 1;
    } while (var_r4 <= 6);
    return var_r6;
}
