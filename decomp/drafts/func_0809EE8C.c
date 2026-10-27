s32 __3NpcRC13ActorLocation();                        /* extern */

typedef struct GenObj {
    u8 _pad0[20];
    u16 unk14;
    u8 unk16;
} GenObj;
void *func_0809EE8C(GenObj *arg0) {
    __3NpcRC13ActorLocation();
    arg0->unk14 = 0;
    arg0->unk16 = 0;
    return arg0;
}

/* ATTEMPT-NOTE opencode: unk14 u16 (strh), unk16 u8 (strb). */
