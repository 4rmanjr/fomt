#include "common.h"
s32 func_080A4740(void *, void **, s32, s32);         /* extern */
extern ? vtable_unk_080E602C;
extern ? vtable_unk_080E7430;

void *func_08037EF0(void *arg0, void ***arg1) {
    u16 *sp0;
    void **temp_r5;
    void *temp_r4;
    void *temp_r4_2;

    arg0->unk0 = arg1;
    arg0->unk4 = &vtable_unk_080E7430;
    temp_r5 = (**arg1)->unk64();
    temp_r4 = arg0 + 8;
    func_080A4740(temp_r4, *arg1, 2, 8);
    temp_r4->unk24 = &vtable_unk_080E602C;
    temp_r4_2 = *temp_r5;
    temp_r4_2->unkC(&sp0, temp_r5, 0x35);
    temp_r4_2->unk10(arg0 + 0x30, temp_r5, *sp0);
    arg0->unk50 = 1;
    arg0->unk54 = 0;
    return arg0;
}

