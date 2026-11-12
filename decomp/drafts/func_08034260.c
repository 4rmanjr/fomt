s32 GetCurrentTask__C13HarvestSprite(s32);           /* extern */
s32 GetLocation__C7AEntity(s32 *, s32 *);            /* extern */
s32 func_080330F4(u8 *, s32, s32, s32 *, s32, s32);  /* extern */
s32 func_0809E988(s32, u8, u8 *);                    /* extern */
s32 method_0809E7E4__13HarvestSpritePC15UnkBarnAnimal2C(s32, s32 *); /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[0x2C];
    u8 unk30;
    u8 _pad31[3];
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    u8 _pad40[1];
    u8 unk41;
} GenObj;

s32 func_08034260(GenObj *arg0) {
    u8 sp8[8];
    u8 loc[12];
    s32 temp_r5;

    if (arg0->unk41 == 0) {
        goto body;
    }
    return 0;
body:
    temp_r5 = arg0->unk0;
    GetLocation__C7AEntity((s32 *) &loc[0], (s32 *) arg0);
    func_080330F4(&sp8[0], arg0->unk3C, temp_r5, (s32 *) &loc[0],
                  GetCurrentTask__C13HarvestSprite(arg0->unk34), arg0->unk38);
    if ((sp8[0] << 0x1C) == 0) {
        arg0->unk41 = 1;
        return 0;
    }
    func_0809E988(arg0->unk38, arg0->unk30, &sp8[0]);
    *(s32 *) &loc[8] &= 0xFFFF0000;
    method_0809E7E4__13HarvestSpritePC15UnkBarnAnimal2C(arg0->unk34, (s32 *) &loc[8]);
    return 1;
}
