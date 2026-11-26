s32 func_0803CD4C(s32, s32, s32);
s32 func_080D7F08(void *);

typedef struct Vt {
    u8 _pad0[0xB0];
    s32 (*unkB0)(void *);
    u8 _padB4[8];
    s32 (*unkBC)(void *);
} Vt;

typedef struct Actor {
    Vt *vt;
} Actor;

typedef struct Inner {
    u8 _pad0[0x12];
    u16 unk12;
} Inner;

typedef struct Sub {
    u8 _pad0[0x8C];
    s32 unk8C;
    u8 _pad90[0x18];
    Actor *unkA8;
    u8 _padAC[8];
    s32 unkB4;
} Sub;

typedef struct Top {
    u8 _pad0[4];
    Sub *unk4;
} Top;

void func_08014318(Top *arg0) {
    Sub *sub;
    s32 v;
    s32 flag;

    sub = arg0->unk4;
    sub->unkA8->vt->unkBC(sub->unkA8);
    v = sub->unkB4;
    if (v != 0) {
        flag = 0;
        if (((sub->unkA8->vt->unkB0(sub->unkA8) << 0x18) != 0) ||
            ((1 & (((u32)((Inner *)sub->unk8C)->unk12 << 0x15) >> 0x1A)) != 0)) {
            flag = 1;
        }
        func_0803CD4C(v + 8, sub->unk8C + 0x10, flag);
    }
    func_080D7F08(sub);
}
