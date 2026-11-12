s32 func_08050E68(s32);                              /* extern */

typedef struct GenObj {
    u8 _pad4[4];
    u8 *unk4;
} GenObj;

void func_08012720(GenObj *arg0) {
    register s32 x __asm__("r3");
    u8 *p;

    p = arg0->unk4 + 0xAC;
    x = *(s32 *) p;
    if (x != 0) {
        s32 base = *(s32 *) (p - 0x20);
        s32 b = *(u8 *) (base + 0x2210);

        if ((b << 0x1C) < 0) {
            func_08050E68(x);
        }
    }
}
