typedef struct GenObj {
    s32 unk0;
    u8 _pad4[2];
    s32 unk6;
} GenObj;
void func_080BA284(s32 arg0) {
    s32 *var_r2;
    s32 var_r4;
    u8 temp_r0;
    void *var_r1;

    var_r1 = arg0 + 0x92;
    var_r2 = arg0 + 0xB40;
    var_r4 = 1;
    do {
        if (var_r1->unk6 != 0) {
            *var_r2 = 2;
            temp_r0 = var_r1->unk0 + 1;
            var_r1->unk0 = temp_r0;
            if ((u32) temp_r0 > 0x3CU) {
                *var_r2 = 1;
                var_r1->unk6 = 0U;
                var_r1->unk0 = 0U;
            }
        }
        var_r1 += 0x40;
        var_r2 += 4;
        var_r4 -= 1;
    } while (var_r4 >= 0);
}
