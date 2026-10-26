s32 func_08050E0C(s32, s32, s32, s32, s32, s32, s32, s32); /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[148];
    struct GenObj *unk9C;
    u8 _padA0[12];
    struct GenObj *unkAC;
    struct GenObj *unkB0;
} GenObj;
void func_080128D0(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_r2;
    s32 var_r0;
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    temp_r2 = temp_r4->unkAC;
    if ((temp_r2 != 0) && (arg1 != 0) && (arg2 != 0)) {
        if (arg3 == 0) {
            func_08050E0C(temp_r2, arg1, arg2, 0, arg3, arg3, arg3, ((GenObj *)((u8 *)temp_r4 + 0xAC))->unk4);
        } else {
            if (arg4 == 0) {
                var_r0 = temp_r4->unkB0;
                goto block_11;
            }
            if (arg5 == 0) {
                var_r0 = temp_r4->unkB0;
                goto block_12;
            }
            if (arg6 == 0) {
                var_r0 = temp_r4->unkB0;
block_11:
block_12:
                func_08050E0C(temp_r2, arg1, arg2, var_r0);
            } else {
                func_08050E0C(temp_r2, arg1, arg2, arg4, arg5, arg6, temp_r4->unkB0);
            }
        }
        temp_r4->unk9C = 0x14;
    }
}
