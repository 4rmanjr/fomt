typedef struct Item {
    u16 unk0;
    u16 unk2;
} Item;

typedef struct Args {
    u8 _pad0[4];
    Item *unk4;
    u8 _pad8[0x14];
    u8 *unk1C;
    u16 unk20;
} Args;

typedef struct Out {
    s32 unk0;
    u16 unk4;
} Out;

s32 func_0805E760(Out *arg0, Args *arg1, u32 arg2) {
    Item *it;
    u16 u0;
    s32 v;

    if (arg2 < arg1->unk20) {
        it = &arg1->unk4[arg2];
        v = it->unk2;
        u0 = it->unk0;
        v = v * 4 + (s32) arg1->unk1C;
        arg0->unk0 = v;
        arg0->unk4 = u0;
    } else {
        arg0->unk0 = 0;
        arg0->unk4 = 0;
    }
    return (s32) arg0;
}
