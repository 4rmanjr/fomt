s32 func_080323C8(void);

typedef struct H080122A0 {
    u8 _pad0[0x40];
    void *wt;
} H080122A0;

typedef struct M080122A0 {
    u8 _pad0[0xA8];
    H080122A0 *unkA8;
} M080122A0;

typedef struct G080122A0 {
    u8 _pad0[4];
    M080122A0 *unk4;
} G080122A0;

void func_080122A0(G080122A0 *arg0) {
    register H080122A0 *vt __asm__("r2");
    vt = arg0->unk4->unkA8;
    if ((((s32 (*)(void))(H080122A0 *)vt->wt)())) {
        func_080323C8();
    }
}
