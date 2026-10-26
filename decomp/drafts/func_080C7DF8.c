s32 func_080088C4();                                /* extern */

typedef struct GenObj {
    u8 _pad0[2236];
    s32 unk8BC;
    u8 _pad8C0[4];
    s32 unk8C4;
} GenObj;
void func_080C7DF8(GenObj *arg0) {
    s32 *var_r1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r0;

    temp_r2 = func_080088C4();
    temp_r1 = arg0->unk8BC;
    if (temp_r1 <= 7) {
        if ((0x20 & temp_r2) && (temp_r1 != 6) && (temp_r1 != 7) && (temp_r1 != 4)) {
            arg0->unk8BC = 4;
            goto block_22;
        }
        if (0x10 & temp_r2) {
            var_r1 = arg0 + 0x8BC;
            temp_r0 = arg0->unk8BC;
            if ((temp_r0 != 6) && (temp_r0 != 7) && (temp_r0 != 5)) {
                var_r0 = 5;
                goto block_21;
            }
        }
        if (0x40 & temp_r2) {
            var_r1 = arg0 + 0x8BC;
            temp_r0_2 = arg0->unk8BC;
            if ((temp_r0_2 != 4) && (temp_r0_2 != 5) && (temp_r0_2 != 6)) {
                var_r0 = 6;
                goto block_21;
            }
        }
        if (0x80 & temp_r2) {
            var_r1 = arg0 + 0x8BC;
            temp_r0_3 = arg0->unk8BC;
            if ((temp_r0_3 != 4) && (temp_r0_3 != 5) && (temp_r0_3 != 7)) {
                var_r0 = 7;
block_21:
                *var_r1 = var_r0;
block_22:
                arg0->unk8C4 = 1;
            }
        }
    }
}
