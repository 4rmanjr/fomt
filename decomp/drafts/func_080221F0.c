s32 GetAffection__C6Animal(s32);                    /* extern */
s32 SetHasTalkedToday__3Pet(s32);                     /* extern */
s32 func_08020018();                                /* extern */
s32 func_08022048(void *, s32, u8);                   /* extern */
s32 func_080220D4(void *);                          /* extern */
s32 method_0809BC30__5HorsePC18UnkBarnAnimal2C_x2(s32, s32 *); /* extern */

void func_080221F0(void *arg0, void *arg1) {
    s32 sp0;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r2;

    if (((u32) (arg1->unk0 << 0x16) >> 0x16) == arg0->unk4) {
        GetAffection__C6Animal(arg0->unk34);
        temp_r0 = func_08020018();
        temp_r2 = (s16) (((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2)) - arg0->unkA;
        temp_r1 = (s16) (((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2)) - arg0->unkE;
        if ((s32) ((temp_r2 * temp_r2) + (temp_r1 * temp_r1)) <= (s32) (temp_r0 * temp_r0)) {
            sp0 = (s32) (u16) (((u32) (GetAffection__C6Animal(arg0->unk34) * 0x3C0) >> 8) + 0x1E0);
            method_0809BC30__5HorsePC18UnkBarnAnimal2C_x2(arg0->unk34, &sp0);
            if (arg0->unk3D == 0) {
                func_08022048(arg0, func_080220D4(arg0), arg0->unk20);
            }
            SetHasTalkedToday__3Pet(arg0->unk34);
        }
    }
}
