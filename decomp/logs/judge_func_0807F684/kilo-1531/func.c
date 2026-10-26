#include "common.h"
s32 GetDesc__C4Tool(s32 *);                           /* extern */
s32 GetDesc__C7Article(void *);                     /* extern */
s32 __4ToolUi(s32 *, s32);                              /* extern */
s32 __7ArticleUi(void *, s32);                        /* extern */
s32 func_080CABEC(s32, s32);                          /* extern */
extern ? gUnk_080FE484;

void func_0807F684(s32 arg0, s32 arg1) {
s32 sp0;
    s32 temp_r2;
    s32 var_r0;
    s32 var_r0_2;
    void *temp_r4;

    temp_r2 = ((arg1 * 4) + arg0)->unk2A8;
    var_r0 = 0;
    if (temp_r2 <= 2) {
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        __4ToolUi(&sp0, *((temp_r2 * 8) + &gUnk_080FE484));
        var_r0_2 = GetDesc__C4Tool(&sp0);
    } else {
        temp_r4 = &sp0 + 1;
        __7ArticleUi(temp_r4, *((temp_r2 * 8) + &gUnk_080FE484));
        var_r0_2 = GetDesc__C7Article(temp_r4);
    }
    func_080CABEC(arg0, var_r0_2);
}

