typedef struct GenObj {
    u32 unk0;
} GenObj;

void func_080A0A90(GenObj *arg0) {
    u32 tmp[2];
    u32 v0;
    u32 f;
    u32 *p;
    u32 *q;

    if ((s32)(((u8 *)arg0)[2] << 26) >= 0) {
        v0 = arg0->unk0;
        f = ((v0 << 11) >> 24) + 1;
        tmp[0] = f;
        tmp[1] = 0xFF;
        q = &tmp[1];
        p = &tmp[0];
        if (f > 0xFF) {
            p = q;
        }
        f = *p;
        arg0->unk0 = (v0 & 0xFFE01FFF) | ((f & 0xFF) << 13);
        ((u8 *)arg0)[2] |= 0x20;
    }
}
