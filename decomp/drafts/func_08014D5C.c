typedef struct Ret08014D5C {
    u8 _pad0[0x78];
    void (*unk0x78)(void);
} Ret08014D5C;

typedef struct Mid08014D5C {
    u8 _pad0[0x14];
    Ret08014D5C *unk14;
} Mid08014D5C;

typedef struct V08014D5C {
    u8 _pad0[0x40];
    void *wt;
} V08014D5C;

typedef struct H08014D5C {
    V08014D5C *unk0;
} H08014D5C;

typedef struct M08014D5C {
    u8 _pad0[0xA8];
    H08014D5C *unkA8;
} M08014D5C;

typedef struct G08014D5C {
    u8 _pad0[4];
    M08014D5C *unk4;
} G08014D5C;

void func_08014D5C(G08014D5C *arg0) {
    register void *vt __asm__("r2");
    register u32 off __asm__("r3");
    register void (*fn)(void) __asm__("r2");
    register Mid08014D5C *mm __asm__("r4");
    register void *r14 __asm__("r0");
    Mid08014D5C *m;
    H08014D5C *h;

    m = *(Mid08014D5C **)((u8 *)arg0->unk4 + 0xA8);
    h = (H08014D5C *)m;
    mm = m;
    vt = h->unk0;
    off = 0x40;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
    r14 = (void *)mm->unk14;
    fn = (void (*)(void))((Ret08014D5C *)r14)->unk0x78;
    fn();
}
