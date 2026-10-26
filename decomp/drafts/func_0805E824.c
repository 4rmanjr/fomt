typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    u8 _pad8[4];
    s32 unkC;
    s32 unkE;
    s32 unk10;
    s32 unk12;
} GenObj;
void *func_0805E824(GenObj *arg0, void **arg1, s16 arg3) {
    arg0->unk0 = arg1;
    (*arg1)->unkC(arg0 + 4);
    arg0->unkC = 0;
    arg0->unkE = (s16) (arg0->unk4->unk2 << 8);
    arg0->unk10 = arg3;
    arg0->unk12 = 1;
    return arg0;
}
