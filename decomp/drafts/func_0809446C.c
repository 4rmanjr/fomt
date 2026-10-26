extern ? gUnk_0810093C;
extern ? gUnk_08100A04;

void func_0809446C(void *arg0) {
    ? *var_r0;

    if ((arg0->unk0->unk40(arg0) << 0x18) != 0) {
        if ((arg0->unk0->unk48(arg0) << 0x18) != 0) {
            var_r0 = &gUnk_08100A04;
        } else {
            var_r0 = &gUnk_0810093C;
        }
        arg0->unk8 = var_r0;
    }
}
