s32 func_080A5BD8(void *, s32 *, u8, u8);               /* extern */
extern s32 gUnk_08106C74;
extern s32 gUnk_081073D0;
extern s32 gUnk_081073F0;
extern s32 gUnk_08107400;
extern s32 gUnk_08107420;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[33];
    s32 unk29;
} GenObj;
void func_080A607C(GenObj *arg0, u32 arg1) {
    s32 *var_r0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r3;
    u8 var_r2;
    u8 var_r3;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 0x26:
        if (arg1 > 0xFU) {
            temp_r0_2 = (arg1 - 0x10) * 2;
            var_r2 = *((u8 *)temp_r0_2 + &gUnk_081073D0);
            var_r3 = *((u8 *)temp_r0_2 + (&gUnk_081073D0 + 1));
        } else {
            var_r0 = &gUnk_081073F0;
block_12:
            temp_r3 = arg1 * 2;
            var_r2 = *((u8 *)temp_r3 + var_r0);
            var_r3 = *((u8 *)temp_r3 + (var_r0 + 1));
        }
block_13:
        func_080A5BD8(arg0, &gUnk_08106C74, var_r2, var_r3);
        break;
    case 0x27:
        if (arg1 > 0xFU) {
            temp_r0_3 = (arg1 - 0x10) * 2;
            var_r2 = *((u8 *)temp_r0_3 + &gUnk_081073D0);
            var_r3 = *((u8 *)temp_r0_3 + (&gUnk_081073D0 + 1));
        } else {
            var_r0 = &gUnk_08107400;
            goto block_12;
        }
        goto block_13;
    case 0x41:
        func_080A5BD8(arg0, &gUnk_08106C74, *((u8 *)arg1 + &gUnk_08107420), 5U);
        break;
    }
    arg0->unk29 = 1;
}
