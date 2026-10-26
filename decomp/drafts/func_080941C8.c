extern s32 gUnk_0810089C;
extern s32 gUnk_081008C4;

typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[4];
    s32 unk8;
    u8 _padC[4];
    s32 unk10;
    u8 _pad14[44];
    s32 unk40;
    u8 _pad44[4];
    s32 unk48;
} GenObj;
void func_080941C8(GenObj *arg0) {
    s32 *var_r0;
    u8 temp_r0;

    if ((((void (*)(void *,...))(arg0->unk0->unk40))(arg0) << 0x18) != 0) {
        temp_r0 = ((void (*)(void *,...))(arg0->unk0->unk48))(arg0);
        if (temp_r0 != 0) {
            var_r0 = &gUnk_081008C4;
        } else {
            arg0->unk10 = (s32) temp_r0;
            var_r0 = &gUnk_0810089C;
        }
        arg0->unk8 = var_r0;
    }
}
