s32 func_0803D52C(s32 *, void *);                       /* extern */
s32 func_0803D644(u8, u8);                          /* extern */
s32 func_0809ECD8(void *);                          /* extern */
s32 func_0809ECE0(void *);                          /* extern */

typedef struct GenObj {
    u8 _pad0[1];
    s32 unk1;
    s32 unk2;
    s32 unk3;
    u8 _pad7[1];
    s32 unk8;
    u8 _padC[8638];
    s32 unk21CA;
} GenObj;
s32 func_0803EC44(GenObj *arg0) {
GenObj sp0;
    u8 temp_r6;
    void *temp_r4;

    if ((s32) (arg0->unk21CA << 0x1B) < 0) {
        return 0;
    }
    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r6 = sp0.unk3;
    if ((func_0803D644(sp0.unk1, sp0.unk2) << 0x18) != 0) {
        return 4;
    }
    temp_r4 = arg0 + 0x1DAC;
    if ((func_0809ECD8(temp_r4) != 0) && ((func_0809ECE0(temp_r4) << 0x18) == 0)) {
        return 5;
    }
    if (temp_r6 == 4) {
        if (arg0->unk8 == 0) {
            return 2;
        }
        return 3;
    }
    return 1;
}
