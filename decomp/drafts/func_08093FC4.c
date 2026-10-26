extern s32 gUnk_081007FC;
extern s32 gUnk_081008C4;

typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[4];
    s32 unk8;
    u8 _padC[52];
    s32 unk40;
    u8 _pad44[4];
    s32 unk48;
} GenObj;
void func_08093FC4(GenObj *arg0) {
    s32 *var_r0;

    if ((((void (*)(void *,...))(arg0->unk0->unk40))(arg0) << 0x18) != 0) {
        if ((((void (*)(void *,...))(arg0->unk0->unk48))(arg0) << 0x18) != 0) {
            var_r0 = &gUnk_081008C4;
        } else {
            var_r0 = &gUnk_081007FC;
        }
        arg0->unk8 = var_r0;
    }
}
