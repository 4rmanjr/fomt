typedef struct Ret08015970 {
    u8 _pad0[0x88];
    void (*unk0x88)(void);
} Ret08015970;

typedef struct Mid08015970 {
    u8 _pad0[0x14];
    Ret08015970 *unk14;
} Mid08015970;

typedef struct V08015970 {
    u8 _pad0[0x40];
    void *wt;
} V08015970;

typedef struct H08015970 {
    V08015970 *unk0;
} H08015970;

typedef struct M08015970 {
    u8 _pad0[0xA8];
    H08015970 *unkA8;
} M08015970;

typedef struct G08015970 {
    u8 _pad0[4];
    M08015970 *unk4;
} G08015970;

void func_08015970(G08015970 *arg0) {
    register void *vt __asm__("r2");
    register u32 off __asm__("r3");
    register void (*fn)(void) __asm__("r2");
    register Mid08015970 *mm __asm__("r4");
    register void *r14 __asm__("r0");
    Mid08015970 *m;
    H08015970 *h;

    m = *(Mid08015970 **)((u8 *)arg0->unk4 + 0xA8);
    h = (H08015970 *)m;
    mm = m;
    vt = h->unk0;
    off = 0x40;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
    r14 = (void *)mm->unk14;
    fn = (void (*)(void))((Ret08015970 *)r14)->unk0x88;
    fn();
}
