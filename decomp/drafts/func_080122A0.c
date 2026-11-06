s32 func_080323C8();                                /* extern */

typedef struct GenObj {
    u8 _pad4[4];
    struct GenObj *unk4;
    u8 _pad8[0x38];
    void *unk40;
    u8 _pad44[0x64];
    struct GenObj *unkA8;
} GenObj;
void func_080122A0(GenObj *arg0, s32 arg1) {
    GenObj *t;

    t = arg0->unk4->unkA8;
    if (((GenObj *(*)(GenObj *, s32)) (((GenObj *) *(void **) t)->unk40))(t, arg1) != 0) {
        func_080323C8();
    }
}
