typedef struct GenObj {
    u8 _pad0[17920];
    s32 unk4600;
    s32 unk4604;
    s32 unk4605;
    u8 _pad4609[7];
    s32 unk4610;
    u8 _pad4614[34];
    s32 unk4636;
    s32 unk4637;
    s32 unk4638;
    s32 unk4639;
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
