typedef struct Entry {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
} Entry;

typedef struct Src {
    u8 _pad0[8];
    u8 *unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8 _pad1C[6];
    u16 unk22;
} Src;

typedef struct Dst {
    s32 unk0;
    u16 unk4;
    s32 unk8;
    u16 unkC;
    s32 unk10;
    u16 unk14;
    s32 unk18;
    u16 unk1C;
} Dst;

void *func_0805E790(Dst *arg0, Src *arg1, u32 arg2) {
    Entry *e;
    s32 v0;
    u16 v1;
    s32 v2;
    u16 v3;
    s32 v4;
    u16 v5;
    s32 v6;
    u16 v7;

    if (arg2 < (u32)arg1->unk22) {
        e = (Entry *)(arg1->unk8 + (arg2 * 0x10));
        v0 = (s32)((e->unk2 * 8) + arg1->unkC);
        v1 = e->unk0;
        v2 = (s32)((e->unk6 << 5) + arg1->unk10);
        v3 = (u16)(e->unk4 << 5);
        v4 = (s32)((e->unkA << 5) + arg1->unk14);
        v5 = (u16)(e->unk8 << 5);
        v6 = (s32)((e->unkE * 8) + arg1->unk18);
        v7 = e->unkC;
        arg0->unk0 = v0;
        arg0->unk4 = v1;
        arg0->unk8 = v2;
        arg0->unkC = v3;
        arg0->unk10 = v4;
        arg0->unk14 = v5;
        arg0->unk18 = v6;
        arg0->unk1C = v7;
    } else {
        arg0->unk0 = 0;
        arg0->unk4 = 0;
        arg0->unk8 = 0;
        arg0->unkC = 0;
        arg0->unk10 = 0;
        arg0->unk14 = 0;
        arg0->unk18 = 0;
        arg0->unk1C = 0;
    }
    return arg0;
}
