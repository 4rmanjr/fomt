extern void *gUnk_03000418;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} GenObj;
void func_080D01E0(GenObj *arg0, s32 arg1) {
    gUnk_03000418 = arg0;
    arg0->unk0 = (s32) (arg1 - 0x10);
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
}
