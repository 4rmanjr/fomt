#include "common.h"
s32 GetLocation__C7AEntity(s32 *, void *);              /* extern */
s32 __builtin_delete(void *);                         /* extern */
s32 func_08010014(s32, ? *);                          /* extern */
extern ? __vt_7AEntity;
extern ? vtable_unk_080E73FC;

void func_08037E48(void *arg0, s32 arg1) {
s32 sp0;
    s32 temp_r4;
    void *temp_r1;

    arg0->unk14 = &vtable_unk_080E73FC;
    temp_r4 = arg0->unk18;
    GetLocation__C7AEntity(&sp0, arg0);
    func_08010014(temp_r4, &sp0);
    arg0->unk14 = &__vt_7AEntity;
    temp_r1 = arg0->unk10;
    if (temp_r1 != 0) {
        temp_r1->unk4->unk8(temp_r1, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

