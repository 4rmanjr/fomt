#include "common.h"
s32 GetChicken__4CoopUi(s32, s32);                  /* extern */
s32 GetId__C7Article();                             /* extern */
s32 GetLocation__C12AActorEntity(s32 *, void *);        /* extern */
s32 GetLocation__C7AEntity(s32 *, void *);              /* extern */
s32 SetLocation__5ActorRC13ActorLocation(s32, s32 *);   /* extern */
s32 __builtin_delete(void *);                         /* extern */
s32 func_0800EB34(s32, s32 *);                          /* extern */
s32 func_0800F190(s32);                             /* extern */
u32 func_0800F204(s32);                             /* extern */
s8 func_0800F258(s32);                              /* extern */
s32 func_0800F344(s32);                             /* extern */
s32 func_08010014(s32, s32 *);                          /* extern */
s32 memcpy(s32, s32 *, s32);                            /* extern */
extern s32 __vt_7AEntity;
extern s32 vtable_unk_080E6658;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    void *unk14;
    u8 _pad18[28];
    s32 unk34;
    s32 unk38;
} GenObj;
void func_08024A80(GenObj *arg0, s32 arg1) {
s32 sp0;
    s8 sp8;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r6;
    s32 var_r4;
    u32 temp_r0;
    GenObj *temp_r1;

    arg0->unk14 = &vtable_unk_080E6658;
    temp_r4 = arg0->unk38;
    GetLocation__C12AActorEntity(&sp0, arg0);
    func_0800EB34(temp_r4, &sp0);
    temp_r6 = arg0->unk38 + 0x54;
    if ((func_0800F190(temp_r6) << 0x18) == 0) {
        temp_r0 = func_0800F204(temp_r6);
        switch (temp_r0) {
        case 0:
        case 5:
            break;
        case 1:
            sp8 = func_0800F258(temp_r6);
            if (GetId__C7Article() == 0x35) {
                temp_r4_2 = arg0->unk34 + 0x1CCC;
                GetLocation__C7AEntity(&sp0, arg0);
                memcpy(temp_r4_2, &sp0, 6);
            }
            break;
        case 2:
            var_r4 = arg0->unk34 + 0x1C70;
block_7:
            GetLocation__C12AActorEntity(&sp0, arg0);
            SetLocation__5ActorRC13ActorLocation(var_r4, &sp0);
            break;
        case 3:
            temp_r4_3 = arg0->unk34 + 0x410;
            var_r4 = GetChicken__4CoopUi(temp_r4_3, func_0800F344(temp_r6));
            if (var_r4 != 0) {
                goto block_7;
            }
            break;
        case 4:
            temp_r4_4 = arg0->unk34 + 0x1CA0;
            GetLocation__C7AEntity(&sp0, arg0);
            func_08010014(temp_r4_4, &sp0);
            break;
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

