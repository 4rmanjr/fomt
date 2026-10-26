#include "common.h"
s32 func_08050D74();                                  /* extern */
s32 func_080D7F60(void *);                            /* extern */
s32 func_080D7F74(void *);                            /* extern */
s32 func_080D7F88(void *);                            /* extern */

void func_08012658(void *arg0) {
    void *temp_r4;

    temp_r4 = arg0->unk4;
    if (temp_r4->unkAC != 0) {
        func_08050D74();
        func_080D7F88(temp_r4);
        func_080D7F74(temp_r4);
        func_080D7F60(temp_r4);
        temp_r4->unk9C = 0xF;
    }
}

