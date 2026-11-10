s32 __builtin_new(s32);                             /* extern */
s32 func_0800770C(s32 *);                               /* extern */
s32 func_08007714(s32 *, s32);                          /* extern */
s32 func_0800835C(s32 *);                               /* extern */
s32 func_08008364(s32 *, s32);                          /* extern */
s32 func_08050CC0(s32, s32, s32, s32, s32, s32 *, s32 *); /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
s32 func_08050D34(s32);                             /* extern */
s32 func_08050D5C(s32);                               /* extern */

typedef struct Vt {
    u8 _pad0[8];
    void *fn8;
} Vt;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[148];
    struct GenObj *unk9C;
    u8 _padA0[12];
    struct GenObj *unkAC;
    u8 _padB0[4];
    struct GenObj *unkB4;
    struct GenObj *unkB8;
} GenObj;

void func_080124D0(GenObj *arg0) {
    register GenObj *o __asm__("r7");
    register GenObj **slot __asm__("r4");
    register s32 z __asm__("r5");
    register GenObj **slot2 __asm__("r6");
    register GenObj *p2 __asm__("r5");
    GenObj *new;
    s32 spC;
    s32 sp10;
    GenObj *p;

    o = arg0->unk4;

    slot = &o->unkB4;
    z = 0;
    p = *slot;
    if ((z != (s32) p) && (p != 0)) {
        ((void (*)(GenObj *, s32)) ((Vt *) p->unk4)->fn8)(p, 3);
    }
    *slot = (GenObj *) z;

    slot = &o->unkB8;
    z = 0;
    p = *slot;
    if ((z != (s32) p) && (p != 0)) {
        ((void (*)(GenObj *, s32)) ((Vt *) p->unk4)->fn8)(p, 3);
    }
    *slot = (GenObj *) z;

    p2 = *((GenObj **) ((u8 *) o + 0xAC));
    slot2 = (GenObj **) ((u8 *) o + 0xAC);
    if (p2 == 0) {
        if (*((u8 *) slot2 + 0x3C) == 0) {
            new = (GenObj *) __builtin_new(4);
            func_0800835C(&spC);
            func_0800770C(&sp10);
            new = (GenObj *) func_08050CC0((s32) new, 0, 0x1F, 0, 1, &spC, &sp10);
            p = *slot2;
            if ((new != p) && (p != 0)) {
                func_08050D0C((s32) p, 3);
            }
            *slot2 = new;
            func_08007714(&sp10, 2);
            func_08008364(&spC, 2);
        } else {
            new = (GenObj *) __builtin_new(4);
            func_0800835C(&spC);
            func_0800770C(&sp10);
            new = (GenObj *) func_08050CC0((s32) new, 0, 0x1F, 0, (s32) p2, &spC, &sp10);
            p = *slot2;
            if ((new != p) && (p != 0)) {
                func_08050D0C((s32) p, 3);
            }
            *slot2 = new;
            func_08007714(&sp10, 2);
            func_08008364(&spC, 2);
        }
    }
    if (func_08050D34((s32) *slot2) != 3) {
        func_08050D5C((s32) *slot2);
        o->unk9C = (GenObj *) 0xE;
    }
}
