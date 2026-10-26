s32 func_08008B6C(void *, s32);                       /* extern */
u16 rand();                                         /* extern */

typedef struct GenObj {
    u8 _pad0[2316];
    s32 unk90C;
    s32 unk90D;
} GenObj;
void func_080B36B4(GenObj *arg0) {
    s32 temp_r0;
    s32 temp_r2_2;
    s32 temp_r2_4;
    s32 var_r7;
    u16 *temp_r2;
    u16 *temp_r3;
    u16 *temp_r3_2;
    u16 temp_r1_4;
    u16 temp_r1_5;
    u16 temp_r1_6;
    u32 temp_r1;
    u8 *temp_r1_2;
    u8 *temp_r1_3;
    u8 *temp_r2_3;
    u8 *temp_r6;
    u8 temp_r0_2;
    u8 temp_r0_3;

    var_r7 = 0;
loop_1:
    temp_r6 = arg0 + 0x915 + var_r7;
    if (*temp_r6 != 0) {
        *((u8 *)arg0 + 0x8E6 + (var_r7 * 2)) = ((s32) (0xB4 * rand()) >> 0x10) + 0xB4;
        *temp_r6 = 0;
    }
    temp_r0 = var_r7 * 4;
    temp_r1 = *((u8 *)arg0 + 0x848 + temp_r0) - 1;
    switch (temp_r1) {                              /* irregular */
    case 2:
        temp_r1_2 = arg0 + 0x8E1 + var_r7;
        temp_r0_2 = *temp_r1_2;
        if ((u32) temp_r0_2 > 0x70U) {
            *temp_r1_2 = temp_r0_2 - 1;
        }
        if (*temp_r1_2 != 0x70) {

        } else {
            *((u8 *)arg0 + 0x848 + temp_r0) = 1;
            *((u8 *)arg0 + 0x85C + temp_r0) = 2;
            *((u8 *)arg0 + 0x915 + var_r7) = 1;
            *((u8 *)arg0 + 0x8F0 + (var_r7 * 2)) = 0;
            *((u8 *)arg0 + 0x91A + var_r7) = 1;
            *((u8 *)arg0 + 0x91F + var_r7) = 1;
        }
        break;
    case 3:
        temp_r1_3 = arg0 + 0x8E1 + var_r7;
        temp_r0_3 = *temp_r1_3 + 1;
        *temp_r1_3 = temp_r0_3;
        if (temp_r0_3 != 0xA8) {

        } else {
            *((u8 *)arg0 + 0x848 + temp_r0) = 5;
            *((u8 *)arg0 + 0x85C + temp_r0) = 1;
            arg0->unk90D = (u8) (arg0->unk90D + 1);
            *((u8 *)arg0 + 0x91A + var_r7) = 1;
            *((u8 *)arg0 + 0x91F + var_r7) = 1;
            func_08008B6C(arg0 + 0x814, 0xC7);
        }
        break;
    case 5:
        temp_r2 = arg0 + 0x8FC + (var_r7 * 2);
        temp_r1_4 = *temp_r2 + 1;
        *temp_r2 = temp_r1_4;
        if ((temp_r1_4 << 0x10) != 0x012C0000) {

        } else {
            *temp_r2 = 0;
            *((u8 *)arg0 + 0x848 + temp_r0) = 3;
            *((u8 *)arg0 + 0x91A + var_r7) = 1;
        }
        break;
    case 0:
        temp_r2_2 = var_r7 * 2;
        temp_r3 = arg0 + 0x8F0 + temp_r2_2;
        temp_r1_5 = *temp_r3 + 1;
        *temp_r3 = temp_r1_5;
        if (temp_r1_5 == ((u16) *((u8 *)arg0 + 0x8E6 + temp_r2_2) >> 1)) {
            *temp_r3 = 0;
            *((u8 *)arg0 + 0x848 + temp_r0) = 2;
            *((u8 *)arg0 + 0x870 + temp_r0) = 1;
            *((u8 *)arg0 + 0x91A + var_r7) = 1;
        }
        temp_r2_3 = arg0 + 0x924 + var_r7;
        if (*temp_r2_3 != 0) {
            arg0->unk90C = (u8) (arg0->unk90C + 1);
            *temp_r2_3 = 0;
            if ((u32) arg0->unk90C > 5U) {
                func_08008B6C(arg0 + 0x81C, 0xBC);
            }
        }
        break;
    case 1:
        temp_r2_4 = var_r7 * 2;
        temp_r3_2 = arg0 + 0x8F0 + temp_r2_4;
        temp_r1_6 = *temp_r3_2 + 1;
        *temp_r3_2 = temp_r1_6;
        if (temp_r1_6 == ((u16) *((u8 *)arg0 + 0x8E6 + temp_r2_4) >> 1)) {
            *temp_r3_2 = 0;
            *((u8 *)arg0 + 0x848 + temp_r0) = 4;
            *((u8 *)arg0 + 0x870 + temp_r0) = 2;
            *((u8 *)arg0 + 0x91A + var_r7) = 1;
            func_08008B6C(arg0 + 0x814, 0xA6);
        }
        break;
    }
    var_r7 += 1;
    if (var_r7 <= 4) {
        goto loop_1;
    }
}
