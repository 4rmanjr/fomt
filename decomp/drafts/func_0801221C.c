s32 SetMap__7AEntityUi(s32, s32);                   /* extern */

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[0x38];
    void *unk40;
    u8 _pad44[0x64];
    struct GenObj *unkA8;
} GenObj;
void func_0801221C(GenObj *arg0) {
    GenObj *t;
    GenObj *x;
    t = arg0->unk4->unkA8;
    x = ((GenObj *(*)(GenObj *)) (((GenObj *) *(void **) t)->unk40))(t);
    if (x != 0) {
        SetMap__7AEntityUi((s32) x, 0x234);
    }
}
