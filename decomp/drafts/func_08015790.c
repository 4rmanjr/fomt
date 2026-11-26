s32 GetBarnAnimal__4BarnUi(s32, u32);
u32 GetCapacity__C4Barn(s32);
u32 GetCapacity__C4Coop(s32);
s32 GetChicken__4CoopUi(s32, u32);
s32 RemoveAndRememberUnk__4BarnUi(s32, u32);
s32 RemoveAndRememberUnk__4CoopUi(s32, u32);
s32 func_0800F190(s32);
s32 func_0800F204(s32);
u32 func_0800F344(s32);
s32 func_0800F390(s32);
s32 method_0809B514__C9Livestock();

typedef struct Vt {
    u8 _pad0[0x3C];
    void (*unk3C)(void *, s32);
} Vt;

typedef struct Actor {
    Vt *vt;
} Actor;

typedef struct Sub {
    u8 _pad0[0x8C];
    s32 unk8C;
    u8 _pad90[0x18];
    Actor *unkA8;
} Sub;

typedef struct Top {
    u8 _pad0[4];
    Sub *unk4;
} Top;

void func_08015790(Top *arg0) {
    Sub *sub;
    s32 *pc;
    u32 cap;
    u32 i;
    s32 x;

    sub = arg0->unk4;
    pc = &sub->unk8C;
    cap = GetCapacity__C4Coop(*pc + 0x410);
    for (i = 0; i < cap; i++) {
        if (GetChicken__4CoopUi(*pc + 0x410, i) != 0) {
            if (method_0809B514__C9Livestock() == 1) {
                sub->unkA8->vt->unk3C(sub->unkA8, i + 0x2E);
                RemoveAndRememberUnk__4CoopUi(*pc + 0x410, i);
            }
        }
    }
    x = *pc + 0x1C2C;
    if ((func_0800F190(x) << 0x18) == 0) {
        if (func_0800F204(x) == 3) {
            if (GetChicken__4CoopUi(*pc + 0x410, func_0800F344(x)) == 0) {
                func_0800F390(x);
            }
        }
    }
    cap = GetCapacity__C4Barn(*pc + 0x5F0);
    for (i = 0; i < cap; i++) {
        if (GetBarnAnimal__4BarnUi(*pc + 0x5F0, i) != 0) {
            if (method_0809B514__C9Livestock() == 1) {
                sub->unkA8->vt->unk3C(sub->unkA8, i + 0x36);
                RemoveAndRememberUnk__4BarnUi(*pc + 0x5F0, i);
            }
        }
    }
}
