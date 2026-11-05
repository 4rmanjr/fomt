typedef struct Vt08014694 {
    u8 _pad0[0x150];
    void (*unk150)(void);
} Vt08014694;

typedef struct H08014694 {
    Vt08014694 *unk0;
} H08014694;

typedef struct M08014694 {
    u8 _pad0[0xA8];
    H08014694 *unkA8;
} M08014694;

typedef struct GenObj08014694 {
    u8 _pad0[4];
    M08014694 *unk4;
} GenObj08014694;

void func_08014694(GenObj08014694 *arg0) {
    register Vt08014694 *vt __asm__("r2");
    register u32 off __asm__("r3");
    register void (*fn)(void) __asm__("r2");
    H08014694 *h;

    h = *(H08014694 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x150;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
}
