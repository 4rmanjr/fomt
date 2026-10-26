#include "common.h"
s32 GetLocation__C12AActorEntity(s32 *, void *);        /* extern */
s32 SetLocation__5ActorRC13ActorLocation(s32, s32 *);   /* extern */
s32 __builtin_delete(void *);                         /* extern */
extern s32 __vt_7AEntity;
extern s32 vtable_unk_080E74DC;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    void *unk14;
    u8 _pad18[28];
    s32 unk34;
} GenObj;
void func_080399C0(GenObj *arg0, s32 arg1) {
s32 sp0;
    s32 temp_r4;
    void **var_r4;
    void *temp_r0;
    GenObj *temp_r1;

    arg0->unk14 = &vtable_unk_080E74DC;
    temp_r4 = arg0->unk34;
    GetLocation__C12AActorEntity(&sp0, arg0);
    SetLocation__5ActorRC13ActorLocation(temp_r4, &sp0);
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x38);
    if (temp_r0 != 0) {
        var_r4 = (GenObj *)((u8 *)arg0 + 0x4C);
        if (temp_r0 != var_r4) {
            do {
                var_r4 -= 4;
                __builtin_delete(*var_r4);
            } while (temp_r0 != var_r4);
        }
    }
    arg0->unk14 = &__vt_7AEntity;
    temp_r1 = arg0->unk10;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

