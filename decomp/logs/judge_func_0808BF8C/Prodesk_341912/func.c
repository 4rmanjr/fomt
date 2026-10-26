#include "common.h"
s32 *GetItemAt__8RucksackUi(s32, s32);              /* extern */
s32 GetToolAt__8RucksackUi(s32, s32);                 /* extern */
s8 GetTool__C9ToolStack(s32);                       /* extern */
s32 IsEmpty__C12RucksackItem(s32 *);                /* extern */
s32 IsEmpty__C9ToolStack(s32);                      /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_08050DC8(void *, ? *, s32, s32);             /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
? *func_080CF05C(void *, void *, s8 *, s32);        /* extern */
? *func_080CF67C(void *, void *, s32);              /* extern */
? *func_080CFA38(void *, void *);                   /* extern */
extern ? gUnk_081000B0;

void func_0808BF8C(void *arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    s8 sp8;
    ? *var_r0;
    ? *var_r8;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    void *temp_r5;

    var_r8 = 0;
    temp_r5 = arg0 + 0x98;
    arg0->unk98 = 0;
    if (arg1 != 0) {
        if (arg1 != 9) {
            if (arg1 <= 8) {
                temp_r4 = arg0->unk104;
                GetToolAt__8RucksackUi(temp_r4, func_080CE184(arg0, arg1, 0));
                if ((IsEmpty__C9ToolStack() << 0x18) == 0) {
                    temp_r4_2 = arg0->unk104;
                    GetToolAt__8RucksackUi(temp_r4_2, func_080CE184(arg0, arg1, 0));
                    sp0.unk9 = GetTool__C9ToolStack();
                    var_r0 = func_080CF05C(arg0, arg0 + 0x98, &sp0 + 9, 0);
                    goto block_12;
                }
            } else {
                temp_r4_3 = arg0->unk104;
                sp0 = *GetItemAt__8RucksackUi(temp_r4_3, func_080CE184(arg0, arg1, 0));
                if ((IsEmpty__C12RucksackItem(&sp0) << 0x18) == 0) {
                    sp4 = sp0;
                    var_r0 = func_080CFA38(arg0, temp_r5);
                    goto block_12;
                }
            }
        } else if ((func_0800F190(arg0->unk100) << 0x18) == 0) {
            var_r0 = func_080CF67C(arg0, temp_r5, arg0->unk100);
            goto block_12;
        }
    } else if ((IsEmpty__C9ToolStack(arg0->unkFC) << 0x18) == 0) {
        sp8 = GetTool__C9ToolStack(arg0->unkFC);
        var_r0 = func_080CF05C(arg0, temp_r5, &sp8, 1);
block_12:
        var_r8 = var_r0;
    }
    if (var_r8 != 0) {
        func_08050DC8(arg0 + 0x80, var_r8, 0, 0);
        return;
    }
    func_08050DC8(arg0 + 0x80, &gUnk_081000B0, 0, 0);
}

