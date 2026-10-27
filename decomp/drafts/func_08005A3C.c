typedef struct GenObj {
    s32 unk0;
    void *unk4;
} GenObj;
u8 func_08005A3C(GenObj *arg0) {
    return *(u8 *)((u8 *)arg0->unk4 + 0x1A76);
}
