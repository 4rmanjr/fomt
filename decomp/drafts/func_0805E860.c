typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unkE;
    s32 unk12;
} GenObj;
void func_0805E860(GenObj *arg0, s32 arg1) {
    void *sp0;
    void **temp_r1;

    temp_r1 = arg0->unk0;
    (*temp_r1)->unkC(&sp0, temp_r1, arg1);
    arg0->unk4 = sp0;
    arg0->unk8 = sp4;
    arg0->unkC = 0;
    arg0->unkE = (s16) (arg0->unk4->unk2 << 8);
    arg0->unk12 = 1;
}
