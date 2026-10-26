#include "common.h"
s32 GetId__C7Article(s8 *);                         /* extern */
s32 func_0800ED2C(s32);                               /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_0800F204(s32);                             /* extern */
s8 func_0800F258(s32);                              /* extern */
s32 func_0800F390(s32);                               /* extern */
s32 func_0802A7D8(void *);                            /* extern */

void func_0802907C(void *arg0) {
    s8 sp0;
    s32 temp_r4;

    temp_r4 = arg0->unk34 + 0x1C2C;
    if ((func_0800F190(temp_r4) << 0x18) == 0) {
        if (func_0800F204(temp_r4) == 1) {
            sp0 = func_0800F258(temp_r4);
            if (GetId__C7Article(&sp0) == 0x35) {
                func_0800ED2C(arg0->unk38);
            }
        }
        func_0800F390(arg0->unk38 + 0x54);
        func_0802A7D8(arg0);
    }
}

