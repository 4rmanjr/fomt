s32 func_0802B944();                                  /* extern */
s32 vfunc_10__7AEntity(void *);                       /* extern */
extern ? vtable_unk_080E65F4;

void *func_0802B9C0(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;

    func_0802B944();
    arg0->unk14 = &vtable_unk_080E65F4;
    temp_r0 = arg0 + 0x34;
    arg0->unk34 = 0;
    temp_r0_2 = temp_r0 + 1;
    temp_r0->unk1 = 0;
    temp_r0_3 = temp_r0_2 + 3;
    temp_r0_2->unk3 = 0;
    temp_r0_3->unk1 = 0;
    temp_r0_3->unk4 = 0;
    temp_r0_3->unk8 = 0;
    temp_r0_3->unkC = 0;
    temp_r0_3->unk10 = 0;
    temp_r0_3->unk14 = 0;
    temp_r0_3->unk18 = 0;
    temp_r0_4 = temp_r0_3 + 0x1C;
    temp_r0_3->unk1C = 0;
    temp_r0_5 = temp_r0_4 + 2;
    temp_r0_4->unk2 = 0;
    temp_r0_5->unk2 = 0;
    (temp_r0_5 + 2)->unk1 = 0;
    vfunc_10__7AEntity(arg0);
    return arg0;
}
