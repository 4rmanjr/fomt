#include "common.h"
s32 func_080A4740(void *, void **, s32, s32);         /* extern */
extern ? vtable_unk_080E602C;
extern ? vtable_unk_080E7478;

void *func_08037D08(void *arg0, void ***arg1) {
    u16 *sp0;
    void **temp_r5;
    void *temp_r4;
    void *temp_r4_2;

    arg0->unk0 = arg1;
    arg0->unk4 = &vtable_unk_080E7478;
    temp_r5 = (**arg1)->unk64();
    temp_r4 = arg0 + 8;
    func_080A4740(temp_r4, *arg1, 2, 0xA);
    temp_r4->unk24 = &vtable_unk_080E602C;
    temp_r4_2 = *temp_r5;
    temp_r4_2->unkC(&sp0, temp_r5, 0x7D);
    temp_r4_2->unk10(arg0 + 0x30, temp_r5, *sp0);
    arg0->unk50 = 1;
    return arg0;
}

