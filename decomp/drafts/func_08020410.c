s32 func_080211E4(void *, s32, u8);                   /* extern */
s32 func_080212C0(void *);                            /* extern */
s32 method_0809BB48__3DogPC15UnkBarnAnimal2C(void *, s32 *); /* extern */

typedef struct GenObj {
    u8 _pad0[32];
    s32 unk20;
    u8 _pad24[16];
    void *unk34;
} GenObj;
void func_08020410(GenObj *arg0, u16 arg1) {
    s32 sp0;

    if (arg0->unk34->unk20 == 5) {
        func_080212C0(arg0);
    }
    sp0 = ((sp0 & 0xFFFF0000) | arg1) & 0xFF00FFFF;
    method_0809BB48__3DogPC15UnkBarnAnimal2C(arg0->unk34, &sp0);
    func_080211E4(arg0, 0, arg0->unk20);
}
