s32 func_08075BC8(void *, s32, s32);                  /* extern */

typedef struct GenObj {
    u8 _pad0[6];
    s32 unk6;
    s32 unk8;
    s32 unkA;
    s32 unkC;
    s32 unkE;
    u8 _pad12[2];
    s32 unk14;
    struct GenObj *unk16;
} GenObj;
void func_08075C88(GenObj *arg0, u16 arg1) {
    u16 sp0;
    s16 temp_r0;
    s16 temp_r0_2;
    s16 temp_r2;
    s16 temp_r2_3;
    s16 temp_r3_2;
    s16 temp_r3_3;
    s16 temp_r3_4;
    s16 temp_r5;
    s16 temp_r5_2;
    s16 var_r0;
    s16 var_r0_2;
    s16 var_r1_2;
    s16 var_r1_4;
    s32 temp_r3;
    s32 var_r1;
    s32 var_r1_3;
    s32 var_r2;
    s32 var_r2_2;
    u16 temp_r1;
    GenObj *temp_r2_2;

    temp_r2 = (s16) arg1;
    if ((s32) (temp_r2 + 0xA0) > (s32) arg0->unkE) {
        arg0->unk8 = 0x60;
        return;
    }
    var_r0 = temp_r2;
    if ((s32) temp_r2 < 0) {
        var_r0 += 0xFF;
    }
    temp_r0 = temp_r2 - ((var_r0 >> 8) << 8);
    arg0->unk8 = temp_r0;
    if (temp_r0 != arg0->unk6) {
        temp_r1 = (u16) arg0->unk8;
        temp_r2_2 = arg0->unk14;
        if (temp_r2_2 != 0) {
            sp0 = temp_r1;
            temp_r2_2->unk16 = temp_r1;
        } else {
            *(u16 *)0x04000016 = temp_r1;
        }
        arg0->unk6 = (s16) (u16) arg0->unk8;
    }
    temp_r2_3 = (s16) arg1;
    temp_r3 = temp_r2_3 - 0x30;
    if ((temp_r3 <= 0) || ((s32) arg0->unkE <= 0x100)) {
        arg0->unkC = 0;
    } else if ((s32) (temp_r2_3 + 0xD0) >= (s32) arg0->unkE) {
        arg0->unkC = (s16) ((u16) arg0->unkE + 0xFFFFFF00);
    } else {
        arg0->unkC = (s16) temp_r3;
    }
    temp_r3_2 = arg0->unkC;
    temp_r0_2 = arg0->unkA;
    if (temp_r3_2 != temp_r0_2) {
        var_r1 = 0;
        var_r2 = 0;
        if ((s32) temp_r0_2 < 0) {
            var_r1_2 = temp_r3_2;
            if ((s32) temp_r3_2 < 0) {
                var_r1_2 = temp_r3_2 + 7;
            }
            var_r1 = var_r1_2 >> 3;
            var_r2_2 = temp_r3_2 + 0x100;
            if (var_r2_2 < 0) {
                var_r2_2 = temp_r3_2 + 0x107;
            }
            goto block_27;
        }
        if ((s32) temp_r3_2 > (s32) temp_r0_2) {
            temp_r5 = arg0->unkC;
            temp_r3_3 = arg0->unkA;
            if ((s32) (temp_r5 - temp_r3_3) > 7) {
                var_r1_3 = temp_r3_3 + 0x100;
                if (var_r1_3 < 0) {
                    var_r1_3 = temp_r3_3 + 0x107;
                }
                var_r1 = var_r1_3 >> 3;
                var_r2_2 = temp_r5 + 0x100;
                if (var_r2_2 < 0) {
                    var_r2_2 = temp_r5 + 0x107;
                }
block_27:
                var_r2 = var_r2_2 >> 3;
            }
        } else if ((s32) temp_r0_2 > (s32) temp_r3_2) {
            temp_r5_2 = arg0->unkA;
            temp_r3_4 = arg0->unkC;
            if ((s32) (temp_r5_2 - temp_r3_4) > 7) {
                var_r1_4 = temp_r3_4;
                if ((s32) var_r1_4 < 0) {
                    var_r1_4 += 7;
                }
                var_r1 = var_r1_4 >> 3;
                var_r0_2 = temp_r5_2;
                if ((s32) var_r0_2 < 0) {
                    var_r0_2 += 7;
                }
                var_r2 = var_r0_2 >> 3;
            }
        }
        func_08075BC8(arg0, var_r1, var_r2);
    }
}
