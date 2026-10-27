#include "common.h"
s32 free(void *);                                     /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    s32 unkC;
} GenObj;
void func_080E2B88(s32 arg0, void *arg1) {
    void *temp_r5;
    GenObj *var_r4;

    var_r4 = arg1;
    if (var_r4 != 0) {
        do {
            func_080E2B88(arg0, var_r4->unkC);
            temp_r5 = var_r4->unk8;
            if (var_r4 != 0) {
                free(var_r4);
            }
            var_r4 = temp_r5;
        } while (var_r4 != 0);
    }
}

