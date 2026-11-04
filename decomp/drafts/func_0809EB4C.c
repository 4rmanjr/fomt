s32 __3NpcRC13ActorLocation();                        /* extern */

typedef struct GenObj {
    u8 _pad0[20];
    u8 unk14;
    u8 unk15;
} GenObj;
void *func_0809EB4C(GenObj *arg0) {
    register u8 cur __asm__("r1");
    register s32 z __asm__("r0");
    __3NpcRC13ActorLocation();
    z = 0;
    arg0->unk14 = (u8)z;
    cur = arg0->unk15;
    __asm__ volatile ("" : "+r" (cur));
    z -= 2;
    arg0->unk15 = (u8) (z & cur);
    return arg0;
}
