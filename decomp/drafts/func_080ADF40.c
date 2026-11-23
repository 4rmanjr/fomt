typedef struct Obj {
    u8 _pad4[4];
    u16 unk4;
    u16 unk6;
} Obj;

s32 func_080ADF40(Obj *arg0) {
    s32 a;
    s32 b;
    s32 t;
    s32 v;

    a = arg0->unk6;
    b = arg0->unk4;
    t = a + b;
    v = (t & 0xFF) ? t : 0;
    arg0->unk6 = v;
    return (t >> 8) - (a >> 8);
}
