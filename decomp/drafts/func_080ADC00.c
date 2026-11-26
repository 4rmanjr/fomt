void *__builtin_new(s32);

typedef struct Pair {
    s32 unk0;
    u16 unk4;
} Pair;

typedef struct Obj {
    s32 unk0;
    u16 unk4;
    s32 unk8;
    u16 unkC;
    s32 unk10;
    u16 unk14;
    s32 unk18;
    u16 unk1C;
} Obj;

void **func_080ADC00(void **arg0) {
    Obj *o;
    Pair *p;
    s32 z;

    o = __builtin_new(0x20);
    z = 0;
    o->unk0 = z;
    o->unk4 = z;
    p = (Pair *)((u8 *)o + 8);
    o->unk8 = z;
    p->unk4 = z;
    p = (Pair *)((u8 *)p + 8);
    o->unk10 = z;
    p->unk4 = z;
    p = (Pair *)((u8 *)p + 8);
    o->unk18 = z;
    p->unk4 = z;
    *arg0 = o;
    return arg0;
}
