#include "common.h"
s32 GetLocation__C12AActorEntity(s32 *, void *);        /* extern */
s32 __builtin_delete(void *);                         /* extern */
extern s32 __vt_7AEntity;
extern s32 vtable_unk_080E7328;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    void *unk14;
    u8 _pad18[24];
    s32 unk30;
} GenObj;
void func_08037048(GenObj *arg0, s32 arg1) {
s32 sp0;
    GenObj *temp_r1;
    GenObj *temp_r4;

    arg0->unk14 = &vtable_unk_080E7328;
    temp_r4 = arg0->unk30;
    GetLocation__C12AActorEntity(&sp0, arg0);
    temp_r4->unk0 = (s32) sp0;
    temp_r4->unk4 = (s32) sp0.unk4;
    arg0->unk14 = &__vt_7AEntity;
    temp_r1 = arg0->unk10;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

