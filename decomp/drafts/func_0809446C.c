extern s32 gUnk_0810093C;
extern s32 gUnk_08100A04;

typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[4];
    s32 unk8;
    u8 _padC[52];
    s32 unk40;
    u8 _pad44[4];
    s32 unk48;
} GenObj;
void func_0809446C(GenObj *arg0) {
    register s32 *var_r0 __asm__("r0");

    if ((((s32 (*)(void *,...))(arg0->unk0->unk40))(arg0) << 0x18) != 0) {
        if ((((s32 (*)(void *,...))(arg0->unk0->unk48))(arg0) << 0x18) != 0) {
            var_r0 = &gUnk_08100A04;
        } else {
            var_r0 = &gUnk_0810093C;
        }
        arg0->unk8 = (s32)var_r0;
    }
}
