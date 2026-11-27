typedef struct GenObj {
    u8 _pad0[4];
    u16 unk4;
    u16 unk6;
} GenObj;

s32 func_080ADF40(GenObj *arg0) {
    u16 *p = &arg0->unk6;
    u16 old = *p;
    s32 sum = old + arg0->unk4;
    s32 t = 0;

    if ((sum & 0xFF) != 0) {
        t = sum;
    }
    *p = t;

    return (sum >> 8) - (old >> 8);
}
