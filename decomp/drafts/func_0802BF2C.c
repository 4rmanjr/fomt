s32 func_08032560(void *, void ***, s32, s32 *, s32, s32); /* extern */
s32 func_080A4A00(void *, s32, s32, void **, s32, s32); /* extern */
extern s32 gUnk_080F1224;
extern s32 vtable_unk_080E6644;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[196];
    s32 unkCC;
} GenObj;
void *func_0802BF2C(GenObj *arg0, void ***arg1) {
    s32 sp8;
    s32 spC;
    s8 sp10;
    s32 temp_r1;

    sp8 = 0;
    spC = 0;
    sp10 = 1;
    func_08032560(arg0, arg1, 6, &gUnk_080F1224, 3, 1);
    arg0->unk4 = &vtable_unk_080E6644;
    temp_r1 = (**arg1)->unk64();
    sp8 = 0;
    func_080A4A00(arg0 + 0x8C, temp_r1, 0, *arg1, 2, 1);
    arg0->unkCC = 0xFFFF;
    return arg0;
}
