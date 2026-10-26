extern ? gUnk_08100874;
extern ? gUnk_0810089C;
extern ? gUnk_081008C4;

void func_08094110(void *arg0, s32 arg1) {
    ? *var_r0;

    if (arg1 == 1) {
        arg0->unk0->unk3C(arg0);
    }
    if ((arg0->unk0->unk40(arg0) << 0x18) != 0) {
        if ((arg0->unk0->unk48(arg0) << 0x18) != 0) {
            var_r0 = &gUnk_081008C4;
        } else if ((arg0->unk0->unk44(arg0) << 0x18) != 0) {
            arg0->unk10 = 1;
            var_r0 = &gUnk_0810089C;
        } else if (arg0->unkC == 0) {
            arg0->unk10 = 1;
            var_r0 = &gUnk_0810089C;
        } else if ((arg0->unk0->unk5C(arg0) << 0x18) == 0) {
            arg0->unk10 = 2;
            var_r0 = &gUnk_0810089C;
        } else {
            var_r0 = &gUnk_08100874;
        }
        arg0->unk8 = var_r0;
    }
}
