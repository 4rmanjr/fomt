typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[2];
    s32 unkA;
    s32 unkE;
    u8 _pad12[2];
    struct GenObj *unk14;
    u8 _pad18[72];
    s32 unk60;
} GenObj;
s32 func_08039134(void **arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 var_r5;
    s32 var_r7;
    s32 var_r8;
    void *temp_r0;

    sp0 = arg1;
    var_r7 = 0x64;
    var_r8 = 0;
    var_r5 = 0x2E;
    do {
        temp_r0 = (*arg0)->unk40(arg0, var_r5);
        if ((temp_r0 != 0) && (temp_r0->unk4 == sp0) && ((((void (*)(void *,...))(temp_r0->unk14->unk60))(temp_r0) << 0x18) != 0) && ((temp_r1 = temp_r0->unkA - arg2, temp_r0_2 = temp_r0->unkE - arg3, temp_r0_3 = (temp_r1 * temp_r1) + (temp_r0_2 * temp_r0_2), (var_r7 == 0x64)) || (var_r8 > temp_r0_3))) {
            var_r7 = var_r5;
            var_r8 = temp_r0_3;
        }
        var_r5 += 1;
    } while (var_r5 <= 0x45);
    return var_r7;
}
