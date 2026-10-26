typedef struct GenObj {
    u8 _pad0[2];
    s32 unk2;
} GenObj;
void func_080D1548(void *arg0) {
    s32 var_r4;
    u16 temp_r2;
    u8 temp_r2_2;
    GenObj *var_r0;

    var_r0 = arg0;
    var_r4 = 0;
    do {
        temp_r2 = var_r0->unk2;
        temp_r2_2 = temp_r2 + var_r4;
        var_r4 = (temp_r2 >> 8) + temp_r2_2;
        var_r0->unk2 = (u16) ((var_r4 << 8) | temp_r2_2);
        var_r0 += 2;
    } while ((u32) var_r0 < (u32) saved_reg_r8);
}
