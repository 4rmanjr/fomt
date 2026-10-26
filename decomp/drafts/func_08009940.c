typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
} GenObj;
void func_08009940(GenObj *arg0, s32 **arg1) {
    s32 **temp_r0;
    s32 **temp_r2;

    temp_r2 = arg1->unk0;
    if (temp_r2 != 0) {
        *temp_r2 = arg1->unk4;
        *arg1->unk4 = temp_r2;
    }
    temp_r0 = arg0->unk10;
    *temp_r0 = arg1;
    arg1->unk0 = temp_r0;
    arg1->unk4 = (s32 **) (arg0 + 0x10);
    arg0->unk10 = (s32 **) (arg1 + 4);
}
