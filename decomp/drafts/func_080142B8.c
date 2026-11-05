typedef struct Vt080142B8 {
    u8 _pad0[0x118];
    void (*unk0x118)(void);
} Vt080142B8;

typedef struct H080142B8 {
    Vt080142B8 *unk0;
} H080142B8;

typedef struct M080142B8 {
    u8 _pad0[0xA8];
    H080142B8 *unkA8;
} M080142B8;

typedef struct GenObj080142B8 {
    u8 _pad0[4];
    M080142B8 *unk4;
} GenObj080142B8;

void func_080142B8(GenObj080142B8 *arg0) {
    register Vt080142B8 *vt __asm__("r2");
    register u32 off __asm__("r3");
    register void (*fn)(void) __asm__("r2");
    H080142B8 *h;

    h = *(H080142B8 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x118;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
}
