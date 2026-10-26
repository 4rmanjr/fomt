#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[4];
    struct GenObj *unkC;
    s32 unk10;
    u8 _pad14[16];
    s32 unk24;
    s32 unk26;
} GenObj;
void func_08032A30(GenObj *arg0) {
    u16 temp_r0;
    u16 var_r0;
    GenObj *temp_r2;

    temp_r0 = arg0->unk24;
    if (temp_r0 != 0) {
        var_r0 = temp_r0 - 1;
    } else {
        var_r0 = arg0->unk26;
    }
    arg0->unk24 = var_r0;
    temp_r2 = arg0->unk10;
    if (temp_r2 != 0) {
        ((void (*)(void *,...))(temp_r2->unk4->unkC))(temp_r2);
    }
}

