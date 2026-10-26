#include "common.h"
s32 GetUnkEnt__C4Coop(s32);                         /* extern */
s32 SetLocation__7AEntityUiii(void *, s32, s16, s16); /* extern */
s32 method_0800C6F0__C4CoopUi(s32 *, s32, s32);         /* extern */
s32 method_0800CBC0__4Coop(s32);                      /* extern */
s32 method_0800D058__C4Barn(s32);                   /* extern */
s32 method_0800D074__C4BarnUi(s32 *, s32, s32);         /* extern */
s32 method_0800D858__4Barn(s32);                      /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    u8 _pad8[12];
    struct GenObj *unk14;
    u8 _pad18[8];
    s32 unk20;
    u8 _pad24[4];
    s32 unk28;
    u8 _pad2C[96];
    struct GenObj *unk8C;
    u8 _pad90[24];
    struct GenObj *unkA8;
} GenObj;
void func_080168D4(GenObj *arg0, u32 arg1, ? arg3) {
s32 sp0;
s32 sp4;
    s32 temp_r0_5;
    s32 temp_r0_9;
    s32 temp_r5;
    s32 temp_r5_2;
    void **temp_r0;
    void **temp_r0_10;
    void **temp_r0_11;
    void **temp_r0_13;
    void **temp_r0_14;
    void **temp_r0_15;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_6;
    void **temp_r0_7;
    void *temp_r0_12;
    void *temp_r0_16;
    void *temp_r0_4;
    void *temp_r0_8;
    void *temp_r4;
    void *temp_r4_2;
    GenObj *temp_r6;

    temp_r6 = arg0->unk4;
    switch (arg1) {                                 /* irregular */
    case 0:
        temp_r0 = temp_r6->unkA8;
        if ((*temp_r0)->unk40(temp_r0, 0x2C) != 0) {
            return;
        }
        temp_r0_2 = temp_r6->unkA8;
        (*temp_r0_2)->unk38(temp_r0_2, 0x2C);
        temp_r0_3 = temp_r6->unkA8;
        temp_r0_4 = (*temp_r0_3)->unk40(temp_r0_3, 0x2C);
        if ((temp_r0_4 != 0) && ((((void (*)(void *,...))(temp_r0_4->unk14->unk28))(temp_r0_4) << 0x18) == 0)) {
            ((void (*)(void *,...))(temp_r0_4->unk14->unk20))(temp_r0_4);
        }
        if (temp_r0_4 == 0) {
            return;
        }
        SetLocation__7AEntityUiii(temp_r0_4, 2, 0x2F0, 0x84);
        return;
    case 1:
    case 2:
        temp_r4 = (GenObj *)((u8 *)temp_r6 + 0x8C);
        temp_r0_5 = method_0800D058__C4Barn(temp_r6->unk8C + 0x5F0);
        if (temp_r0_5 == -1) {
            return;
        }
        method_0800D858__4Barn(temp_r6->unk8C + 0x5F0);
        temp_r5 = temp_r0_5 + 0x36;
        temp_r0_6 = temp_r4->unk1C;
        (*temp_r0_6)->unk38(temp_r0_6, temp_r5);
        temp_r0_7 = temp_r4->unk1C;
        temp_r0_8 = (*temp_r0_7)->unk40(temp_r0_7, temp_r5);
        if ((temp_r0_8 != 0) && ((((void (*)(void *,...))(temp_r0_8->unk14->unk28))(temp_r0_8) << 0x18) == 0)) {
            ((void (*)(void *,...))(temp_r0_8->unk14->unk20))(temp_r0_8);
        }
        method_0800D074__C4BarnUi(&sp0, temp_r6->unk8C + 0x5F0, temp_r0_5);
        if (temp_r0_8 == 0) {
            return;
        }
        SetLocation__7AEntityUiii(temp_r0_8, 0x25, sp0, sp0.unk2);
        return;
    case 3:
        temp_r4_2 = (GenObj *)((u8 *)temp_r6 + 0x8C);
        temp_r0_9 = GetUnkEnt__C4Coop(temp_r6->unk8C + 0x410);
        if (temp_r0_9 != -1) {
            method_0800CBC0__4Coop(temp_r6->unk8C + 0x410);
            temp_r5_2 = temp_r0_9 + 0x2E;
            temp_r0_10 = temp_r4_2->unk1C;
            (*temp_r0_10)->unk38(temp_r0_10, temp_r5_2);
            temp_r0_11 = temp_r4_2->unk1C;
            temp_r0_12 = (*temp_r0_11)->unk40(temp_r0_11, temp_r5_2);
            if ((temp_r0_12 != 0) && ((((void (*)(void *,...))(temp_r0_12->unk14->unk28))(temp_r0_12) << 0x18) == 0)) {
                ((void (*)(void *,...))(temp_r0_12->unk14->unk20))(temp_r0_12);
            }
            method_0800C6F0__C4CoopUi(&sp4, temp_r6->unk8C + 0x410, temp_r0_9);
            if (temp_r0_12 != 0) {
                SetLocation__7AEntityUiii(temp_r0_12, 0x11, sp4, sp4.unk2);
                return;
            }
        } else {
            return;
        }
        break;
    case 4:
        temp_r0_13 = temp_r6->unkA8;
        if ((*temp_r0_13)->unk40(temp_r0_13, 0x2B) == 0) {
            temp_r0_14 = temp_r6->unkA8;
            (*temp_r0_14)->unk38(temp_r0_14, 0x2B);
            temp_r0_15 = temp_r6->unkA8;
            temp_r0_16 = (*temp_r0_15)->unk40(temp_r0_15, 0x2B);
            if ((temp_r0_16 != 0) && ((((void (*)(void *,...))(temp_r0_16->unk14->unk28))(temp_r0_16) << 0x18) == 0)) {
                ((void (*)(void *,...))(temp_r0_16->unk14->unk20))(temp_r0_16);
            }
            if (temp_r0_16 != 0) {
                SetLocation__7AEntityUiii(temp_r0_16, 2, 0x17E, 0x52);
            }
        }
        break;
    }
}

