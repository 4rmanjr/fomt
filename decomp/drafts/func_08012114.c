typedef struct Vt114 { u8 _pad[0x40]; void *unk40; } Vt114;
typedef struct H114 { Vt114 *vt; } H114;
typedef struct GenObj114 {
    void *unk0;
    struct GenObj114 *unk4;
    u8 _pad8[0x38];
    void *unk40;
    u8 _pad44[0x64];
    H114 *unkA8;
} GenObj114;
s32 func_08012114(GenObj114 *arg0, s32 arg1) {
    H114 *t;
    GenObj114 *x;

    t = arg0->unk4->unkA8;
    x = ((GenObj114 *(*)(H114 *, s32))(t->vt->unk40))(t, arg1);
    if (x == 0) {
        return 0;
    }
    return *(u8 *)((u8 *)x + 0x20);
}
