s32 func_08057F64();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[44];
    s32 unk2C;
} GenObj;
void func_08057F24(GenObj *arg0) {
register u8 *p __asm__("r5");
register u8 v __asm__("r4");
register u32 f __asm__("r3");
register s32 n __asm__("r2");
    p = (u8 *)&arg0->unk2C;
    v = *p;
    f = (u32)v << 30;
    f >>= 30;
    f += 1;
    n = 3;
    f &= n;
    n = 4;
    __asm__ volatile ("" : "+r" (n));
    n = -n;
    *p = (n & v) | f;
    func_08057F64();
}
