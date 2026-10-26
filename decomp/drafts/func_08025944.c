s32 GetId__C4Tool(s8 *);                            /* extern */
s32 GetTool__C9ToolStack(s32);                      /* extern */
s32 IsEmpty__C9ToolStack(s32);                      /* extern */
s8 func_0800E550(s32, s32);                         /* extern */

typedef struct GenObj {
    u8 _pad0[56];
    s32 unk38;
} GenObj;
s32 func_08025944(GenObj *arg0) {
    s8 sp0;
    s32 temp_r4;
    s32 temp_r5;
    u32 temp_r0;

    temp_r5 = arg0->unk38 + 0x5C;
    if ((IsEmpty__C9ToolStack(temp_r5) << 0x18) == 0) {
        temp_r4 = arg0->unk38;
        sp0 = func_0800E550(temp_r4, GetTool__C9ToolStack(temp_r5));
        temp_r0 = GetId__C4Tool(&sp0) - 5;
        switch (temp_r0) {
        case 0:
        case 8:
        case 16:
        case 24:
        case 32:
        case 40:
            return 1;
        }
    } else {
    default:
        return 0;
    }
}
