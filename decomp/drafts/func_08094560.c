extern s32 gUnk_0810098C;

typedef struct GenObj {
    u8 _pad0[8];
    void *unk8;
    u8 unkC;
} GenObj;
void func_08094560(GenObj *arg0, s32 arg1) {
    switch (arg1) {
    case 2:
        arg0->unkC = 1;
        break;
    case 3:
        arg0->unkC = 0;
        break;
    default:
        return;
    }
    arg0->unk8 = &gUnk_0810098C;
}
