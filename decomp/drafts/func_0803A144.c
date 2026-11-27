u32 func_080AB788(s32);
extern u16 gUnk_080F16C2[];

void func_0803A144(void *arg0, u8 *arg1, s32 arg2) {
    u8 v;
    s32 i;

    v = (u8)arg2;
    if ((s8)arg2 < 0) {
        v = (u8)func_080AB788(3);
    }
    i = (s8)v;
    *(u16 *)(arg1 + 4) = gUnk_080F16C2[i * 2];
    *(u16 *)(arg1 + 6) = gUnk_080F16C2[i * 2 + 1];
}
