s32 GetAmount__C9ToolStack(s32 *);                    /* extern */
u16 GetIconId__C4Tool();                            /* extern */
s32 GetToolStackAt__9ToolChestUi(s32, s32);         /* extern */
s32 GetTool__C9ToolStack(s32 *);                      /* extern */
s32 IsEmpty__C9ToolStack(s32 *);                      /* extern */
s8 func_0800E550(s32, s32);                         /* extern */
s32 func_080CC728(s32, u32, ? *, u16, s32);           /* extern */
s32 func_080CCDEC(s32, u32);                          /* extern */
s32 memcpy(s32 *, s32, s32);                            /* extern */
extern ? gUnk_086678A0;

void func_0808EE9C(void *arg0, s32 arg1) {
s32 sp4;
    s8 sp8;
    s32 temp_r5;
    u16 temp_r4;
    u32 var_r7;

    var_r7 = 0;
    do {
        memcpy(&sp4, GetToolStackAt__9ToolChestUi(arg0->unk104, (arg1 * 8) + var_r7), 2);
        if ((IsEmpty__C9ToolStack(&sp4) << 0x18) == 0) {
            sp8 = func_0800E550(arg0->unk8 + 0x1BD8, GetTool__C9ToolStack(&sp4));
            temp_r4 = GetIconId__C4Tool();
            temp_r5 = arg0->unk7C;
            func_080CC728(temp_r5, var_r7, &gUnk_086678A0, temp_r4, GetAmount__C9ToolStack(&sp4));
        } else {
            func_080CCDEC(arg0->unk7C, var_r7);
        }
        var_r7 += 1;
    } while (var_r7 <= 7U);
}
