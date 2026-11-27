u32 func_08050E50(u32);

typedef struct GenObj {
    u8 _pad0[4];
    u8 *unk4;
} GenObj;

void func_08012760(GenObj *arg0) {
    u8 *p = arg0->unk4;
    u32 v = *(u32 *)(p + 0xAC);

    if (v == 0) {
        return;
    }
    if (*(u8 *)(*(u32 *)(p + 0x8C) + 0x2210) & 4) {
        func_08050E50(v);
    }
}
