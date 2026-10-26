#include "common.h"
s32 GetLocation__C12AActorEntity(s32 *, void *);        /* extern */
s32 __builtin_delete(void *);                         /* extern */
extern ? __vt_7AEntity;
extern ? vtable_unk_080E7328;

void func_08037048(void *arg0, s32 arg1) {
s32 sp0;
    void *temp_r1;
    void *temp_r4;

    arg0->unk14 = &vtable_unk_080E7328;
    temp_r4 = arg0->unk30;
    GetLocation__C12AActorEntity(&sp0, arg0);
    temp_r4->unk0 = (s32) sp0.unk0;
    temp_r4->unk4 = (s32) sp0.unk4;
    arg0->unk14 = &__vt_7AEntity;
    temp_r1 = arg0->unk10;
    if (temp_r1 != 0) {
        temp_r1->unk4->unk8(temp_r1, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

