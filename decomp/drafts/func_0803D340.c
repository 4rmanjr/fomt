s32 memcpy(void *, void *, s32);                      /* extern */
extern s32 gUnk_0875A440;

typedef struct GenObj {
    u8 _pad0[688];
    s32 unk2B0;
} GenObj;
void func_0803D340(void **arg0, u32 arg1) {
    GenObj *temp_r7;

    temp_r7 = *arg0;
    memcpy((GenObj *)((u8 *)temp_r7 + 0x248), ((arg1 / 10U) << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk2B0 = 1;
    memcpy((GenObj *)((u8 *)temp_r7 + 0x268), ((arg1 % 10U) << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk2B0 = 1;
}
