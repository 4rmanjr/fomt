s32 func_080B8DF4(void *, s32);                       /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk3;
    u8 _pad7[2];
    struct GenObj *unk9;
    u8 _padD[4];
    struct GenObj *unk11;
    u8 _pad15[10];
    struct GenObj *unk1F;
    u8 _pad23[81];
    s32 unk74;
    s32 unk78;
    u8 _pad7C[56];
    s32 unkB4;
    u8 _padB8[2726];
    s32 unkB5E;
} GenObj;
void func_080B5788(GenObj *arg0) {
    s16 *var_r3;
    s16 var_r6;
    s32 temp_r1;
    s32 var_r5;
    GenObj *var_r2;

    var_r5 = 0;
    var_r2 = (GenObj *)((u8 *)arg0 + 0x8C);
    var_r6 = 0x3A00;
    var_r3 = (GenObj *)((u8 *)arg0 + 0x8A);
    do {
        temp_r1 = var_r5 << 6;
        *var_r3 = 0x7800;
        var_r2->unk0 = var_r6;
        var_r2->unk3 = (u8) arg0->unkB5E;
        var_r2->unk11 = 1;
        var_r2->unk9 = 1;
        *((u8 *)(GenObj *)((u8 *)arg0 + 0x6C) + temp_r1) = 2;
        *((u8 *)(GenObj *)((u8 *)arg0 + 0x70) + temp_r1) = 2;
        var_r2->unk1F = 0;
        var_r2 += 0x40;
        var_r6 += 0x1800;
        var_r3 += 0x40;
        var_r5 += 1;
    } while (var_r5 <= 1);
    arg0->unk74 = 3;
    arg0->unk78 = 3;
    arg0->unkB4 = 1;
    ((GenObj *)((u8 *)arg0 + 0xB4))->unk4 = 1;
    func_080B8DF4(arg0, 0);
    func_080B8DF4(arg0, 1);
}
