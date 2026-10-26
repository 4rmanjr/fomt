extern ? gUnk_08100964;
extern ? gUnk_0810098C;
extern ? gUnk_081009DC;
extern ? gUnk_08100A04;

void func_080944E8(void *arg0) {
    ? *var_r0;

    if ((arg0->unk0->unk40(arg0) << 0x18) != 0) {
        if ((arg0->unk0->unk48(arg0) << 0x18) != 0) {
            var_r0 = &gUnk_08100A04;
        } else if ((arg0->unk0->unk54(arg0) << 0x18) != 0) {
            if ((arg0->unk0->unk58(arg0) << 0x18) != 0) {
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
