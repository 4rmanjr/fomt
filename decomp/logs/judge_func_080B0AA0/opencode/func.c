#include "common.h"
void func_080B0AA0(void *arg0) {
    s16 *var_sb;
    s32 var_r2;
    void *temp_r6;
    void *var_ip;
    void *var_r4;

    arg0->unk844 = 0;
    var_r2 = 0;
    var_r4 = arg0 + 0x848;
    var_sb = arg0 + 0x8F0;
    var_ip = arg0 + 0x85C;
    do {
        var_r4->unk0 = 0;
        var_r4->unk28 = 0;
        temp_r6 = var_ip + 4;
        var_ip = temp_r6;
        *(temp_r6 - 4) = 0;
        *(arg0 + 0x8E1 + var_r2) = 0x70;
        *var_sb = 0;
        *(arg0 + 0x915 + var_r2) = 1;
        *(arg0 + 0x8FC + (var_r2 * 2)) = 0;
        *(arg0 + 0x906 + var_r2) = 0;
        *(arg0 + 0x91A + var_r2) = 1;
        *(arg0 + 0x91F + var_r2) = 1;
        *(arg0 + 0x924 + var_r2) = 1;
        var_r4 += 4;
        var_sb += 2;
        var_r2 += 1;
    } while (var_r2 <= 4);
    arg0->unk8E0 = 0x78;
    arg0->unk90B = 0x3C;
    arg0->unk8FA = 0;
    arg0->unk90C = 0;
    arg0->unk90D = 0;
    arg0->unk884 = 2;
    arg0->unk838 = 0;
    arg0->unk83C = 0;
    arg0->unk840 = 0;
    arg0->unk914 = 1;
    arg0->unk929 = 1;
    arg0->unk92A = 0;
    arg0->unk92B = 0;
    arg0->unk92C = 0;
}

