#include "common.h"
s32 GetLocation__C7AEntity(s32 *, void *);              /* extern */
s32 __builtin_delete(void *);                         /* extern */
s32 func_08010014(s32, s32 *);                          /* extern */
extern s32 __vt_7AEntity;
extern s32 vtable_unk_080E73FC;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    void *unk14;
    s32 unk18;
} GenObj;
void func_08037E48(GenObj *arg0, s32 arg1) {
s32 sp0;
    s32 temp_r4;
    GenObj *temp_r1;

    arg0->unk14 = &vtable_unk_080E73FC;
    temp_r4 = arg0->unk18;
    GetLocation__C7AEntity(&sp0, arg0);
    func_08010014(temp_r4, &sp0);
    arg0->unk14 = &__vt_7AEntity;
    temp_r1 = arg0->unk10;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

