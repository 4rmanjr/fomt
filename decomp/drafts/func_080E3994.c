s32 func_080D06D0();                                /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[260];
    s32 unk108;
    u8 _pad10C[172];
    s32 unk1B8;
} GenObj;
s32 func_080E3994(GenObj *arg0) {
    if (((arg0->unk1B8 != 0) && ((1 & (((void (*)(void *,...))(arg0->unk0->unk108))(arg0) >> 8)) || (2 & (((void (*)(void *,...))(arg0->unk0->unk108))(arg0) >> 8)))) || (func_080D06D0() != 0xB)) {
        return 0;
    }
    return 1;
}
