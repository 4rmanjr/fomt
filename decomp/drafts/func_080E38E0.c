typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[72];
    s32 unk4C;
    u8 _pad50[360];
    s32 unk1B8;
    s32 unk1B9;
} GenObj;
u8 func_080E38E0(GenObj *arg0) {
    if (arg0->unk1B8 != 0) {
        return arg0->unk1B9;
    }
    if (((void (*)(void *,...))(arg0->unk0->unk4C))(arg0) != 0) {
        return 0U;
    }
    return 1U;
}
