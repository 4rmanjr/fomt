s32 func_080D06B4();                                /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[260];
    s32 unk108;
    u8 _pad10C[172];
    s32 unk1B8;
} GenObj;
u32 func_080E39EC(GenObj *arg0) {
    s32 temp_r0;

    if ((arg0->unk1B8 != 0) && ((1 & (((void (*)(void *,...))(arg0->unk0->unk108))(arg0) >> 8)) || (2 & (((void (*)(void *,...))(arg0->unk0->unk108))(arg0) >> 8)))) {
        return 1U;
    }
    temp_r0 = func_080D06B4();
    return (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
}
