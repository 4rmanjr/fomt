s32 func_080323C8();                                /* extern */

typedef struct GenObj {
    u8 _pad4[4];
    struct GenObj *unk4;
    u8 _pad8[0xA0];
    struct GenObj *unkA8;
} GenObj;
void func_080122A0(GenObj *arg0) {
    GenObj *t;
    GenObj *(*fn)(GenObj *);

    t = arg0->unk4->unkA8;
    fn = (GenObj *(*)(GenObj *)) *(void **) ((u8 *) *(void **) t + 0x40);
    if (fn(t) != 0) {
        func_080323C8();
    }
}
