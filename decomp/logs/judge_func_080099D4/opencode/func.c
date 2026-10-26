#include "common.h"
typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    s32 unk10;
} GenObj;
void func_080099D4(GenObj *arg0, GenObj *arg1) {
    s32 *temp_r1;
    s32 *temp_r2;
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3 = arg0->unkC;
    arg0->unkC = (s32) arg1->unkC;
    arg1->unkC = temp_r3;
    temp_r2 = arg0->unk10;
    temp_r1 = arg1->unk10;
    temp_r3_2 = *temp_r2;
    *temp_r2 = *temp_r1;
    *temp_r1 = temp_r3_2;
}

