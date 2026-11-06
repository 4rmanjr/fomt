s32 func_08050E68(s32);                              /* extern */

typedef struct GenObj {
    u8 _pad4[4];
    struct GenObj *unk4;
} GenObj;
void func_08012720(GenObj *arg0) {
    s32 *p;
    s32 x;
    s32 y;

    p = (s32 *) ((u8 *) arg0->unk4 + 0xAC);
    x = p[0];
    if (x != 0) {
        y = *(s32 *) ((u8 *) p - 0x20);
        if (((u32) *(u8 *) (y + 0x2210) << 0x1C) < 0) {
            func_08050E68(x);
        }
    }
}
