typedef struct Blob {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
} Blob;
void *func_080ADD08(Blob *dst, Blob **src) {
    Blob *s = *src;
    Blob *d = dst;

    *d = *s;
    return dst;
}
