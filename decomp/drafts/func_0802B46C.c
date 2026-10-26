s32 func_0805E860(void *, s32);                       /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    u8 _pad6[4];
    struct GenObj *unkA;
    struct GenObj *unkE;
    u8 _pad12[14];
    struct GenObj *unk20;
    u8 _pad24[28];
    struct GenObj *unk40;
    struct GenObj *unk44;
    u8 _pad48[568];
    s32 unk280;
} GenObj;
void func_0802B46C(GenObj *arg0) {
    s32 sp0;
    s32 temp_r5;
    s32 var_r1;
    s32 var_r3;
    u32 temp_r0_2;
    u32 var_r1_2;
    u8 temp_r6;
    u8 temp_r7;
    void *temp_r0;
    GenObj *temp_r1;
    GenObj *temp_r4;

    temp_r1 = arg0->unk0;
    temp_r7 = arg0->unk280;
    temp_r6 = temp_r1->unk20;
    temp_r5 = temp_r7 & 1;
    temp_r4 = (GenObj *)((u8 *)arg0 + 0xCC) + ((temp_r7 * 0x48) + 4);
    temp_r4->unk0 = 1;
    sp0 = (s16) temp_r1->unkA;
    sp0.unk2 = (s16) temp_r1->unkE;
    temp_r4->unk44 = sp0;
    switch (temp_r6) {                              /* irregular */
    default:
        var_r1 = temp_r5 + 0x650;
        break;
    case 1:
        var_r3 = 0x652;
block_8:
        var_r1 = temp_r5 + var_r3;
        break;
    case 2:
        var_r1 = temp_r5 + 0x654;
        break;
    case 3:
        var_r3 = 0x656;
        goto block_8;
    }
    func_0805E860((GenObj *)((u8 *)temp_r4 + 0x2C), var_r1);
    temp_r0 = (GenObj *)((u8 *)temp_r4 + 0x40);
    temp_r4->unk40 = 1;
    temp_r0->unk2 = 0;
    (temp_r0 + 2)->unk1 = 1;
    temp_r0_2 = temp_r7 + 1;
    var_r1_2 = 0;
    if (temp_r0_2 <= 5U) {
        var_r1_2 = temp_r0_2;
    }
    arg0->unk280 = (u8) var_r1_2;
}
