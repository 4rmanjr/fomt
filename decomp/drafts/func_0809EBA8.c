typedef struct GenObj {
    u8 _pad0[20];
    u8 unk14;
    u8 unk15;
} GenObj;
void func_0809EBA8(GenObj *arg0, s32 arg1) {
    register s32 t1 __asm__("r1");
    register s32 t2 __asm__("r2");
    register u8 cur __asm__("r3");
    u8 cur2;
    t1 = arg1 & 0xF;
    cur = arg0->unk14;
    t2 = 0x10;
    __asm__ volatile ("" : "+r" (t2));
    t2 = -t2;
    t2 &= cur;
    t2 |= t1;
    t1 = 0x71;
    __asm__ volatile ("" : "+r" (t1));
    t1 = -t1;
    t2 &= t1;
    t1 = 0x30;
    t2 |= t1;
    t1 = 0x80;
    t2 |= t1;
    arg0->unk14 = (u8) t2;
    cur2 = arg0->unk15;
    t1 = 2;
    __asm__ volatile ("" : "+r" (t1));
    t1 = -t1;
    t1 &= cur2;
    arg0->unk15 = (u8) t1;
}
