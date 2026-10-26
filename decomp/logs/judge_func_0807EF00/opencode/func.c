#include "common.h"
typedef struct GenObj {
    u8 _pad0[1708];
    s32 unk6AC;
} GenObj;
void func_0807EF00(s32 *arg0, GenObj *arg1) {
    s32 temp_r3;

    temp_r3 = arg1->unk6AC;
    arg1->unk6AC = 0;
    *arg0 = temp_r3;
}

