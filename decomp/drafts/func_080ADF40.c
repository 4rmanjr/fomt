typedef struct GenObj {
    u8 _pad0[4];
    u16 unk4;
    u16 unk6;
} GenObj;

s32 func_080ADF40(GenObj *arg0) {
    s32 old = arg0->unk6;
    s32 sum = old + arg0->unk4;
    s32 lo;

    lo = old >> 8;
    arg0->unk6 = (sum & 0xFF) ? sum : 0;
    return (sum >> 8) - lo;
}
