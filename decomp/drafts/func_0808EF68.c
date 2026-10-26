s32 GetToolAt__8RucksackUi(s32, s32);                 /* extern */
s32 GetToolStackAt__9ToolChestUi(s32, s32);         /* extern */
s8 GetTool__C9ToolStack(s32);                       /* extern */
s32 IsEmpty__C9ToolStack(s32);                      /* extern */
s32 func_08050DC8(void *, ? *, s32, s32);             /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
? *func_080CF05C(void *, void *, ? *, s32);         /* extern */
extern ? gUnk_08100144;

void func_0808EF68(void *arg0, s32 arg1) {
s32 sp0;
    ? *var_r2;
    ? *var_sb;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r5;
    s32 var_r3;
    void *var_r1;

    var_sb = 0;
    if (arg1 == 0) {
        if ((IsEmpty__C9ToolStack(arg0->unkFC) << 0x18) == 0) {
            sp0.unk0 = GetTool__C9ToolStack(arg0->unkFC);
            var_r1 = arg0 + 0x98;
            var_r2 = &sp0;
            var_r3 = 1;
            goto block_10;
        }
    } else if (arg1 != 9) {
        if (arg1 <= 8) {
            temp_r4 = arg0->unk100;
            GetToolAt__8RucksackUi(temp_r4, func_080CE184(arg0, arg1, 0));
            if ((IsEmpty__C9ToolStack() << 0x18) == 0) {
                temp_r4_2 = arg0->unk100;
                GetToolAt__8RucksackUi(temp_r4_2, func_080CE184(arg0, arg1, 0));
                var_r2 = &sp0 + 1;
                sp0.unk1 = GetTool__C9ToolStack();
                var_r1 = arg0 + 0x98;
                goto block_9;
            }
        } else {
            temp_r4_3 = arg0->unk104;
            temp_r5 = GetToolStackAt__9ToolChestUi(temp_r4_3, func_080CE184(arg0, arg1, arg0->unk94->unkBC));
            if ((IsEmpty__C9ToolStack() << 0x18) == 0) {
                var_r2 = &sp0 + 2;
                sp0.unk2 = GetTool__C9ToolStack(temp_r5);
                var_r1 = arg0 + 0x98;
block_9:
                var_r3 = 0;
block_10:
                var_sb = func_080CF05C(arg0, var_r1, var_r2, var_r3);
            }
        }
    }
    if (var_sb != 0) {
        func_08050DC8(arg0 + 0x80, var_sb, 0, 0);
        return;
    }
    func_08050DC8(arg0 + 0x80, &gUnk_08100144, 0, 0);
}
