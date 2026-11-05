typedef struct Vt08016BA4 {
    u8 _pad0[0x10C];
    void (*unk10C)(void);
} Vt08016BA4;

typedef struct H08016BA4 {
    Vt08016BA4 *unk0;
} H08016BA4;

typedef struct M08016BA4 {
    u8 _pad0[0xA8];
    H08016BA4 *unkA8;
} M08016BA4;

typedef struct GenObj08016BA4 {
    u8 _pad0[4];
    M08016BA4 *unk4;
} GenObj08016BA4;

void func_08016BA4(GenObj08016BA4 *arg0) {
    register Vt08016BA4 *vt __asm__("r2");
    register u32 off __asm__("r3");
    register void (*fn)(void) __asm__("r2");
    H08016BA4 *h;

    h = *(H08016BA4 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x10C;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
}
