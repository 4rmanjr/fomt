typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[148];
    struct GenObj *unk9C;
    u8 _padA0[8];
    struct GenObj *unkA8;
} GenObj;
void func_080141C4(GenObj *arg0) {
    void **temp_r0;
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    temp_r0 = temp_r4->unkA8;
    (*temp_r0)->unk40(temp_r0, 0)->unk14->unk4C();
    temp_r4->unk9C = 0x19;
}
