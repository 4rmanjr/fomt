extern s32 gUnk_08100964;
extern s32 gUnk_0810098C;
extern s32 gUnk_081009DC;
extern s32 gUnk_08100A04;

typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[4];
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u8 _pad14[44];
    s32 unk40;
    u8 _pad44[4];
    s32 unk48;
    u8 _pad4C[8];
    s32 unk54;
    s32 unk58;
} GenObj;
void func_080944E8(GenObj *arg0) {
    s32 *var_r0;

    if ((((void (*)(void *,...))(arg0->unk0->unk40))(arg0) << 0x18) != 0) {
        if ((((void (*)(void *,...))(arg0->unk0->unk48))(arg0) << 0x18) != 0) {
            var_r0 = &gUnk_08100A04;
        } else if ((((void (*)(void *,...))(arg0->unk0->unk54))(arg0) << 0x18) != 0) {
            if ((((void (*)(void *,...))(arg0->unk0->unk58))(arg0) << 0x18) != 0) {
                var_r0 = &gUnk_08100964;
            } else {
                arg0->unkC = 1;
                var_r0 = &gUnk_0810098C;
            }
        } else {
            arg0->unk10 = 3;
            var_r0 = &gUnk_081009DC;
        }
        arg0->unk8 = var_r0;
    }
}
