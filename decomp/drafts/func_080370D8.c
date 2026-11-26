typedef struct Sub_080370D8 {
    u8 _pad0[0xE];
    u16 unkE;
    s16 unk10;
} Sub_080370D8;

typedef struct Mid_080370D8 {
    u8 _pad0[0x30];
    Sub_080370D8 unk30;
} Mid_080370D8;

typedef struct Gen_080370D8 {
    u8 _pad0[0x10];
    Mid_080370D8 *unk10;
} Gen_080370D8;

s32 func_080370D8(Gen_080370D8 *arg0) {
    Mid_080370D8 *m;
    s32 v;
    s32 r4;
    s32 res;

    m = arg0->unk10;
    if (m != 0) {
        r4 = 0;
        v = 0;
        if (m->unk30.unkE != 0) {
            v = m->unk30.unk10;
            v = (s32)(((u32)(0 - v) | (u32)v) >> 0x1F);
        }
        if (v == 0) {
            r4 = 1;
        } else if ((((s32 (*)(void *)) func_0805E894)(&m->unk30) << 0x18) != 0) {
            r4 = 1;
        }
        res = r4;
    } else {
        res = 1;
    }
    return res;
}
