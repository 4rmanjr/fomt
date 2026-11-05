typedef struct Vt08016BF4 {
    u8 _pad0[0x100];
    void (*unk0x100)(void);
} Vt08016BF4;

typedef struct H08016BF4 {
    Vt08016BF4 *unk0;
} H08016BF4;

typedef struct M08016BF4 {
    u8 _pad0[0xA8];
    H08016BF4 *unkA8;
} M08016BF4;

typedef struct GenObj08016BF4 {
    u8 _pad0[4];
    M08016BF4 *unk4;
} GenObj08016BF4;

void func_08016BF4(GenObj08016BF4 *arg0) {
    register Vt08016BF4 *vt __asm__("r1");
    register u32 off __asm__("r2");
    register void (*fn)(void) __asm__("r1");
    H08016BF4 *h;

    h = *(H08016BF4 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x100;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
}
