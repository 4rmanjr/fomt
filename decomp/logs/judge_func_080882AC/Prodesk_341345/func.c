#include "common.h"
s32 GetFridge__9FarmHouse(s32);                     /* extern */
s32 func_080CE19C();                                  /* extern */
extern ? vtable_unk_080E7D4C;

void *func_080882AC(void *arg0) {
    s32 temp_r0;

    func_080CE19C();
    arg0->unk4 = &vtable_unk_080E7D4C;
    arg0->unk98 = 0;
    temp_r0 = arg0->unk8;
    arg0->unkFC = (s32) (temp_r0 + 0x1C2C);
    arg0->unk100 = (s32) (temp_r0 + 0x1C38);
    arg0->unk104 = GetFridge__9FarmHouse(temp_r0 + 0x1F4);
    arg0->unk108 = 0;
    return arg0;
}

