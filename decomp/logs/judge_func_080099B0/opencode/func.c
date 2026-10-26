#include "common.h"
typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    s32 unk10;
} GenObj;
void func_080099B0(GenObj *arg0, GenObj *arg1) {
    s32 **temp_r0;
    s32 **temp_r2;
    s32 **temp_r2_2;

    temp_r2 = arg0->unk10;
    *temp_r2 = arg1->unkC;
    *arg1->unkC = temp_r2;
    temp_r2_2 = arg1->unk10;
    *temp_r2_2 = arg0 + 0x10;
    arg0->unk10 = temp_r2_2;
    temp_r0 = arg1 + 0x10;
    arg1->unkC = temp_r0;
    arg1->unk10 = (s32 **) (temp_r0 - 4);
}

