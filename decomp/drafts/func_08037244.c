typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[44];
    s32 unk34;
    s32 unk38;
} GenObj;
void func_08037244(GenObj *arg0, GenObj *arg1) {
    s32 b;
    s32 a;

    b = arg1->unk4;
    a = arg1->unk0;
    arg0->unk34 = a;
    arg0->unk38 = b;
}
