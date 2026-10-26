#include "common.h"
void *__builtin_new(s32);                           /* extern */

void **func_080ADC00(void **arg0) {
    void *temp_r0;
    void *temp_r1;
    void *temp_r1_2;

    temp_r0 = __builtin_new(0x20);
    temp_r0->unk0 = 0;
    temp_r0->unk4 = 0;
    temp_r1 = temp_r0 + 8;
    temp_r0->unk8 = 0;
    temp_r1->unk4 = 0;
    temp_r1_2 = temp_r1 + 8;
    temp_r0->unk10 = 0;
    temp_r1_2->unk4 = 0;
    temp_r0->unk18 = 0;
    (temp_r1_2 + 8)->unk4 = 0;
    *arg0 = temp_r0;
    return arg0;
}

