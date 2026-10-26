s32 GetAmount__C9ToolStack(s32 *);                    /* extern */
u16 GetIconId__C4Tool();                            /* extern */
s32 GetToolAt__8RucksackUi(s32, u32);               /* extern */
s32 GetTool__C9ToolStack(s32 *);                      /* extern */
s32 IsEmpty__C9ToolStack(s32 *);                      /* extern */
s8 func_0800E550(s32, s32);                         /* extern */
s32 func_080CB304(s32, u32, ? *, u16);                /* extern */
s32 func_080CBAF0(s32, ? *, u16, s32);                /* extern */
s32 memcpy(s32 *, s32, s32);                            /* extern */
extern ? gUnk_086678A0;

void func_08090FCC(void *arg0, u32 arg1) {
    s32 sp0;
s32 sp4;
    s8 sp8;
    s32 temp_r4;
    u16 temp_r6;
    u16 temp_r6_2;
    u32 var_r5;

    var_r5 = 0;
    if (arg1 != 0) {
        do {
            memcpy(&sp4, GetToolAt__8RucksackUi(arg0->unk104, var_r5), 2);
            if ((IsEmpty__C9ToolStack(&sp4) << 0x18) == 0) {
                sp8 = func_0800E550(arg0->unk8 + 0x1BD8, GetTool__C9ToolStack(&sp4));
                temp_r6 = GetIconId__C4Tool();
                sp0 = GetAmount__C9ToolStack(&sp4);
                func_080CB304(arg0->unk78, var_r5, &gUnk_086678A0, temp_r6);
            }
            var_r5 += 1;
        } while (var_r5 < arg1);
    }
    if ((IsEmpty__C9ToolStack(arg0->unkFC) << 0x18) == 0) {
        sp0.unk9 = func_0800E550(arg0->unk8 + 0x1BD8, GetTool__C9ToolStack(arg0->unkFC));
        temp_r6_2 = GetIconId__C4Tool();
        temp_r4 = arg0->unk78;
        func_080CBAF0(temp_r4, &gUnk_086678A0, temp_r6_2, GetAmount__C9ToolStack(arg0->unkFC));
    }
}
