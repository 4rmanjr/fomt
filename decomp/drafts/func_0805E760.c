typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk2;
    s32 unk4;
    u8 _pad8[20];
    s32 unk1C;
    s32 unk20;
} GenObj;
void *func_0805E760(GenObj *arg0, GenObj *arg1, u32 arg2) {
    GenObj *temp_r0;

    if (arg2 < (u32) arg1->unk20) {
        temp_r0 = arg1->unk4 + (arg2 * 4);
        arg0->unk0 = (s32) ((temp_r0->unk2 * 4) + arg1->unk1C);
        arg0->unk4 = (u16) temp_r0->unk0;
    } else {
        arg0->unk0 = 0;
        arg0->unk4 = 0U;
    }
    return arg0;
}
