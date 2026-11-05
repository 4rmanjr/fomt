typedef struct Vt080146B0 {
    u8 _pad0[0x154];
    void (*unk0x154)(void);
} Vt080146B0;

typedef struct H080146B0 {
    Vt080146B0 *unk0;
} H080146B0;

typedef struct M080146B0 {
    u8 _pad0[0xA8];
    H080146B0 *unkA8;
} M080146B0;

typedef struct GenObj080146B0 {
    u8 _pad0[4];
    M080146B0 *unk4;
} GenObj080146B0;

void func_080146B0(GenObj080146B0 *arg0) {
    register Vt080146B0 *vt __asm__("r2");
    register u32 off __asm__("r3");
    register void (*fn)(void) __asm__("r2");
    H080146B0 *h;

    h = *(H080146B0 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x154;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
}
