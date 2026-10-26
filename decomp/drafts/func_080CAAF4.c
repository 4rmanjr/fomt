s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_0804EDB4(s32, s32, s32, s32, s32);           /* extern */
s32 func_08075BC8(void *, s32, s32);                  /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[4];
    s32 unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk14;
    void *unk18;
    s32 unk1C;
} GenObj;
void func_080CAAF4(GenObj *arg0) {
    s16 temp_r3;
    s16 var_r1;
    s32 var_r2;
    GenObj *temp_r0;

    func_08008EB8(0x03FF03FF, arg0->unk18->unk1C->unk18 + ((arg0->unkC + 1) << 6) + (arg0->unk10 * 2), 0x10);
    func_08008EB8(0x03FF03FF, arg0->unk18->unk1C->unk18 + (arg0->unkC << 6) + 0x18, 0x1C);
    func_08008EB8(0x03FF03FF, arg0->unk18->unk1C->unk18 + ((arg0->unkC + 1) << 6) + 0x18, 0x1C);
    func_0804EDB4(arg0->unk0, arg0->unk18->unk1C->unk18 + (arg0->unkC << 6) + 0x32, 0xA0, 0, 0x20);
    temp_r0 = arg0->unk18->unk1C;
    temp_r3 = temp_r0->unkC;
    var_r1 = temp_r3;
    if ((s32) temp_r3 < 0) {
        var_r1 = temp_r3 + 7;
    }
    var_r2 = temp_r3 + 0x100;
    if (var_r2 < 0) {
        var_r2 = temp_r3 + 0x107;
    }
    func_08075BC8(temp_r0, var_r1 >> 3, var_r2 >> 3);
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk14 = 1;
}
