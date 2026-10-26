#include "common.h"
typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk1;
    s32 unk2;
    s32 unk3;
} GenObj;
void *func_08009744(GenObj *arg0, u8 arg1, u8 arg2) {
    s8 temp_r1;
    s8 temp_r2;
    GenObj *var_r0;

    temp_r1 = arg1 & 0x7F;
    arg0->unk1 = temp_r1;
    arg0->unk0 = temp_r1;
    temp_r2 = arg2 & 0x1F;
    arg0->unk3 = temp_r2;
    arg0->unk2 = temp_r2;
    var_r0 = (GenObj *)((u8 *)arg0 + 4);
    do {
        var_r0->unk1 = 2;
        var_r0 += 8;
    } while (var_r0 != ((GenObj *)((u8 *)arg0 + 0x404)));
    return arg0;
}

