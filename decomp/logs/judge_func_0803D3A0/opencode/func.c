#include "common.h"
void func_0803D3A0(void **arg0, u32 arg1) {
    u8 var_r0;
    void *temp_r2;

    temp_r2 = *arg0;
    var_r0 = temp_r2->unk2CC;
    switch (arg1) {
    case 0:
        var_r0 = 0;
        break;
    case 1:
        var_r0 = 1;
        break;
    case 2:
        var_r0 = 2;
        break;
    case 3:
        var_r0 = 3;
        break;
    case 4:
        var_r0 = 4;
        break;
    }
    if (var_r0 != temp_r2->unk2CC) {
        temp_r2->unk2CC = var_r0;
        temp_r2->unk2F0 = 1;
    }
}

