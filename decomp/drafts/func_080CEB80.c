s32 func_080CE510(void *, s32, s32, s32, s32, s32);   /* extern */

typedef struct GenObj {
    u8 _pad0[188];
    s32 unkBC;
} GenObj;
u32 func_080CEB80(GenObj *arg0) {
    u32 temp_r0;
    u32 var_r0;

    temp_r0 = arg0->unkBC;
    if (temp_r0 <= 6U) {
        var_r0 = temp_r0 + 1;
    } else {
        var_r0 = 0;
    }
    arg0->unkBC = var_r0;
    func_080CE510(arg0, arg0->unkBC + 1, 0x0600F0F6, 0x20, 0, 0x20);
    return arg0->unkBC;
}
