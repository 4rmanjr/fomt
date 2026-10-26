#include "common.h"
void func_080E2170(void *arg0, void **arg1) {
    void *temp_r0;
    void *temp_r1;
    void *temp_r3;

    temp_r3 = arg0->unkC;
    arg0->unkC = (void *) temp_r3->unk8;
    temp_r0 = temp_r3->unk8;
    if (temp_r0 != 0) {
        temp_r0->unk4 = arg0;
    }
    temp_r3->unk4 = (void *) arg0->unk4;
    if (arg0 == *arg1) {
        *arg1 = temp_r3;
    } else {
        temp_r1 = arg0->unk4;
        if (arg0 == temp_r1->unk8) {
            temp_r1->unk8 = temp_r3;
        } else {
            temp_r1->unkC = temp_r3;
        }
    }
    temp_r3->unk8 = arg0;
    arg0->unk4 = temp_r3;
}

