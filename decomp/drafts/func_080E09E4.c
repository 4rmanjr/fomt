typedef struct GenObj {
    u8 _pad0[448];
    s32 unk1C0;
} GenObj;
void func_080E09E4(GenObj *arg0, s32 arg1) {
    s32 var_r4;
    u8 *var_r1;
    u32 temp_r2;

    var_r4 = arg1;
    var_r1 = (u8 *)arg0;
    var_r1 += 0x30;
    temp_r2 = *(u32 *)((u8 *)arg0 + 0x1C0);
    if (temp_r2 <= 0x63U) {
        *(s32 *)((temp_r2 << 2) + var_r1) = var_r4;
        *(u32 *)((u8 *)arg0 + 0x1C0) = temp_r2 + 1;
    }
}
