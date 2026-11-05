s32 func_08032308(s32, s32);
typedef struct V08012174 {
    u8 _pad0[0x40];
    s32 (*unk40)(void);
} V08012174;
typedef struct H08012174 {
    V08012174 *unk0;
} H08012174;
typedef struct M08012174 {
    u8 _pad0[0xA8];
    H08012174 *unkA8;
} M08012174;
typedef struct G08012174 {
    u8 _pad0[4];
    M08012174 *unk4;
} G08012174;
typedef struct W08012174 {
    u8 _pad0[0x40];
    void *wt;
} W08012174;
void func_08012174(G08012174 *arg0, void *x1, void *x2, void *x3) {
    register s32 a4 __asm__("r4");
    register s32 a5 __asm__("r5");
    register W08012174 *w __asm__("r0");
    a4 = (s32)x2;
    a5 = (s32)x3;
    w = (W08012174 *)arg0->unk4->unkA8->unk0;
    __asm__ volatile("" : "+r"(a4), "+r"(a5));
    if (((s32 (*)(void))w->wt)()) {
        func_08032308(a4, a5);
    }
}
