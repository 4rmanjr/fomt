void *GetMapData(s32);                              /* extern */
s32 memcpy(s32, s32, s32);                            /* extern */

void func_080AA540(void *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    u32 sp0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r4;
    s32 var_ip;
    s32 var_r0;
    s32 var_r3;
    s32 var_r5;
    s32 var_r6;
    u16 temp_r8;
    void *temp_r1;
    void *temp_r4_2;
    void *var_r1;
    void *var_r2;

    sp0 = arg3;
    temp_r8 = GetMapData(arg0->unk4)->unk20;
    if (arg4 != 0) {
        temp_r4 = arg1 * 2;
        memcpy(((arg2 - 1) * temp_r8 * 2) + (temp_r4 + arg0->unk18), arg4, 4);
        memcpy((arg2 * temp_r8 * 2) + (temp_r4 + arg0->unk14), arg4 + 4, 4);
        memcpy(((arg2 + 1) * temp_r8 * 2) + (temp_r4 + arg0->unk14), arg4 + 8, 4);
        arg0->unk29 = 1;
    }
    var_ip = 0;
    var_r6 = arg2 * temp_r8;
    var_r5 = arg2 + 1;
    switch (sp0) {
    case 0:
    case 1:
        break;
    case 2:
        var_r6 = arg2 * temp_r8;
        temp_r0 = arg0->unk2C;
        var_r2 = ((arg1 + var_r6) * 4) + temp_r0;
        var_r5 = arg2 + 1;
        var_r1 = (((var_r5 * temp_r8) + arg1) * 4) + temp_r0;
        var_r0 = var_r1->unk4 & 0xFFFE0003;
        var_r3 = 0xF48;
block_6:
        var_r1->unk4 = (s32) (var_r0 | var_r3);
        var_r1->unk0 = (s32) ((var_r1->unk0 & 0xFFFE0003) | var_r3);
        var_r2->unk4 = (s32) ((var_r2->unk4 & 0xFFFE0003) | var_r3);
        var_r2->unk0 = (s32) ((var_r2->unk0 & 0xFFFE0003) | var_r3);
        var_ip = 0;
        break;
    case 3:
        var_r6 = arg2 * temp_r8;
        temp_r0_2 = arg0->unk2C;
        var_r2 = ((arg1 + var_r6) * 4) + temp_r0_2;
        var_r5 = arg2 + 1;
        var_r1 = (((var_r5 * temp_r8) + arg1) * 4) + temp_r0_2;
        var_r0 = var_r1->unk4 & 0xFFFE0003;
        var_r3 = 0xF4C;
        goto block_6;
    case 4:
        var_ip = 1;
        var_r6 = arg2 * temp_r8;
        var_r5 = arg2 + 1;
        break;
    }
    temp_r0_3 = arg0->unk2C;
    temp_r4_2 = ((arg1 + var_r6) * 4) + temp_r0_3;
    temp_r1 = (((var_r5 * temp_r8) + arg1) * 4) + temp_r0_3;
    temp_r1->unk4 = (u8) ((-2 & temp_r1->unk4) | var_ip);
    temp_r1->unk0 = (u8) ((-2 & temp_r1->unk0) | var_ip);
    temp_r4_2->unk4 = (u8) ((-2 & temp_r4_2->unk4) | var_ip);
    temp_r4_2->unk0 = (u8) ((-2 & temp_r4_2->unk0) | var_ip);
}
