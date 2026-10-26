s32 func_08022048(void *, s32, u8);                   /* extern */
s32 func_080220D4(void *);                          /* extern */
s32 method_0809BC24__5HorsePC15UnkBarnAnimal2C(s32, s32 *); /* extern */

void func_08021F3C(void *arg0) {
    s32 sp0;

    arg0->unk3E = 0;
    sp0 = ((sp0 & 0xFFFF0000) | 0x78) & 0xFF00FFFF;
    method_0809BC24__5HorsePC15UnkBarnAnimal2C(arg0->unk34, &sp0);
    func_08022048(arg0, func_080220D4(arg0), arg0->unk20);
}
