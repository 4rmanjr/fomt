s32 GetFirstSlotWithTool__C8RucksackUi(s32, s32);
s32 GetFirstSlotWith__C9ToolChestUi(s32, s32);
s32 GetId__C4Tool(s8 *);
s8 GetTool__C9ToolStack(s32);
s32 IsEmpty__C9ToolStack(s32);

typedef struct GenObj {
    u8 _pad0[848];
    s32 unk350;
} GenObj;
s32 func_0804E354(GenObj *arg0, s32 arg1) {
    s8 sp0;
    s32 temp_r0;
    s32 temp_r2;
    s32 temp_r4;
    s32 var_r1;

    temp_r4 = arg0->unk350 + 0x1C34;
    if ((IsEmpty__C9ToolStack(temp_r4) << 0x18) == 0) {
        sp0 = GetTool__C9ToolStack(temp_r4);
        temp_r2 = GetId__C4Tool(&sp0);
        var_r1 = 0;
        if (temp_r2 == arg1) {
            var_r1 = 1;
        }
        if (var_r1 != 0) {
            return 1;
        }
    }
    temp_r4 = (s32)arg0 + 0x350;
    temp_r0 = GetFirstSlotWithTool__C8RucksackUi(*(s32 *)temp_r4 + 0x1C38, arg1);
    if ((temp_r0 == -1) && (GetFirstSlotWith__C9ToolChestUi(*(s32 *)temp_r4 + 0x380, arg1) == temp_r0)) {
        return 0;
    }
    return 1;
}
