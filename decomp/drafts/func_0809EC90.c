s32 __3NpcRC13ActorLocation();                        /* extern */

typedef struct GenObj {
    u8 _pad0[20];
    u8 unk14;
    u8 unk15;
} GenObj;
void *func_0809EC90(GenObj *arg0) {
    register s32 acc __asm__("r0");
    register s32 t1 __asm__("r1");
    __3NpcRC13ActorLocation();
    t1 = arg0->unk14;
    acc = 0x40;
    __asm__ volatile ("" : "+r" (acc));
    acc = -acc;
    acc &= t1;
    arg0->unk14 = (u8) acc;
    t1 = *(u16 *)&arg0->unk14;
    acc = 0xFFFFFE3F;
    acc &= t1;
    *(u16 *)&arg0->unk14 = (u16) acc;
    t1 = arg0->unk15;
    acc = 3;
    __asm__ volatile ("" : "+r" (acc));
    acc = -acc;
    acc &= t1;
    t1 = 5;
    __asm__ volatile ("" : "+r" (t1));
    t1 = -t1;
    acc &= t1;
    t1 -= 4;
    acc &= t1;
    t1 -= 8;
    acc &= t1;
    t1 -= 0x10;
    acc &= t1;
    t1 -= 0x20;
    acc &= t1;
    arg0->unk15 = (u8) acc;
    return arg0;
}
