typedef struct GenObj {
    u8 _pad0[0xBD8];
    s16 unkBD8;
} GenObj;
void func_0805A6E4(GenObj *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    register s32 bd __asm__("r4");
    register s32 ix __asm__("r5");
    register GenObj *base __asm__("r6");

    bd = 0xBD8;
    base = (GenObj *)((u8 *)arg0 + bd);
    ix = base->unkBD8;
    ix <<= 3;
    *(u16 *)((u8 *)arg0 + 0x738 + ix) = arg1;
    *(u16 *)((u8 *)arg0 + 0x73A + ix) = arg2;
    *(u16 *)((u8 *)arg0 + 0x73C + ix) = arg3;
    *(u16 *)((u8 *)arg0 + 0x73E + ix) = arg4;
    base->unkBD8 = (ix >> 3) + 1;
}
