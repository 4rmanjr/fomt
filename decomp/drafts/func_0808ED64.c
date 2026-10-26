s32 func_080CE19C();                                  /* extern */
extern ? vtable_unk_080E7DA0;

void *func_0808ED64(void *arg0) {
    s32 temp_r1;

    func_080CE19C();
    arg0->unk4 = &vtable_unk_080E7DA0;
    arg0->unk98 = 0;
    temp_r1 = arg0->unk8;
    arg0->unkFC = (s32) (temp_r1 + 0x1C34);
    arg0->unk100 = (s32) (temp_r1 + 0x1C38);
    arg0->unk104 = (s32) (temp_r1 + 0x380);
    arg0->unk108 = 0;
    return arg0;
}
