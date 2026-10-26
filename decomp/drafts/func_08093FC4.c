extern ? gUnk_081007FC;
extern ? gUnk_081008C4;

void func_08093FC4(void *arg0) {
    ? *var_r0;

    if ((arg0->unk0->unk40(arg0) << 0x18) != 0) {
        if ((arg0->unk0->unk48(arg0) << 0x18) != 0) {
            var_r0 = &gUnk_081008C4;
        } else {
            var_r0 = &gUnk_081007FC;
        }
        arg0->unk8 = var_r0;
    }
}
