extern s32 gUnk_081009B4;
extern s32 gUnk_081009DC;
extern s32 gUnk_08100A04;

typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[4];
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u8 _pad14[40];
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    u8 _pad4C[16];
    s32 unk5C;
} GenObj;
void func_080945B0(GenObj *arg0, s32 arg1) {
    s32 *var_r0;

    if (arg1 == 1) {
        ((void (*)(void *,...))(arg0->unk0->unk3C))(arg0);
    }
    if ((((void (*)(void *,...))(arg0->unk0->unk40))(arg0) << 0x18) != 0) {
        if ((((void (*)(void *,...))(arg0->unk0->unk48))(arg0) << 0x18) != 0) {
            var_r0 = &gUnk_08100A04;
        } else if ((((void (*)(void *,...))(arg0->unk0->unk44))(arg0) << 0x18) != 0) {
            arg0->unk10 = 1;
            var_r0 = &gUnk_081009DC;
        } else if (arg0->unkC == 0) {
            arg0->unk10 = 1;
            var_r0 = &gUnk_081009DC;
        } else if ((((void (*)(void *,...))(arg0->unk0->unk5C))(arg0) << 0x18) == 0) {
            arg0->unk10 = 2;
            var_r0 = &gUnk_081009DC;
        } else {
            var_r0 = &gUnk_081009B4;
        }
        arg0->unk8 = var_r0;
    }
}
