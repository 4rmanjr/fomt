s32 GetFirstSlotWithTool__C8RucksackUi(s32, s32);   /* extern */
s32 GetFirstSlotWith__C9ToolChestUi(s32, s32);      /* extern */
s32 GetId__C4Tool();                                /* extern */
u32 GetLove__C12Bachelorette();                     /* extern */
u32 GetRivalEventCount__C12Bachelorette(s32);       /* extern */
s8 GetTool__C9ToolStack(s32);                       /* extern */
s32 IsEmpty__C9ToolStack(s32);                      /* extern */
s32 func_080A01F8(s32, s32);                        /* extern */
s32 func_080A041C(s32);                             /* extern */
s32 func_080A0504(s32);                             /* extern */
extern s32 gUnk_08107438;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 _pad10[132];
    s32 unk94;
} GenObj;
s32 func_080AA8F0(GenObj *arg0) {
    s32 sp0;
    s8 sp18;
    s32 *var_r5;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r4;
    s32 temp_r7;
    s32 var_r6;
    u32 var_r6_2;
    void *temp_r0_2;
    void *temp_r1;

    temp_r7 = arg0->unk94 + 0x1CD4;
    if (((func_080A0504(temp_r7) << 0x18) == 0) && (func_080A041C(temp_r7) == 0)) {
        temp_r4 = arg0->unk94 + 0x1C34;
        var_r6 = 0;
        if ((((IsEmpty__C9ToolStack(temp_r4) << 0x18) == 0) && (sp18 = GetTool__C9ToolStack(temp_r4), (GetId__C4Tool() == 0x4B))) || (temp_r0 = GetFirstSlotWithTool__C8RucksackUi(arg0->unk94 + 0x1C38, 0x4B), (temp_r0 != -1)) || (GetFirstSlotWith__C9ToolChestUi(arg0->unk94 + 0x380, 0x4B) != temp_r0)) {
            var_r6 = 1;
        }
        if (var_r6 != 0) {
            goto block_15;
        }
        temp_r0_2 = &gUnk_08107438 + 0xC;
        sp0 = gUnk_08107438.unk0;
        sp0.unk4 = (s32) gUnk_08107438.unk4;
        sp0.unk8 = (s32) gUnk_08107438.unk8;
        temp_r1 = &sp0 + 0xC;
        sp0.unkC = (s32) gUnk_08107438.unkC;
        temp_r1->unk4 = (s32) temp_r0_2->unk4;
        temp_r1->unk8 = (s32) temp_r0_2->unk8;
        var_r6_2 = 0;
        var_r5 = &sp0;
loop_11:
        temp_r0_3 = func_080A01F8(temp_r7, *var_r5);
        if ((temp_r0_3 == 0) || (GetLove__C12Bachelorette() <= 0xC34FU) || (GetRivalEventCount__C12Bachelorette(temp_r0_3) > 3U)) {
            var_r5 += 4;
            var_r6_2 += 1;
            if (var_r6_2 > 5U) {
                goto block_15;
            }
            goto loop_11;
        }
        return 1;
    }
block_15:
    return 0;
}
