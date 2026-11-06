s32 func_08033B84(s32, s32, s32, s32);                  /* extern */

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[0x38];
    void *unk40;
    u8 _pad44[0x58];
    s32 unk9C;
    u8 _padA0[8];
    struct GenObj *unkA8;
} GenObj;

void func_0801223C(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    GenObj *t;
    GenObj *o;
    GenObj *x;
    s32 a;
    s32 b;
    u8 c;

    t = arg0->unk4;
    o = *(GenObj **) ((u8 *) t + 0xA8);
    x = ((GenObj *(*)(GenObj *, s32)) (((GenObj *) *(void **) o)->unk40))(o, arg1);
    if (x != 0) {
        a = *(s16 *) ((u8 *) x + 0xA) + arg2;
        b = *(s16 *) ((u8 *) x + 0xE) + arg3;
        c = *(u8 *) ((u8 *) x + 0x30);
        func_08033B84((s32) x, c, a, b);
    }
}
