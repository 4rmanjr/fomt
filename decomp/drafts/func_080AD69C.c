void *GetMapData(s32);                              /* extern */
s32 func_0803A8A4(u32, s32, s32, s32, s32);         /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    s32 unk8;
    s32 unkA;
    u8 _padE[10];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk22;
    u8 _pad26[6];
    struct GenObj *unk2C;
} GenObj;
void *func_080AD69C(GenObj *arg0, GenObj *arg1, u32 arg2) {
    s32 temp_r7;
    s32 var_r0_2;
    u16 temp_r6;
    u16 temp_r8;
    u16 var_r0;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r4;

    if (arg2 > 0x233U) {
        var_r0 = 0;
        arg0->unk0 = 0;
        arg0->unk4 = 0;
        arg0->unk8 = 0U;
        goto block_8;
    }
    temp_r0 = arg1->unk4;
    temp_r7 = temp_r0->unk0;
    if (temp_r7 == arg2) {
        var_r0_2 = temp_r0->unk4;
    } else {
        var_r0_2 = func_0803A8A4(arg2, 1, 0, 0, 0);
    }
    temp_r0_2 = GetMapData(var_r0_2);
    temp_r6 = temp_r0_2->unk20;
    temp_r8 = temp_r0_2->unk22;
    if (temp_r7 == arg2) {
        temp_r4 = arg1->unk4;
        GetMapData(temp_r4->unk4);
        arg0->unk0 = (s32) temp_r4->unk2C;
        arg0->unk4 = 0;
        arg0->unk8 = temp_r6;
        arg0->unkA = temp_r8;
    } else {
        arg0->unk0 = (s32) temp_r0_2->unk18;
        arg0->unk4 = (s32) temp_r0_2->unk1C;
        arg0->unk8 = temp_r6;
        var_r0 = temp_r8;
block_8:
        arg0->unkA = var_r0;
    }
    return arg0;
}
