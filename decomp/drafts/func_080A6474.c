s32 func_080A4A94();                                  /* extern */
s32 func_080E43FC(void *);                            /* extern */
extern ? vtable_unk_080E831C;

void *func_080A6474(void *arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;

    func_080A4A94();
    arg0->unk90 = &vtable_unk_080E831C;
    temp_r0 = arg0 + 0x94;
    arg0->unk94 = arg1;
    temp_r0->unk4 = 0;
    func_080E43FC(temp_r0 + 4 + 4);
    temp_r0_2 = arg0 + 0xB4;
    arg0->unkB4 = 0;
    temp_r0_2->unk1 = 0;
    temp_r0_2->unk2 = 0;
    temp_r0_3 = temp_r0_2 + 4;
    temp_r0_2->unk4 = 0;
    temp_r0_3->unk1 = 0;
    temp_r0_3->unk2 = 0;
    return arg0;
}
