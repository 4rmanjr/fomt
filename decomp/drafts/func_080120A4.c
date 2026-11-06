typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    s32 unk8;
    u8 _padC[0x34];
    void *unk40;
    u8 _pad44[0x64];
    struct GenObj *unkA8;
} GenObj;
s32 func_080120A4(GenObj *arg0, s32 arg1) {
    GenObj *t;
    GenObj *x;
    s32 a;

    t = arg0->unk4->unkA8;
    x = ((GenObj *(*)(GenObj *, s32)) (((GenObj *) *(void **) t)->unk40))(t, arg1);
    a = 0;
    if (x != 0) {
        a = x->unk8;
    }
    return a >> 0x10;
}
