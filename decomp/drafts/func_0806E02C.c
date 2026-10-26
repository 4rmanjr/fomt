typedef struct GenObj {
    u8 _pad0[56];
    s32 unk38;
    s32 unk39;
    s32 unk3C;
    s32 unk3E;
    u8 _pad42[56];
    s32 unk7A;
    u8 _pad7E[971];
    s32 unk449;
    s32 unk44A;
} GenObj;
void func_0806E02C(GenObj *arg0) {
    s16 *var_r0;
    s16 *var_r0_2;
    s16 *var_r0_3;
    s16 *var_r0_4;
    s16 var_r1;
    s16 var_r1_2;
    s16 var_r1_3;
    s16 var_r1_4;
    s8 temp_r0;
    s8 temp_r0_2;
    s8 temp_r0_3;
    s8 temp_r2;
    s8 temp_r4;
    s8 var_r1_5;

    arg0->unk3E = (u16) ((0xFFFFFE00 & arg0->unk3E) | ((arg0->unk38 * 0x10) & 0x1FF));
    temp_r0 = arg0->unk39;
    if ((s32) temp_r0 > 0) {
        arg0->unk3C = (s8) (((temp_r0 - 1) * 0x12) + 0x40);
    } else {
        arg0->unk3C = 0x28;
    }
    if (arg0->unk39 == 0) {
        arg0->unk449 = (u8) arg0->unk38;
        temp_r0_2 = (s8) arg0->unk449;
        switch (temp_r0_2) {                        /* irregular */
        case 0:
            var_r1 = 0xF;
            var_r0 = arg0 + 0x72;
            do {
                *var_r0 = var_r1;
                var_r1 -= 1;
                var_r0 -= 8;
            } while ((s32) var_r0 >= (s32) (arg0 + 0x4A));
            return;
        case 4:
            var_r1_2 = 0x15;
            var_r0_2 = arg0 + 0x72;
            do {
                *var_r0_2 = var_r1_2;
                var_r1_2 -= 1;
                var_r0_2 -= 8;
            } while ((s32) var_r0_2 >= (s32) (arg0 + 0x4A));
            return;
        case 8:
            var_r1_3 = 0x1B;
            var_r0_3 = arg0 + 0x72;
            do {
                *var_r0_3 = var_r1_3;
                var_r1_3 -= 1;
                var_r0_3 -= 8;
            } while ((s32) var_r0_3 >= (s32) (arg0 + 0x4A));
            return;
        default:
            var_r1_4 = 0x21;
            var_r0_4 = arg0 + 0x72;
            do {
                *var_r0_4 = var_r1_4;
                var_r1_4 -= 1;
                var_r0_4 -= 8;
            } while ((s32) var_r0_4 >= (s32) (arg0 + 0x4A));
            return;
        }
    } else {
        temp_r2 = arg0->unk38;
        arg0->unk44A = (s8) (((s32) (temp_r2 + ((u32) temp_r2 >> 0x1F)) >> 1) + (((s8) (u8) arg0->unk39 - 1) * 7) + 1);
        temp_r4 = arg0->unk44A;
        temp_r0_3 = (s8) (temp_r4 / 10);
        var_r1_5 = 0x1A;
        if (temp_r0_3 != 0) {
            var_r1_5 = temp_r0_3;
        }
        arg0->unk7A = (s16) var_r1_5;
        (arg0 + 0x7A)->unk8 = (s16) (s8) (temp_r4 % 10);
    }
}
