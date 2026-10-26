#include "common.h"
s32 func_080CD578();                                  /* extern */
extern ? vtable_unk_080E85DC;

void *func_080CE19C(void *arg0) {
    void *temp_r0;

    func_080CD578();
    arg0->unk4 = &vtable_unk_080E85DC;
    temp_r0 = arg0 + 0x8C;
    arg0->unk8C = 0;
    temp_r0->unk4 = 0;
    (temp_r0 + 4)->unk4 = 0;
    return arg0;
}

