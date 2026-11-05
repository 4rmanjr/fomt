typedef struct Vt08016EC4 {
    u8 _pad0[0x160];
    void (*unk0x160)(s32, s32);
} Vt08016EC4;

typedef struct H08016EC4 {
    Vt08016EC4 *unk0;
} H08016EC4;

typedef struct M08016EC4 {
    u8 _pad0[0xA8];
    H08016EC4 *unkA8;
} M08016EC4;

typedef struct GenObj08016EC4 {
    u8 _pad0[4];
    M08016EC4 *unk4;
} GenObj08016EC4;

void func_08016EC4(GenObj08016EC4 *arg0, s32 arg4, s32 arg5) {
    register Vt08016EC4 *vt __asm__("r4");
    register u32 off __asm__("r7");
    register void (*fn)(s32, s32) __asm__("r4");
    register s32 a4 __asm__("r6");
    register u32 a5 __asm__("r5");
    H08016EC4 *h;

    a4 = arg4;
    a5 = (u32) (u16) arg5;
    h = *(H08016EC4 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x160;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn(a4, a5);
}
