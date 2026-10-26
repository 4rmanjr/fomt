typedef struct GenObj {
    u8 _pad0[2];
    s32 unk2;
} GenObj;
void func_080D1574(void *arg0) {
    s32 var_r5;
    u16 temp_r2;
    u8 var_r4;
    GenObj *var_r0;

    var_r0 = arg0;
    var_r4 = 0;
    var_r5 = 0;
    do {
        temp_r2 = var_r0->unk2;
        var_r4 += temp_r2;
        var_r5 = (var_r5 + temp_r2) & 0xFF00;
        var_r0->unk2 = (u16) (var_r5 | var_r4);
        var_r0 += 2;
    } while ((u32) var_r0 < (u32) saved_reg_r8);
}
