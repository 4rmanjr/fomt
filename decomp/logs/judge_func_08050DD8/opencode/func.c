#include "common.h"
typedef struct GenObj {
    u8 _pad0[13];
    s32 unkD;
} GenObj;
u8 func_08050DD8(void **arg0) {
    u8 temp_r0;
    GenObj *temp_r2;

    temp_r2 = *arg0;
    temp_r0 = temp_r2->unkD;
    temp_r2->unkD = 0U;
    return temp_r0;
}

