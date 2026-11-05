typedef struct M08024CA0 {
    u8 _pad0[0x28];
    s32 unk28;
} M08024CA0;

typedef struct G08024CA0 {
    u8 _pad0[20];
    M08024CA0 *unk14;
    u8 _pad18[0x24];
    u8 unk3C;
} G08024CA0;

s32 func_08024CA0(G08024CA0 *arg0) {
    u32 b;


    if (((s32 (*)(void *)) (arg0->unk14->unk28))(arg0) << 0x18 != 0) {
        return 0;
    }
    b = arg0->unk3C;
    __asm__ volatile("" : "+r"(b));
    if (b > 0x2A) {
        return 0;
    }
    if (b < 0x24) {
        return 0;
    }
    return 1;
}
