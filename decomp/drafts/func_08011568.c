typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 unk8;
} GenObj;
void func_08011568(GenObj *arg0) {
    if ((arg0->unk0 != 0x10) && (arg0->unk4 != 0x10) && (arg0->unk8 != 0)) {
        arg0->unk8--;
    }
}
