s32 func_0804E9F4(s32, s32, s32, s32, s32, s32);      /* extern */
s32 func_0804EE30(s32, s32, s32, s32, s32);           /* extern */
s32 func_08075BC8(void *, s32, s32);                  /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk14;
    struct GenObj *unk18;
    struct GenObj *unk1C;
    u8 _pad20[6792];
    struct GenObj *unk1AA8;
} GenObj;
void func_080CA8B4(GenObj *arg0, u32 arg1, u32 arg2, s32 arg3) {
    s16 temp_r3;
    s16 var_r1;
    s32 var_r2;
    u32 temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r4;

    arg0->unkC = (s32) ((arg0->unk18->unk10 * 2) + 4);
    arg0->unk10 = arg3;
    arg0->unk0 = arg1;
    if (arg2 > 0x63U) {
        arg0->unk4 = 0x63U;
    } else {
        arg0->unk4 = arg2;
    }
    temp_r4 = arg0->unk18;
    temp_r0 = (u32) temp_r4->unk8->unk1AA8 / (u32) arg0->unk0;
    if (temp_r0 < (u32) arg0->unk4) {
        arg0->unk4 = temp_r0;
    }
    func_0804E9F4(temp_r4->unk1C->unk18 + ((arg0->unkC + 1) << 6) + (arg3 * 2), 0x2E, 1, 1, 0, 0x20);
    func_0804EE30(arg0->unk14, arg0->unk18->unk1C->unk18 + ((arg0->unkC + 1) << 6) + ((arg3 + 2) * 2), 0x24, 0, 0x20);
    func_0804E9F4(arg0->unk18->unk1C->unk18 + ((arg0->unkC + 1) << 6) + ((arg3 + 4) * 2), 0x2F, 1, 1, 0, 0x20);
    temp_r0_2 = arg0->unk18->unk1C;
    temp_r3 = temp_r0_2->unkC;
    var_r1 = temp_r3;
    if ((s32) temp_r3 < 0) {
        var_r1 = temp_r3 + 7;
    }
    var_r2 = temp_r3 + 0x100;
    if (var_r2 < 0) {
        var_r2 = temp_r3 + 0x107;
    }
    func_08075BC8(temp_r0_2, var_r1 >> 3, var_r2 >> 3);
    arg0->unk8 = 1;
}
