s32 memcpy(void *, void *, s32);                      /* extern */
extern s32 gUnk_0875A440;

typedef struct GenObj {
    u8 _pad0[396];
    u8 unk18C;
} GenObj;
void func_0803D080(void **arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    s32 one;
    GenObj *temp_r7;

    temp_r7 = *arg0;
    if (arg1 == 1) {
        sp0 = 0xD;
        sp4 = 0xE;
    } else if (arg1 <= 1) {
        sp0 = 0xB;
        sp4 = 0xC;
    } else if (arg1 == 2) {
        sp0 = 0xF;
        sp4 = 0x10;
    } else if (arg1 == 3) {
        sp0 = 0x11;
        sp4 = 0x12;
    } else {
        sp0 = 0xB;
        sp4 = 0xC;
    }
    one = 1;
    memcpy((GenObj *)((u8 *)temp_r7 + 0x84), (u8 *)((u8 *)&gUnk_0875A440 + (sp0 << 5)), 0x20);
    temp_r7->unk18C = one;
    memcpy((GenObj *)((u8 *)temp_r7 + 0xA4), (u8 *)((u8 *)&gUnk_0875A440 + (sp4 << 5)), 0x20);
    temp_r7->unk18C = one;
}
