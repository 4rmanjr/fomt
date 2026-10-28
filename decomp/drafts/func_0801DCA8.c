typedef struct C24 {
    u8 _pad0[8];
    void (*unk8)(void *, s32);
} C24;
typedef struct O24 {
    u8 _pad0[0x24];
    C24 *unk24;
} O24;
typedef struct GenObj {
    u8 _pad0[0x1058];
    O24 *unk1058;
} GenObj;
void func_0801DCA8(GenObj *arg0) {
    O24 **p = &arg0->unk1058;
    O24 *v;
    O24 *zero = 0;

    v = *p;
    if ((zero != v) && (v != 0)) {
        v->unk24->unk8(v, 3);
    }
    *p = zero;
}
