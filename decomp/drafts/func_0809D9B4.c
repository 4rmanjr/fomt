s32 func_0809DA00(s32, u32, s32);                   /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
s32 func_0809D9B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r6;
    void *temp_r4;

    var_r6 = 0;
    temp_r4 = arg0 + ((arg1 * 2) + (arg2 * 0x38));
    if (((u32) (temp_r4->unk4 << 0x1C) >> 0x1C) == 4) {
        var_r6 = func_0809DA00(arg0, (u32) ((u16) temp_r4->unk4 << 0x16) >> 0x1A, arg3);
        temp_r4->unk4 = (u8) (-0x10 & temp_r4->unk4);
        temp_r4->unk4 = (s16) (0xFFFFFC0F & (u16) temp_r4->unk4);
    }
    return var_r6;
}
