#include "common.h"
s32 func_080CE19C();                                  /* extern */
extern ? vtable_unk_080E7DD8;

void *func_08092640(void *arg0) {
    s32 temp_r1;

    func_080CE19C();
    arg0->unk4 = &vtable_unk_080E7DD8;
    arg0->unk98 = 0;
    temp_r1 = arg0->unk8;
    arg0->unkFC = (s32) (temp_r1 + 0x1C34);
    arg0->unk100 = (s32) (temp_r1 + 0x1C2C);
    arg0->unk104 = (s32) (temp_r1 + 0x1C38);
    arg0->unk108 = 0;
    return arg0;
}

