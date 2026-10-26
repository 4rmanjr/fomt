#include "common.h"
s32 func_08007874(void *);                            /* extern */
s32 func_08007CD8(void *, s32);                     /* extern */
s32 memmove(void *, void *, s32);                     /* extern */
extern ? vtable_unk_080E82D8;

void *func_080DC840(void *arg0, void *arg1) {
    s32 temp_r4_2;
    void *temp_r1;
    void *temp_r2;
    void *temp_r4;

    arg0->unk24 = &vtable_unk_080E82D8;
    arg0->unk0 = (s32) arg1->unk0;
    temp_r4 = arg0 + 4;
    func_08007874(temp_r4);
    temp_r4->unk4 = func_08007CD8(temp_r4, (arg1 + 4)->unk4);
    arg0->unkC = (u16) arg1->unkC;
    arg0->unk10 = 0;
    temp_r4_2 = arg1->unk10;
    temp_r1 = arg1 + 0x14;
    temp_r2 = temp_r1 + temp_r4_2;
    if (temp_r2 != temp_r1) {
        memmove(arg0 + 0x14, temp_r1, temp_r2 - temp_r1);
    }
    arg0->unk10 = temp_r4_2;
    return arg0;
}

