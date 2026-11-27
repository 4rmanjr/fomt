void __4FoodUi(void *, u32);
u8 *GetDesc__C4Food(void *);
void func_080CABEC(void *, u8 *);
extern u8 gUnk_080FEB60[];

void func_08081B40(u8 *arg0, u32 arg1) {
    u8 *base;
    u8 *p;
    u32 idx;
    u8 buf[4];

    base = gUnk_080FEB60;
    p = arg0 + 0x2A4;
    idx = *(u32 *)(arg0 + 0x10);
    if (*(u32 *)(base + 0xC + (*(u32 *)(p + ((idx << 2) + 4)) * 28)) != 0) {
        func_080CABEC(arg0, (u8 *)*(u32 *)(base + 8 + (*(u32 *)(p + ((arg1 << 2) + 4)) * 28)));
    } else {
        __4FoodUi(buf, *(u32 *)(base + (*(u32 *)(p + ((arg1 << 2) + 4)) * 28)));
        func_080CABEC(arg0, GetDesc__C4Food(buf));
    }
}
