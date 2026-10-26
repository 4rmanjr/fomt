extern ? gUnk_08100824;
extern ? gUnk_0810084C;
extern ? gUnk_0810089C;
extern ? gUnk_081008C4;

void func_08094048(void *arg0) {
    ? *var_r0;

    if ((arg0->unk0->unk40(arg0) << 0x18) != 0) {
        if ((arg0->unk0->unk48(arg0) << 0x18) != 0) {
            var_r0 = &gUnk_081008C4;
        } else if ((arg0->unk0->unk54(arg0) << 0x18) != 0) {
            if ((arg0->unk0->unk58(arg0) << 0x18) != 0) {
                var_r0 = &gUnk_08100824;
            } else {
                arg0->unkC = 1;
                var_r0 = &gUnk_0810084C;
            }
        } else {
            arg0->unk10 = 3;
            var_r0 = &gUnk_0810089C;
        }
        arg0->unk8 = var_r0;
    }
}
