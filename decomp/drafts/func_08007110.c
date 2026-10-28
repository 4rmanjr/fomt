typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} GenObj;
s32 func_08007110(GenObj *arg0) {
    return arg0->unk4 + 0x461C;
}
