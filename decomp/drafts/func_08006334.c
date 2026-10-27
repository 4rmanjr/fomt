typedef struct GenObj {
    u8 _pad0[17920];
    s32 unk4600;
    u8 unk4604;
    u8 unk4605;
    u8 _pad4606[10];
    u8 unk4610;
    u8 _pad4611[37];
    u8 unk4636;
    u8 unk4637;
    u8 unk4638;
    u8 unk4639;
    u8 _pad463A[2];
    s32 unk463C;
} GenObj;
void func_08006334(GenObj *arg0) {
    arg0->unk4639 = 0;
    arg0->unk4638 = 0;
    arg0->unk4636 = 0;
    arg0->unk4637 = 0;
    arg0->unk4605 = 0;
    arg0->unk4604 = 0;
    arg0->unk4600 = 0;
    arg0->unk4610 = 0;
    arg0->unk463C = 0;
}
