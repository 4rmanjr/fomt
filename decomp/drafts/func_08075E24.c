void func_08075E24(void *arg0, u16 arg1) {
    if ((s32) (s16) arg1 <= (s32) (s16) arg0->unk4) {
        arg0->unkE = arg1;
    } else {
        arg0->unkE = (u16) arg0->unk4;
    }
    if ((s32) (s16) arg0->unkE <= 0x9F) {
        arg0->unkE = 0xA0U;
    }
}
