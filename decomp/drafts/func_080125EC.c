s32 func_08050D0C(s32, s32);                          /* extern */

typedef struct Vt {
    u8 _pad0[8];
    void *fn8;
} Vt;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[8];
    u16 unk10;
    u8 _pad12[0x9A];
    struct GenObj *unkAC;
    u8 _padB0[4];
    struct GenObj *unkB4;
    struct GenObj *unkB8;
} GenObj;

void func_080125EC(GenObj *arg0) {
    register GenObj *o __asm__("r4");
    register s32 z __asm__("r6");
    register GenObj **slot __asm__("r5");
    GenObj *p;

    o = arg0->unk4;
    z = 0;
    slot = (GenObj **) ((u8 *) o + 0xB4);
    p = *slot;
    if ((z != (s32) p) && (p != 0)) {
        ((void (*)(GenObj *, s32)) ((Vt *) p->unk4)->fn8)(p, 3);
    }
    *slot = (GenObj *) z;
    slot = (GenObj **) ((u8 *) o + 0xB8);
    p = *slot;
    if ((z != (s32) p) && (p != 0)) {
        ((void (*)(GenObj *, s32)) ((Vt *) p->unk4)->fn8)(p, 3);
    }
    *slot = (GenObj *) z;
    if (o->unkAC != 0) {
        func_08050D0C((s32) o->unkAC, 3);
    }
    o->unkAC = 0;
    o->unk10 = (u16) (0xFEFF & o->unk10);
}
