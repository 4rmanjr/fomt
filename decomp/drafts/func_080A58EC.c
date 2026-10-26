void *GetMapData(s32);                              /* extern */

void *func_080A58EC(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s16 temp_r5;
    s16 temp_sl;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r6;
    s32 temp_r8;
    s32 var_r1;
    s32 var_r5;
    void *temp_r0;

    temp_r5 = arg1->unkA;
    temp_sl = arg1->unkE;
    temp_r6 = temp_r5 + 0x78;
    temp_r8 = temp_sl + 0x50;
    temp_r0 = GetMapData(arg1->unk4);
    temp_r1 = temp_r0->unk20 * 8;
    var_r5 = temp_r5 + (arg2 - temp_r6);
    if (var_r5 < 0) {
        var_r5 = 0;
    } else {
        temp_r1_2 = temp_r1 - 0xF0;
        if (var_r5 > temp_r1_2) {
            var_r5 = temp_r1_2;
        }
    }
    var_r1 = temp_sl + (arg3 - temp_r8);
    if (var_r1 < 0) {
        var_r1 = 0;
    } else {
        temp_r0_2 = (temp_r0->unk22 * 8) - 0xA0;
        if (var_r1 > temp_r0_2) {
            var_r1 = temp_r0_2;
        }
    }
    arg0->unk0 = (s16) var_r5;
    arg0->unk2 = (s16) var_r1;
    return arg0;
}
