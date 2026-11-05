typedef struct Vt080142D4 {
    u8 _pad0[0x11C];
    void (*unk11C)(void);
} Vt080142D4;

typedef struct H080142D4 {
    Vt080142D4 *unk0;
} H080142D4;

typedef struct M080142D4 {
    u8 _pad0[0xA8];
    H080142D4 *unkA8;
} M080142D4;

typedef struct GenObj080142D4 {
    u8 _pad0[4];
    M080142D4 *unk4;
} GenObj080142D4;

void func_080142D4(GenObj080142D4 *arg0) {
    register Vt080142D4 *vt __asm__("r1");
    register u32 off __asm__("r2");
    register void (*fn)(void) __asm__("r1");
    H080142D4 *h;

    h = *(H080142D4 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x11C;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
}
