s32 func_0805E860(s32, s32);                          /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
    u8 _pad14[18];
    s32 unk26;
    s32 unk28;
    u8 _pad2C[24];
    struct GenObj *unk44;
} GenObj;
void func_080384FC(GenObj *arg0) {
    void *temp_r0;
    GenObj *temp_r4;

    if (arg0->unk28 != 0x31) {
        temp_r4 = arg0->unk10;
        if (temp_r4 != 0) {
            func_0805E860((GenObj *)((u8 *)temp_r4 + 0x30), 0x31);
            temp_r0 = (GenObj *)((u8 *)temp_r4 + 0x44);
            temp_r4->unk44 = 1;
            temp_r0->unk2 = 0;
            (temp_r0 + 2)->unk1 = 1;
        }
        arg0->unk28 = 0x31U;
    }
    arg0->unk26 = 0;
}
