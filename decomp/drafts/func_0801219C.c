s32 func_0803233C(s32, s32, s32);
typedef struct V0801219C {
    u8 _pad0[0x40];
    s32 (*unk40)(void);
} V0801219C;
typedef struct H0801219C {
    V0801219C *unk0;
} H0801219C;
typedef struct W0801219C {
    u8 _pad0[0x40];
    void *wt;
} W0801219C;
typedef struct M0801219C {
    u8 _pad0[0xA8];
    H0801219C *unkA8;
} M0801219C;
typedef struct G0801219C {
    u8 _pad0[4];
    M0801219C *unk4;
} G0801219C;
void func_0801219C(G0801219C *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    register s32 a4 __asm__("r4");
    register s32 a5 __asm__("r5");
    s32 t;
    register void *w __asm__("r2");
    register void *w0 __asm__("r0");
    a4 = arg2;
    a5 = arg3;
    w = (void *)arg0->unk4->unkA8->unk0;
    __asm__ volatile("" : "+r"(a4), "+r"(a5), "+r"(w));
    w0 = w;
    __asm__ volatile("" : "+r"(w0));
    w0 = (void *)((u8 *)w0 + 0x40);
    t = ((s32 (*)(void))w0)();
    if (t != 0) {
        func_0803233C(t, a4, a5);
    }
}
