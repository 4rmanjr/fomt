typedef struct GenObj {
    void *unk0;
    u8 _pad4[4];
    struct GenObj *unk8;
    s32 unkA;
    struct GenObj *unkC;
    struct GenObj *unk10;
    struct GenObj *unk14;
    struct GenObj *unk18;
    struct GenObj *unk1C;
    struct GenObj *unk20;
    u8 _pad24[4];
    s32 unk28;
} GenObj;
void func_08075BC8(GenObj *arg0, s32 arg1, s32 arg2) {
    s16 temp_r0_3;
    s16 var_r1;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r4_2;
    s32 var_r5;
    u32 temp_r1_2;
    u32 temp_r4;
    GenObj *temp_r0_2;
    GenObj *temp_r1_3;
    GenObj *temp_r6;

    var_r5 = arg1;
    temp_r6 = (GenObj *)((u8 *)arg0 + 0x28);
    temp_r1 = arg0->unk28;
    if (((s32) ((0 - temp_r1) | temp_r1) >= 0) && ((var_r5 != 0) || (arg2 != 0))) {
        if ((s32) (arg2 - var_r5) > 0x20) {
            var_r5 = arg2 + 0x20;
        }
        temp_r1_2 = 0x1F & arg2;
        temp_r4 = arg2 - var_r5;
        if ((temp_r1_2 < temp_r4) && (temp_r1_2 != 0)) {
            temp_r2 = temp_r4 - temp_r1_2;
            temp_r4_2 = arg0->unk18;
            temp_r0 = arg0->unk10;
            temp_r6->unkC = (s32) (temp_r4_2 + (var_r5 << 6));
            temp_r6->unk10 = (s32) (((0x20 - temp_r2) << 6) + temp_r0);
            temp_r6->unk14 = (s32) (temp_r2 << 6);
            temp_r6->unk18 = (s32) (temp_r4_2 + ((var_r5 + temp_r2) << 6));
            temp_r6->unk1C = temp_r0;
            temp_r6->unk20 = (s32) (temp_r1_2 << 6);
            temp_r0_2 = arg0->unk0;
            ((void (*)(void *,...))(temp_r0_2->unk8->unk10))(temp_r0_2, temp_r6);
        } else {
            temp_r1_3 = (GenObj *)((u8 *)arg0 + 0x28);
            temp_r1_3->unkC = (s32) (arg0->unk18 + (var_r5 << 6));
            temp_r1_3->unk10 = (s32) (((0x1F & var_r5) << 6) + arg0->unk10);
            temp_r1_3->unk14 = (s32) (temp_r4 << 6);
            temp_r1_3->unk18 = 0;
            temp_r1_3->unk1C = 0;
            temp_r1_3->unk20 = 0;
            arg0->((void (*)(void *,...))(unk0->unk8->unk10))();
        }
        temp_r0_3 = arg0->unkC;
        var_r1 = temp_r0_3;
        if ((s32) temp_r0_3 < 0) {
            var_r1 = temp_r0_3 + 7;
        }
        arg0->unkA = (s16) ((u16) arg0->unkC - (temp_r0_3 - ((var_r1 >> 3) * 8)));
    }
}
