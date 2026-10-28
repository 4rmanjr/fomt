extern s32 gUnk_081007D4;
extern s32 gUnk_0810089C;
extern s32 gUnk_081008C4;

typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[4];
    s32 unk8;
    u8 _padC[4];
    s32 unk10;
    u8 _pad14[40];
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
} GenObj;
void func_08093F48(GenObj *arg0, s32 arg1) {
    s32 *var_r0;

    if (arg1 == 1) {
        ((void (*)(void *,...))(arg0->unk0->unk3C))(arg0);
    }
    if ((((void (*)(void *,...))(arg0->unk0->unk40))(arg0) << 0x18) != 0) {
        if ((((void (*)(void *,...))(arg0->unk0->unk48))(arg0) << 0x18) != 0) {
            var_r0 = &gUnk_081008C4;
        } else if ((((void (*)(void *,...))(arg0->unk0->unk44))(arg0) << 0x18) != 0) {
            arg0->unk10 = 1;
            var_r0 = &gUnk_0810089C;
        } else {
            var_r0 = &gUnk_081007D4;
        }
        arg0->unk8 = var_r0;
    }
}
