#include "common.h"
typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    s32 unkC;
    u8 _pad10[4];
    s32 unk14;
} GenObj;
s32 func_08009908(GenObj *arg0) {
    GenObj *temp_r4;
    void *var_r5;

    var_r5 = arg0->unkC;
loop_1:
    if (var_r5 != ((GenObj *)((u8 *)arg0 + 0x10))) {
        temp_r4 = var_r5;
        var_r5 = var_r5->unk4;
        if ((((void (*)(void *,...))(temp_r4->unk8->unk8))(temp_r4) << 0x18) == 0) {
            ((void (*)(void *,...))(arg0->unk8->unk14))(arg0, temp_r4);
        }
        goto loop_1;
    }
    return 1;
}

