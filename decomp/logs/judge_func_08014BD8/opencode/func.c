#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[12];
    struct GenObj *unk14;
    u8 _pad18[36];
    s32 unk3C;
} GenObj;
void func_08014BD8(GenObj *arg0) {
    u32 var_r4;
    void ***temp_r5;
    void **temp_r0;
    void *temp_r0_2;

    var_r4 = 1;
    temp_r5 = arg0->unk4 + 0xA8;
    do {
        temp_r0 = *temp_r5;
        temp_r0_2 = (*temp_r0)->unk40(temp_r0, var_r4);
        if (temp_r0_2 != 0) {
            ((void (*)(void *,...))(temp_r0_2->unk14->unk3C))(temp_r0_2, 3);
        }
        var_r4 += 1;
    } while (var_r4 <= 0x23U);
}

