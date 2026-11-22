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
    s16 v;

    ret = func_08009190();
    mask = 0;
    bit = 0x200;
    p = (s16 *) ((u8 *) arg0 + 0x20);
    do {
        if (arg0->unk0 & bit) {
            if (!(ret & bit)) {
                v = *p;
                if (v != arg0->unkA) {
                    v += 1;
                } else {
                    mask |= bit;
                    v -= arg0->unkC;
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
