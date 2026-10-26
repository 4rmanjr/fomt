s32 func_080D11A4();                                  /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
} GenObj;
void func_080D10F0(void) {
    s16 var_fp;
    s16 var_r1_2;
    s16 var_r4;
    s32 temp_r4;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r6_3;
    u32 var_r5;
    void *var_r1;

    var_r6 = 1 << saved_reg_r4;
    var_r1 = saved_reg_r7 + 0x20;
    do {
        var_r1->unk0 = -1;
        var_r1->unk4 = -1;
        var_r1 += 8;
        var_r6 -= 2;
    } while ((s64) var_r6 > 0);
    var_fp = 0x20;
    var_r5 = 0;
    var_r6_2 = saved_reg_r4 * 2;
    do {
        var_r5 *= 2;
        var_r4 = saved_reg_r4;
        func_080D11A4();
        if (saved_reg_r4 & saved_reg_r4) {
            do {
                var_r1_2 = 0x20;
                var_r6_3 = M2C_ERROR(/* Read from unset register $r12 */);
                if (var_r6_3 & var_r6_3) {
                    do {
                        temp_r4 = ((u32) ((var_r5 >> var_r6_3) << 0x1F) >> 0x1E) + var_r1_2;
                        var_r1_2 = *((u8 *)saved_reg_r7 + temp_r4);
                        if (var_r1_2 & var_r1_2 & 0x80000000) {
                            var_r1_2 = var_fp + 4;
                            var_fp = var_r1_2;
                            *((u8 *)saved_reg_r7 + temp_r4) = var_r1_2;
                        }
                        var_r6_3 -= 1;
                    } while (var_r6_3 != 0);
                }
                func_080D11A4();
                *(saved_reg_r7 + (((u32) (var_r5 << 0x1F) >> 0x1E) + var_r1_2)) = ~saved_reg_r4;
                var_r5 += 1;
                var_r4 -= 1;
            } while (var_r4 != 0);
        }
        var_r6_2 -= 1;
    } while (var_r6_2 != 0);
}
