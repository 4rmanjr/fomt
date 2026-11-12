extern s32 gUnk_0810787C;

typedef struct GenObj {
    u8 _pad0[2180];
    s32 unk884;
    u8 _pad888[88];
    u8 unk8E0;
} GenObj;

void func_080B34DC(GenObj *arg0) {
    register u8 *p __asm__("r3");
    register u8 *ip __asm__("r5");
    register s32 *op __asm__("r4");
    register u8 *tbl __asm__("r6");
    register s32 *q __asm__("r1");
    s32 i;

    p = (u8 *) arg0;
    i = 0;
    ip = p + 0x8E0;
    tbl = (u8 *) &gUnk_0810787C;
    op = (s32 *) (p + 0x884);
    do {
        if (*ip == *((u8 *) (i + (u32) tbl))) {
            *op = i;
            return;
        }
        i += 1;
    } while (i <= 4);
    q = (s32 *) (p + 0x884);
    *q = 5;
}
