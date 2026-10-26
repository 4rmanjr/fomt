void *GetMapData(s32);                              /* extern */
s32 memcpy(s32, s32, s32);                            /* extern */
s32 method_0800A07C__C9FieldPlot(s32);              /* extern */
s32 method_0800AF20__C9FieldPlot(s32);              /* extern */

void func_080CFEA8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r5_2;
    u16 temp_r8;
    void *temp_r1;
    void *temp_r4_3;

    sp0 = arg3;
    temp_r8 = GetMapData(arg0->unk4)->unk20;
    temp_r0 = method_0800AF20__C9FieldPlot(sp0);
    if (temp_r0 != 0) {
        temp_r4 = arg1 * 2;
        memcpy((arg2 * temp_r8 * 2) + (temp_r4 + arg0->unk10), temp_r0, 4);
        memcpy(((arg2 + 1) * temp_r8 * 2) + (temp_r4 + arg0->unk10), temp_r0 + 4, 4);
        arg0->unk29 = 1;
    }
    temp_r5 = arg2 * temp_r8;
    temp_r0_2 = arg2 + 1;
    if (arg4 != 0) {
        temp_r4_2 = arg1 * 2;
        memcpy(((arg2 - 1) * temp_r8 * 2) + (temp_r4_2 + arg0->unk18), arg4, 4);
        memcpy((temp_r5 * 2) + (temp_r4_2 + arg0->unk14), arg4 + 4, 4);
        memcpy((temp_r8 * temp_r0_2 * 2) + (temp_r4_2 + arg0->unk14), arg4 + 8, 4);
        arg0->unk29 = 1;
    }
    temp_r2 = arg0->unk2C;
    temp_r4_3 = ((arg1 + temp_r5) * 4) + temp_r2;
    temp_r1 = (((temp_r8 * temp_r0_2) + arg1) * 4) + temp_r2;
    temp_r5_2 = 1 & method_0800A07C__C9FieldPlot(sp0);
    temp_r1->unk4 = (u8) ((-2 & temp_r1->unk4) | temp_r5_2);
    temp_r1->unk0 = (u8) ((-2 & temp_r1->unk0) | temp_r5_2);
    temp_r4_3->unk4 = (u8) ((-2 & temp_r4_3->unk4) | temp_r5_2);
    temp_r4_3->unk0 = (u8) ((-2 & temp_r4_3->unk0) | temp_r5_2);
}
