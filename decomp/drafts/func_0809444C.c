typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[16];
    s32 unk14;
    u8 _pad18[28];
    s32 unk34;
} GenObj;
void func_0809444C(GenObj *arg0) {
    GenObj *o = arg0->unk0;
    s32 a = arg0->unk14;
    void *b = (u8 *)arg0 + 0x18;

    ((void (*)(void *, s32, s32, void *, s32))(o->unk34))(arg0, a, 8, b, 8);
}

/* ATTEMPT-NOTE opencode: var per-arg agar urutan load pas (o->r4 dulu, funcptr terakhir sblm call); b=(u8*) byte-arith. */
