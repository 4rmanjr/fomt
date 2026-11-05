typedef struct Ret08015950 {
    u8 _pad0[0x84];
    void (*unk0x84)(void);
} Ret08015950;

typedef struct Mid08015950 {
    u8 _pad0[0x14];
    Ret08015950 *unk14;
} Mid08015950;

typedef struct V08015950 {
    u8 _pad0[0x40];
    void *wt;
} V08015950;

typedef struct H08015950 {
    V08015950 *unk0;
} H08015950;

typedef struct M08015950 {
    u8 _pad0[0xA8];
    H08015950 *unkA8;
} M08015950;

typedef struct G08015950 {
    u8 _pad0[4];
    M08015950 *unk4;
} G08015950;

void func_08015950(G08015950 *arg0) {
    register void *vt __asm__("r2");
    register u32 off __asm__("r3");
    register void (*fn)(void) __asm__("r2");
    register Mid08015950 *mm __asm__("r4");
    register void *r14 __asm__("r0");
    Mid08015950 *m;
    H08015950 *h;

    m = *(Mid08015950 **)((u8 *)arg0->unk4 + 0xA8);
    h = (H08015950 *)m;
    mm = m;
    vt = h->unk0;
    off = 0x40;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
    r14 = (void *)mm->unk14;
    fn = (void (*)(void))((Ret08015950 *)r14)->unk0x84;
    fn();
}
