typedef struct GenObj {
    u8 _pad0[4];
    u16 unk4;
    u16 unk6;
} GenObj;

s32 func_080ADF40(GenObj *arg0) {
    register s32 old __asm__("r5");
    register s32 sum __asm__("r4");
    s32 v;

    old = arg0->unk6;
    sum = old + arg0->unk4;

    if (sum & 0xFF) {
        v = sum;
    } else {
        v = 0;
    }
    arg0->unk6 = (u16) v;
    return (sum >> 8) - (old >> 8);
}
