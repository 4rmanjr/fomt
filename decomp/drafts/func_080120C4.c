typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    s32 unk8;
    s32 unkC;
    u8 _pad10[0x30];
    void *unk40;
    u8 _pad44[0x64];
    struct GenObj *unkA8;
} GenObj;
s32 func_080120C4(GenObj *arg0, s32 arg1) {
    GenObj *t;
    GenObj *x;
    s32 a;

    t = arg0->unk4->unkA8;
    x = ((GenObj *(*)(GenObj *, s32)) (((GenObj *) *(void **) t)->unk40))(t, arg1);
    a = 0;
    if (x != 0) {
        a = x->unkC;
    }
    return a >> 0x10;
}
