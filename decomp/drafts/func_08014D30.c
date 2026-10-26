s32 RemoveHorse__4Farm(s32);                          /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[132];
    struct GenObj *unk8C;
    u8 _pad90[24];
    struct GenObj *unkA8;
} GenObj;
void func_08014D30(GenObj *arg0, s32 arg1) {
    void **temp_r0;
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    if (arg1 == 0) {
        temp_r0 = temp_r4->unkA8;
        (*temp_r0)->unk3C(temp_r0, 0x2C);
        RemoveHorse__4Farm(temp_r4->unk8C + 0x14);
    }
}
