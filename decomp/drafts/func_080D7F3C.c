typedef struct GenObj {
    u8 _pad0[156];
    s32 unk9C;
    u8 _padA0[8];
    s32 unkA8;
} GenObj;
void func_080D7F3C(GenObj *arg0) {
    (*arg0->unkA8)->unk124();
    arg0->unk9C = 2;
}
