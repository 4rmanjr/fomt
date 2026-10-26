s32 SetLocation__7AEntityUiii(void *, s32, s16, s16); /* extern */
s32 func_08034180(void *, s32, s32, s32);             /* extern */
s32 func_0809E994(s32, u8);                           /* extern */
s32 method_0809E7FC__13HarvestSprite(s32, s32 *);       /* extern */
s32 smethod_08009ADC__4Farm(s32 *);                     /* extern */
s32 smethod_08009AE8__4Farm(s32 *);                     /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    u8 _pad8[2];
    s32 unkA;
    u8 _padE[34];
    s32 unk30;
    s32 unk34;
    s32 unk38;
} GenObj;
s32 func_08034940(GenObj *arg0) {
s32 sp0;
s32 sp4;
s32 sp8;
    s16 temp_r1;
    s32 var_r2;
    u16 temp_r0_2;
    u16 temp_r2;
    u32 temp_r0;

    temp_r2 = (*arg0->unk0)->unk144()->unkA;
    temp_r0 = (u32) (temp_r2 << 0x1B) >> 0x1B;
    if ((temp_r0 <= 5U) || ((u32) (((temp_r0 - 6) * 0x3C) + ((u32) (temp_r2 << 0x15) >> 0x1A)) >= (u32) (arg0->unk30 + 0x385))) {
        temp_r0_2 = arg0->unk4;
        switch (temp_r0_2) {                        /* irregular */
        case 37:
            smethod_08009ADC__4Farm(&sp0);
            SetLocation__7AEntityUiii(arg0, 2, sp0, sp0.unk2);
            break;
        case 17:
            smethod_08009AE8__4Farm(&sp4);
            SetLocation__7AEntityUiii(arg0, 2, sp4, sp4.unk2);
            break;
        }
        func_0809E994(arg0->unk38, arg0->unk30);
        method_0809E7FC__13HarvestSprite(arg0->unk34, &sp8);
        temp_r1 = arg0->unkA;
        if (temp_r1 == 0x168) {
            var_r2 = 1;
        } else {
            var_r2 = 2;
            if ((s32) temp_r1 <= 0x167) {
                var_r2 = 3;
            }
        }
        func_08034180(arg0, 1, var_r2, 0x8000);
        return 1;
    }
    return 0;
}
