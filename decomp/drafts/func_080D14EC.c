s32 func_080D11A4();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk6;
} GenObj;
void func_080D14EC(void) {
    s16 var_r6;
    s32 var_r5;
    GenObj *var_r7;

    var_r5 = saved_reg_r5;
    var_r7 = saved_reg_r7;
    var_r6 = 1;
    do {
        func_080D11A4();
        var_r7->unk6 = 5;
        var_r7->unk4 = var_r6;
        var_r7 += 4;
        var_r6 += 0x20;
        var_r5 -= 1;
    } while (var_r5 != 0);
}
