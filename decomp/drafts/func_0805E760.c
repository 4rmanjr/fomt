typedef struct Src {
    u8 _pad0[4];
    u8 *unk4;
    u8 _pad8[0x14];
    u8 *unk1C;
    u16 unk20;
} Src;

typedef struct Out {
    u32 unk0;
    u16 unk4;
} Out;

s32 func_0805E760(Out *arg0, Src *arg1, u32 arg2) {
    u8 *p;
    s32 a;
    u16 b;

    if (arg2 < arg1->unk20) {
        p = arg1->unk4 + (arg2 << 2);
        a = *(u16 *)(p + 2);
        b = *(u16 *)p;
        a = (a << 2) + (s32)arg1->unk1C;
        arg0->unk0 = (u32)a;
        arg0->unk4 = b;
    } else {
        arg0->unk0 = 0;
        arg0->unk4 = 0;
    }
    return (s32)arg0;
}
