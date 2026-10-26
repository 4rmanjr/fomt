typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[148];
    struct GenObj *unk9C;
    u8 _padA0[8];
    struct GenObj *unkA8;
} GenObj;
void func_080123A4(GenObj *arg0) {
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    if (((*temp_r4->unkA8)->unk28() << 0x18) == 0) {
        temp_r4->unk9C = 0x17;
    }
}
