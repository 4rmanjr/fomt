u16 GetIconId__C4Tool(s8 *);                        /* extern */
s32 GetTool__C9ToolStack(s32);                      /* extern */
s8 func_0800E550(s32, s32);                         /* extern */
s32 func_0805E850(void *, s32, u16);                  /* extern */

void func_0802A510(void *arg0) {
    s8 sp0;
    s32 temp_r4;
    u16 temp_r4_2;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r5;

    temp_r0 = arg0 + 0x88;
    arg0->unk88 = 1;
    temp_r0->unk1 = 0;
    temp_r0->unk4 = 0xFFF80000;
    temp_r0->unk8 = 0;
    temp_r0->unk14 = 0x110000;
    temp_r5 = arg0->unk10;
    if (temp_r5 != 0) {
        temp_r4 = arg0->unk38;
        sp0 = func_0800E550(temp_r4, GetTool__C9ToolStack(temp_r4 + 0x5C));
        temp_r4_2 = GetIconId__C4Tool(&sp0);
        func_0805E850(temp_r5 + 0xB4, (**temp_r5->unk0)->unk64(), temp_r4_2);
        temp_r0_2 = temp_r5 + 0xC8;
        temp_r5->unkC8 = 1;
        temp_r0_2->unk2 = 0;
        (temp_r0_2 + 2)->unk1 = 1;
    }
}
