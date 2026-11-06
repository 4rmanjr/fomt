s32 func_08033B24();                                  /* extern */

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

s32 func_08015920(GenObj *arg0, s32 arg1) {
    GenObj *t;
    GenObj *o;
    GenObj *x;

    t = arg0->unk4;
    if ((u32) (arg1 - 0x24) > 6U) {
        return 0;
    }
    o = *(GenObj **) ((u8 *) t + 0xA8);
    x = ((GenObj *(*)(GenObj *, s32)) (((GenObj *) *(void **) o)->unk40))(o, arg1);
    if (x == 0) {
        return 0;
    }
    return func_08033B24();
}
