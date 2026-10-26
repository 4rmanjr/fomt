typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[12];
    struct GenObj *unk14;
    u8 _pad18[92];
    s32 unk74;
    u8 _pad78[36];
    struct GenObj *unk9C;
    u8 _padA0[8];
    struct GenObj *unkA8;
} GenObj;
void func_08016F34(GenObj *arg0, s32 arg1) {
    void **temp_r0;
    void *temp_r0_2;
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    temp_r0 = temp_r4->unkA8;
    temp_r0_2 = (*temp_r0)->unk40(temp_r0, 0);
    ((void (*)(void *,...))(temp_r0_2->unk14->unk74))(temp_r0_2, arg1);
    temp_r4->unk9C = 0x19;
}
