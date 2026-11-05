typedef struct Ret080167AC {
    u8 _pad0[0x90];
    void (*unk0x90)(void);
} Ret080167AC;

typedef struct Mid080167AC {
    u8 _pad0[0x14];
    Ret080167AC *unk14;
} Mid080167AC;

typedef struct V080167AC {
    u8 _pad0[0x40];
    void *wt;
} V080167AC;

typedef struct H080167AC {
    V080167AC *unk0;
} H080167AC;

typedef struct M080167AC {
    u8 _pad0[0xA8];
    H080167AC *unkA8;
} M080167AC;

typedef struct G080167AC {
    u8 _pad0[4];
    M080167AC *unk4;
} G080167AC;

void func_080167AC(G080167AC *arg0) {
    register void *vt __asm__("r2");
    register u32 off __asm__("r3");
    register void (*fn)(void) __asm__("r2");
    register Mid080167AC *mm __asm__("r4");
    register void *r14 __asm__("r0");
    Mid080167AC *m;
    H080167AC *h;

    m = *(Mid080167AC **)((u8 *)arg0->unk4 + 0xA8);
    h = (H080167AC *)m;
    mm = m;
    vt = h->unk0;
    off = 0x40;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
    r14 = (void *)mm->unk14;
    fn = (void (*)(void))((Ret080167AC *)r14)->unk0x90;
    fn();
}
