s32 func_08008B6C(void *, s32);                       /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[13];
    s32 unk11;
    u8 _pad15[151];
    s32 unkAC;
    u8 _padB0[40];
    s32 unkD8;
    s32 unkDC;
} GenObj;
void func_080B9428(GenObj *arg0) {
    void *temp_r0;

    arg0->unkD8 = 1;
    if ((u32) arg0->unkAC <= 1U) {
        arg0->unkDC = 0;
        temp_r0 = (arg0 + 0xDC) - 0x14;
        temp_r0->unk0 = 0;
        temp_r0->unk11 = 1;
        arg0->unkAC = 5U;
        func_08008B6C(arg0 + 0x70C, 0xCC);
    }
}
