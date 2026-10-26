#include "common.h"
void func_08006C28(void *arg0, u8 arg1) {
    s32 temp_r3;
    u8 temp_r1;
    u8 var_r1;

    var_r1 = arg1;
    if ((u32) var_r1 <= 0xAU) {
        temp_r3 = arg0 + 0x461C;
        do {
            temp_r1 = var_r1 + 1;
            *(temp_r3 + var_r1) = *(temp_r3 + temp_r1);
            var_r1 = temp_r1;
        } while ((u32) var_r1 <= 0xAU);
    }
    arg0->unk4627 = 0x5F;
}

