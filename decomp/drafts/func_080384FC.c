s32 func_0805E860(s32, s32);                          /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    struct GenObj *unk10;
    u8 _pad14[0x12];
    u8 unk26;
    u8 _pad27;
    u16 unk28;
} GenObj;

void func_080384FC(GenObj *arg0) {
    GenObj *t;
    register u8 *p __asm__("r0");
    register u8 zero __asm__("r2");

    if (arg0->unk28 != 0x31) {
        t = arg0->unk10;
        if (t != 0) {
            func_0805E860((s32) ((u8 *) t + 0x30), 0x31);
            p = (u8 *) t + 0x44;
            zero = 0;
            p[0] = 1;
            p += 2;
            p[0] = zero;
            p += 1;
            __asm__ volatile("" : "+r"(p));
            p[0] = 1;
        }
        arg0->unk28 = 0x31;
    }
    arg0->unk26 = 0;
}
