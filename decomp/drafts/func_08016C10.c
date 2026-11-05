typedef struct Vt08016C10 {
    u8 _pad0[0x104];
    void (*unk0x104)(void);
} Vt08016C10;

typedef struct H08016C10 {
    Vt08016C10 *unk0;
} H08016C10;

typedef struct M08016C10 {
    u8 _pad0[0xA8];
    H08016C10 *unkA8;
} M08016C10;

typedef struct GenObj08016C10 {
    u8 _pad0[4];
    M08016C10 *unk4;
} GenObj08016C10;

void func_08016C10(GenObj08016C10 *arg0) {
    register Vt08016C10 *vt __asm__("r1");
    register u32 off __asm__("r2");
    register void (*fn)(void) __asm__("r1");
    H08016C10 *h;

    h = *(H08016C10 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x104;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
}
