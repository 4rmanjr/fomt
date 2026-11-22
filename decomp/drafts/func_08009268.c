s32 func_08009190();                                 /* extern */

typedef struct GenObj {
    u16 unk0;
    u8 _pad2[6];
    u16 unk8;
    u16 unkA;
    u16 unkC;
} GenObj;

s32 func_08009268(GenObj *arg0) {
    s16 *p;
    s32 ret;
    u32 bit;
    u32 mask;
    s32 v;
    u16 o0;
    u16 a;
    u16 c;

    ret = func_08009190();
    o0 = arg0->unk0;
    c = arg0->unkC;
    a = arg0->unkA;
    mask = 0;
    bit = 0x200;
    p = (s16 *) ((u8 *) arg0 + 0x20);
    do {
        if (o0 & bit) {
            if (!(ret & bit)) {
                v = *p;
                if (v != a) {
                    v += 1;
                } else {
                    mask |= bit;
                    v -= c;
                }
            } else {
                mask |= bit;
                v = 0;
            }
            *p = v;
        }
        p -= 1;
        bit >>= 1;
    } while (bit != 0);
    arg0->unk8 = mask;
    return mask;
}
