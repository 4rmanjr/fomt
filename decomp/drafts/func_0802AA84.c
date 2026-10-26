u32 GetSize__C8Rucksack(s32);                       /* extern */
s32 GetToolAt__C8RucksackUi(s32, u32);              /* extern */
s32 GetToolStackAt__C9ToolChestUi(s32, u32);        /* extern */
s32 GetTool__C9ToolStack(s32);                      /* extern */
s32 IsEmpty__C9ToolStack(s32);                      /* extern */
s8 func_0800E550(s32, s32);                         /* extern */
s32 func_080246BC(s32);                             /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */
extern s32 gUnk_080F11B4;

typedef struct GenObj {
    u8 _pad0[9];
    s32 unk9;
    s32 unkA;
    u8 _padE[38];
    s32 unk34;
} GenObj;
u8 func_0802AA84(GenObj *arg0) {
GenObj sp0;
    s8 sp8;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 var_sb;
    u32 var_r6;
    u32 var_r6_2;

    var_sb = 0;
    temp_r5 = arg0->unk34 + 0x1C34;
    if ((IsEmpty__C9ToolStack(temp_r5) << 0x18) == 0) {
        temp_r4 = arg0->unk34 + 0x1BD8;
        sp8 = func_0800E550(temp_r4, GetTool__C9ToolStack(temp_r5));
        var_sb = func_080246BC(0);
    }
    temp_r7 = arg0->unk34 + 0x1C38;
    var_r6 = 0;
loop_6:
    if (var_r6 < GetSize__C8Rucksack(temp_r7)) {
        temp_r5_2 = GetToolAt__C8RucksackUi(temp_r7, var_r6);
        if ((IsEmpty__C9ToolStack() << 0x18) == 0) {
            temp_r4_2 = arg0->unk34 + 0x1BD8;
            sp0.unk9 = func_0800E550(temp_r4_2, GetTool__C9ToolStack(temp_r5_2));
            var_sb = func_080246BC(var_sb);
        }
        var_r6 += 1;
        goto loop_6;
    }
    temp_r7_2 = arg0->unk34 + 0x380;
    var_r6_2 = 0;
    do {
        temp_r5_3 = GetToolStackAt__C9ToolChestUi(temp_r7_2, var_r6_2);
        if ((IsEmpty__C9ToolStack() << 0x18) == 0) {
            temp_r4_3 = arg0->unk34 + 0x1BD8;
            sp0.unkA = func_0800E550(temp_r4_3, GetTool__C9ToolStack(temp_r5_3));
            var_sb = func_080246BC(var_sb);
        }
        var_r6_2 += 1;
    } while (var_r6_2 <= 0x3FU);
    memcpy(&sp0, &gUnk_080F11B4, 7);
    return *(&sp0 + var_sb);
}
