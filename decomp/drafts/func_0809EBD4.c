typedef struct GenObj {
    u8 _pad0[20];
    u8 unk14;
    u8 unk15;
} GenObj;
void func_0809EBD4(GenObj *arg0) {
    register s32 n __asm__("r1");
    register u8 cur __asm__("r2");
    cur = arg0->unk14;
    n = 0x10;
    __asm__ volatile ("" : "+r" (n));
    n = -n;
    arg0->unk14 = (u8) (n & cur);
    cur = arg0->unk15;
    n = 2;
    __asm__ volatile ("" : "+r" (n));
    n = -n;
    arg0->unk15 = (u8) (n & cur);
}
