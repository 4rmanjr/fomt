s32 GetAffection__C6Animal(void *);                 /* extern */
s32 SetHasTalkedToday__3Pet(void *);                  /* extern */
s32 func_08020018();                                /* extern */
s32 func_080211E4(void *, s32, u8);                   /* extern */
s32 func_08021264(void *);                          /* extern */
s32 func_080212C0(void *);                            /* extern */
s32 method_0809BB54__3DogPC18UnkBarnAnimal2C_x2(void *, s32 *); /* extern */

void func_08021444(void *arg0, void *arg1) {
    s32 sp0;
    s32 temp_r0;
    s32 temp_r1_2;
    s32 temp_r2;
    s32 temp_r8;
    void *temp_r1;

    if (((u32) (arg1->unk0 << 0x16) >> 0x16) == arg0->unk4) {
        temp_r1 = arg0->unk34;
        if (temp_r1->unk20 != 5) {
            temp_r8 = GetAffection__C6Animal(temp_r1);
            temp_r0 = func_08020018();
            temp_r2 = (s16) (((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2)) - arg0->unkA;
            temp_r1_2 = (s16) (((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2)) - arg0->unkE;
            if ((s32) ((temp_r2 * temp_r2) + (temp_r1_2 * temp_r1_2)) <= (s32) (temp_r0 * temp_r0)) {
                if (arg0->unk34->unk20 == 5) {
                    func_080212C0(arg0);
                }
                sp0 = (s32) (u16) (((u32) (temp_r8 * 0x3C0) / 251U) + 0x1E0);
                method_0809BB54__3DogPC18UnkBarnAnimal2C_x2(arg0->unk34, &sp0);
                if (arg0->unk40 == 0) {
                    func_080211E4(arg0, func_08021264(arg0), arg0->unk20);
                }
                SetHasTalkedToday__3Pet(arg0->unk34);
            }
        }
    }
}
