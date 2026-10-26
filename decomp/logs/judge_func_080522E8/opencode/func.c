#include "common.h"
typedef struct GenObj {
    s32 unk0;
    s32 unk2;
} GenObj;
void func_080522E8(s32 arg0, GenObj *arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = arg0 + (arg2 * 4);
    temp_r0->unk0 = (u8) arg1->unk0;
    temp_r0->unk2 = (u16) arg1->unk2;
}

