typedef struct GenObj {
    s32 unk0;
    s32 unk2;
} GenObj;
void func_0803BDEC(GenObj *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = (u16) (arg0->unk0 + arg1);
    arg0->unk2 = (u16) (arg0->unk2 + arg2);
}
