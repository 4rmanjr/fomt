typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[0x38];
    void *unk40;
    u8 _pad44[0x64];
    struct GenObj *unkA8;
} GenObj;
void func_08012154(GenObj *arg0, s32 arg1, s32 arg2) {
    GenObj *t;
    GenObj *x;

    t = arg0->unk4->unkA8;
    x = ((GenObj *(*)(GenObj *, s32)) (((GenObj *) *(void **) t)->unk40))(t, arg1);
    if (x != 0) {
        *(u8 *) ((u8 *) x + 0x21) = (u8) arg2;
    }
}
