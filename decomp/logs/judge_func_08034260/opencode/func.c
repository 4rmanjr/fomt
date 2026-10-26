#include "common.h"
s32 GetCurrentTask__C13HarvestSprite(s32);          /* extern */
s32 GetLocation__C7AEntity(s32 *, void *);              /* extern */
s32 func_080330F4(u8 *, s32, s32, s32 *, s32, s32);     /* extern */
s32 func_0809E988(s32, u8, u8 *);                     /* extern */
s32 method_0809E7E4__13HarvestSpritePC15UnkBarnAnimal2C(s32, s32 *); /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[44];
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    u8 _pad40[1];
    s32 unk41;
} GenObj;
s32 func_08034260(GenObj *arg0) {
    u8 sp8;
s32 sp10;
    s32 sp18;
    s32 temp_r5;

    if (arg0->unk41 != 0) {
        return 0;
    }
    temp_r5 = arg0->unk0;
    GetLocation__C7AEntity(&sp10, arg0);
    func_080330F4(&sp8, arg0->unk3C, temp_r5, &sp10, GetCurrentTask__C13HarvestSprite(arg0->unk34), arg0->unk38);
    if ((sp8 << 0x1C) == 0) {
        arg0->unk41 = 1U;
        return 0;
    }
    func_0809E988(arg0->unk38, arg0->unk30, &sp8);
    sp18 &= 0xFFFF0000;
    method_0809E7E4__13HarvestSpritePC15UnkBarnAnimal2C(arg0->unk34, &sp18);
    return 1;
}

