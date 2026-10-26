s32 __3NpcRC13ActorLocation();                        /* extern */

typedef struct GenObj {
    u8 _pad0[20];
    s32 unk14;
    s32 unk15;
} GenObj;
void *func_0809EB4C(GenObj *arg0) {
    __3NpcRC13ActorLocation();
    arg0->unk14 = 0;
    arg0->unk15 = (u8) (-2 & arg0->unk15);
    return arg0;
}
