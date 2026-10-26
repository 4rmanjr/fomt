#include "common.h"
typedef struct GenObj {
    u8 _pad0[753];
    s32 unk2F1;
    s32 unk2F2;
    u8 _pad2F6[62];
    s32 unk334;
} GenObj;
void func_0803D404(void **arg0, u16 arg1) {
    GenObj *temp_r2;

    temp_r2 = *arg0;
    if ((temp_r2->unk2F1 == 0) || (arg1 != temp_r2->unk2F2)) {
        temp_r2->unk2F1 = 1U;
        temp_r2->unk2F2 = arg1;
        temp_r2->unk334 = 1;
    }
}

