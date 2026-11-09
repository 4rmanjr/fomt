s32 __12AActorEntityP10GameObjectRC13ActorLocationUiUi(void *, s32, s32 *, s32, s32);
s32 memcpy(s32 *, s32 *, s32);
extern s32 vtable_unk_080E671C;

typedef struct GenObj {
    u8 _pad0[0x14];
    void *unk14;
} GenObj;

void *func_0802B944(GenObj *arg0, s32 arg1) {
    register GenObj *a0 __asm__("r5");
    register s32 a1 __asm__("r9");
    register s32 z8 __asm__("r8");
    register s32 MASK __asm__("r3");
    register s32 v __asm__("r2");
    u8 sp4[8];
    u8 spC[8];
    u8 *b;
    u8 *p4;
    s32 z6;
    s32 K;

    a0 = arg0;
    a1 = arg1;
    b = spC;
    K = 0x234;
    z8 = 0;
    v = *(u16 *)b;
    MASK = 0xFFFFFC00;
    *(u16 *)b = (u16)((v & MASK) | K);
    z6 = 0;
    *(b + 1) &= 3;
    *(u16 *)(b + 2) &= MASK;
    *(b + 3) &= 3;
    *(u16 *)(b + 4) &= MASK;
    p4 = sp4;
    memcpy(p4, spC, 6);
    p4[6] = z6;
    __12AActorEntityP10GameObjectRC13ActorLocationUiUi(a0, a1, (s32 *)sp4, 2, z8);
    a0->unk14 = &vtable_unk_080E671C;
    return a0;
}
