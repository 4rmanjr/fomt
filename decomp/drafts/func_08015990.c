typedef struct Ret08015990 {
    u8 _pad0[0x8C];
    void (*unk0x8C)(void);
} Ret08015990;

typedef struct Mid08015990 {
    u8 _pad0[0x14];
    Ret08015990 *unk14;
} Mid08015990;

typedef struct V08015990 {
    u8 _pad0[0x40];
    void *wt;
} V08015990;

typedef struct H08015990 {
    V08015990 *unk0;
} H08015990;

typedef struct M08015990 {
    u8 _pad0[0xA8];
    H08015990 *unkA8;
} M08015990;

typedef struct G08015990 {
    u8 _pad0[4];
    M08015990 *unk4;
} G08015990;

void func_08015990(G08015990 *arg0) {
    register void *vt __asm__("r2");
    register u32 off __asm__("r3");
    register void (*fn)(void) __asm__("r2");
    register Mid08015990 *mm __asm__("r4");
    register void *r14 __asm__("r0");
    Mid08015990 *m;
    H08015990 *h;

    m = *(Mid08015990 **)((u8 *)arg0->unk4 + 0xA8);
    h = (H08015990 *)m;
    mm = m;
    vt = h->unk0;
    off = 0x40;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
    r14 = (void *)mm->unk14;
    fn = (void (*)(void))((Ret08015990 *)r14)->unk0x8C;
    fn();
}
