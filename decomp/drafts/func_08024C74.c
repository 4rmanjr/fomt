typedef struct GenObj {
    u8 _pad0[2];
    struct GenObj *unk2;
    u8 _pad6[54];
    s32 unk3C;
} GenObj;
void func_08024C74(GenObj *arg0) {
    GenObj *temp_r0;

    temp_r0 = (GenObj *)((u8 *)arg0 + 0x3C);
    arg0->unk3C = 0;
    temp_r0->unk2 = 0;
    ((GenObj *)((u8 *)temp_r0 + 2))->unk68 = 0;
}
