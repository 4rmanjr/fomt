#include "common.h"
s32 GetAmount__C9ToolStack(s32);                    /* extern */
s32 GetAvailableSpaceForTool__C8RucksackUi(s32, s32); /* extern */
s32 GetAvailableSpaceFor__C9ToolChestUi(s32, s32);  /* extern */
s32 GetId__C4Tool(s8 *);                            /* extern */
s8 GetTool__C9ToolStack(s32);                       /* extern */
s32 IsEmpty__C9ToolStack();                         /* extern */

typedef struct GenObj {
    u8 _pad0[848];
    s32 unk350;
} GenObj;
s32 func_0804E0F8(GenObj *arg0, s32 arg1) {
    s8 sp0;
    s32 temp_r0;
    s32 temp_r4;
    u32 var_r7;

    temp_r4 = arg0->unk350 + 0x1C34;
    if ((IsEmpty__C9ToolStack() << 0x18) == 0) {
        var_r7 = 0;
        sp0 = GetTool__C9ToolStack(temp_r4);
        if (GetId__C4Tool(&sp0) == arg1) {
            temp_r0 = GetAmount__C9ToolStack(temp_r4) ^ 0x63;
            var_r7 = (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
        }
        if ((var_r7 == 0) && (GetAvailableSpaceForTool__C8RucksackUi(arg0->unk350 + 0x1C38, arg1) == 0) && (GetAvailableSpaceFor__C9ToolChestUi(arg0->unk350 + 0x380, arg1) == 0)) {
            return 0;
        }
        goto block_7;
    }
block_7:
    return 1;
}

