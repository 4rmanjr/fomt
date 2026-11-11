s32 func_08050DC8(s32, s32, s32, s32);                  /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[0x94];
    s32 unk9C;
    u8 _padA0[0x0C];
    s32 unkAC;
    s32 unkB0;
} GenObj;
void func_080126BC(GenObj *arg0, s32 arg1) {
    GenObj *t;
    s32 obj;

    t = arg0->unk4;
    obj = t->unkAC;
    if (obj != 0) {
        func_08050DC8(obj, arg1, 0x40, t->unkB0);
        t->unk9C = 0x11;
    }
}
