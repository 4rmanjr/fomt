typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[12];
    struct GenObj *unk14;
    u8 _pad18[132];
    s32 unk9C;
    u8 _padA0[8];
    s32 unkA8;
} GenObj;
void func_08016F0C(GenObj *arg0, u8 arg1) {
    void **temp_r0;
    void *temp_r0_2;

    temp_r0 = arg0->unk4->unkA8;
    temp_r0_2 = (*temp_r0)->unk40(temp_r0, 0);
    ((void (*)(void *,...))(temp_r0_2->unk14->unk9C))(temp_r0_2, arg1);
}
