s32 func_080CE19C(void *, s32);                       /* extern */
extern ? vtable_unk_080E7DBC;

void *func_08090EE0(void *arg0, s32 *arg1, s32 arg2, u8 arg3) {
    s32 temp_r0;
    s32 temp_r1;

    func_080CE19C(arg0, arg2);
    arg0->unk4 = &vtable_unk_080E7DBC;
    arg0->unk98 = 0;
    temp_r1 = arg0->unk8;
    arg0->unkFC = (s32) (temp_r1 + 0x1C34);
    arg0->unk100 = (s32) (temp_r1 + 0x1C2C);
    arg0->unk104 = (s32) (temp_r1 + 0x1C38);
    arg0->unk108 = 0;
    arg0->unk10C = 0;
    temp_r0 = *arg1;
    *arg1 = 0;
    arg0->unk110 = temp_r0;
    arg0->unk114 = arg3;
    arg0->unk118 = 0;
    return arg0;
}
