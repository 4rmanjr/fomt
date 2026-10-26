u32 GetPlayerEventCount__C12Bachelorette();         /* extern */
u32 GetRivalEventCount__C12Bachelorette();          /* extern */
s32 func_0809C694(s32, u16);                        /* extern */
s32 func_080A0878(s32, s32);                        /* extern */

typedef struct GenObj {
    u8 _pad0[848];
    s32 unk350;
} GenObj;
s32 func_080455D8(GenObj *arg0, u16 arg1, s32 arg2, u32 arg3, u8 arg4) {
    u32 var_r0;
    u8 temp_r5;

    temp_r5 = arg4;
    if ((func_0809C694(arg0->unk350 + 0x214C, arg1) << 0x18) != 0) {
        return 1;
    }
    if (func_080A0878(arg0->unk350 + 0x1CD4, arg2) != 0) {
        if (temp_r5 == 0) {
            var_r0 = GetPlayerEventCount__C12Bachelorette();
        } else {
            var_r0 = GetRivalEventCount__C12Bachelorette();
        }
        if (var_r0 < arg3) {
            goto block_7;
        }
        return 2;
    }
block_7:
    return 0;
}
