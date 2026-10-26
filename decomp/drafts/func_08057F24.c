s32 func_08057F64();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[44];
    s32 unk2C;
} GenObj;
void func_08057F24(GenObj *arg0) {
    u8 temp_r4;

    temp_r4 = arg0->unk2C;
    arg0->unk2C = (u8) ((-4 & temp_r4) | ((((u32) (temp_r4 << 0x1E) >> 0x1E) + 1) & 3));
    func_08057F64();
}
