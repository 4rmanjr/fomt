s32 func_080A4BEC();

typedef struct Inner {
    u8 _pad0[0x21A0];
    u8 unk21A0;
} Inner;

typedef struct G {
    u8 _pad0[8];
    u16 unk8;
} G;

extern G gUnk_08107338;
extern G gUnk_08107344;

typedef struct Slot {
    u8 _pad0[1];
    u8 unk1;
    u8 unk2;
} Slot;

typedef struct Obj {
    s32 unk0;
    u8 _pad4[0x90];
    Inner *unk94;
    u8 _pad98[0x1C];
    Slot unkB4;
    Slot unkB8;
} Obj;

void func_080A64B8(Obj *arg0) {
    Inner *p;
    Slot *a;
    Slot *b;
    u32 t;

    func_080A4BEC();
    p = arg0->unk94;
    if (arg0->unk0 == 6) {
        t = ((u32)p->unk21A0 << 0x1E) >> 0x1E;
        if (t == 1) {
            a = &arg0->unkB4;
            a->unk2++;
            if ((u32)a->unk2 >= (u32)gUnk_08107338.unk8) {
                a->unk2 = 0;
                a->unk1 = t;
            }
            b = &arg0->unkB8;
            b->unk2++;
            if ((u32)b->unk2 >= (u32)gUnk_08107344.unk8) {
                b->unk2 = 0;
                b->unk1 = t;
            }
        }
    }
}
