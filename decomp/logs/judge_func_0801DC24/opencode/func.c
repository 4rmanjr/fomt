#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_0805E860(s32);                               /* extern */
void *func_080A4A00(s32, s32, s32, void *, s32, s32); /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[4];
    struct GenObj *unk8;
    u8 _padC[24];
    struct GenObj *unk24;
    u8 _pad28[20];
    struct GenObj *unk3C;
    u8 _pad40[28];
    s32 unk5C;
    u8 _pad60[4088];
    s32 unk1058;
} GenObj;
void func_0801DC24(GenObj *arg0, s32 arg1) {
    s8 sp8;
    s32 temp_r1;
    s32 temp_r4_2;
    void *temp_r0;
    void *temp_r0_2;
    GenObj *temp_r1_2;
    GenObj *temp_r4;

    temp_r4 = arg0->unk1058;
    if (temp_r4 != 0) {
        func_0805E860((GenObj *)((u8 *)temp_r4 + 0x28));
        temp_r0 = (GenObj *)((u8 *)temp_r4 + 0x3C);
        temp_r4->unk3C = 1;
        temp_r0->unk2 = 0;
        (temp_r0 + 2)->unk1 = 1;
        return;
    }
    temp_r4_2 = __builtin_new(0x40);
    temp_r1 = ((void (*)(void *,...))(arg0->unk0->unk5C))(arg0);
    sp8 = 1;
    temp_r0_2 = func_080A4A00(temp_r4_2, temp_r1, arg1, arg0, 3, 0x1B);
    temp_r1_2 = arg0->unk1058;
    if ((temp_r0_2 != temp_r1_2) && (temp_r1_2 != 0)) {
        ((void (*)(void *,...))(temp_r1_2->unk24->unk8))(temp_r1_2, 3);
    }
    arg0->unk1058 = temp_r0_2;
}

