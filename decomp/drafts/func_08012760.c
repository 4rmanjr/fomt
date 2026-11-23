s32 func_08050E50(s32);                              /* extern */

typedef struct GenObj {
    u8 _pad4[4];
    u8 *unk4;
} GenObj;

void func_08012760(GenObj *arg0, s32 arg1) {
    s32 *p;
    register s32 x __asm__("r3");

    {
        register u8 *base __asm__("r2");

        base = arg0->unk4;
        p = (s32 *) (base + 0xAC);
    }
    x = p[0];
    if (x != 0) {
        s32 y = *(s32 *) ((u8 *) p - 0x20);

        if ((*(u8 *) (y + 0x2210) << 0x1D) < 0) {
            func_08050E50(x);
        }
    }
}
