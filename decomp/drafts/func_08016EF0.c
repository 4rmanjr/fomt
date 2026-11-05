typedef struct Vt08016EF0 {
    u8 _pad0[0x164];
    void (*unk0x164)(void);
} Vt08016EF0;

typedef struct H08016EF0 {
    Vt08016EF0 *unk0;
} H08016EF0;

typedef struct M08016EF0 {
    u8 _pad0[0xA8];
    H08016EF0 *unkA8;
} M08016EF0;

typedef struct GenObj08016EF0 {
    u8 _pad0[4];
    M08016EF0 *unk4;
} GenObj08016EF0;

void func_08016EF0(GenObj08016EF0 *arg0) {
    register Vt08016EF0 *vt __asm__("r2");
    register u32 off __asm__("r3");
    register void (*fn)(void) __asm__("r2");
    H08016EF0 *h;

    h = *(H08016EF0 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x164;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
}
