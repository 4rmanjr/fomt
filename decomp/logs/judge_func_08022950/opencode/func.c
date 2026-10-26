#include "common.h"
u8 func_08022950(void *arg0) {
    s32 temp_r1;
    u8 var_r1;
    void *temp_r0;

    temp_r0 = arg0->unk34;
    temp_r1 = temp_r0->unk24;
    switch (temp_r1) {                              /* irregular */
    case 0:
        return temp_r0->unk2A;
    case 1:
        var_r1 = 1;
        if (0x7F & temp_r0->unk2A) {
            var_r1 = 4;
        }
        return var_r1;
    default:
        return 0U;
    }
}

