s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct GenObj {
    u8 _pad0[1];
    s32 unk1;
    s32 unk2;
    s32 unk3;
    u8 _pad7[1];
    s32 unk8;
    u8 _padC[8556];
    s32 unk2178;
    s32 unk217A;
} GenObj;
s32 func_0803E6EC(GenObj *arg0) {
GenObj sp0;
    u8 temp_r2;
    u8 temp_r3;
    u8 temp_r4;

    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r2 = sp0.unk1;
    temp_r3 = sp0.unk2;
    temp_r4 = sp0.unk3;
    if ((temp_r2 == 3) && (temp_r3 == 2) && ((arg0->unk2178 & 0x43000) == 0x2000)) {
        if (((u32) (arg0->unk217A << 0x1B) >> 0x1E) != 2) {
            return 7;
        }
        return 0;
    }
    if ((func_0803D644(temp_r2, temp_r3) << 0x18) != 0) {
        return 6;
    }
    switch (temp_r4) {                              /* irregular */
    case 6:
        if (arg0->unk8 == 0) {
            return 2;
        }
        return 3;
    case 0:
        if (arg0->unk8 == 0) {
            return 4;
        }
        return 5;
    default:
        return 1;
    }
}
