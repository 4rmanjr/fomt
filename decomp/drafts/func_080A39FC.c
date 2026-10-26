s8 GetMinigameExp__C13HarvestSpriteQ213HarvestSprite4Task(s32, s32); /* extern */
s32 SetPlayedMinigame__13HarvestSpriteQ213HarvestSprite4Taskb(s32, s32, u8); /* extern */
s32 func_08011464(s32, s32);                          /* extern */
s32 func_080A0930(s32, s32);                        /* extern */
s32 func_080C0D1C(s32 *, s32 *);                        /* extern */
s32 func_080C0D44(s32 *, s32);                          /* extern */
u8 func_080C0D74(s32 *);                              /* extern */
s32 func_080C0D80(s32 *);                             /* extern */
s32 func_080C0D90(void ***, ? *);                     /* extern */

void **func_080A39FC(void **arg0, void *arg1) {
s32 sp0;
    void **sp8;
    s32 spC;
    void ***sp14;
    void *sp18;
    s32 temp_r0_2;
    s32 temp_r4_2;
    s32 var_r0;
    u32 temp_r0;
    u8 temp_r4;
    void *temp_r0_3;

    spC = 4;
    spC.unk4 = 0x12;
    temp_r0 = arg1->unkC - 0x24;
    switch (temp_r0) {
    case 0:
        var_r0 = 0;
block_9:
        spC = var_r0;
        break;
    case 1:
        var_r0 = 2;
        goto block_9;
    case 2:
        var_r0 = 3;
        goto block_9;
    case 3:
        var_r0 = 4;
        goto block_9;
    case 4:
        var_r0 = 5;
        goto block_9;
    case 5:
        var_r0 = 6;
        goto block_9;
    case 6:
        var_r0 = 1;
        goto block_9;
    }
    temp_r0_2 = func_080A0930(arg1->unk8 + 0x1CD4, arg1->unkC);
    spC.unk4 = GetMinigameExp__C13HarvestSpriteQ213HarvestSprite4Task(temp_r0_2, 0);
    func_080C0D1C(&sp0, &spC);
    func_080C0D90(&sp8, &sp0);
    if (sp8 != 0) {
        (*sp8)->unk8(sp8, 3);
    }
    temp_r4 = func_080C0D74(&sp0);
    SetPlayedMinigame__13HarvestSpriteQ213HarvestSprite4Taskb(temp_r0_2, 0, temp_r4);
    arg1->unk4->unkC = temp_r4;
    temp_r4_2 = arg1->unk8;
    func_08011464(temp_r4_2, func_080C0D80(&sp0));
    temp_r0_3 = arg1->unk4;
    arg1->unk4 = 0;
    sp14 = &sp8;
    sp18 = temp_r0_3;
    sp8 = 0;
    *arg0 = temp_r0_3;
    func_080C0D44(&sp0, 2);
    return arg0;
}
