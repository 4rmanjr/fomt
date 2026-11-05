typedef struct Vt0801238C {
    u8 _pad0[0x24];
    void (*unk24)(void);
} Vt0801238C;

typedef struct H0801238C {
    Vt0801238C *unk0;
} H0801238C;

typedef struct M0801238C {
    u8 _pad0[0xA8];
    H0801238C *unkA8;
} M0801238C;

typedef struct G0801238C {
    u8 _pad0[4];
    M0801238C *unk4;
} G0801238C;

void func_0801238C(G0801238C *arg0) {
    register Vt0801238C *vt __asm__("r4");
    register void (*fn)(void) __asm__("r4");

    vt = arg0->unk4->unkA8->unk0;
    fn = vt->unk24;
    fn();
}
