void *GetMapData(s32);                              /* extern */
s32 memcpy(s32, s32, s32);                            /* extern */
s32 method_0800A07C__C9FieldPlot(s32);              /* extern */
s32 method_0800A0A4__C9FieldPlot(s32);              /* extern */
s32 method_0800AF20__C9FieldPlot(s32);              /* extern */

void func_080AA6D0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r1;
    s32 temp_r1_3;
    s32 temp_r2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r5;
    s32 temp_r5_2;
    u16 temp_sl;
    void *temp_r1_2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r3;
    void *temp_r4_4;
    void *temp_r8;

    sp0 = arg1;
    sp4 = arg3;
    temp_sl = GetMapData(arg0->unk4)->unk20;
    temp_r0 = method_0800AF20__C9FieldPlot(sp4);
    if (temp_r0 != 0) {
        temp_r4 = sp0 * 2;
        memcpy((arg2 * temp_sl * 2) + (temp_r4 + arg0->unk10), temp_r0, 4);
        memcpy(((arg2 + 1) * temp_sl * 2) + (temp_r4 + arg0->unk10), temp_r0 + 4, 4);
        arg0->unk29 = 1;
    }
    temp_r5 = arg2 * temp_sl;
    sp8 = arg2 + 1;
    if (arg4 != 0) {
        temp_r4_2 = sp0 * 2;
        memcpy(((arg2 - 1) * temp_sl * 2) + (temp_r4_2 + arg0->unk18), arg4, 4);
        memcpy((temp_r5 * 2) + (temp_r4_2 + arg0->unk14), arg4 + 4, 4);
        memcpy((sp8 * temp_sl * 2) + (temp_r4_2 + arg0->unk14), arg4 + 8, 4);
        arg0->unk29 = 1;
    }
    temp_r2 = arg0->unk2C;
    temp_r1 = (sp0 + temp_r5) * 4;
    temp_r1_2 = temp_r1 + temp_r2;
    temp_r4_3 = (sp0 + (sp8 * temp_sl)) * 4;
    temp_r2_2 = temp_r4_3 + temp_r2;
    temp_r5_2 = 1 & method_0800A07C__C9FieldPlot(sp4);
    temp_r2_2->unk4 = (u8) ((-2 & temp_r2_2->unk4) | temp_r5_2);
    temp_r2_2->unk0 = (u8) ((-2 & temp_r2_2->unk0) | temp_r5_2);
    temp_r1_2->unk4 = (u8) ((-2 & temp_r1_2->unk4) | temp_r5_2);
    temp_r1_2->unk0 = (u8) ((-2 & temp_r1_2->unk0) | temp_r5_2);
    temp_r0_2 = method_0800A0A4__C9FieldPlot(sp4);
    temp_r1_3 = arg0->unk2C;
    temp_r8 = temp_r1 + temp_r1_3;
    temp_r2_3 = temp_r8 + 4;
    temp_r4_4 = temp_r4_3 + temp_r1_3;
    temp_r3 = temp_r4_4 + 4;
    temp_r3->unk2 = (u16) ((1 & temp_r3->unk2) | (temp_r0_2 * 2));
    temp_r0_3 = temp_r0_2 & 0x7FFF;
    temp_r4_4->unk2 = (u16) ((1 & temp_r4_4->unk2) | (temp_r0_3 * 2));
    temp_r0_4 = temp_r0_3 & 0x7FFF;
    temp_r2_3->unk2 = (u16) ((1 & temp_r2_3->unk2) | (temp_r0_4 * 2));
    temp_r8->unk2 = (u16) ((1 & temp_r8->unk2) | ((temp_r0_4 & 0x7FFF) * 2));
}
