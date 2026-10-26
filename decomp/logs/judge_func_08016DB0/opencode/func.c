#include "common.h"
s32 AddBonuses__4FoodScSc(s32 *, s8, s8);               /* extern */
s32 __4FoodUi(s32 *, s32);                              /* extern */
s32 func_0809AAD4(s32);                             /* extern */
s32 func_0809AB08(s32 *, s32, s32);                     /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */
u32 rand();                                         /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    u8 _pad8[12];
    s32 unk14;
    u8 _pad18[64];
    struct GenObj *unk58;
    u8 _pad5C[48];
    struct GenObj *unk8C;
    u8 _pad90[12];
    struct GenObj *unk9C;
    u8 _padA0[8];
    struct GenObj *unkA8;
} GenObj;
void func_08016DB0(GenObj *arg0) {
s32 sp0;
GenObj sp4;
s32 sp18;
    u16 temp_r0_3;
    u32 temp_r0_2;
    u32 temp_r4;
    void **temp_r0;
    GenObj *temp_r6;
    void *temp_r7;
    GenObj *temp_r8;

    temp_r6 = arg0->unk4;
    temp_r0 = temp_r6->unkA8;
    temp_r7 = (*temp_r0)->unk40(temp_r0, 0);
    temp_r8 = temp_r7->unk14;
    temp_r4 = func_0809AAD4(temp_r6->unk8C + 0x2214) + 2;
    temp_r0_2 = rand() % temp_r4;
    if (temp_r0_2 != 0) {
        if (temp_r0_2 != 1) {
            func_0809AB08(&sp4, temp_r6->unk8C + 0x2214, temp_r0_2 - 2);
            temp_r0_3 = sp4;
            if (temp_r0_3 != 0) {
                __4FoodUi(&sp18, temp_r0_3 - 1);
                AddBonuses__4FoodScSc(&sp18, (s8) sp4.unk2, sp4.unk4);
                memcpy(&sp0, &sp18, 3);
            } else {
                __4FoodUi(&sp0, 0x40);
            }
        } else {
            __4FoodUi(&sp0, 0x40);
        }
    } else {
        __4FoodUi(&sp0, 0x3F);
    }
    memcpy(&sp0, &sp0, 3);
    temp_r8->unk58(temp_r7, &sp0);
    temp_r6->unk9C = 0x19;
}

